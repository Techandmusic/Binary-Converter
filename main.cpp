#include <iostream>
#include <deque>
using namespace std;



deque<int> basetwo;


//recursive function to handle conversion from base 10 to base 2
void binconvert(int num) {
    int rem;
    rem = num % 2;
    basetwo.push_front(rem);
    num /= 2;
    if(num != 0) {
        binconvert(num);
    }
}


int main()
{
    int number;
    cout << "Enter a number to convert: ";
    cin >> number;
    binconvert(number);
    //for loop to output base 2 binary number
    for(int i = 0; i < basetwo.size(); ++i) {
            cout << basetwo[i];
    }
    cout << endl;
    return 0;
}





