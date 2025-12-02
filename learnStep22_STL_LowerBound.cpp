#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT 
    
    You are given N integers in sorted order.
    Also, you are given Q queries. 
    In each other,
    you will be given an integer 
    and you have to tell 
    whether that integer is present in the array
    If so, you have to tell at which index
    it is present and if it is not present,
    you have to tell 
    the index at which the smallest integer 
    that is just greater than the given number is present.
    Lower bound is a function 
    that can be used with a sorted vector. 
    Learn how to use lower bound 
    to solve this problem by clicking here. 

    Input format:
    The first line of the input contains
    the number of integers N.
    The next line contains N integers in sorted orders.
    THe next line contains Q, 
    the number of queries. 
    Then Q lines follow each containing a single integer Y.
    
    
    Chức năng   lower_bound(value)              upper_bound(value)

    Tìm kiếm    Phần tử đầu tiên >= value       Phần tử đầu tiên > value
    Ứng dụng    Tìm kiếm giá trị hoặc           Tìm số nguyên nhỏ nhất 
                điểm bắt đầu của một dãy        mà lớn hơn hẳn value 
                giá trị trùng lặp               
    
    */
    
    int n;
    std::cin >> n;
    std::vector<int>v, v2;
    v.reserve(n); // Dự trữ không gian bộ nhớ đủ cho vector
    for(int i = 0; i<n; i++){
        int x;
        std::cin>> x;    
        v.push_back(x);    
    }

    int m;
    std::cin >> m;
    for(int i = 0; i<m; i++){
        int x;
        std::cin>> x;    
        v2.push_back(x);    
    }
    
    for(const auto i:v2){
        auto it1 = std::lower_bound(v.begin(), v.end(), i);
        int x = *it1;
        
        if(it1 != v.end()){
            if(x == i){
                std::cout << "Yes " << std::distance(v.begin(), it1) + 1 <<  "\n";
            }
            else{
                std::cout << "No " << std::distance(v.begin(), it1) + 1 <<  "\n";
            }
        }
    }  
    return 0;
}