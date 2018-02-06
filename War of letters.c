#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <conio.h>
#include <string.h>
int main()
{
    char physicalmovies[100][30]= {" a              b  ", //0   ÉùÃ÷ÎïÀí¹¥»÷¶¯»­
                                   "  a             b  ",// 1
                                   "   a            b  ",// 2
                                   "    a           b  ",// 3
                                   "     a          b  ",// 4
                                   "      a         b  ",// 5
                                   "       a        b  ",// 6
                                   "        a       b  ",// 7
                                   "         a      b  ",// 8
                                   "          a     b  ",// 9
                                   "           a    b  ",// 10
                                   "            a   b  ",// 11
                                   "             a  b  ",// 12
                                   "              a b  ",// 13
                                   "               ab  ",// 14
                                   "                ab ",// 15
                                   //a¹¥»÷bµÄ¶¯»­0-15
                                   "  a              b ",// 16
                                   "  a             b  ",// 17
                                   "  a            b   ",// 18
                                   "  a           b    ",// 19
                                   "  a          b     ",// 20
                                   "  a         b      ",// 21
                                   "  a        b       ",// 22
                                   "  a       b        ",// 23
                                   "  a      b         ",// 24
                                   "  a     b          ",// 25
                                   "  a    b           ",// 26
                                   "  a   b            ",// 27
                                   "  a  b             ",// 28
                                   "  a b              ",// 29
                                   "  ab               ",// 30
                                   " ab                ",// 31
                                   //b¹¥»÷aµÄ¶¯»­16-31
                                   "               a b ",//32
                                   //b±Ü¿ªa¹¥»÷µÄ¶¯»­
                                   "a b                ",//33
                                   //a±Ü¿ªb¹¥»÷µÄ¶¯»­
                                  };
    char magicalmovies[100][30]= {" a*             b ", //0      ÉùÃ÷Ä§·¨¹¥»÷¶¯»­
                                  " a *            b ",//1
                                  " a  *           b ",//2
                                  " a   *          b ",//3
                                  " a    *         b ",//4
                                  " a     *        b ",//5
                                  " a      *       b ",//6
                                  " a       *      b ",//7
                                  " a        *     b ",//8
                                  " a         *    b ",//9
                                  " a          *   b ",//10
                                  " a           *  b ",//11
                                  " a            * b ",//12
                                  " a             *b ",//13
                                  " a               b",//14
                                  //0-14 aÓÃÄ§·¨¹¥»÷bµÄ¶¯»­
                                  " a             *b ",//15
                                  " a            * b ",//16
                                  " a           *  b ",//17
                                  " a          *   b ",//18
                                  " a         *    b ",//19
                                  " a        *     b ",//20
                                  " a       *      b ",//21
                                  " a      *       b ",//22
                                  " a     *        b ",//23
                                  " a    *         b ",//24
                                  " a   *          b ",//25
                                  " a  *           b ",//26
                                  " a *            b ",//27
                                  " a*             b ",//28
                                  "a               b ",//29
                                 };
    int i,a,b,d,e,a_HP=100,b_HP=100,power,round=1,movie_speed=10,a_MP=10,b_MP=10;
    char command1[10]= {"attack"},command2[10]= {"physical"},command3[10]= {"magical"},ch[20];
    srand(time(NULL));
    printf("Welcome to a little game I wrote,this game,The game is just two letters to hit the past\n");
    printf("The game can only be attacked, and the only way of attack is physical attack and magic attack\n");
    printf("Other patterns will be added later\n");
    printf("The game rule:\n1.The initial life value of a and B is 100, and the initial magic value is 10 (the magic value does not increase)\n");
    printf("2.When the number of games is even, b attacks a,When the number of stations is odd, a attacks b\n");
    printf("3. Every time the physical attack power is random (the physical attack force range is 0 to 10).\n");
    printf("4.Every time the magical attack power is random (the magical attack force range is 10 to 20).\n");
    printf("5.Each time you use magic attacks, magic value minus 2\n");
    printf("The rules are translated with a translator, may mean inaccurate, hope forgive me\n");
    system("pause");
    while(a_HP>0 && b_HP>0)
    {
        system("cls");
        printf("\ta-HP:%d\t\tround:%d\t\tb-HP:%d\n",a_HP,round,b_HP);
        printf("\ta-MP:%d\t\t\t\tb-MP:%d\n\n\n\n",a_MP,b_MP);
        printf("\t\ta              b  \n\n");
        printf("\t\tcommand:");
        scanf("%s",ch);
        if(strcmp(command1,ch)==0)
        {
            printf("\t\tattack way:");
            scanf("%s",ch);
            if(strcmp(command2,ch)==0)//ÎïÀí¹¥»÷
            {
                if(round%2!=0)
                {
                    power=rand()%10;
                    a=14;
                    for(i=0; i<30; i++)
                    {
                        system("cls");
                        printf("\ta-HP:%d\t\tround:%d\t\tb-HP:%d\n",a_HP,round,b_HP);
                        printf("\ta-MP:%d\t\t\t\tb-MP:%d\n\n\n\n\t\t\t",a_MP,b_MP);
                        if(i==15)
                        {

                            if(power!=0)
                            {
                                printf("%s",physicalmovies[i]);
                                printf("\n\t\tb was attack by a at %d points",power);
                                Sleep(250);
                            }
                            else
                            {
                                printf("%s",physicalmovies[32]);
                                printf("\n\t\tb donged a's attack");
                                Sleep(250);
                            }
                        }
                        if(i==14)
                        {
                            b_HP-=power;
                            printf("\a");
                        }
                        if(i<15)
                        {
                            puts(physicalmovies[i]);
                            Sleep(movie_speed);
                        }
                        if(i>15)
                        {
                            puts(physicalmovies[a]);
                            a--;
                            if(power!=0)
                            {
                                printf("\n\t\tb was attack by a at %d points",power);
                            }
                            else
                            {
                                printf("\n\t\tb donged a's attack");
                            }
                            Sleep(movie_speed);
                        }
                    }
                }
                if(round%2==0)
                {
                    a=31;
                    power=rand()%10;
                    for(i=16; i<46; i++)
                    {
                        system("cls");
                        printf("\ta-HP:%d\t\tround:%d\t\tb-HP:%d\n",a_HP,round,b_HP);
                        printf("\ta-MP:%d\t\t\t\tb-MP:%d\n\n\n\n\t\t\t",a_MP,b_MP);
                        if(i==30)
                        {
                            a_HP-=power;
                            printf("\a");
                        }
                        if(i==31)
                        {
                            if(power!=0)
                            {
                                printf("%s",physicalmovies[31]);
                                printf("\n\t\ta was attacked by b at %d points",power);
                                Sleep(250);
                            }
                            else
                            {
                                printf("%s",physicalmovies[33]);
                                printf("\n\t\ta donged b's attack");
                                Sleep(250);
                            }
                        }
                        if(i>16 && i<31)
                        {
                            puts(physicalmovies[i]);

                            Sleep(movie_speed);
                        }
                        if(i>31)
                        {
                            puts(physicalmovies[a]);
                            a--;
                            if(power!=0)
                            {
                                printf("\n\t\ta was attacked by b at %d points",power);
                            }
                            else
                            {
                                printf("\n\t\ta donged b's attack");
                            }
                            Sleep(movie_speed);
                        }
                    }
                }
            }
            if(strcmp(command3,ch)==0)//Ä§·¨¹¥»÷
            {
                if(round%2!=0)
                {
                    power=rand()%10+10;
                    for(i=0; i<14; i++)
                    {
                        if(i==13)
                        {
                            a_MP-=2;
                            b_HP-=power;
                        }
                        system("cls");
                        printf("\ta-HP:%d\tround:%d\t\tb-HP:%d\n",a_HP,round,b_HP);
                        printf("\ta-MP:%d\t\t\t\tb-MP:%d\n\n\n\n\t\t\t",a_MP,b_MP);
                        printf("%s",magicalmovies[i]);
                        if(i==13)
                        {
                            printf("\n\tbÊÜµ½a%dµã¹¥»÷\a\n",power);
                            Sleep(250);
                            break;
                        }
                        Sleep(movie_speed);
                    }
                }
                if(round%2==0)
                {
                    power=rand()%10+10;
                    for(i=15; i<29; i++)
                    {
                        if(i==28)
                        {
                            b_MP-=2;
                            a_HP-=power;
                        }
                        system("cls");
                        printf("\ta-HP:%d\tround:%d\t\tb-Hp:%d\n",a_HP,round,b_HP);
                        printf("\ta-MP:%d\t\t\t\tb-MP:%d\n\n\n\n\t\t\t",a_MP,b_MP);
                        printf("%s",magicalmovies[i]);
                        if(i==28)
                        {
                            printf("\n\taÊÜµ½bµÄ%dµã¹¥»÷\a\n",power);
                            Sleep(250);
                            break;
                        }
                        Sleep(movie_speed);
                    }
                }
            }
            printf("\n");
            round++;
        }
        else
            break;
    }
    system("cls");
    if(a<=0)
    {
        printf("b»ñÊ¤");
    }
    else
        printf("a»ñÊ¤");
    return 0;
}
