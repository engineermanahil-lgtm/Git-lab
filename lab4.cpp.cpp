// Task 1:

// #include <iostream>
// using namespace std;

// int main() {
//     int marks;

//     cout << "Enter your marks: ";
//     cin >> marks;

//     if (marks >= 50) {
//         cout << "Pass";
//     } else {
//         cout << "Fail";
//     }

//     return 0;
// }

// Task 2

// #include <iostream>
// using namespace std;

// int main() {
//     int num;

//     cout << "Enter a number: ";
//     cin >> num;

//     if (num % 2 == 0) {
//         cout << "Even";
//     } else {
//         cout << "Odd";
//     }

//     return 0;
// }


// task 3

// #include <iostream>
// using namespace std;
// int main() {
//     int a, b;

//     cout << "Enter first number: ";
//     cin >> a;

//     cout << "Enter second number: ";
//     cin >> b;

//     if (a > b) {
//         cout << "Larger number is: " << a;
//     } else if (b > a) {
//         cout << "Larger number is: " << b;
//     } else {
//         cout << "Both numbers are equal";
//     }
//     return 0;
// }

// task 4

// #include <iostream>
// using namespace std;

// int main() {
//     for (int i = 1; i <= 20; i++) {
//         cout << i << " ";
//     }

//     return 0;
// }

// task 4 


// #include <iostream>
// using namespace std;

// int main() {
//     int i = 1;

//     while (i <= 20) {
//         cout << i << " ";
//         i++;
//     }

//     return 0;
// }
// task 5

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
