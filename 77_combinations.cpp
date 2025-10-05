#include <iostream>
#include <vectors>
#include <bits>
class solution{
public:
vector<vector<int>> combine(int n , int k){
start, std::vector<std::vector<int>> res;
        std::vector<int> comb;
        backtrack(1, comb, res, n, k);
        return res;
    }
    private:
    backtack(int start, std::vector<std::vector<int>> res,
        std::vector<int> comb, int n, int k){
            if(comb.size()==k){
 res.push_back(comb);
                 return;
            }


            for(int num=start; num<=n; num++){
                comb.push_back(num);

            backtack(num+1, comb, res, n , k);

            comb.pop_back();




            }


            
        }

}






};