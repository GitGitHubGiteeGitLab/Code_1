#include <iostream>
using namespace std;

bool has7(int n)
{
    while(n)
    {
        int digit = n % 10;
        if(digit == 7)
            return true;
        n /= 10;
    }
    return false;
}
int main() {
    int n;
    cin >> n;
    int count = 0;
    string str;
    for(int i = 7; i <= n; i++)
    {
        if(i % 7 == 0)
            count++;
        //else if(has7(i))
        //    count++;
        else
        {
            str = to_string(i);
            if(str.find('7') != string::npos)
                count++;
        }
    }
    cout << count << endl;
}
// 64 位输出请用 printf("%lld")