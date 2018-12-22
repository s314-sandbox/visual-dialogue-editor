#ifndef RESPONSE_H
#define RESPONSE_H

#include <abstractentry.h>

class Response : public AbstractEntry
// Элемент "Ответ" -- реплики, произносимые персонажем игрока, как ответы в диалоге
{
private:
    QString           p_text;      // Содержание ответа
    AbstractEntry*    p_next;      // Ссылка на следующий элемент (кроме типа Response)
public:
    Response();
    void             setText(const QString text);
    QString          getText() const;
    void             setNext(AbstractEntry *next);
    AbstractEntry*   getNext() const;
};

#endif // RESPONSE_H
