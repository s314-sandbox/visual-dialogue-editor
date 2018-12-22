#include "action.h"

Action::Action()
{

}

void Action::setType(const QString type)
{
    p_type = type;
}

QString Action::getType() const
{
    return p_type;
}

void Action::setVariable(const QString variable)
{
    p_variable = variable;
}

QString Action::getVariable() const
{
    return p_variable;
}


