#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric> // Cần cho std::accumulate

const int maxExams{5};
// Write your Student class here
class Student{
    
    private:
        std::vector<int> scores;
    public:
        void input(){
            int x;
            for(int i =0; i<maxExams; i++){
                if(std::cin>>x){
                    scores.push_back(x);
                }
                else {
                    break;
                }
            }
        }
        int calculateTotalScore(){
            return std::accumulate(this->scores.begin(),this->scores.end(), 0); // accumulate from 0 and then add each one by one.
        }
};

int main() {
    /* 
    Enter your code here. Read input from STDIN. Print output to STDOUT 
    
    A class defines a blueprint( một bản thiết kế)
    for a object.
    We use the same syntax 
    to declare objects of a class 
    as we use to declare variables 
    of other basic types. For example:
    
    Kristen a contender (ứng cử viên)
    for valedictorian of her high school (cho vị trí thủ khoa của trường trung học)
    She wants to know 
    how many students(if any) 
    have scrored higher than her 
    in the 5 exams.
    given during this semester.
    Create a class named Student 
    with the following specifications:
    - An instance variable named scores
        to hold a student's 5 exams scores.
    - A void input() function 
        that reads 5 integers 
        and saves them to scores. 
    - An int calculateTotalScore() function
        that returns the sum of the student's scores.

    Input Format: 
    Most of the input is handled 
    for you by th locked code  
    in the editor. 
    In the void Student::input() function, 
    you must read 5 scores from stdin 
    and save them  
    to your scores instance variable.  
    
    INPUT:
    3
    30 40 45 10 10
    40 40 40 10 10
    50 20 30 10 10
    
    OUTPUT:
    1
    */    
    int n; // number of students
    std::cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    std::cout << count;

    return 0;
}
