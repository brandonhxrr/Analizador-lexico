//Naive String Matcher
#include <stdio.h>

char T[] = {'a','b','c','a','b','a','a','b','c','a','b','a','a'};
char P[] = {'a','b','a','a'};
int n=13, m=4;

vvoid naive(){
    int s = 0, t, flag, j;
    for((s =-1; s < n-m; s++){
        flag = 1;
        j = s+1;
        for(t = 0; t < m; t+){
            if(T[j] != P[t])
                flag = 0;
                break;
            }
            j++;
        }
        if(flag == 1)
           printf(Encontro una ocurrencia: [%d, %d]\n", s+1,j-1);
    }
}

int main(){
    naive();
    return 0
}