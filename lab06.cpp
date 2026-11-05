
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string str, reverseStr = "";

//     cout << "Enter a string: ";
//     getline(cin, str);

//     for (int i = str.length() - 1; i >= 0; i--) {
//         reverseStr += str[i];
//     }

//     cout << "Reversed string: " << reverseStr;

//     return 0;
// }



// #include <iostream>
// #include <string>
// using namespace std;

// int main(){
//  string str;   

//     cout << "Enter a string: ";
//     getline(cin, str);

//     cout << "Total Characters: " << str.length();

//     return 0;
// }


// #include <iostream>
// #include <string>
// using namespace std;

// int main(){
//  string str;   

//     cout << "Enter a string: ";
//     getline(cin, str);
//     for(int i=0; i<str.length();i++){
//          str[i]=toupper(str[i]);
// }
   
// cout << "Upper case: " << str;

//     return 0;
// }


// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//     string str;   

//     cout << "Enter a string: ";
//     getline(cin, str);

//     if (str.length()>0){
//         if(str[0] == str[str.length()-1]){
//             cout<<"First and Last character are same.";
//         }
//         else{
//             cout<<"Fisrt and last caharacter are different";
//         }
//     }
//     else{
//         cout<<"String is empty";
//     }
//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;
int main(){
    string firstname, lastname, fullname ;   

    cout << "Enter a firstname: ";
    cin>>firstname;

    cout << "Enter a lastname: ";
    cin>>lastname;

    fullname = firstname+ " " + lastname;

    cout << "Fullname:" << fullname;
    
    return 0;
}
