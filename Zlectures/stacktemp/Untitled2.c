/*
 * flood_fill_recursive.cpp
 *
 * Olaf Alexander - 2015-04-01
 *
 * The flood fill driver will take a psuedo-picture and given a set of
 * coordinace change that "color" and all touching, matching "colors" to a new
 * value. It is based off of a recursive algorithm for the flilling of color.
 */

#include <iostream>
#include <fstream>

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

/* Function:   fillFlood
 * Parameters: pict (2D char array of original picture), posX (int that stores
 *             X location in pict), posY (int that stores Y location in pict),
 *             oldCol (char that stores original color), newCol (char that
 *             stores new color)
 * Returns:    Void - The original pict is flood-filled with the new "color"
 */
void fillFlood ( char pict[][MAX_COL], int posX, int posY, char oldCol, char newCol );

int main ( int argc, char *argv[] ) {

 char picture[MAX_ROW][MAX_COL];  // picture holds the "colors" that are passed
                                  // from the image through the commandline

 coor loc;                        // loc will store the coordinates in 2D array

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

    }

    fillFlood ( picture, loc.x, loc.y, origColor, color );

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


void fillFlood ( char pict[][MAX_COL], int posX, int posY, char oldCol, char newCol ) {

   // Base case - bounds check or pos is not part of the original color
   if ( posX < 0 || posY < 0 || posX >= MAX_COL || posY >= MAX_ROW || pict[posY][posX] != oldCol )
      return;

   pict[posY][posX] = newCol;

   // Upper left
   fillFlood ( pict, posX-1, posY-1, oldCol, newCol );
   // Upper middle
   fillFlood ( pict, posX, posY-1, oldCol, newCol );
   // Upper right
   fillFlood ( pict, posX+1, posY-1, oldCol, newCol );
   // Middle left
   fillFlood ( pict, posX-1, posY, oldCol, newCol );
   // Middle right
   fillFlood ( pict, posX+1, posY, oldCol, newCol );
   // Lower left
   fillFlood ( pict, posX-1, posY+1, oldCol, newCol );
   // Lower middle
   fillFlood ( pict, posX, posY+1, oldCol, newCol );
   // Lower right
   fillFlood ( pict, posX+1, posY+1, oldCol, newCol );
}
