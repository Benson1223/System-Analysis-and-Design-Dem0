////功能內聚力，應該專注於單一的任務或活動。在這個例子中，我們的加法函數將專注於執行加法操作 
#include <stdio.h>

// 加法函數，專注於實現兩數相加的功能
int add(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int a, b, sum;

    printf("請輸入兩個數字：\n");
    scanf("%d %d", &a, &b);

    // 調用 add 函數進行加法操作
    sum = add(a, b);

    printf("兩數之和為：%d\n", sum);

    return 0;
}


////順序內聚力
#include <stdio.h>

// 進行加法運算的函數
int add(int num1, int num2) {
    return num1 + num2;
}

// 計算數字的三次方
int cube(int num) {
    return num * num * num;
}

int main() {
    int a, b, sum, cubedSum;

    // 讀取兩個數字
    printf("請輸入兩個數字：\n");
    scanf("%d %d", &a, &b);

    // 先進行加法運算
    sum = add(a, b);

    // 然後對結果進行三次方運算
    cubedSum = cube(sum);

    // 輸出最終結果
    printf("相加後的結果取三次方為：%d\n", cubedSum);

    return 0;
}

////溝通內聚力
#include <stdio.h>

// 函數：計算陣列元素的總和
int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

// 函數：計算陣列元素的三次方之和
int sumCubedArray(int arr[], int size) {
    int cubedSum = 0;
    for (int i = 0; i < size; i++) {
        cubedSum += arr[i] * arr[i] * arr[i];
    }
    return cubedSum;
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int n = sizeof(numbers) / sizeof(numbers[0]); // 計算陣列中的元素數量

    // 計算總和
    int sum = sumArray(numbers, n);

    // 計算三次方之和
    int cubedSum = sumCubedArray(numbers, n);

    // 輸出結果
    printf("所有數字的總和為：%d\n", sum);
    printf("所有數字的三次方總和為：%d\n", cubedSum);

    return 0;
}

 
 ////暫時內聚力(初始化)
 #include <stdio.h>

// 一個執行多個初始化任務的函數
void initialize() {
    // 初始化用戶界面
    printf("初始化用戶界面...\n");

    // 加載配置文件
    printf("加載配置文件...\n");

    // 建立數據庫連接
    printf("建立數據庫連接...\n");

    // 其他啟動時需要執行的任務
    printf("執行其他啟動任務...\n");
}

int main() {
    // 在程序啟動時調用初始化函數
    initialize();

    // 程序的其他部分
    printf("程序運行中...\n");

    return 0;
}


////程序內聚力  雖然這些步驟是順序執行的，但它們並不是為了實現一個單一明確的任務，而是更像是程序中某一部分的相關步驟集合。
#include <stdio.h>

// 一個程序內聚的函數
void processSteps() {
    int value = 10;

    // 第一步：修改變量值
    value += 5;
    printf("修改後的值：%d\n", value);

    // 第二步：條件判斷
    if (value > 10) {
        printf("值大於 10\n");
    } else {
        printf("值不大於 10\n");
    }

    // 第三步：打印最終結果
    printf("最終結果：%d\n", value);
}

int main() {
    // 調用 processSteps 函數
    processSteps();

    return 0;
}


////偶發內聚力 是指一個函數或模塊中的操作僅僅因為偶然放在一起而組合在一起，這些操作之間沒有明確的關聯。
////在偶發內聚的情況下，函數通常會執行多個不相關的任務。這被認為是內聚力最弱的一種形式，通常不是良好的軟件設計實踐
#include <stdio.h>

// 一個執行多個不相關任務的函數
void doVariousTasks() {
    printf("任務 1: 打印信息\n");

    int a = 5, b = 10;
    printf("任務 2: 計算 a 和 b 的和: %d\n", a + b);

    if (a > 0) {
        printf("任務 3: 檢查 a 是否大於 0\n");
    }

    for (int i = 0; i < 5; i++) {
        printf("任務 4: 重複打印 i: %d\n", i);
    }
}

int main() {
    // 調用 doVariousTasks 函數
    doVariousTasks();

    return 0;
}


////資料耦合力 
////指的是當模組（如函數）之間的交互是基於傳遞數據（例如，通過參數）。這是耦合強度最低的一種形式，通常也是最理想的耦合方式。
////在資料耦合中，一個模組僅僅通過其參數向另一個模組傳遞數據，而不依賴於另一模組的內部實現 

#include <stdio.h>

// 加法函數，僅基於其參數進行操作
int add(int a, int b) {
    return a + b;
}

int main() {
    int x = 5;
    int y = 10;
    int result;

    // 調用 add 函數，並將 x 和 y 的值作為參數傳遞
    result = add(x, y);

    printf("結果：%d\n", result);

    return 0;
}



////資料結構偶合力兩個模組（例如函數）之間共享一個複雜的數據結構（如結構體、類或陣列）。在資料結構偶合中，
////一個模組通過一個共享的數據結構將多項數據傳遞給另一個模組
#include <stdio.h>

// 定義一個結構體來表示學生數據
typedef struct {
    int id;
    float score;
    int age;
} Student;

// 函數處理 Student 結構體
void printStudentInfo(Student s) {
    printf("學生 ID: %d\n", s.id);
    printf("學生 分數: %.2f\n", s.score);
    printf("學生 年齡: %d\n", s.age);
}

int main() {
    // 創建一個 Student 結構體實例
    Student student1 = {123, 90.5, 20};

    // 調用函數並傳遞 Student 結構體
    printStudentInfo(student1);

    return 0;
}
 
////共同偶合力
////共享同一個全域變數或數據結構。在這種偶合中，一個模組所做的改動可能會影響到所有使用該全域變數的其他模組。
////這種偶合強度相對較高，因為它破壞了模組的封裝性 
#include <stdio.h>

// 定義一個全域變數
int sharedData = 0;

// 函數 A 修改全域變數
void functionA() {
    sharedData = 5;
    printf("Function A updated sharedData to %d\n", sharedData);
}

// 函數 B 讀取全域變數
void functionB() {
    printf("Function B reads sharedData as %d\n", sharedData);
}

int main() {
    functionA(); // 調用函數 A
    functionB(); // 調用函數 B

    return 0;
}


////內容偶合力耦合程度最高的一種形式，它發生在一個模組直接訪問或修改另一個模組的內部數據或控制流程
#include <stdio.h>

void functionB(); // 提前聲明 functionB

// functionA 直接跳轉到 functionB 的內部
void functionA() {
    printf("Function A is called\n");
    goto functionB_internal; // 直接跳轉到 functionB 的標籤

    return; // 永遠不會執行到這裡

    functionB_internal: ; // 這是 functionB 的內部標籤
}

// functionB 的實現
void functionB() {
    printf("Entering Function B\n");
    functionB_internal:
    printf("Function B is executing\n");
}

int main() {
    functionA();
    functionB();

    return 0;
}
 
 
 
