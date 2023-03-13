#include <stdio.h>
#define NMAX 10

int input(int *a, int *n);
void output(int *a, int n);
void squaring(int *a, int n);

int main()
{
    int n, data[NMAX];
    int result;
    
    result = input(data, &n);
    if (result) {
    squaring(data, n);
    output(data, n);

    } else  {
        printf("n/a");
        
    }
        
}

int input(int *a, int *n)
{
    int t;
    scanf("%d", n);
    if ( *n <= NMAX && *n > 0) {
    for(int *p = a; p -a < *n; p++) {
         t = scanf("%d", p);
        if (t == 0 ) {
            break;
            }  
        }
    }
    return t;
}
    

void output(int *a, int n)
{
     for (int *p = a; p - a < n; p++) {
         printf("%d", *p);
         if (p - a + 1 < n)
         printf(" ");
     }
}

void squaring(int *a, int n)
{
    for (int *p = a; p - a < n; p++){
        (*p) *= (*p);
    }
}


