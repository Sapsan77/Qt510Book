#include "myclass.h"

MyClass::MyClass(QObject *parent) : QObject(parent)
{
    m_bReadOnly = false;
}

bool MyClass::setReadOnly(bool bReadOnly)
{
    if (m_bReadOnly != bReadOnly)
        m_bReadOnly = bReadOnly;
}

bool MyClass::isReadOnly() const
{
    return this->m_bReadOnly;
}
