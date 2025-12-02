#include <cmath> 
#include <cstdio> 
#include <vector> 
#include <iostream> 
#include <algorithm> 
 
/* TITLE 
You are provided with 
a vector of N integers. 
Then, you are given 2 queries. 
For the first query, 
you are provided with 1 integer, 
which denotes a position in the vector.
The value at this position
in the vector needs to be erased.
The next query consists of 2 integers
denoting a range of the positions in the vector.
The elements which fall under that shoud be removed.
The second query is performed on the up 

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
    
    int eraseIndex;
    std::cin>> eraseIndex;
    v.erase(v.begin() + eraseIndex-1);

    int beginRemove, endRemove;
    std::cin>> beginRemove >> endRemove;
    // Ex:v.erase(v.begin()+2,v.begin()+5);(erases all the elements from the third element to the fifth element.)
    v.erase(v.begin() + beginRemove-1, v.begin() + endRemove-1);

    std::cout  << v.size() << "\n";

    for (const int& i : v) {
        std::cout  << i << " ";
    }

    return 0;
}
