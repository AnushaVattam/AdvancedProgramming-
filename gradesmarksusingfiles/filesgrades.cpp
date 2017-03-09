#include <iostream>
#include <fstream>
#include <vector>


using namespace std;

int main()
{
   vector<string> student_names;
   vector<int> student_marks;
   string str;
   int marks;
   ifstream InputFile;
   InputFile.open("students.txt");
    //cout << str << endl;
/*   while (!InputFile.eof())
   {
       getline(InputFile, str);
       cout << str << endl;
   }*/

   while(!InputFile.eof())
   {
//      InputFile>>str;
      InputFile>>str;
      student_names.push_back (str);
      cout << str << endl;
      InputFile>>marks;
      student_marks.push_back (marks);
   }
   string Name;
   int Index;
   cout << "input student name to get results" << endl;
   cin >> Name;
   int k;
   for(k=0; k<student_names.size(); k++)
   {
       if (student_names[k]==Name)
       {
           Index = k;
           break;
       }
   }
   cout << "size of vector is " << student_names.size() << endl;
   if (k==student_names.size())
   {
       cout << "Name entered is not in the list" << endl;
       return 0;
   }
   if (student_marks[Index] < 35)
   {
       cout << Name << " failed the exam with " << student_marks[Index] << "marks" << endl;
   }
   else if (student_marks[Index] > 70)
   {
       cout << Name << " has First class with distinction with " << student_marks[Index] << "marks" << endl;
   }
   else if (student_marks[Index] > 60)
   {
       cout << Name << " has First class with " << student_marks[Index] << "marks" << endl;
   }
   else
   {
       cout << Name << " Just passed the exam with " << student_marks[Index] << "marks" << endl;
   }


/*   while(!InputFile.eof())
   {
      InputFile>>marks;
      for (vector<int>::size_type j = 0; j < 10; j++)
      {
          marks>>student_marks[j];
      }
      for (vector<int>::size_type j = 0; j < 10; j++)
      {
          cout<<"student marks"<<student_marks[j]<<endl;
      }
    }*/
return 0;
}

