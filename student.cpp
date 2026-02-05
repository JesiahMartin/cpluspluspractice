#include <iostream>
#include <string>

class Student{
    public:
    student();
    student(const char* major_, const char* name_);

    char* getname();
    char* getclass();
    char* getid();
    void printinfo();
    void setinfo();
    void setname();
    void setclass();
    void setid();
    void setmajor();
    
    private:
    char* name;
    int age;
    int grade;
    int studentID;
    char classification;

}