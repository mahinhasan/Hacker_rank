#include<bits/stdc++.h>
#include<vector>
int main(){
        std::vector <int> frist_arr(3);
        std::vector <int> second_arr(3);
        int alic = 0;
        int bob = 0;
        for(int initial = 0; initial<3; initial++){
            std::cin >> frist_arr[initial];

        }
        for(int initial = 0; initial<3; initial++){

            std::cin >> second_arr[initial];
        }
        //std::cout<<frist_arr[0];
        for(int ini = 0; ini<3; ini++){
            if(frist_arr[ini] > second_arr[ini])
                alic++;


            else if(frist_arr[ini] == second_arr[ini])
                continue;

            else
                bob++;

        }

        std::cout << alic <<" "<<bob <<std::endl;
return 0;
}
