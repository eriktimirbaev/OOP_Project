#include "timirbaevmainwindow.h"
#include "timirbaevpark.h"
#include "./ui_timirbaevmainwindow.h"

TimirbaevMainWindow::TimirbaevMainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::TimirbaevMainWindow) {
    ui->setupUi(this);
    setCentralWidget(ui->scrollArea);
    ui->scrollArea->setVisible(false);
}

TimirbaevMainWindow::~TimirbaevMainWindow() {
    delete ui;
}

void TimirbaevMainWindow::on_actionLoad_triggered() {
    park.LoadSer();
    couriers = park.GetCouriers();
    TimirbaevTable* tableWidget = new TimirbaevTable(nullptr, couriers);
    ui->scrollArea->setWidget(tableWidget);
    ui->scrollArea->setWidgetResizable(true);
    ui->scrollArea->setVisible(true);
}

void TimirbaevMainWindow::on_actionSave_triggered() {
    park.SaveSer();
}

void TimirbaevMainWindow::on_actionClear_triggered() {
    park.DeleteCouriers();
    ui->scrollArea->setVisible(false);
}
