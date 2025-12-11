#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

/*
This stub code use for sort all elements in vector. 
*/
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    std::cin>> n;
    
    std::vector<int>v;
    for(int i = 0; i<n; i++){
        int x;
        std::cin>> x;    
        v.push_back(x);    
    }
    
    sort(v.begin(),v.end());
    for (const int& i : v) {
        std::cout  << i << " ";
    }
    return 0;
}
