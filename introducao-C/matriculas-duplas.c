#include <stdio.h>

int main(void)
{
    int codigoP2[45], codigoP3[30];

    for(int i=0; i<45; ++i)
        scanf("%i", &codigoP2[i]);
    for(int i=0; i<30; ++i)
        scanf("%i", &codigoP3[i]);

    for(int i=0; i<45; ++i){
        for (int j=0; j<30; ++j){
            if (codigoP2[i] == codigoP3[j])
                printf("%i ", codigoP3[j]);
        }
    }
   return 0;
}




