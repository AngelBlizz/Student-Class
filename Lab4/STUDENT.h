#pragma once


#include <iostream>
#include <string>
#include <iomanip>

class STUDENT {
private:
    std::string fullName; // ������� � ��������
    int groupNumber;      // ����� ������
    int grades[5];        // ������������ (������ �� ���� ���������)

public:
    // ����������� �� ���������
    STUDENT();

    // ������ ������� � �����
    std::string getFullName() const;
    int getGroupNumber() const;
    const int* getGrades() const;

    // ���������� �������� ���������� (�����)
    friend std::istream& operator>>(std::istream& is, STUDENT& student);

    // ���������� �������� ������� (������)
    friend std::ostream& operator<<(std::ostream& os, const STUDENT& student);

    // ����� ��� �������� ������� ������ 2
    bool hasGradeTwo() const;

    // ����� ��� ��������� ��������� �� ������� (��� ����������)
    bool operator<(const STUDENT& other) const;
};
