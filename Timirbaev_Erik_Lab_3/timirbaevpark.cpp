#include "timirbaevpark.h"

#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/text_iarchive.hpp>

#include <fstream>

BOOST_CLASS_EXPORT_GUID(TimirbaevCourier, "TimirbaevCourier")
BOOST_CLASS_EXPORT_GUID(TimirbaevAutoCourier, "TimirbaevAutoCourier")

void TimirbaevPark::AddCourier() {
    std::shared_ptr<TimirbaevCourier> ptr = std::make_shared<TimirbaevCourier>();
    ptr->CreateCourier(std::cin);
    couriers.push_back(ptr);
}

void TimirbaevPark::AddAutoCourier() {
    std::shared_ptr<TimirbaevAutoCourier> ptr = std::make_shared<TimirbaevAutoCourier>();
    ptr->CreateCourier(std::cin);
    couriers.push_back(ptr);
}

void TimirbaevPark::DeleteCouriers() {
    couriers.clear();
    std::cout << "Список очищен.\n";
}

std::vector<std::shared_ptr<TimirbaevCourier>>& TimirbaevPark::GetCouriers() {
    return couriers;
}

void TimirbaevPark::SaveSer() {
    std::string fileName = QFileDialog::getSaveFileName(nullptr, "Сохранить файл", "", "Текстовые файлы (*.txt);;Все файлы (*.*)").toStdString();

    if (fileName.empty()) {
        QMessageBox::information(nullptr, "Информация", "Файл не выбран.");
        return;
    }

    std::ofstream fout(fileName);
    if (fout) {
        boost::archive::text_oarchive oa(fout);
        oa << couriers;
        QMessageBox::information(nullptr, "Успех", "Файл успешно сохранён.");
        fout.close();
    }
}

void TimirbaevPark::LoadSer() {
    std::string fileName = QFileDialog::getOpenFileName(nullptr, "Открыть файл", "", "Текстовые файлы (*.txt);;Все файлы (*.*)").toStdString();

    if (fileName.empty()) {
        QMessageBox::information(nullptr, "Информация", "Файл не выбран.");
        return;
    }

    DeleteCouriers();
    std::ifstream fin(fileName);
    if (fin) {
        try {
            boost::archive::text_iarchive ia(fin);
            ia >> couriers;
            QMessageBox::information(nullptr, "Успех", "Данные загружены.");
        } catch (const std::exception& e) {
            QMessageBox::information(nullptr, "Ошибка", "Не удалось считать данные.");
            DeleteCouriers();
        }
        fin.close();
    }
}
