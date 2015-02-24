#ifndef QABSTRACTDATAHOST_H
#define QABSTRACTDATAHOST_H

#include "../host/qabstracthost.h"

#include <QVariant>

class KERNEL_EXPORT QAbstractDataHost : public QAbstractHost
{
    Q_OBJECT
public:
    QAbstractDataHost();

    virtual QString     getValueText();
    virtual QVariant    getValue();
    virtual void        setValue(const QVariant & value);
    virtual bool        equal(const QVariant &value);

    bool                getNeedSave();
    void                setNeedSave(bool needSave);

    QString             getName();
    void                setName(const QString & name);
protected:
    void    createObject();
    void    initProperty();
signals:
    void    valueChanged();
    void    propertyChanged(const QString & key);
protected:
    QVariant        m_value;
    QString         m_name;
    bool            m_needSave;
};

#endif // QABSTRACTDATAHOST_H