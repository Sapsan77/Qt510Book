#ifndef MYCLASS_H
#define MYCLASS_H

#include <QObject>

class MyClass : public QObject
{
    Q_OBJECT
    Q_PROPERTY(bool readOnly READ isReadOnly WRITE setReadOnly)

private:
    bool m_bReadOnly;
public:
    explicit MyClass(QObject *parent = nullptr);
    bool setReadOnly(bool bReadOnly);
    bool isReadOnly() const;

//signals:

//public slots:
};

#endif // MYCLASS_H

