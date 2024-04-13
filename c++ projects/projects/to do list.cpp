// 19ToDo.h
#ifndef TODO
#define TODO
#include <string>

struct MyToDo {
    std::string description;
    int priority;
    std::string dueDate;
};

bool addToList(std::string description, int priority, std::string dueDate);
bool getNextItem(MyToDo &mytodo);
bool getByPriority(MyToDo matches[100], int search);
void printToDo();

#endif

// ToDo.cpp
#include <iostream>
#include <string>
#include "19ToDo.h"

struct MyToDo ToDoList[100];
int positionInList = 0;
int listSize = 0;

bool addToList(std::string description, int priority, std::string dueDate) {
    if (listSize < 101) {
        MyToDo y = { description, priority, dueDate };
        ToDoList[listSize] = y;
        listSize++;
        return true;
    } else {
        return false;
    }
}

bool getNextItem(MyToDo &mytodo) {
    if (listSize == 0) {
        return false;
    } else if (positionInList < listSize) {
        mytodo = ToDoList[positionInList];
        positionInList++;
    } else {
        positionInList = 0;
        mytodo = ToDoList[positionInList];
        positionInList++;
    }
    return true;
}

bool getByPriority(MyToDo matches[100], int search) {
    int count = 0;
    for (int i = 0; i < listSize; i++) {
        if (ToDoList[i].priority == search) {
            matches[count] = ToDoList[i];
            count++;
        }
    }
    return true;
}

void printToDo() {
    for (int i = 0; i < listSize; i++) {
        std::cout << ToDoList[i].description << std::endl;
        std::cout << ToDoList[i].priority << std::endl;
        std::cout << ToDoList[i].dueDate << std::endl;
        std::cout << "" << std::endl;
    }
}

// main.cpp
int main() {
    // Your main program logic here
    // Example usage of the functions defined above
    return 0;
}
