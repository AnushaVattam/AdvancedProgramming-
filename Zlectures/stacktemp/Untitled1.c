/*
 *flood_fill.cpp
 *
 *Olaf Alexander - 2015-03-05
 *
 *The flood fill driver will take a psuedo-picture and given a set of
 *coordinace change that "color" and all touching, matching "colors" to a new
 *value. This driver uses the Stack_3358 ADT as a form of memory to store
 *locations that need to be changed.
 */

#include <iostream>
#include <fstream>
#include "stack_3358.h"

using namespace std;


const int MAX_COL = 25;
const int MAX_ROW = 25;

// Define structure to hold x, y coordinates
struct coor {
 int x,
     y;
};


/* Function:   readPict
 * Parameters: file (istream), pict (2D char array), totalRow (int), totalCol
 *             (int)
 * Returns:    Void - The fake image in file is saved in the 2D array pict with
 *             totalRow and totalCol being passed back as the largest row and
 *             column that has image data in array
 */
void readPict ( ifstream &file, char pict[][MAX_COL], int &totalRow, int &totalCol );

/* Function:   displayPict
 * Parameters: pict (2D char array), totalRow (int), totalCol (int)
 * Returns:    Void - The 2D array pict is displayed on the screen. totalRow and
 *             totalCol are the largest row and column that actually has data in
 *             it.
 */
void displayPict ( char pict[][MAX_COL], int totalRow, int totalCol );

int main ( int argc, char *argv[] ) {

 char picture[MAX_ROW][MAX_COL];  // picture holds the "colors" that are passed
                                  // from the image through the commandline

 coor loc;                        // loc will store the coordinates in 2D array

 Stack_3358 <coor> matchedStack;  // matchedStack will hold all matching
                                  // items in found around searched coordinate
 int rows,                        // total rows in fake picture
     cols;                        // total cols in fake picture

 int userRow,                     // Store user's chosen row
     userCol;                     // Store user's chosen column

 char color,                      // Store user's color choice
      origColor;                  // Store original color at location

 // Open file that was passed as an argument
 ifstream inFile;
 inFile.open ( argv[1] );

 // Get fake picture and put in array
 readPict ( inFile, picture, rows, cols );

 cout << "Type -1 to exit" << endl << endl;

 // Loop until -1
 do {
    displayPict ( picture, rows, cols );

    cout << "Enter a row : ";
    cin >> userRow;
    while ( userRow > MAX_ROW ) {
       cout << "Must be less than " << MAX_ROW << ": ";
       cin >> userRow;
    }

    if ( userRow != -1 ) {
       cout << "Enter a column : ";
       cin >> userCol;
       while ( userCol > MAX_COL ) {
          cout << "Must be less than " << MAX_COL << ": ";
          cin >> userCol;
       }
    }

    if ( userRow != -1 && userCol != -1 ) {

       cout << "Enter a color : ";
       cin >> color;

       loc.x = userCol;
       loc.y = userRow;
       origColor = picture[userRow][userCol];

       matchedStack.push ( loc );

       while ( !matchedStack.isEmpty ( ) ) {
          loc = matchedStack.pop ( );
          picture[loc.y][loc.x] = color;

          // Look at eight spots around loc
          coor temp = {loc.x - 1, loc.y - 1};

          // Upper right corner
          if ( ( temp.y > 0 ) && ( temp.x > 0 ) && ( picture[temp.y][temp.x] == origColor ) ) {
             matchedStack.push ( temp );
          }
          // Upper middle
          temp.x++;
          if ( ( temp.y > 0 ) && ( picture[temp.y][temp.x] == origColor ) ) {
             matchedStack.push ( temp );
          }
          // Upper left corner
          temp.x++;
          if ( ( temp.y > 0 ) && ( temp.x < MAX_COL ) && ( picture[temp.y][temp.x] == origColor ) ) {
             matchedStack.push ( temp );
          }
          // Middle right
          temp.y++;
          if ( ( temp.x < MAX_COL ) && ( picture[temp.y][temp.x] == origColor ) ) {
             matchedStack.push ( temp );
          }
          // Middle left
          temp.x -= 2;
          if ( ( temp.x > 0 ) && ( picture[temp.y][temp.x] == origColor ) ) {
             matchedStack.push ( temp );
          }
          // Bottom left corner
          temp.y++;
          if ( ( temp.y < MAX_ROW ) && ( temp.x > 0 ) && ( picture[temp.y][temp.x] == origColor ) ) {
             matchedStack.push ( temp );
          }
          // Bottom middle
          temp.x++;
          if ( ( temp.y < MAX_ROW ) && ( picture[temp.y][temp.x] == origColor ) ) {
             matchedStack.push ( temp );
          }
          // Bottom right corner
          temp.x++;
          if ( ( temp.y < MAX_ROW ) && ( temp.x < MAX_ROW ) && ( picture[temp.y][temp.x] == origColor ) ) {
             matchedStack.push ( temp );
          }

       }

    }

 } while ( userRow != -1 && userCol != -1 );


 return 0;
}


void readPict ( ifstream &file, char pict[][MAX_COL], int &totalRow, int &totalCol ) {
 int row = 0;        // row and col are used to loop through
 int col = 0;        // file and place in 2D array of pict

 while ( file.get ( pict[row][col] ) && row < MAX_ROW && col < MAX_COL ) {
    if ( pict[row][col] == '\n' ) {
       row++;
       col = 0;
    }
    else
       col++;
 }

 totalRow = ++row;
 totalCol = ++col;

 // Reset stream position for file
 file.clear ( );
 file.seekg ( 0 );
}



void displayPict ( char pict[][MAX_COL], int totalRow, int totalCol ) {

 // Print all printable and control characters in array
 for ( int i = 0; i < totalRow; i++ ) {
    for ( int j = 0; j < totalCol; j++ )
       cout << pict[i][j];
 }
 cout << endl << endl;
}
