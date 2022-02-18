#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        long rev=0;
        int last_digit;
        while(x!=0){
            last_digit = x%10;
            if((rev>INT_MAX/10)||(rev<INT_MIN/10)){
                return 0;
            }
            rev = (rev*10)+last_digit;
            x = x/10;
            
        }
        return rev;
        
    }
    
};