#include<iostream>
using namespace std;
class hero
{   
    //properties or data members
   private:
    int health;
     public:
    char level;
    void print()
    {
        cout<<level<<endl;
    }
    hero()
    {
        cout<<"constructor gets called"<<endl;
    }
    int gethealth()
    {
        return health;
    }
     char getlevel()
    {
        return level;
    }
    void sethealth(int h)
    {   
       
        health=h;
    }
     void setlevel(char h)
    {
       level=h;
    }

};
int main(){
    //constructor -
    //no return type
    //invoked at time of object creation
    hero ramesh;
    //ramesh.hero() gets called behind the scene automatically
    //default constructor -
    //no i/p
    // ramesh.hero() gets called when object is created and when the 
    //a function has also the same name then it also gets called automatically
    //system's default constructor died
    return 0;
}