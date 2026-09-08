/*
  Task 0-1: Hello World Serial Monitor Test
  實驗目標：透過序列埠每秒輸出一次 Hello World 訊息
*/

void setup() {
  // 初始化序列埠通訊，設定鮑率為 9600 bps
  Serial.begin(9600);
  
  Serial.println("--- Arduino Lab0 Task0-1 Start ---");
}

void loop() {
  // 向序列埠發送字串並換行
  Serial.println("Hello World from Arduino!");
  
  // 延遲 1 秒 (1000 ms)
  delay(1000);
}
