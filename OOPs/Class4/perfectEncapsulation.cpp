#include<iostream>
#include<string>

using namespace std;


class Student
{
    private:
      
    //    Attributes
    int id;
    int age;
    string name;
    int nos;
    float *gpa;
    string gf;

    // constructor: Default ctor

public:

   void setGpa(float a)
   {
    *this->gpa = a;
   }

   float getGpa() const{
    return *this->gpa;
   }

   float getAge() const{
    return this->age;
   }
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
        this->gpa = new float(gpa);
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

int main()
{
    Student A(1, 12, "Ranu", 5, 7.8, "Menu");

     A.setGpa(8.9);

     cout<<A.getGpa()<<endl;

     cout<<A.getAge()<<endl;
    return 0;
}