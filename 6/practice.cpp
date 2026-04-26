#include <iostream>
#include <cstdlib>
using namespace std;


int check_validity(int x) {
    if (x >= 1 && x <= 10) {
        return 1; 
    }
    return 0; 
}

int main(int argc, char *argv[]) {
    int i, x;
    int *numbers;

   
    while (true) {
        cout << "Enter the number of inputs (1-10): ";
        cin >> x;
        if (check_validity(x)) break;
        cout << "Invalid input. Please try again." << endl;
    }

    
    numbers = (int *)malloc(sizeof(int) * x);

    
    for (i = 0; i < x; i++) {
        string suffix = (i == 0) ? "st" : (i == 1) ? "nd" : (i == 2) ? "rd" : "th";
        cout << "Please insert the inputs (" << i + 1 << suffix << " input): ";
        cin >> numbers[i];
    }

    
    for (i = 0; i < x; i++) {
        cout << "numbers[" << i << "] = " << numbers[i] << endl;
    }
 
 
    free(numbers);

    return 0;
}