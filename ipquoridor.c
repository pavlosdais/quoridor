#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Function Prototypes
int mode(char *ans);

/*
    Commands:
    -Adminstrative
    1 - name
    2 - known_command
    3 - list_commands
    4 - quit
    -Setup
    5 - boardsize
    6 - clear_board
    7 - walls
    -Core Play
    8 - playmove
    9 - playwall
    10 - genmove
    11 - undo
    -Tournament
    12 - winner
    -Debug
    13 - showboard
*/
int main(void)
{
    char winner, buff[80], *p, m;
    
    while (1)
    {
        scanf("%s", buff);
        p = strtok(buff, " ");
        m = mode(p);
        if (m == 1)  // name
        {

        }
        else if (m == 2)  // known_command
        {
            
        }
        else if (m == 3)  // list_commands
        {
            
        }
        else if (m == 4)  // quit
        {
            break;
        }
        else if (m == 5)  // boardsize
        {
            
        }
        else if (m == 6)  // clear_board
        {
            
        }
        else if (m == 7)  // walls
        {
            
        }
        else if (m == 8)  // playmove
        {
            
        }
        else if (m == 9)  // playwall
        {
            
        }
        else if (m == 10)  // genmove
        {
            
        }
        else if (m == 11)  // undo
        {
            
        }
        else if (m == 12)  // winner
        {
            
        }
        else if (m == 13)  // showboard
        {
            
        }
        else
        {
            printf("Unknown command\n");
            return 1;
        }

        printf("%d\n", mode(p));

        while(p != NULL)
        {
            //printf("%s\n", p);
            p = strtok(NULL, " ");
        }
    }
    return 0;
}

int mode(char *ans)
{
    if (strcmp("name", ans) == 0) return 1;
    else if (strcmp("known_command", ans) == 0) return 2;
    else if (strcmp("list_commands", ans) == 0) return 3;
    else if (strcmp("quit", ans) == 0) return 4;
    else if (strcmp("boardsize", ans) == 0) return 5;
    else if (strcmp("playwall", ans) == 0) return 6;
    else if (strcmp("clear_board", ans) == 0) return 7;
    else if (strcmp("walls", ans) == 0) return 8;
    else if (strcmp("playwall", ans) == 0) return 9;
    else if (strcmp("genmove", ans) == 0) return 10;
    else if (strcmp("undo", ans) == 0) return 11;
    else if (strcmp("winner", ans) == 0) return 12;
    else if (strcmp("showboard", ans) == 0) return 13;
}
