#include "abstractentry.h"

AbstractEntry::~AbstractEntry()
{

}

void AbstractEntry::setID(const QString id)
{
    p_id = id;
}

QString AbstractEntry::getID() const
{
    return p_id;
}
