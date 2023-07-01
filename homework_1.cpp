#include <iostream>

using namespace std;

int main() {
    int num, count;
    
    cout << "\n Enter ur number : ";
    cin >> num;
    
    count = num/100;
    cout<<"\n number of 100 notes are : "<<count;
    num = num - 100*count;
    count = num/50;
    cout<<"\n number of 50 notes are : "<<count;
    num = num - 50*count;
    count = num/20;
    cout<<"\n number of 20 notes are : "<<count;
    num = num - 20*count;
    cout<<"\n number of 1 notes are : "<<num;
    
    return 0;
}