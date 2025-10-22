#include "solution.h"

#include <ostream>
#include <tuple>
#include <vector>

// 基礎輸出題目
void print_escape_sequences(std::ostream& out) {
    // TODO: 使用 out 輸出課堂中的 7 行範例文字與跳脫字元練習
}

void print_scores(std::ostream& out, const std::vector<int>& scores) {
    // TODO: 依序輸出 scores 內的成績並以 '\t' 分隔，與教材示意相同
}

// 運算與邏輯
std::tuple<int, int, int, int, double, int> arithmetic_overview(int a, int b) {
    // TODO: 回傳 (a+b, a-b, a*b, a/b 的整數結果, a/b 的浮點數結果, a%b)
    return {0, 0, 0, 0, 0.0, 0};
}

std::tuple<bool, bool, bool, bool> compare_relations(int a, int b, int c) {
    // TODO: 回傳實作課堂中的四個比較運算結果
    return {false, false, false, false};
}

std::tuple<bool, bool, bool> logic_demo(bool cond1, bool cond2, bool cond3) {
    // TODO: 回傳 (cond1 and cond2, cond2 or cond3, not cond1) 的結果
    return {false, false, false};
}

// 條件判斷
double compute_bmi(double weightKg, double heightCm) {
    // TODO: 將身高換成公尺後計算 BMI 並回傳（浮點數）
    return 0.0;
}

std::string age_category(int age) {
    // TODO: 根據年齡回傳描述字串（可依課堂規則設計，例如成人 / 青少年 / 兒童）
    return {};
}

bool check_password(const std::string& password, const std::string& expected) {
    // TODO: 比對 password 與 expected 是否相同
    return false;
}

std::string blood_type(bool hasA, bool hasB, bool isRhPositive) {
    // TODO: 根據抗原布林值回傳血型字串（例如 "A+", "O-"）
    return {};
}

// 迴圈練習
void print_range_for(std::ostream& out, int start, int end, int step) {
    // TODO: 使用 for 迴圈依序輸出 start..end（含），間隔為 step
}

void print_range_while(std::ostream& out, int start, int end, int step) {
    // TODO: 使用 while 迴圈完成與 print_range_for 相同的輸出
}

int first_divisible_with_break(int start, int end, int divisor) {
    // TODO: 找到區間內第一個可被 divisor 整除的數字，若無則回傳 -1
    return -1;
}

void skip_multiples_with_continue(std::ostream& out, int start, int end, int skip) {
    // TODO: 使用 continue 略過 skip 的倍數，輸出剩餘的數字
}

// 陣列與演算法
double average_2d(const std::vector<std::vector<int>>& values) {
    // TODO: 計算二維陣列所有元素的平均值（若無元素可回傳 0.0）
    return 0.0;
}

void bubble_sort(std::vector<int>& values) {
    // TODO: 以泡沫排序由小到大排序 values
}

int linear_search(const std::vector<int>& values, int target) {
    // TODO: 線性搜尋 target，找到回傳索引，否則回傳 -1
    return -1;
}

int binary_search(const std::vector<int>& values, int target) {
    // TODO: 二分搜尋已排序序列，找到回傳索引，否則回傳 -1
    return -1;
}

// 遞迴
unsigned long long factorial(unsigned int n) {
    // TODO: 遞迴計算 n!（0! = 1）
    return 0;
}
