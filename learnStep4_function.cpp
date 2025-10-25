#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm> // use for sort or max

int greatest_num(int a, int b, int c, int d);
int sort_order(std::vector<int>& numbers);
    
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a, b ,c ,d;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cin >> d;
    std::cout << greatest_num(a, b, c, d) << std::endl;
    
    /*
    std::vector<int> my_list = {50, 10, 85, 20};
    greatest = sort_order(my_list)
    std::cout << greatest << std::endl;
    */

    return 0;
}

int greatest_num(int a, int b, int c, int d){
    return std::max({a,b,c,d});
}
int sort_order(std::vector<int>& numbers){
    std::sort(numbers.begin(), numbers.end());
    return numbers.back();
}