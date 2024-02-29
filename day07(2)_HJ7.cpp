#include <iostream>
using namespace std;

int main() {
    double f;
    cin >> f;
    //int tmp = f * 10; 
    //if(tmp % 10 < 5){
    //    cout << tmp / 10 << endl;
    //}else {
    //    cout << tmp / 10 + 1 << endl;
    //}
    cout << (int)(f + 0.5) << endl;
    return 0;
}
// 64 位输出请用 printf("%lld")