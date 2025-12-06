#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>

int main() {
    /* 
    Maps are a part of the C++ STL.
    Maps are associative containers
    that store elements formed 
    by a combination of a key value
    and a mapped value,
    following a specific order.
    The mainly used member functions of maps are: 
    Map Template:
    `std::map<key_type, data_type>`   
    Declaration:
    //Creates a map of key type integer 
    // and data type string
    `map<int, string>m; `
    Size:
    // Gives the size of the map.
    `int length = m.size();`
    Insert:
    // Here the pair is inserted into the map
    // where the key is "hello"
    // and the value associated with it is 9.
    `m.insert(make_pair("hello",9)); `
    Erasing an element:
    // Erases the pair from the map where the key_type is val.
    `m.erase(val);`
    Finding an element:
    // Gives the iterator to hte element val
    // if it is found otherwise return m.end().
    `map<string,int>::iterator itr=m.find(val);`
    //If Maps is not present as the key value then itr ==m.end().
    `Ex: map<string,int>::iterator itr=m.find("Maps");`
    Accessing the value stored int the key:
    `To get the value stored of the key "Maps"
    we can do m["Maps"] or we can get the iterator
    using the find function adn then by itr->second we con access the value.`
    
    To know more about maps click here.
    You are appointed as the assistant to
    a teacher in a school and
    she is correcting the answer sheets of the Students.
    Each student can have multiple answer sheets.
    So the teacher has Q queries:
    1 X Y: Add the marks Y to the student whose name is X.
    2 X: Erase the marks of the students whose name is X.
    3 X: Print the marks of the student whose name is X.(If X didn't get any marks print 0)

    **Input format:**
    The first line of the input contains Q 
    where Q is the number of queries.
    The next Q lines contain 1 query each.
    The first integer, type of each query 
    is the  type of the query.
    If query is of type 1, 
    it consists of one string 
    and an integer X and Y
    where X is the name of the student 
    and Y is the marks of the student.
    If query is of type 2 or 3, 
    it consists of a single string x 
    where X is the name of the student.
    
    **Output format:**
    For queries of type 3 print the marks of the given student.

    */
    int Q;
    std::cin >> Q;
    std::map<std::string, int> marksMap;
    for (int i = 0; i < Q; ++i) {
        int queryType;
        std::cin >> queryType;
        if (queryType == 1) {
            std::string name;
            int marks;
            std::cin >> name >> marks;
            marksMap[name] += marks;
        } else if (queryType == 2) {
            std::string name;
            std::cin >> name;
            marksMap.erase(name);
        } else if (queryType == 3) {
            std::string name;
            std::cin >> name;
            std::map<std::string, int>::iterator itr= marksMap.find(name);
            if(itr== marksMap.end()){
                std::cout << 0 << "\n";
                continue;
            }
            else{
                std::cout << itr->second << "\n";
                //std::cout << marksMap[name] << "\n";
            }
            
        }
    }
    return 0;
}