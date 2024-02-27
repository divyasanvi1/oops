#include<iostream>
using namespace std;
class hero
{   //shallow copy-default copy constructor memory address shared
    //properties or data members
   private:
    int health;
     public:
    char level;
    char *name;
    void print()
    {   
        cout<<this->name<<endl;
        cout<<this->level<<endl;
    }
    hero()
    {
        name=new char[100];
    }
    // hero(hero& temp)
    // {// & because if we pass by value then it will go in 
    //    this->health=temp.health;
    //    this->level=temp.level;
    //    //default copy constructor gets killed
    // }
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
    void setname(char name[])
    {
        strcpy(this->name,name);
    }

};
int main(){
    
   hero s;
   char name[6]="divya";
   s.setname(name);
   
   s.print();
   hero r(s);
   // hero r=s;
   r.print();
   s.name[0]='s';
   s.print();
    r.print();
    return 0;
}