// Exercise 1
// Lab 10
// Spring 2015

#include <iostream>
using namespace std;

// 1.
void stars (int n) {
    if(n>0) {
        cout << "*";

        stars(n-1);
    }
}
void rightTriangle (int n) {
    if (n>0) {

        rightTriangle (n-1);
        cout << endl;
        stars(n);

    }
}

void squareRec (int n1, int n2) {
    if (n1>0) {
        squareRec (n1-1,n2);
        cout << endl;
        stars(n2);
    }
}

void square (int n) {
    squareRec(n,n);
}


// 2.

void firstToLast (float numbers[], int size) {
    if (size > 1) {
        firstToLast (numbers,size-1);
        swap(numbers[size-1], numbers[size-2]);
    }
}


// 3.
string encrypt (string str) {
    if (str.empty())
        return "";
    else {
        string result = encrypt (str.substr(1,str.size()-1));
        char x;
        if (str[0]!=' ') {
            x = str[0]^'5';
        } else {
            x = ' ';
        }
        return x+result;
    }
}

int main () {

    // Test rightTriangle and square
    rightTriangle (4);
    cout << endl;
    square(4);
    cout << endl;

    // Test firstToLast function
    cout << "first-to-last function " << endl;
    float arr1[4] = {8.1, 9.9, 5.6, 7.8};

    for (int i=0; i<4; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    firstToLast(arr1,4);
    for (int i=0; i<4; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    // Test encrypt function
    cout << "encrypt(\"energy\")  "
    << encrypt("energy");
    cout << endl;
    cout << "encrypt(\"I am kilroy\")  "
    << encrypt("I am kilroy");
    cout << endl;

}
