// Calculator Program

#include <iostream>
using namespace std;
int main(){
    // string op;
    char op;
    int a,b;
    int ans;
    cout << "Enter the first number for operation: ";
    cin >> a;
    cout << "Enter the second number for operation: ";
    cin >> b;

    cout << "Enter the Operation to be done(+,-,*,/): ";
    cin >> op;
    // if (op == "+") {
    //     ans = a + b;
    //     cout << "Answer: " << ans;

    // } else if (op == "-"){
    //     ans = a - b;
    //     cout << "Answer: " << ans;

    // } else if (op == "*"){
    //     ans = a * b;
    //     cout << "Answer: " << ans;
    
    // } else if (op == "/"){
    //     ans = a/ (double) b;
    //     cout << "Answer: " << ans;

    // } else {
    //     cout << "Invalid Input";
    // }

    switch (op){
        case '+':
            cout << "Answer: " << a+b;
            break;
        case '-':
            cout << "Answer: " << a-b;
            break;
        case '/':
            cout << "Answer: " << a/b;
            break;
        case '*':
            cout << "Answer: " << a*b;
            break;
        default:
            cout << "Invalid Input";
            break;
        
    }
    return 0;
}

