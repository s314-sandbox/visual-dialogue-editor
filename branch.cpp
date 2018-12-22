#include "branch.h"

Branch::Branch()
{

}

void Branch::setSource(const QString source)
{
    p_source = source;
}

QString Branch::getSource() const
{
    return p_source;
}

void Branch::setText(const QString text)
{
    p_text = text;
}

QString Branch::getText() const
{
    return p_text;
}

void Branch::addResponse(Response *response)
{
    p_responses.append(response);
}

void Branch::removeResponse(Response *response)
{
    p_responses.removeOne(response);
}

QList<Response*>& Branch::getResponses()
{
    return p_responses;
}
