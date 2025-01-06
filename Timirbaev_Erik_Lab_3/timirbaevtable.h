#ifndef TIMIRBAEVTABLE_H
#define TIMIRBAEVTABLE_H

#include <QWidget>
#include "timirbaevpark.h"

class TimirbaevTable : public QWidget {
    Q_OBJECT

public:
    TimirbaevTable(QWidget* parent, const std::vector<std::shared_ptr<TimirbaevCourier>> couriers);
    void drawTable(QPainter &painter);

private:
    void paintEvent(QPaintEvent* event) override;

protected:
    std::vector<std::shared_ptr<TimirbaevCourier>> couriers;

};

#endif // TIMIRBAEVTABLE_H
