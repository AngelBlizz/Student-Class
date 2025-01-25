#pragma once
#include "STUDENT.h"
#include <vector>

// Функция для ввода данных студентов
void inputStudents(std::vector<STUDENT>& students);

// Функция для вывода студентов с оценкой 2
void printStudentsWithGradeTwo(const std::vector<STUDENT>& students);
