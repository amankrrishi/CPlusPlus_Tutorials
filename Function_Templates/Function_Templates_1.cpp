/* Templates
    - Function Templates
    - Class Templates

    This program will demonstrate the Function Templates possibilities, needs to be compiled with C++14 standard.

    Templates provodes a way of achieving generic programming in C++.
    Templates are expanded at the complite time.
    The key point about templates is we pass the data type as a parameter to a function or a class.
    Templates introduces two new keywords named as template and typename whereas typename can also be susbstituted as class.

*/

#include <iostream>
using namespace std;

template <typename T1, typename T2>
auto getMax(T1 x, T2 y){
    return x > y ? x : y;
}

int main(){
    cout << getMax(10, 20) << endl;
    cout << getMax(20.5, 45) << endl;
    cout << getMax('e', 'g') << endl;

    return 0;

}
