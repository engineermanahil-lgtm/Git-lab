
// #include <iostream>
// using namespace std;

// int main() {
//     int num = 10;       // Integer variable
//     int *ptr = &num;    // Pointer to num

//     cout << "Value of num: " << num << endl;
//     cout << "Address of num: " << &num << endl;

//     cout << "Value using pointer: " << *ptr << endl;
//     cout << "Address stored in pointer: " << ptr << endl;

//     return 0;
// }



// #include <iostream>
// using namespace std;
// void swapNumbers(int *a, int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main() {
//     int x = 10, y = 20;

//     cout << "Before swapping:" << endl;
//     cout << "x = " << x << endl;
//     cout << "y = " << y << endl;
//     swapNumbers(&x, &y);
//     cout << "\nAfter swapping:" << endl;
//     cout << "x = " << x << endl;
//     cout << "y = " << y << endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int *ptr = new int;

//     *ptr = 25;

//     cout << "Value: " << *ptr << endl;

//     delete ptr;

//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main() {
//     int *arr = new int[5];

//     cout << "Enter 5 integers: " << endl;

//     for (int i = 0; i < 5; i++) {
//         cin >> arr[i];
//     }

//     cout << "Array elements are: " << endl;

//     for (int i = 0; i < 5; i++) {
//         cout << arr[i] << " ";
//     }
//     delete[] arr;
//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    int *ptr = arr;

    cout << "Array elements using pointer arithmetic:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << *(ptr + i) << " ";
    }

    return 0;
}
