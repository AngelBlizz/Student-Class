#include "main.h"
#include <algorithm>
#include <clocale>

int main() {
    setlocale(LC_CTYPE, "rus"); 
    const int numStudents = 3;
    std::vector<STUDENT> students(numStudents);

    // Ввод данных
    inputStudents(students);

    // Сортировка студентов по фамилии
    std::sort(students.begin(), students.end());

    // Вывод студентов с оценкой 2
    printStudentsWithGradeTwo(students);

    return 0;
}

// Реализация функции для ввода данных студентов
void inputStudents(std::vector<STUDENT>& students) {
    for (int i = 0; i < students.size(); ++i) {
        std::cout << "Введите данные для студента " << i + 1 << ":\n";
        std::cin >> students[i];
    }
}

// Реализация функции для вывода студентов с оценкой 2
void printStudentsWithGradeTwo(const std::vector<STUDENT>& students) {
    bool found = false;
    for (const STUDENT& student : students) {
        if (student.hasGradeTwo()) {
            std::cout << student.getFullName() << " (Группа: " << student.getGroupNumber() << ")\n";
            found = true;
        }
    }

    if (!found) {
        std::cout << "Студентов с оценкой 2 нет.\n";
    }
}