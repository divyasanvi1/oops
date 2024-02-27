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

    hero(hero& temp)
    {// & because if we pass by value then it will go in 
       this->health=temp.health;
       this->level=temp.level;
       //default copy constructor gets killed
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
    
   hero s(70,'c');
   //cout<<s->level; s is not a pointer
   //copy constructor
   // when we write class then by default a copy constructor gets generated
   hero r(s);
   r.print();
    return 0;
}