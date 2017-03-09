#include <iostream>
#include <fstream>
#include <vector>
#include <stack>

using namespace std;


void DisplayDim1(vector<char> v1)
{
    for (int i=0; i<v1.size(); i++)
    {
        cout << v1[i];
    }
    cout << endl;
}

void DisplayDim2(vector< vector <char> > v2)
{
    cout << "two dimensional vector" << endl;
    cout << v2.size() << endl;
    for(int j=0; j<v2.size(); j++)
    {
       for(int k=0; k<v2[0].size(); k++)
       {
            cout << v2[j][k];
       }
       cout << endl;
    }
    cout << endl;
}

int main()
{
    char NewColor, previousColor;
    bool Found;
    int row, column;
    string str;
    vector<char> VecDim1;
    vector<int> position;
    vector< vector<char> > VecDim2;
    stack<vector<int> > StackofPositions;
    vector<int> TopEle;
    ifstream Inputfile;
    ifstream Fp1;
    Inputfile.open("fakeImage.txt");
    while(getline(Inputfile, str))
    {
        for (int i=0; i<str.size(); i++)
        {
            VecDim1.push_back(str[i]);
        }
        VecDim2.push_back(VecDim1);
        VecDim1.clear();
    }
    DisplayDim1(VecDim1);
    DisplayDim2(VecDim2);

    cout << "enter the row;" << endl;
    cin >> row;
    cout << "enter the column:" << endl;
    cin >> column;
    cout << "enter the new color:" << endl;
    cin >> NewColor;
    cout << "At" <<row << "," << column << "new color is" << NewColor << endl;
    cout << "old color :" << VecDim2[row-1][column-1] << endl;
    position.push_back(row-1);
    position.push_back(column-1);
    cout << "value in stack :" << position[0] << "," << position[1];
    StackofPositions.push(position);
    previousColor=VecDim2[position[0]][position[1]];
    VecDim2[position[0]][position[1]] = NewColor;
    position.clear();
    TopEle = StackofPositions.top();
//    cout << "TopElements:" << TopEle[0]<<"," << TopEle[1]<< endl;
    do {
    for(int i=-1; i<=1; i++)
    {
        cout << "loop1" << endl;
        for(int j=-1; j<=1; j++)
        {
            cout << "loop2" << endl;
            if (!((i==0)&&(j==0)))
            {
                cout << "if1" << endl;
                cout << TopEle[0]+i << " " << TopEle[1]+j << endl;
                if((TopEle[0]+i)>=0 && (TopEle[1]+j)>=0 && (TopEle[0]+i)<VecDim2.size() && (TopEle[1]+j)<VecDim2[0].size())
                {
                    cout << "if2" << endl;
                    cout << VecDim2[TopEle[0]+i][TopEle[1]+j] << "previous color is " << previousColor << endl;
                    if(VecDim2[TopEle[0]+i][TopEle[1]+j]==previousColor)
                    {
                        cout << "if3" << endl;
                        position.push_back(TopEle[0]+i);
                        position.push_back(TopEle[1]+j);
                        StackofPositions.push(position);
                        cout << "Pushed to stack" << endl;
                        VecDim2[TopEle[0]+i][TopEle[1]+j] = NewColor;
                        cout << "new color " << NewColor << endl;
//                        Count++;
//                        cout << "Count is " << Count << endl;
                    }
                    position.clear();
                }
            }
        }
    }
        TopEle = StackofPositions.top();
        cout << "TopElements:" << TopEle[0]<<"," << TopEle[1]<< endl;
        StackofPositions.pop();
        DisplayDim2(VecDim2);
    }while(!StackofPositions.empty());

//        VecDim2 = Search(TopEle, previousColor, NewColor, VecDim2);
    return 0;
}




