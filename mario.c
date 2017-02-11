#include <cs50.h>
#include <stdio.h>
/* Adam McMurchie
CS50 PSET1
Any issues contact murchie85@gmail.com
*/

int main(void){
    // h means pyramid height (initialization)
    int h = 0;
    // similar to the adder excersize just the bounds are 1 to 23
    do
    {
        printf("What is the height of Mario's half pyramid? bro: ");
        h = GetInt();
        // originally was going to not include but the check50 flagged it
        if ( h ==0)
        {
            return 0;
        }
        
    }
    while(h < 1 || h > 23);
    
    
// declaring variables they get initialized in each for loop    
int x;
int s;
int t;
int lblocks;
int rblocks;
    
    // first loop does height, second does spaces third does hashes
    // hashes: h=currenrow +1
    // Spaces: S=height - currentrow
    // the -1 and +2 accounts for the zero starting point
    
    
    
    
    // iterate through the height - 
   for (x=0; x<h; x++)
    {

        //iterate from left to right, make spaces. limited by height minus current height minus 1
        for (s=0; s<h-x-1; s++)
        {
        printf("%s"," ");
        }
        
        //create bocks limited by current height + 2 
        for(lblocks =1; lblocks < x+2; lblocks++)
        {
            printf("#");
        }
        // create two spaces
        for (t=0; t<2; t++)
        {
        printf("%s"," ");
        }
        //create blocks limited by same as lhandside
        for(rblocks =1; rblocks < x+2; rblocks++)
        {
            printf("#");
        }
      
        
       
        printf("\n");
        
        
    }
   return 0;
}