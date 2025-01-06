#include "timirbaevcourier.h"


int TimirbaevCourier::MaxId = 0;

void TimirbaevCourier::CreateCourier(std::istream& in) {
    while (true) {
        std::cout << "Введите имя: "; std::getline(std::cin, firstname);
        if (firstname.empty()) std::cout << "Ошибка!" << std::endl;
        else break;
    }

    while (true) {
        std::cout << "Введите фамилию: "; std::getline(std::cin, surname);
        if (surname.empty()) std::cout << "Ошибка!" << std::endl;
        else break;
    }

    std::cout << "Введите возраст: "; age = GetCorrectNumber(18, 60);

    while (true) {
        std::cout << "Введите номер телефона: +7"; std::getline(std::cin, phone);
        if (!IntCheck(phone) || phone.size() != 10) std::cout << "Ошибка!" << std::endl;
        else break;
    }
}

void TimirbaevCourier::ShowCourier(QPainter& painter, int& i) const {
    int cellWidth = 150; // Ширина ячейки
    int cellHeight = 30; // Высота ячейки
    QRect cellRect0(0 * cellWidth + 10, i * cellHeight + 10, cellWidth, cellHeight);
    painter.drawText(cellRect0, Qt::AlignCenter, QString::number(id));
    QRect cellRect1(1 * cellWidth + 10, i * cellHeight + 10, cellWidth, cellHeight);
    painter.drawText(cellRect1, Qt::AlignCenter, QString::fromLocal8Bit(firstname));
    QRect cellRect2(2 * cellWidth + 10, i * cellHeight + 10, cellWidth, cellHeight);
    painter.drawText(cellRect2, Qt::AlignCenter, QString::fromLocal8Bit(surname));
    QRect cellRect3(3 * cellWidth + 10, i * cellHeight + 10, cellWidth, cellHeight);
    painter.drawText(cellRect3, Qt::AlignCenter, QString::number(age));
    QRect cellRect4(4 * cellWidth + 10, i * cellHeight + 10, cellWidth, cellHeight);
    painter.drawText(cellRect4, Qt::AlignCenter, QString::fromLocal8Bit(phone));
    ++i;
}
