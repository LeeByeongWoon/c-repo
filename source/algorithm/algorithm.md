## 시간 복잡도

    알고리즘에 사용 되는 연산 횟수

## 공간 복잡도

    알고리즘에 사용되는 메모리의 양

## 시간 복잡도를 표현법

### Big O 표기법

- 시간 복잡도를 표현 할경우 최악의 경우를 상정하는 Big - O 표기법을 사용함
- 다음은 O(n)의 시간 복잡도를 가지는 코드

```c++
int main(void){
    int a, b;
    cin >> a >> b;
    int sum = 1;
    for (int i = 0; i < b; i++){
        sum *=a;
    }
    cout << sum;
}
```

- O(n<sup>2</sup>)만큼 시간복잡도를 가지는 코드

```c++
using namespace std;

int main(void){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            cout << "*";
        }
        count << '\n';
    }
}
```

- O(1)

```c++
# include <iostream>

using namespace std;
int main(void){
    int a, b;
    cin >> a >> b;
    cout << a + b;
}
```

- n 이 1,000 일때:
    - n: 1000번 연산
    - n log<sub>2</sub>1000:약 10,000번 연산(컴퓨터는 따로 표기가 없을 경우 이진로그)
    - n<sup>2</sup>: 1,000,000 번의 연산
    - n<sup>3</sup>: 1,000,000,000 번의 연산
    - 통상적으로 연산이 10억번을 넘어가면 1초 이상이 소요 됨.

- 시간 복잡도를 표기할 때엔 항상 큰 항과 계수만 표기 (모듈의 현실적인 시간제한 = 1초)
    - O(3n<sup>2</sup>+n) = O(n<sup>2</sup>)
- 공간 복잡도 표기는 일반적으로 **MB**로 표시함.
    - int a[1000]: 4KB (int의 기본크기 4byte)
    - int a[1000000]: 4MB
    - int a[2000][2000]: 16MB
  