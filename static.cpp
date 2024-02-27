// static
#include<iostream>
using namespace std;
class hero
{  
private:
int health;
    public:
char level;
char *name;
static int timetocomp;
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
int hero :: timetocomp=5;
int main(){
cout<< hero :: timetocomp<<endl;//recommende because static is related to class not objects
hero s;
cout<<s.timetocomp<<endl; //not recommended this way
hero p;
p.timetocomp=10;
cout<<s.timetocomp<<endl;
cout<<p.timetocomp<<endl;
return 0;
}