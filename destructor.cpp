// memory deallocate 
// name=class name
// created when class is created
//you can create your own destructor
// no i/p parameter
//no return type
#include<iostream>
using namespace std;
class hero
{  
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
        cout<<"constructor is called"<<endl;
        name=new char[100];
    }
    hero(hero& temp)
    {
        char *ch=new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name=ch;
       this->health=temp.health;
       this->level=temp.level;
       
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
    void setname(char name[])
    {
        strcpy(this->name,name);
    }
    ~hero()
    {
        cout<<"destructor is called"<<endl;
    }
};
int main(){
    
   hero s;
  
  hero *b=new hero();
  // destructor is called only once because static allocated object destructor called auyomatically;
  delete b; // manually destructor call for dynamic allocation
    return 0;
}