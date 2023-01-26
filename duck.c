#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

/**void duck_open_beak()
{
    printf("   _\n");
    printf("__\(\)<\n");
    printf("\\___)\n");
}

void duck_normal_beak()
{
    printf("   _\n");
    printf("__\(\)=\n");
    printf("\\___)\n");
}

void duck_close_beak()
{
    printf("   _\n");
    printf("__\(\)>\n");
    printf("\\___)\n");
}
**/
void animated_duck_close(int space, int n)
{
    for(int i = 0; i <= n; i++)
        printf("\n");

    for(int i = 0; i <= space; i++)
    {
        printf(" ");
    }
    printf("   _\n");

    for(int i = 0; i <= space; i++)
    {
        printf(" ");
    }
    printf("__\(\)>\n");

    for(int i = 0; i <= space; i++)
    {
        printf(" ");
    }
    printf("\\___)\n");
}

void animated_duck_normal(int space)
{
    printf("\n");
    for(int i = 0; i <= space; i++)
    {
        printf(" ");
    }
    printf("   _\n");

    for(int i = 0; i <= space; i++)
    {
        printf(" ");
    }
    printf("__\(\)=\n");

    for(int i = 0; i <= space; i++)
    {
        printf(" ");
    }
    printf("\\___)\n");
}

void animated_duck_open(int space, int n)
{
    for(int i = 0; i <= n; i++)
        printf("\n");
    for(int i = 0; i <= space; i++)
    {
        printf(" ");
    }
    printf("   _\n");

    for(int i = 0; i <= space; i++)
    {
        printf(" ");
    }
    printf("__\(\)<\n");

    for(int i = 0; i <= space; i++)
    {
        printf(" ");
    }
    printf("\\___)\n");
}

void animation_open_close(int space)
{
    int frames = 0;
    int start = 0;
    int k = 0;
    int interval = 12;

    while(k < 4)
    {
        for( int i = start; i < frames + interval; i++)
        {
            animated_duck_close(i,space);
            usleep(80000);
            system("clear");
        }

        frames = frames + interval;

        for(int i = frames; i < frames + interval; i++)
        {
            animated_duck_open(i,space);
            usleep(80000);
            system("clear");
        }

        frames = frames + interval;
        start = frames;

        k++;
    }

}

void animation()
{ 
    int i = 0;
    while(i < 100)
    {
        animated_duck_open(i,1);
        usleep(100000);
        system("clear");
        i++;
    }
}
void main()
{
    int i = 0;
    int j = 0;
    printf("\033[?25l"); // hide the cursor
                         
    while(j < 5)    
    {
        animation_open_close(i);
        i = i + 3;
        j++;
    }

    printf("\033[?25h"); // show the cursor
}

