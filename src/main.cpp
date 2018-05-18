#include <QDebug>
#include <iostream>

#include "exceptions.h"
#include "file_database.h"

int main(int argc, char *argv[]) {

    if (argc != 2) {
        std::cout << "Usage: ./quiz databaseFileName" << std::endl;
    }

    try {
        FileDatabase *database;

        database = new FileDatabase(argv[1]);

        database->write("output.txt");
        delete database;
    } catch (const Exception& exception) {
        std::cout << exception.what() << std::endl;
    }

    return 0;
}
