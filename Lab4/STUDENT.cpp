#include "STUDENT.h"

// Конструктор по умолчанию
STUDENT::STUDENT() : fullName(""), groupNumber(0), grades{ 0, 0, 0, 0, 0 } {}

// Методы доступа к полям
std::string STUDENT::getFullName() const {
    return fullName;
}

int STUDENT::getGroupNumber() const {
    return groupNumber;
}

const int* STUDENT::getGrades() const {
    return grades;
}

// Перегрузка операции извлечения (ввода)
std::istream& operator>>(std::istream& is, STUDENT& student) {
    std::cout << "Введите фамилию и инициалы: ";
    std::getline(is, student.fullName);
    std::cout << "Введите номер группы: ";
    is >> student.groupNumber;
    std::cout << "Введите 5 оценок: ";
    for (int i = 0; i < 5; ++i) {
        is >> student.grades[i];
    }
    is.ignore(); // Игнорируем оставшийся символ новой строки
    return is;
}

// Перегрузка операции вставки (вывода)
std::ostream& operator<<(std::ostream& os, const STUDENT& student) {
    os << std::setw(20) << std::left << student.fullName
        << std::setw(10) << student.groupNumber;
    for (int grade : student.grades) {
        os << std::setw(3) << grade;
    }
    return os;
}

// Метод для проверки наличия оценки 2
bool STUDENT::hasGradeTwo() const {
    for (int grade : grades) {
        if (grade == 2) {
            return true;
        }
    }
    return false;
}

// Метод для сравнения студентов по фамилии (для сортировки)
bool STUDENT::operator<(const STUDENT& other) const {
    return fullName < other.fullName;
}