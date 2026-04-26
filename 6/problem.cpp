#include <iostream>
using namespace std;

// 두 수의 대소 관계를 확인하는 함수
int check(int a, int b)
{
    return a < b; // a가 b보다 작으면 1(true), 크거나 같으면 0(false) 반환
}

// 루프를 돌며 합계를 구하는 함수
int add(int a, int b)
{
    int i, c;
    c = 0;
    for (i = 0; i < b; i++)
    {
        c += i;
    }
    return c; // 계산된 결과 c를 반드시 반환해야 합니다 (에러 해결 포인트)
}

int main()
{
    int a, b;
    
    cout << "insert the first number: " << endl;
    cin >> a;
    
    cout << "insert the second number: " << endl;
    cin >> b;

    // check 함수에 인자 (a, b)를 전달하여 호출해야 합니다 (에러 해결 포인트)
    if (check(a, b) == 0)
    {
        // a >= b 인 경우
        cout << "the result (a>=b): " << add(b, a) << endl;
    }
    else
    {
        // a < b 인 경우
        cout << "the result (a<b): " << add(a, b) << endl;
    }

    return 0;
}
