#include <iostream>
using namespace std;

string operation(int num1,int num2) { 
    if (num2 != 0 && num1 / num2 == 24)
        return "divided";

    if (num1 * num2 == 24)
        return "multiplied";

    if (num1 + num2 == 24)
        return "added";

    if (num1 - num2 == 24)
        return "subtracted";

    return "None";
}

int main() {
    cout << operation(6, 7) << endl;
    return 0;
}