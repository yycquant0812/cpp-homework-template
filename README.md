# C++ Homework Template

這個專案提供整學期統一的作業介面，所有題目都以函式為單位實作，並以 `std::ostream&` 收集輸出，方便自動批改。每週課堂會指定要完成哪些函式，你的作業只需要填入實作即可，不必調整專案結構。

## 📝 函式清單

`include/solution.h` 定義了整學期會使用到的函式，依主題分組如下：

| 主題 | 函式 |
|------|------|
| 文字輸出 | `print_escape_sequences`, `print_scores` |
| 算術與邏輯 | `arithmetic_overview`, `compare_relations`, `logic_demo` |
| 條件判斷 | `compute_bmi`, `age_category`, `check_password`, `blood_type` |
| 迴圈練習 | `print_range_for`, `print_range_while`, `first_divisible_with_break`, `skip_multiples_with_continue` |
| 陣列與演算法 | `average_2d`, `bubble_sort`, `linear_search`, `binary_search` |
| 遞迴 | `factorial` |

> ❗️ **請勿修改函式簽名**。批改系統會依照標準介面呼叫函式。

### 重要約定

- `print_escape_sequences`、`print_scores` 必須輸出與教材示例完全一致的字串，其中 `print_scores` 會先輸出 `"成績:"` 再輸出成績行，成績間以 `\t` 分隔並結尾換行。
- `arithmetic_overview` 回傳 `(a+b, a-b, a*b, a/b 整數結果, 浮點數結果, a%b)`。
- `compare_relations(8, 3, 5)` 預期回傳 `(false, true, false, true)`；`logic_demo(true, false, true)` 預期回傳 `(false, true, false)`。
- `compute_bmi` 的身高參數為公分，請換算成公尺後計算；`age_category` 回傳「兒童 (0-12) / 青少年 (13-17) / 成人 (18 以上) / 未知 (其他)」。
- `blood_type` 以布林值判斷 A/B/Rh 抗原，輸出 `A+`, `B-`, `AB+`, `O-` 等格式。
- 迴圈輸出類函式需使用 `out` 印出以空白分隔的序列，並在最後換行。
- `average_2d` 對所有數值取平均，若沒有任何元素則回傳 `0.0`。
- `binary_search` 假設輸入已排序（遞增），找不到目標則回傳 `-1`。
- `factorial(0)` 定義為 `1`，建議採用遞迴實作。

## 🚀 使用流程

1. Fork 這個 repository
2. Clone 到本地：
   ```bash
   git clone https://github.com/YOUR_USERNAME/cpp-homework-template.git
   cd cpp-homework-template
   ```
3. 根據課堂指定的題目，編輯 `src/solution.cpp` 內的 TODO，或拆分成多個 `.cpp` 檔後記得 `#include "solution.h"`
4. 提交並推送：
   ```bash
   git add src
   git commit -m "Implement homework functions"
   git push
   ```
5. 前往 **Actions** 頁面查看自動批改結果

## 📁 檔案結構

```
├── include/
│   └── solution.h       # 所有作業函式的介面定義（請勿修改）
├── src/
│   └── solution.cpp     # TODO: 依課堂要求實作這些函式
└── .github/workflows/
    └── grade.yml        # GitHub Actions 自動批改設定
```

> 需要時可以自行新增 `.cpp` 檔案並包含 `solution.h`，批改程式會自動編譯整個 `src/` 中的 `.cpp`。

## 📊 評分方式

助教會在批改端指定本週要檢查的作業 (`HW=hwXX`)，自動批改會針對對應函式執行 GoogleTest。測試通過分數最高，未通過會顯示錯誤訊息與測試情境做為回饋。

## 🔍 本地測試（選用）

若想在本地建立自己的測試程式，可安裝 Google Test 後撰寫單元測試：

```bash
g++ -std=c++17 -O2 -Wall -Wextra \
    -I./include \
    your_test.cpp src/*.cpp \
    -lgtest -lgtest_main -pthread
```

官方測試僅於批改時執行，請依題目描述自行撰寫測試資料。

## ❓ 常見問題

- **為什麼看不到測試案例？** 測試在老師的私有批改 repo，學生端不會公開。
- **可以調整函式名稱或參數嗎？** 不行，請依照 `solution.h` 實作，否則無法編譯。
- **批改跑哪一題？** 老師會在批改系統設定本週的 `HW=hwXX`，請上課時確認題目。

## 📧 問題回報

如有疑問請開 Issue 或與助教聯絡。
