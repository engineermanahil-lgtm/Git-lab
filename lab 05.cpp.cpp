// task 1

// #include <iostream>
// using namespace std;
// int main() {
//     int arr[2][3] = {
//         {1, 2, 3},
//         {4, 5, 6}
//     };
//     cout << "Elements of 2D Array:" << endl;

//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 3; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// task 2

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[5] = {10, 20, 30, 40, 50};

//     cout << "Array elements: ";

//     for (int i = 0; i < 5; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }
// task 3

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[5] = {40, 10, 50, 20, 30};

//     for (int i = 0; i < 5 - 1; i++) {
//         for (int j = 0; j < 5 - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
//     cout << "Sorted array: ";

//     for (int i = 0; i < 5; i++) {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// task 4

#include <iostream>
using namespace std;

int main() {
    int arr[5] = {25, 10, 40, 5, 30};

    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }

        if (arr[i] < min) {
            min = arr[i];
        }
    }

    cout << "Maximum element: " << max << endl;
    cout << "Minimum element: " << min << endl;

    return 0;
}













