# 2026 MEVR Arduino Lab Template Repository

本Repository為國立陽明交通大學洪境晨助理教授於2026年度開設之「機電整合與虛擬實境實驗」之Arduino Lab單元提交範本。

請詳閱以下目錄結構與作業繳交規則。

## 📁 專案目錄結構

專案依據實驗進度分為 「Lab0」 至 「Lab3」，每個 Lab 包含數個 Task 資料夾 (請參考課題投影片)：

- **`Lab0/Task0-1/`**：環境測試與範例（請參考此資料夾之 `report.md` 寫作格式）。
- **`LabX/TaskX-Y/`**：各單元實驗課題。
  - `TaskX-Y_slides.pdf`：該課題需求說明投影片。
  - `report.md`：學生需填寫的課題報告。
  - `video/`：存放操作示範影片。

## ⚠️ 作業繳交與影片替換規則

1. **影片替換**：各 Task 的 `video/` 資料夾預設包含助教的示範影片。**完成實驗後，請刪除TA示範影片，並將你親自錄製的操作影片改名為 `TaskX-Y.mp4` 存入該資料夾**。
2. **報告填寫**：開啟該 Task 下的 `report.md`，依格式記錄實驗過程與數據。
3. **提交方式**：
   ```bash
   git add .
   git commit -m "完成 Task X-Y 實驗與報告"
   git push
