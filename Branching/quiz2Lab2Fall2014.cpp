#include <iostream>

using namespace std;
int main ()
{
    string name,FinalName;
    int  students;
    float  quizAvg, LabAvg, FinalExam,totalAvg=0;

    cout << "Please enter the number of students;";
    cin >> students;

    for(int i =1 ; i<= students ; i++)
    {
        cout << "please enter the name, quiz avg, lab avg, and final exam :" << endl;
        cin >> name >> quizAvg >> LabAvg >> FinalExam;

        totalAvg = (0.25*quizAvg+0.25*LabAvg+0.50*FinalExam);

        if(totalAvg > 90)
        {
          cout << "Name = " << name << endl;
          cout << "Average = " << totalAvg << endl;
          cout <<  "Grade = A " << endl;
        }

        else if(totalAvg >= 80)
        {
            cout << "Name = " << name << endl;
            cout << "Average = " << totalAvg << endl;
            cout << "Grade = B " << endl;
        }

        else
        {
            cout << "Name = " << name << endl;
            cout << "Average = " << totalAvg << endl;
            cout << "Grade = F " << endl;
        }

    }
}

