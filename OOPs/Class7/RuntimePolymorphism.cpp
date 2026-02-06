#include<iostream>
using namespace std;



class Shape
{
    public:
      void draw()
      {
        cout<<"Generic drawing....."<<endl;
      }
};

class Circle : public Shape{
    public:
    void draw()
    {
        cout<<"circle drawing....."<<endl;
    }
};

class Rectangle : public Shape{
    public:
    void draw()
    {
        cout<<"Rectangle drawing....."<<endl;
    }
};


class Triangle : public Shape{
    public:
    void draw()
    {
        cout<<"Triangle drawing....."<<endl;
    }
};

void ShapeDrawing(Shape *s)
{
    s->draw();    //draw is polymorphic.
}






int main()
{
   Circle C;
   Rectangle r;

   ShapeDrawing(&C);
   ShapeDrawing(&r);
   

   Triangle *t = new Triangle();
   ShapeDrawing(t);

//    upcasting
Shape *s = new Circle();
s->draw();

    return 0;
}