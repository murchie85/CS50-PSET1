#include <stdio.h>
#include <cs50.h>


int main(void){
    
    printf ("How long do you shower for in minutes?");
    int x = GetInt();
    
    printf("For a  %d minute shower, you use up %d bottles of water.\n", x , x * 12);
}