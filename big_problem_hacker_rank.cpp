#include<bits/stdc++.h>
#include<vector>


using ll = long long;
int main(){
    int n;
    long long sum = 0;
    std::cin >> n;
    std::vector<ll> array_sum(n);
    while(n--){
       std::cin >> array_sum[n];
       sum+= array_sum[n];
    }
    std::cout << sum <<std::endl;


return 0;
}
