#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
	//NUMBER OF ROWS AND COLUMNS
	const int ROWS = 10;
	const int COLS = 10;
	char life[ROWS][COLS];
	char copy[r][c];

	//RANDOM NUMBER GENERATOR TO CREATE INITIAL GENERATION
	srand (time(NULL));
	int cell;

	for(int = 0; r<ROWS;r++)
	{
	    for (int c = 0; c <COLS;c++)
        {
            life [r][c] = copy [r][c]
        }
	}




	for(int r=0; r<ROWS; r++)
	{
		for(int c =0; c<COLS;c++)
		{
			cell = rand() % 7;
			if(cell >= 5)
			{
				c[r][c] = '*';
			}
			else
			{
				life[r][c]=' ';
			}
		}
	}



	int neighbors[10][10];
    for (int i = 0; i < 10;i++)
    {
      if (c < 2 && r < 2; i++)


    }


        int cellCount = 0;
        for(int = 0; r<ROWS;r++)
	{
	    for (int c = 0; c <COLS;c++)
        {
            if (r-1 >= 0 && c-1 >= 0 && life[r-1][c-1]=== '*')
                cellCount++;
            if (r+1 < ROWS&& c+1 < COLS && life [c+1][r-1]=== '*')
                cellCount++;
            if(r+1 < ROWS && c-1 >=0 && life[r+1][c-1]=== '*')
                cellCount++;
            if (r+1 < ROWS && c+1 >=0 && life[r+1][c+1]=== '*')
                cellCount ++;
            if (r+1 <ROWS && c=COLS && life[r+1][c]=== '*')
                cellCount++;



        }
	}







	return 0;

}
