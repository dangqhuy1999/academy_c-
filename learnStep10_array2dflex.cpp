#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    // Off synchronize I/O và un-tie cin/cout (Optimize I/O tuyệt đối)
    std::ios_base::sync_with_stdio(false); 
    std::cin.tie(NULL);

    int n,q,k, qi, qj;
    std::vector<std::vector<int>> a;
    std::cin>> n>> q;
    
    for(int i =0;i<n;i++){
        std::vector<int> x;
        std::cin>>k;
        x.reserve(k); // Notice: pre acllocations  to avoid reallocations
        for (int j =0;j<k;j++) {
            int value;
            std::cin>> value;
            x.push_back(value);
        }
        a.push_back(std::move(x));
    }
    std::vector<int> showme;
    for(int i = 0;i<q;i++){
        std::cin>>qi>>qj;
        std::cout << a[qi][qj] << '\n';
    }
    return 0;
}