#include <iostream>
#include <sstream>
#include <algorithm>

/*
Enter code for class Student here.
Read statement for specification.

Classes in C++ are user defined types
declared with keyword class
that has data and functions.
Although classes and structures
have the same type of functionality(Uncountable noun),
there are some basic differences.
The data members of a class 
are private by default 
and the members of a structure 
are public by default.
Along with storing multiple data
in a common block,
it also assigns some functions
(known as methods)
to manipulate/access them.
It servers as the building block
of Object Oriented Programming.

It also has access specifiers,
which restrict the access of member elements.
The primarily used ones are the following:

- public: 
Public members
(variables, methods)
can be accessed 
from anywhere the code is visible.
- private:
Private members can be accessed
only by other member functions,
and it can not be accessed outside of class.

Class can be represented in the form of:

```
class ClassName {
    access_specifier1:
        type1 val1;
        type2 val2;
        ret_type1 method1(type_arg1 arg1, type_arg2 arg2,...)
        ...
    access_specifier2:
        type3 val3;
        type4 val4;
        ret_type2 method2(type_arg3 arg3, type_arg4 arg4,...)
        ...
};

It's a common practice
to make all variables private,
and set/get them using  public methods. 
For example,
We can store details
related to a student in a class
```

class SampleClass {
    private:
        int val;
    public:
        void set(int a) {
            val = a;
        }
        int get() {
            return val;
        }
};

We can store details 
related to a student 
in a class consisting 
of his age(int),
first_name(string),
last_name(string)
and standard(int).
You have to created a class, 
named Student, 
representing the student's details, 
as mentioned above,
and store the data of student.
Create setter and getter functions 
for each element: 
that is, the class should at least 
have following functions:
- get_age, set_age;
- get_first_name, set_first_name;
- get_last_name, set_last_name;
- get_standard, set_standard;
Also, you have to create another method `to_string()`, 
which returns the string 
consisting of the above elements,
separated by a comma(,). 
You can refer to stringstream for this.

Input will consist of four lines.
The first line will contain an integer,
representing the age.
The second line will contain a string,
consisting of lower-case Latin charaters(a-z),
represneting the first_name of a student.
The third line will contain another string, 
consisting of lower-case Latin charaters(a-z),
representing the last_name of a student.
The fourth line will contain an integer,
representing the standard of student.
Note: 
The number of charaters  
in first_name and last_name wil not exceed 50.

*/

const size_t MAX_NAME_LENGTH{50}; // define constant with length or index or size, (unsigned int) 

class Student {
  private:
    int age;
    std::string first_name;
    std::string last_name;
    int standard;

    //define a helper function to validate name 
    bool is_valid_name(const std::string& name) const { 
         
        return std::all_of(name.begin(), name.end(), [](char c) { 
            return c >= 'a' && c <= 'z'; 
        }); 
    } 
  public:   
    void set_age(int age_){
        this->age = age_; 
    }
    int get_age(){
        return this->age; 
    } 
    void set_first_name(std::string first_name_){
        if (first_name_.length() > MAX_NAME_LENGTH) {
            this->first_name= "null";
        }
        else if(!is_valid_name(first_name_)) {
            this->first_name= "null";
        }
        else{
            this->first_name= first_name_;
        }
         
    }
    std::string get_first_name(){
        return this->first_name; 
    } 
    void set_last_name(std::string last_name_){
        if (last_name_.length() > MAX_NAME_LENGTH) {
            this->last_name= "null";
        }
        else if(!is_valid_name(last_name_)) {
            this->last_name= "null";
        }
        else{
            this->last_name= last_name_;
        }
    }
    std::string get_last_name(){
        return this->last_name; 
    } 
    void set_standard(int standard_){
        this->standard = standard_; 
    }
    int get_standard(){
        return this->standard; 
    }
    std::string to_string(){
        std::stringstream ss;
        ss << this->age << "," << this->first_name<< "," << this->last_name<<"," << this->standard;
        
        return ss.str(); 
    }
};

int main() {
    int age, standard;
    std::string first_name, last_name;
    
    std::cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    std::cout << st.get_age() << "\n";
    std::cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    std::cout << st.get_standard() << "\n";
    std::cout << "\n";
    std::cout << st.to_string();
    
    return 0;
}