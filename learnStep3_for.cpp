#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,b;
    std::cin >> a;
    std::cin >> b;
    
    std::map<int, std::string> dictne = {
        {1,"one"}, {2,"two"}, {3,"three"}, {4,"four"}, {5,"five"}, {6,"six"}, {7,"seven"}, {8,"eight"}, {9,"nine"}
    };
    
    if (a<=b){
       for (int i = a; i<=b; i++) {
            if (i>=1 && i <= 9){
                std::cout << dictne[i] << std::endl;
            }
            else if (i>9 && i%2==0){
                std::cout << "even" << std::endl;
            }
            else if (i>9 && i%2!=0){
                std::cout << "odd"<< std::endl;
            }
        } 
    }
    
    
    return 0;
}