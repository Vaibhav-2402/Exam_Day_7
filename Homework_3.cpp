#include<iostream>
using namespace std;

int Fibo ( int n ){
    int sum;
    int a = 0, b =1;

    cout << a << b;

    for(int i = 0; i <=n; i++){
        sum = a + b;
        cout << sum << "  ";
        a = b;
        b = sum;
    }
    return sum;
}
int main(){
    int num;

    cout << "\n Enter the term u want to get : ";
    cin >> num;

    int ans = Fibo(num);
    cout << "\n The nth term in fibonacci series is : " << ans;
    return 0 ;
}