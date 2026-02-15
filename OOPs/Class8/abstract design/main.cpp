#include<iostream>
#include "bird.h"
using namespace std;





void birddoesSomething(Bird *&bird)
{
    bird->eat();
    bird->fly();
    bird->eat();
    bird->eat();
    bird->fly();
    bird->eat();
    bird->eat();
    bird->fly();
    bird->eat();
}


int main()
{
    Bird *bird = new sparrow();
    birddoesSomething(bird);


    // Bird *b2 = new Bird();

    return 0;
}