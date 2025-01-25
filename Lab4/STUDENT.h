#pragma once


#include <iostream>
#include <string>
#include <iomanip>

class STUDENT {
private:
    std::string fullName; // Фамилия и инициалы
    int groupNumber;      // Номер группы
    int grades[5];        // Успеваемость (массив из пяти элементов)

public:
    // Конструктор по умолчанию
    STUDENT();

    // Методы доступа к полям
    std::string getFullName() const;
    int getGroupNumber() const;
    const int* getGrades() const;

    // Перегрузка операции извлечения (ввода)
    friend std::istream& operator>>(std::istream& is, STUDENT& student);

    // Перегрузка операции вставки (вывода)
    friend std::ostream& operator<<(std::ostream& os, const STUDENT& student);

    // Метод для проверки наличия оценки 2
    bool hasGradeTwo() const;

    // Метод для сравнения студентов по фамилии (для сортировки)
    bool operator<(const STUDENT& other) const;
};
