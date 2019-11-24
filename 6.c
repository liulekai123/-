#include<stdio.h>
int main(void)
{
    int male,female,small;
    for(male=0;male<=20;male++)
    {
        for(female=0;female<=33;female++)
        {
            small=100-male-female;
            if(5*male+3*female+small/3==100) printf("male=%d,female=%d,small=%d\n",male,female,small);
        }
    }
    return 0; 
}