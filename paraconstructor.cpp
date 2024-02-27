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
    hero ( int health)
    {  
        // this is pointer to current object address
       this->health=health;
       cout<<this<<endl;
    }
    hero(int health,char level)
    {
        this->health=health;
        this->level=level;
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
    
    hero ramesh(10);
    cout<<ramesh.gethealth()<<endl;
    cout<<&ramesh<<endl;
    hero uu(10,'A');
   // hero tt; no because if even if one cnstructor is made then default doesnot gets called
    return 0;
}