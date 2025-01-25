#include "STUDENT.h"

// ����������� �� ���������
STUDENT::STUDENT() : fullName(""), groupNumber(0), grades{ 0, 0, 0, 0, 0 } {}

// ������ ������� � �����
std::string STUDENT::getFullName() const {
    return fullName;
}

int STUDENT::getGroupNumber() const {
    return groupNumber;
}

const int* STUDENT::getGrades() const {
    return grades;
}

// ���������� �������� ���������� (�����)
std::istream& operator>>(std::istream& is, STUDENT& student) {
    std::cout << "������� ������� � ��������: ";
    std::getline(is, student.fullName);
    std::cout << "������� ����� ������: ";
    is >> student.groupNumber;
    std::cout << "������� 5 ������: ";
    for (int i = 0; i < 5; ++i) {
        is >> student.grades[i];
    }
    is.ignore(); // ���������� ���������� ������ ����� ������
    return is;
}

// ���������� �������� ������� (������)
std::ostream& operator<<(std::ostream& os, const STUDENT& student) {
    os << std::setw(20) << std::left << student.fullName
        << std::setw(10) << student.groupNumber;
    for (int grade : student.grades) {
        os << std::setw(3) << grade;
    }
    return os;
}

// ����� ��� �������� ������� ������ 2
bool STUDENT::hasGradeTwo() const {
    for (int grade : grades) {
        if (grade == 2) {
            return true;
        }
    }
    return false;
}

// ����� ��� ��������� ��������� �� ������� (��� ����������)
bool STUDENT::operator<(const STUDENT& other) const {
    return fullName < other.fullName;
}