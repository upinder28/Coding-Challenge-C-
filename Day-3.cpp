// PRINT THE NUMBERS FROM 280-250 :-

// #include<iostream>
// using namespace std;
// int main() {
//     for (int i = 280; i >= 250; i--) {
//         cout << i << endl;
//     }
// }

// PRINT A-Z :-

// #include<iostream>
// using namespace std;
// int main() {
//     for (char a = 'A'; a <= 'Z'; a++) {
//         cout << a << endl;
//     }
// }

// PRINT Z-A :-

// #include<iostream>
// using namespace std;
// int main() {
//     for (char a = 'Z'; a >= 'A'; a--) {
//         cout << a << endl;
//     }
// }

// PRINT THE NUMBER WITH COMMON DIFFERENCE OF 7 :-

// #include<iostream>
// using namespace std;
// int main() {
//     int a = 220;
//     int b = 7;
//     int c = 730;
//     for (int d = a; d <= c; d += b) {
//         cout << d << endl;
//     }
// }

// SUM OF SQUARE OF FIRST N NATURAL NUMBERS :-

// #include<iostream>
// using namespace std;
// int main() {
//     int sum = 0;
//     for (int i = 1; i <= 10; i++) {
//         sum += i * i;
//     }
//     cout << sum << endl;
// }

// SUM OF CUBES OF FIRST N NATURAL NUMBERS :-

// #include<iostream>
// using namespace std;
// int main() {
//     int sum = 0;
//     for (int i = 1; i <= 10; i++) {
//         sum += i * i * i;
//     }
//     cout << sum << endl;
// }

// PRINT NTH FIBONACCI NUMBER :-

#include <iostream>  
using namespace std;  
int main() {  
    int n1 = 0, n2 = 1, n3, i, number;    
    cout << "Enter the number of elements: ";    
    cin >> number;    
    cout << n1 << " " << n2 << " ";    
    for (i = 2; i < number; i++) {
        n3 = n1 + n2;    
        cout << n3 << " ";    
        n1 = n2;    
        n2 = n3;    
    }    
    return 0;  
}  
