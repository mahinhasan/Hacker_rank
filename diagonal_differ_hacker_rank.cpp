#include<bits/stdc++.h>
#include<vector>
#include<cmath>
int main(){
    int n;
    int sum_fst_diagonal = 0;
    int sum_sec_diagonal = 0;
    std::cin >> n;
    int ar[n][n];
    for(int i = 0;i<n;i++){
        for(int j = 0;j< n;j++){
            std::cin >>ar[i][j];
            if(i == j)
                sum_fst_diagonal+= ar[i][j];
            if(i+j == n-1)
                sum_sec_diagonal+= ar[i][j];
        }
    }
    /*if(sum_fst_diagonal>sum_sec_diagonal)
    std::cout<<sum_fst_diagonal-sum_sec_diagonal<<std::endl;
    else
    std::cout<<sum_sec_diagonal-sum_fst_diagonal<<std::endl;
*/
std::cout<<abs(sum_fst_diagonal-sum_sec_diagonal)<<std::endl;
return 0;
}
