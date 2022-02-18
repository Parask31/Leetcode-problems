#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        double m=1;
        if (n>0){
            if (n%2==0){
                m = pow(x,n/2);
                m *= m; 
            }
            else{
                m = pow(x,(n-1)/2);
                m *= m*x;
            }
            // for(int i=0; i<n; i++){
            //     m *= x;
            // }
        }
        else{
            if (n%2==0){
                m = pow(x,n/2);
                m *= m; 
            }
            else{
                m = pow(x,(n-1)/2);
                m *= m*x;
            }
            // for(int i=0; i<abs(n); i++){
            //     m *= (1/x);
            // }
        }
        return m;
    }
};