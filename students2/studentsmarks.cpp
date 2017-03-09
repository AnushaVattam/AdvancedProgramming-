#include <iostream>
#include <fstream>
#include <vector>

string getgrade();
using namespace std;

int main()
{
   ifstream inputfile;
   inputfile.open("names.txt");
   string name;
   int marks;
   string grade;
   grade=getgrade();

   vector<string>student_names(50);
   //vector<int>student_marks(50);




while(!inputfile.eof())
{
  grade = getgrade();
}
  while(!inputfile.eof())
{
      inputfile>>name;
    for (vector<string>::size_type i = 0; i < 10; i++)
    {
    inputfile>>student_names[i];
    }
    for (vector<string>::size_type i = 0; i < 10; i++)
    {
    cout<<"student names:"<<student_names[i]<<endl;
    }
}
    return 0;
}
string getgrade()
{
    string nameofStudent;
    cout<< "student name:" <<name<< endl;
    cout<< "grade/status:" << grade << endl;
}
