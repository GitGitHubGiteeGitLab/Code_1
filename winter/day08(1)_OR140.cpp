#include <iostream>
#include <vector>
using namespace std;

vector<int> ans(1e6);
void init(){
    ans[1] = 1;
    ans[2] = 2;
    for(int i = 3, sz = ans.size(); i < sz; i++){
        ans[i] = 2 * ans[i-1] + ans[i-2];
        ans[i] %= 32767;//防止溢出
    }
}
int main() {
    init();
    int n, k;
    cin >> n;
    while(n--){
        cin >> k;
        cout << ans[k] <<endl; 
    }
    return 0;
}