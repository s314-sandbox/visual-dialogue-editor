#ifndef ACTION_H
#define ACTION_H

#include <abstractentry.h>

class Action : public AbstractEntry
{
private:
    QString p_type;         // Тип производимого действия
    QString p_variable;     // Изменяемая переменная (если действие напр. setValue)
    QString p_value;        // Присваиваемое значение
public:
    Action();
    void        setType();
    QString     getType() const;
    void        setVariable();
    QString     getVariable() const;
    void        setValue();
    QString     getValue() const;

};

#endif // ACTION_H