#ifndef DIALOGUESTRUCTURE_H
#define DIALOGUESTRUCTURE_H

#include <abstractentry.h>
#include <branch.h>
#include <response.h>
#include <action.h>

#include <QMap>

class DialogueStructure
{
private:
    Branch*              p_greeting;     // Входная точка диалога
    QMap<QString, AbstractEntry*> p_structure;    // Хранилище всех записей диалога
public:
    DialogueStructure();
    void addEntry(EntryTypes type);
    void removeEntry(QString id);
    void addConnection(AbstractEntry* from, AbstractEntry* to);
    void removeConnection(); // TODO: Понять, как это сделать адекватно, а не нахрапом
};

#endif // DIALOGUESTRUCTURE_H
