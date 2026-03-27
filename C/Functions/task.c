#include<stdio.h>
#include<conio.h>
void secLarg(int a[], int n);
void main(){

    int a[100], n, i;

    printf("Enter the size of Array :");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    secLarg(a, n);

}

void secLarg(int a[], int n){

    int i;
    int max = a[0];
    int sec;

    for (i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            sec = max;
            max = a[i];
        }
        else if(a[i] > sec && a[i] != max){
            sec = a[i];
        }
    }
    
    printf("Seconf Largest Numebr = %d", sec);
}