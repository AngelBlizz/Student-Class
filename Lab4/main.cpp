#include "main.h"
#include <algorithm>
#include <clocale>

int main() {
    setlocale(LC_CTYPE, "rus"); 
    const int numStudents = 3;
    std::vector<STUDENT> students(numStudents);

    // ���� ������
    inputStudents(students);

    // ���������� ��������� �� �������
    std::sort(students.begin(), students.end());

    // ����� ��������� � ������� 2
    printStudentsWithGradeTwo(students);

    return 0;
}

// ���������� ������� ��� ����� ������ ���������
void inputStudents(std::vector<STUDENT>& students) {
    for (int i = 0; i < students.size(); ++i) {
        std::cout << "������� ������ ��� �������� " << i + 1 << ":\n";
        std::cin >> students[i];
    }
}

// ���������� ������� ��� ������ ��������� � ������� 2
void printStudentsWithGradeTwo(const std::vector<STUDENT>& students) {
    bool found = false;
    for (const STUDENT& student : students) {
        if (student.hasGradeTwo()) {
            std::cout << student.getFullName() << " (������: " << student.getGroupNumber() << ")\n";
            found = true;
        }
    }

    if (!found) {
        std::cout << "��������� � ������� 2 ���.\n";
    }
}