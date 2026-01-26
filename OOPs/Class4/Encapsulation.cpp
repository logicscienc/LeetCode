#include<iostream>
#include<string>

using namespace std;


class Student
{
    public:
      
    //    Attributes
    int id;
    int age;
    string name;
    int nos;

private:
    int *gpa;
    string gf;

    // constructor: Default ctor

public:
    Student()
    {
        cout<<"Student Default ctor called"<<endl;
    }

    // ctor: Parameterized ctor
      Student(int id, int age, string name, int nos, float gpa, string gf)
    {
        cout<<"Student Default ctor called"<<endl;
        this->id = id;
        this->age = age;
        this->name = name;
        this-> nos = nos;
        this->gpa = new int();
        this->gf = gf;
    }

// copy ctor
      Student(const Student &srcobj)
    {
        cout<<"Student copy ctor called"<<endl;
        this->id = srcobj.id;
        this->age = srcobj.age;
        this->name = srcobj.name;
        this-> nos = srcobj.nos;
    }

    // Behaviour / Methods/ Functins
    void study()
    {
        cout<<this->name << "Studying"<< endl;
    }

    void sleep()
    {
        cout<<this->name<< "Sleeping"<< endl;
    }

    void bunk()
    {
        cout<<this->name<< "Bunking"<<endl;
    }

    // dtor: disturctor
    ~Student()
    {
        cout<<"Student Default dtor called" << endl;
        delete this->gpa;
    }

private:
   void gfchatting()
   {
     cout<<this->name<<"chatting with gf"<<endl;
   }
};

int main(){
    Student A(1, 12, "John", 5, 7.9, "Menu");
     

    A.id;


    return 0;
}