#ifndef COUNTER_H
#define COUNTER_H

#include <QObject>

class Counter : public QObject
{
    Q_OBJECT
private:
    int m_nValue;
public:
    explicit Counter(QObject *parent = nullptr);

signals:
    void goodbye();
    void counterChanged(int);

public slots:
    void slotInc();
};

#endif // COUNTER_H
