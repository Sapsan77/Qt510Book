#include <QCoreApplication>
#include <QVariant>
#include <QMetaProperty>
#include <QDebug>
#include "myclass.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    MyClass* pobj = new MyClass(&a);
    pobj->setProperty("readOnly", qVariantFromValue(true));
    const QMetaObject* pmo = pobj->metaObject();
    for (int i = 0; i < pmo->propertyCount(); ++i) {
        QMetaProperty mp = pmo->property(i);
        qDebug() << "Свойство#: " << i;
        qDebug() << "Тип: " << mp.typeName();
        qDebug() << "Имя: " << mp.name();
        qDebug() << "Значение: " << qPrintable(pobj->property(mp.name()).toString());
    }
    //return a.exec();
    return 0;
}
