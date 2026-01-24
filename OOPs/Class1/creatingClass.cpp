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
    int *gpa;

    // constructor: Default ctor
    Student()
    {
        cout<<"Student Default ctor called"<<endl;
    }

    // ctor: Parameterized ctor
      Student(int id, int age, string name, int nos, float gpa)
    {
        cout<<"Student Default ctor called"<<endl;
        this->id = id;
        this->age = age;
        this->name = name;
        this-> nos = nos;
        this->gpa = new int();
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
};

int main()
{
        // Student A;
        // A.id = 1;
        // A.age = 15;
        // A.name = "Ranu";
        // A.nos = 6;

        // A.study();

        //  Student A(1, 15, "Ranu", 6);
        //   Student B(2, 16, "Rahul", 7);
        //    Student C(1, 15, "Pyush", 6);
        //     Student D(1, 15, "Kunali", 6); 


            // cout<<A.name<<" "<< A.age<<endl;

            // A.bunk();
            // B.sleep();


            // copy ctor
            // Student C = A;

            // cout<<C.name<<" "<<A.name<<endl;

            // Dynamic allocation, or Student pointer
            // Student *A = new Student(1, 14, "Babban", 7, 9.8);

            // cout<< A->name<<endl;
            // cout<<A->age<<endl;
            // A->study();
            // when we allocate memory using pointer we have to free 
            // delete A; 
            return 0;

}