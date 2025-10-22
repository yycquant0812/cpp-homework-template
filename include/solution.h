#pragma once

#include <iosfwd>
#include <string>
#include <tuple>
#include <vector>

// 基礎輸出題目
void print_escape_sequences(std::ostream& out);
void print_scores(std::ostream& out, const std::vector<int>& scores);

// 運算與邏輯
std::tuple<int, int, int, int, double, int> arithmetic_overview(int a, int b);
std::tuple<bool, bool, bool, bool> compare_relations(int a, int b, int c);
std::tuple<bool, bool, bool> logic_demo(bool cond1, bool cond2, bool cond3);

// 條件判斷
double compute_bmi(double weightKg, double heightCm);
std::string age_category(int age);
bool check_password(const std::string& password, const std::string& expected);
std::string blood_type(bool hasA, bool hasB, bool isRhPositive);

// 迴圈練習
void print_range_for(std::ostream& out, int start, int end, int step);
void print_range_while(std::ostream& out, int start, int end, int step);
int first_divisible_with_break(int start, int end, int divisor);
void skip_multiples_with_continue(std::ostream& out, int start, int end, int skip);

// 陣列與演算法
double average_2d(const std::vector<std::vector<int>>& values);
void bubble_sort(std::vector<int>& values);
int linear_search(const std::vector<int>& values, int target);
int binary_search(const std::vector<int>& values, int target);

// 遞迴
unsigned long long factorial(unsigned int n);
