#include "timirbaevtable.h"
#include <algorithm>
#include <functional>
#include <QPainter>

TimirbaevTable::TimirbaevTable(QWidget* parent, const std::vector<std::shared_ptr<TimirbaevCourier>> couriers) : QWidget(parent) {
    this->couriers = couriers;
}

void TimirbaevTable::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    drawTable(painter);
}

void TimirbaevTable::drawTable(QPainter &painter) {
    painter.setPen(QPen(Qt::white, 1, Qt::SolidLine));
    painter.setFont(QFont("Arial", 10));

    int cols = 7;
    int rows = couriers.size();
    int cellWidth = 150; // Ширина ячейки
    int cellHeight = 30; // Высота ячейки
    int tableWidth = cellWidth * cols; // Ширина таблицы
    int tableHeight = cellHeight * (rows + 1); // Высота таблицы

    // Задаем минимальный размер QScrollArea
    setMinimumSize(tableWidth + 20, tableHeight + 20);

    QStringList headers = {"Id", "Имя", "Фамилия", "Возраст", "Телефон", "Марка автомобиля", "Госномер"}; // Заголовки таблицы

    // Рисование горизонтальных линий
    for (int i = 0; i <= rows + 1; ++i) {
        int y = 10 + i * cellHeight;
        painter.drawLine(10, y, 10 + tableWidth, y);
    }

    // Рисование вертикальных линий
    for (int j = 0; j <= cols; ++j) {
        int x = 10 + j * cellWidth;
        painter.drawLine(x, 10, x, 10 + tableHeight);
    }

    // Заполнение заголовков
    for (int j = 0; j < cols; ++j) {
        QRect rect(10 + j * cellWidth, 10, cellWidth, cellHeight);
        painter.drawText(rect, Qt::AlignCenter, headers[j]);
    }

    int i = 1;
    std::for_each(couriers.begin(), couriers.end(), std::bind(&TimirbaevCourier::ShowCourier, std::placeholders::_1, std::ref(painter), i));
}
