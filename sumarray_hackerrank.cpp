#include<bits/stdc++.h>
#include<vector>
int main(){
        int n;
        std::cin >> n;
        std::vector <int> ar(n);
        int sum = 0;
        for(int start = 0; start < n;start++)
        {
            std::cin>>ar[start];
            sum += ar[start];

        }
        std::cout << sum <<std::endl;

return 0;
}
