# C++ Homework: Sum to N

實作 `sum_to_n` 函數，計算從 1 到 n 的總和。

## 📝 作業要求

**函數簽名：**
```cpp
int sum_to_n(int n);
```

**範例：**
- `sum_to_n(5)` → `15` (1+2+3+4+5)
- `sum_to_n(0)` → `0`
- `sum_to_n(10)` → `55`

## 🚀 開始作業

1. Fork 這個 repository
2. Clone 到本地：
   ```bash
   git clone https://github.com/YOUR_USERNAME/cpp-homework-template.git
   cd cpp-homework-template
   ```

3. 編輯 `src/solution.cpp` 實作功能

4. 提交並推送：
   ```bash
   git add src/solution.cpp
   git commit -m "Implement sum_to_n"
   git push
   ```

5. 前往 **Actions** 頁面查看自動批改結果

## 📊 評分標準

| 結果 | 分數 | 說明 |
|------|------|------|
| ✅ 測試通過率 ≥ 95% | 95 | 完美！ |
| ⚠️ 編譯成功但測試未通過 | 90 | 需要修正邏輯 |
| ❌ 編譯失敗 | 70 | 語法錯誤 |
| ❌ 缺少必要檔案 | 50 | 請檢查檔案結構 |

## 📁 檔案結構

```
├── src/
│   └── solution.cpp     # 👈 你要編輯的檔案
├── include/
│   └── solution.h       # 介面定義（不要修改）
└── .github/workflows/   # 自動批改設定
```

## 🔍 本地測試（選用）

如果你想在本地測試，需要安裝 Google Test：

```bash
# Ubuntu/Debian
sudo apt-get install libgtest-dev cmake build-essential

# macOS
brew install googletest

# 編譯 (需要自行取得測試檔案)
g++ -std=c++17 -I./include src/solution.cpp -o solution
```

**注意：** 官方測試案例不公開，本地測試僅供參考。

## ❓ 常見問題

**Q: 為什麼看不到測試案例？**
A: 測試案例在官方私有 repo，只有在 GitHub Actions 執行時才會使用。

**Q: 可以修改 solution.h 嗎？**
A: 不可以！函數簽名必須符合官方定義，否則編譯會失敗。

**Q: 多久會批改？**
A: 每次 push 後約 1-3 分鐘，查看 Actions 頁面。

## 📧 問題回報

如有問題請開 Issue 或聯繫助教。
