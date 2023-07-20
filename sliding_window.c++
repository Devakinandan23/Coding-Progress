easy++ code
#include<bits/stdc++.h>
using namespace std;
//sliding window minimum sum of k elements

int main(){
    // system("cls");
    vector<int> s = {1, 2, 4, 5}; 
    int k =2, sum = 0, ans = INT_MAX;
    
    for(int i=0; i<k; i++) sum += s[i];
    ans = min(ans, sum);
    
    for(int i=1; i<s.size()-k+1; i++){
        sum = sum - s[i-1] + s[i+k-1];
        ans = min(ans, sum);
    }
    cout<<ans<<endl;
    return 0;
}
