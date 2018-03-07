#ifndef BRANCH_H
#define BRANCH_H

#include <abstractentry.h>
#include <response.h>
#include <QList>

class Branch : public AbstractEntry
// Элемент "Ветка" -- реплика NPC с вариантами ответов
{
private:
    QString              p_source;       // Источник реплики
    QString              p_text;         // Содержание реплики
    QList<Response*>     p_responses;    // Список ответов
public:
    Branch();
    void              setSource(const QString source);
    QString           getSource() const;
    void              setText(const QString text);
    QString           getText() const;
    void              addResponse(Response *response);     // Добавить вариант ответа
    void              removeResponse(Response *response);  // Удалить вариант ответа
    QList<Response*>& getResponses();                      // Получить ссылку на весь список ответов
};

#endif // BRANCH_H
