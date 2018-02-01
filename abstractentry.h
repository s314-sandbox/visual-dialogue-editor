#ifndef ABSTRACTENTRY_H
#define ABSTRACTENTRY_H

class AbstractEntry
        // Абстрактный класс, определяющий общие поля для всех возможных элементов диалога
{
private:
    QString         p_id;                     // ID элемента
public:
    virtual        ~AbstractEntry() = 0 {}           // Обьявляем деструктор pure virtual, чтобы сделать этот класс абстрактным
    void            setID(const QString id);         // Устанавливаем ID
    QString         getID() const;                   // Получаем ID
};

#endif // ABSTRACTENTRY_H
