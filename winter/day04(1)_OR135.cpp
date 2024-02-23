#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int n;
    cin >> n;
    while(cin >> str)
    {
        if(str.size() >= 10)
        {
            cout << str.front() << str.size() - 2<< str.back() << endl;
        }
        else {
            cout << str << endl;
        }
    }
}
// 64 位输出请用 printf("%lld")