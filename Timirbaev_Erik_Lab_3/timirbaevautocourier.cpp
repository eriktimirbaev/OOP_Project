#include "timirbaevautocourier.h"

void TimirbaevAutoCourier::CreateCourier(std::istream& in) {
    TimirbaevCourier::CreateCourier(in);
    while (true) {
        std::cout << "Введите марку автомобиля: "; std::getline(std::cin, car_model);
        if (car_model.empty()) std::cout << "Ошибка!" << std::endl;
        else break;
    }

    while (true) {
        std::cout << "Введите номер автомобиля: "; std::getline(std::cin, car_number);
        if (car_number.size() != 9) std::cout << "Ошибка! Номер должен состоять из 9 символов." << std::endl;
        else break;
    }
}

void TimirbaevAutoCourier::ShowCourier(QPainter& painter, int& i) const {
    int y = i;
    TimirbaevCourier::ShowCourier(painter, i);
    int cellWidth = 150; // Ширина ячейки
    int cellHeight = 30; // Высота ячейки
    QRect cellRect5(5 * cellWidth + 10, y * cellHeight + 10, cellWidth, cellHeight);
    painter.drawText(cellRect5, Qt::AlignCenter, QString::fromLocal8Bit(car_model));
    QRect cellRect6(6 * cellWidth + 10, y * cellHeight + 10, cellWidth, cellHeight);
    painter.drawText(cellRect6, Qt::AlignCenter, QString::fromLocal8Bit(car_number));
}

