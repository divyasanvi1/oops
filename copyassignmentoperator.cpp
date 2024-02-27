#include<iostream>
using namespace std;
class hero
{  // deepcopy -copy of name array is created 
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

};
int main(){
    
   hero s;
   char name[6]="divya";
   s.setname(name);
   
   //s.print();
   hero r(s);
   // hero r=s;
   //r.print();
   s.name[0]='s';
   s.print();
    r.print();
    s=r;
    s.print();
    r.print();
    return 0;
}