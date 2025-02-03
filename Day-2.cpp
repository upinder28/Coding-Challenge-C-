// IF-ELSE :-

// PRINT THE BIGGER NUMBER :-

// #include<iostream>
// using namespace std;
// int main() {
//     int a , b;
//     cout << "Enter the first number: " << endl;
//     cin >> a;
//     cout << "Enter the second number: " << endl;
//     cin >> b;
//     if (a > b) {
//         cout << "Bigger number is :- " << a << endl;
//     } else {
//         cout << "Bigger number is :- " << b << endl;
//     }
// }

// PRINT THE AGE GREATER THAN 18 , ADULT/TEENAGER :-

// #include<iostream>
// using namespace std;
// int main() {
//     int age;
//     cout << "Enter your age: " << endl;
//     cin >> age;
//     if (age >= 18) {
//         cout << "You are an Adult";
//     } else {
//         cout << "You are a Teenager";
//     }
// }

// PRINT THE MONTHS(1-12) :-

// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter the month number: " << endl;
//     cin >> n;
//     if (n == 1) {
//         cout << "January" << endl;
//     } else if (n == 2) {
//         cout << "February" << endl;
//     } else if (n == 3) {
//         cout << "March" << endl;
//     } else if (n == 4) {
//         cout << "April" << endl;
//     } else if (n == 5) {
//         cout << "May" << endl;
//     } else if (n == 6) {
//         cout << "June" << endl;
//     } else if (n == 7) {
//         cout << "July" << endl;
//     } else if (n == 8) {
//         cout << "August" << endl;
//     } else if (n == 9) {
//         cout << "September" << endl;
//     } else if (n == 10) {
//         cout << "October" << endl;
//     } else if (n == 11) {
//         cout << "November" << endl;
//     } else if (n == 12) {
//         cout << "December" << endl;
//     } else {
//         cout << "Invalid month number" << endl;
//     }
// }

// AGE CONDITION :-

// #include<iostream>
// using namespace std;
// int main() {
//     int age;
//     cout << "Enter your age: " << endl;
//     cin >> age;
//     if (age < 12) {
//         cout << "Yes" << endl;
//     } else if (age > 65) {
//         cout << "Yes" << endl;
//     } else {
//         cout << "No" << endl;
//     }
// }

// FOR LOOPS :-

// PRINT INDIA 20 TIMES :-

// #include<iostream>
// using namespace std;
// int main() {
//     for (int i = 0; i <= 20; i++) {
//         cout << "India" << endl;
//     }
// }

// ODD NUMBERS 1-10 :-

// #include<iostream>
// using namespace std;
// int main() {
//     for (int i = 1; i <= 10; i++) {
//         if (i % 2 != 0) {
//             cout << i << endl;
//         }
//     }
// }

// DIVISIBLE BY 4 :-    

#include<iostream>
using namespace std;
int main() {
    for (int i = 1; i <= 20; i++) {
        if (i % 4 == 0) {
            cout << i << endl;
        }
    }
}
