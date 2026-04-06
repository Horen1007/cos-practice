#include <iostream>
using namespace std;

int sum(int a, int b) {
    int res;
    __asm__(
        "movl %1, %%eax;"   // a의 값을 eax 레지스터에 복사
        "addl %2, %%eax;"   // eax에 b의 값을 더함
        "movl %%eax, %0;"   // 결과를 res 변수에 저장
        : "=r" (res)        // 출력: %0은 res
        : "r" (a), "r" (b)  // 입력: %1은 a, %2는 b
        : "eax"             // 사용한 레지스터 명시
    );
    return res;
}

int main() {
    int a, b, c;
    a = 3; b = 5;
    c = sum(a, b);
    cout << "c: " << c << endl;

    return 0;
}
