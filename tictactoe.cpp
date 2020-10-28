#include <stdio.h>
int main()
{
    char array[3][3] = {0};
    printf("\n");
    printf("\033[0;31m");
    printf("    TIC TAC TOE\n\n");
    printf("\033[0m");
    int num = 1;
    int a = 1;
    int b = 2;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            array[i][j] = num + '0';
            num++;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("       ");
        for (int j = 0; j < 3; j++)
        {
            printf("%c", array[i][j]);
            if (j < 2)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");
    printf("\033[0;34m");
    printf("PRESS RETURN TO START");
    printf("\033[0m");
    int n;
    char m;
    scanf("%c", &m);
    printf("\n");
    if (m == '\n')
    {
        char c = 'X';
        char d = 'O';
        int temp = 1;
        int winner = 0;
        while (temp < 10)
        {
            for (int i = 0; i < 3; i++)
            {
                printf("       ");
                for (int j = 0; j < 3; j++)
                {   
                    if (array[i][j] == 'X' || array[i][j] == 'O')
                    {
                        printf("\033[01;33m");
                        printf("%c", array[i][j]);
                        printf("\033[0m");
                        if (j < 2)
                        {
                        printf(" ");
                        }
                    }
                    else
                    {
                        printf("%c", array[i][j]);
                        if (j < 2)
                        {
                        printf(" ");
                        } 
                    } 
                }
                printf("\n");
            }
            printf("\n");
            int player;
            char symbol;
            if (temp % 2 == 0)
            {
                player = b;
                symbol = d;
            }
            else
            {
                player = a;
                symbol = c;
            }
            
            printf("PLAYER %d ENTER NUMBER: ", player);
            scanf("%d", &n);
            printf("\n");
            if (n <= 3)
            {
                array[0][n-1] = symbol;
            }
            if (n > 3 && n <= 6)
            {
                array[1][n-4] = symbol;
            }
            if (n > 6)
            {
                array[2][n-7] = symbol;
            }
            if (array[0][0] == 'X' && array[0][1] == 'X' && array[0][2] == 'X' || array[1][0] == 'X' && array[1][1] == 'X' && array[1][2] == 'X' || array[2][0] == 'X' && array[2][1] == 'X' && array[2][2] == 'X')
            {
                winner++;
                break;
            }
            if (array[0][0] == 'X' && array[1][0] == 'X' && array[2][0] == 'X' || array[0][1] == 'X' && array[1][1] == 'X' && array[2][1] == 'X' || array[0][2] == 'X' && array[1][2] == 'X' && array[2][2] == 'X')
            {
                winner++;
                break;
            }
            if (array[0][0] == 'X' && array[1][1] == 'X' && array[2][2] == 'X' || array[2][0] == 'X' && array[1][1] == 'X' && array[0][2] == 'X')
            {
                winner++;
                break;
            }
            if (array[0][0] == 'O' && array[0][1] == 'O' && array[0][2] == 'O' || array[1][0] == 'O' && array[1][1] == 'O' && array[1][2] == 'O' || array[2][0] == 'O' && array[2][1] == 'O' && array[2][2] == 'O')
            {
                winner+= 2;
                break;
            }
            if (array[0][0] == 'O' && array[1][0] == 'O' && array[2][0] == 'O' || array[0][1] == 'O' && array[1][1] == 'O' && array[2][1] == 'O' || array[0][2] == 'O' && array[1][2] == 'O' && array[2][2] == 'O')
            {
                winner+= 2;
                break;
            }
            if (array[0][0] == 'O' && array[1][1] == 'O' && array[2][2] == 'O' || array[2][0] == 'O' && array[1][1] == 'O' && array[0][2] == 'O')
            {
                winner+= 2;
                break;
            }
            temp++;
        }
        for (int i = 0; i < 3; i++)
        {
            printf("       ");
            for (int j = 0; j < 3; j++)
            {   
                if (array[i][j] == 'X' || array[i][j] == 'O')
                {
                    printf("\033[01;33m");
                    printf("%c", array[i][j]);
                    printf("\033[0m");
                    if (j < 2)
                    {
                        printf(" ");
                    }
                }
                else
                {
                    printf("%c", array[i][j]);
                    if (j < 2)
                    {
                        printf(" ");
                    } 
                } 
            }
            printf("\n");
        }
        if (winner > 0)
        {
        printf("\n");
        printf("\033[0;34m");
        printf("    PLAYER %d WINS\n\n", winner);
        printf("\033[0m"); 
        }
        else
        {
        printf("\n");
        printf("\033[0;34m");
        printf("     ITS A TIE\n\n");
        printf("\033[0m"); 
        }
        
    }
    return 0;
    
}   