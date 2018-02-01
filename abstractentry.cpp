#include "abstractentry.h"

AbstractEntry::~AbstractEntry()
{

}

AbstractEntry::setID(const QString id)
{
    p_id = id;
}

AbstractEntry::getID()
{
    return p_id;
}
