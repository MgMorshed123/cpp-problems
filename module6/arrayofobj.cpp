#include<bits/stdc++.h>
using namespace std;
class Student
{
   public: 
   string name;
   int roll;
   int marks;



};
int main(){
  Student  a[2];
  for (int  i = 0; i < 2; i++)
  {
    getline(cin,a[i].name);
    cin>>a[i].roll>> a[i].marks;
    cin.ignore();
  }


  for (int  i = 0; i < 2; i++)
  {

    cout<<a[i].name << " " << a[i].roll << " "<< a[i].marks<<endl;

  }
  


return 0;
}
/*  IF WE ARE USING ARRAY OF OBJECT WE CAN NOT GIVE COTSTRUCTOR  , BCZ ARRAY CAN NOT PASS ALL THE CONSTRUCTOR 

//    Student(string name, int roll, int marks) {

//         this->name = name;
//         this->roll = roll;
//         this->marks = marks;
//    }


*/