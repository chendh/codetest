### 程式設計能力檢定題庫

## b001. 週期性的連接符號
讓使用者輸入一個正整數 n ，接著依底下規則輸出一行字串。

- 從數字 1 到 n，依序出現在字串中
- 每個數字的後面會連接三種符號（+，-，*）之一
- 連接的規則是根據該數字除以 3 的餘數去決定
- 當數字是 3 的倍數餘 1，則連接 1 個 +
- 當數字是 3 的倍數餘 2，則連接 2 個 –
- 當數字是 3 的倍數，則連接 3 個 *

### 輸入說明
輸入有多筆測資，每一列為一筆測資，每筆測資有一個正整數。

### 輸出說明
輸出該筆測資之對應訊息於一列並換行。

### 範例輸入 #1
1
4
6
7
9

### 範例輸出 #1
1+
1+2--3***4+
1+2--3***4+5--6***
1+2--3***4+5--6***7+
1+2--3***4+5--6***7+8--9***

## 解答
``` C++
#include <iostream>
using namespace std;

int main(){
    int n;
    int r;
    cout << "Input a positive number n: ";
    cin >> n;

    for (int i=1; i<=n; i++){
        r = i % 3;

        cout << i;
        switch (r){
            case 1: 
                cout << "+";
                break;
            case 2:
                cout << "--";
                break;
            case 0:
                cout << "***";
                break;
        }
    }
    return 0;
}
```
---
## b002. 數值的統計
請撰寫一程式，輸入未知數目的整數，當輸入 -9999 時代表結束，最後輸出這些數字中（不包含 -9999）的最大值、最小值、不小於 0 的數量、小於 0 的數量。

### 輸入說明
輸入有一筆測資，每一列為一個整數，最後一個整數是 -9999。

### 輸出說明
輸出該筆測資之對應訊息於一列。

### 範例輸入 #1
107
-453
-241
-344
280
-9999

### 範例輸出 #1
280,-453,2,3

## 解答
``` C++
#include <iostream>
using namespace std;

int main(){
    int n; // input a number
    int maximum=0; // maximum
    int minimum=0; // minimum
    int greater=0; // the number of numbers greater or equal to 0
    int smaller=0; // the nubmer of negative numbers

    cout << "input a number: ";
    cin >> n;

    while (n!=-9999){
        if (n>maximum) maximum=n;
        if (n<minimum) minimum=n;
        if (n>=0) greater++;
        else smaller++;
        cin >> n;
    }

    cout << maximum << "," << minimum << "," << greater << "," << smaller << endl;
    return 0;
}
```