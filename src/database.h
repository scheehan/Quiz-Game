#ifndef DATABASE_H
#define DATABASE_H

#include <QList>
#include <QString>

#include "Question.h"

class Database {
    protected:
        QList<Question> data;

        int entries;

        QString sourceName;

        QList<int> entriesUsed;

    public:
        Database(const QString& sourceName);

        virtual void read() = 0;

        // Used for debugging. Write only to standard file.
        void write(const QString& output);

        Question getQuestion(int questionIndex) const;

        void markEntryUsed(int entryIndex);

        bool isEntryUsed(int entryIndex) const;

        int size() const;
};

#endif