#include "response.h"

Response::Response()
{

}

void Response::setText(const QString text)
{
    p_text = text;
}

QString Response::getText() const
{
    return p_text;
}

void Response::setNext(AbstractEntry *next)
{
    p_next = next;
}

AbstractEntry* Response::getNext() const
{
    return p_next;
}
