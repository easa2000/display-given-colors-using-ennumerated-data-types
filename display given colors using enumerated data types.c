// program to display the name of the given colors using enumerated type
#include<stdio.h>
enum COLORS {RED, BLUE, BLACK, GREEN, YELLOW, PURPLE, WHITE};
int main()
{
    enum COLORS c;
    char *color_name[] = {"RED","BLUE","BLACK", "GREEN", "YELLOW", "PURPLE", "WHITE"};
    for(c = RED; c <=WHITE; c++)
        printf("\n %s",color_name[c]);
    return 0;
}
