#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[]){
    char str1[6] = {'h', 'e', 'l', 'l', 'o', 0};
    char str2[6] = {'w', 'o', 'r', 'l', 'd', 0};
    char *p;
    int i;

    p = str2;

    cout << "str1 = " << str1 << endl;
    cout << "str2 = " << str2 << endl;

    // 추가한 한 줄
    p = str1 + 5, *p = ',', strcpy(p + 1, str2);

    cout << "str1 = " << str1 << endl; 

    return 0;
}