#include<iostream>
using namespace std;

class Employee{
int id;
public:

  Employee(int _id){
      id=_id;
  }

  virtual void display(){
    cout<< " I am an employee"<<endl;
  }

  void setID(int _id){
    id=_id;
  }

  int getId(){
    return id;
  }

  /*
   Employee(const Employee& other);
   Employee operator=(const Employee& other);
   automatically created functions constructor, destructor, copy constructor, assignment operator , & opeartor
  */
};

class Developer:public Employee
{
  string language;
public:
  Developer(int _id,string _language):Employee(_id),language(_language){}

//function over riding
virtual void display(){
  cout<<" I am developer"<<endl;
}

};

class SeniorDeveloper: public Developer{
  int yearsOfExp;
public:
  SeniorDeveloper(int _id,string _language,int yoe):Developer(_id,_language){
    yearsOfExp=yoe;
  }

  virtual void display(){
    cout<<" I am senior developer"<<endl;
  }
};


int main(){

  Employee *e1=nullptr;
  Developer d(2,"C++");
  SeniorDeveloper sd(2,"C++",3);
  e1=&d;
  e1->display();
  // a base class pointer/reference can pointer to any of the derived objects
//   Employee *e1=nullptr;
//   Developer d(2,"C++");
//   SeniorDeveloper sd(2,"C++",3);
// d.display();
// sd.display();

  return 0;
}
