#include<iostream>
#include<string>

using namespace std;


class Vehicle
{

    protected:
    string name;
    public:
     
     string model;
     int noOfTyres;


     string getName()
     {
        return this->name;
     }

     Vehicle(string _name, string _model, int _noOfTyres)
     { 
        cout<<"I am inside vehicle ctor"<<endl;
        this->name = _name;
        this->model = _model;
        this->noOfTyres = _noOfTyres;
     }

    public:
    void start_engine()
    {
        cout<<"Engine is starting"<<name<<" "<<model<<endl;
    } 

    void stop_engine()
    {
        cout<<"Engine is stopping"<<name<<" "<<model<<endl;
    }
};

class Car : public Vehicle
{
    public:
    int noOfDoors;
    string transmissionType;

    Car(string _name, string _model, int _noOfTyres, int _noOfDoors, string _transmissionType) : Vehicle(_name, _model, _noOfTyres)

    {
        cout<<"I am inside Car ctor"<<endl;
        this->noOfDoors = _noOfDoors;
        this->transmissionType = _transmissionType;
    }

    void startAC()
    {
        cout<<"AC has started of"<<name<<endl;
    }
};

int main()
{
    Car A("Maruti 800", "LXI", 4, 4, "Manual");
    A.start_engine();
    A.startAC();
    A.stop_engine();
    return 0;
}