#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT 
    Sets are a part of the C++ STL. 
    Sets are containers 
    that store unique elements 
    following a specific order. 
    Here are some of 
    the frequently used member functions of sets:  
    
    Declaration:
    `set<int>s; //Creates a set of integers`
    Size:
    `int length = s.size(); //Gives the size of the set`
    Insertion:
    `s.insert(x); //Inserts an interger x into the set s.`
    Erasing an element:
    `s.erase(x); //Erases an integer val from the set s.`
    Finding an element:
    //Gives the iterator to the element val 
    // if it is found otherwise return s.end()
    `set<int>::iterator it = s.find(x); `
    //If 100 is not present, then it == s.end().
    `Ex: set<int>::iterator itr=s.find(100);` 
    
    To know more about sets click here. 
    Comming to the problem, 
    you will be given Q queries.
    
    Each query is of one of the following three types:
    1 x: Add an element x to the set.
    2 x: Delete an element x from the set.
        (if  the number x is not present in the set,
        then do nothing)
    3 x: If the number x is present in the set,
        then print "Yes" (without quotes)
        else print "No" (without quotes).

    **Input format:**
    The first line of the input contains Q
    where Q is the number of queries.
    The next Q lines contain 1 query each.
    Each query consists of two integers y and x 
    where y is the type of query and x is an integer.
    
    **Output format:**
    For queries of type 3 print 
    "Yes"(without quotes) if the number x is present int the set
    and if the number is not present,
    then print "No"(without quotes).
    Each query of type 3 should be printed in a new line.
    **Sample Input:**
    ```
    8
    1 9
    1 6
    1 10
    1 4
    3 6
    3 14
    2 6
    3 6
    ```
    **Sample Output:**
    ```
    Yes
    No
    No
    ```
    */
    int n;
    std::cin >> n;
    std::set<int> s;
    for (int i = 0; i < n; i++) {
        int queryType, x;
        std::cin >> queryType >> x;
        static std::set<int> s;
        if (queryType == 1) {
            s.insert(x);
        } else if (queryType == 2) {
            s.erase(x);
        } else if (queryType == 3) {
            //std::set<int>::iterator itr = s.find(num);
            //if(itr!= s.end()){
            if (s.find(x) != s.end()) {
                std::cout << "Yes\n";
            } else {
                std::cout << "No\n";
            }
        }
    }
    return 0;
}