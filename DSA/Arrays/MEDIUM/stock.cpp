// stock buy and sell
#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &arr){
    int maxPro = 0 ;
    int n = arr.size();
    int minPrice = INT_MAX;

    for(int i = 0 ; i<n ;i++){
        minPrice = min(minPrice,arr[i]);
        maxPro = max(maxPro,arr[i] - minPrice);
    }
    return maxPro;
}
int main(){
vector<int> arr = {7,1,5,3,6,4};
int maxPro = maxProfit(arr);
cout << " max profit " << maxPro << endl;
}

// Time complexity: O(n)

// Space Complexity: O(1)