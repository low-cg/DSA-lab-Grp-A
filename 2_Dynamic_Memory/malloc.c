#include<stdio.h>
#include<stdlib.h>

int main(){

    int *ptr;

    int n; 

    printf("Enter No of gamers: ");
    scanf("%d",&n);

    ptr=(int*)malloc(n*sizeof(int));

    if(ptr==NULL){

        printf("No memory allocation");
        exit(0);
    }

    printf("Before assigining:\n");

    for(int i=0 ; i<n ; i++){

        printf("%d\n",ptr[i]); 

    }

    printf("Input the serial : ") ;

    for(int i=0; i<n ; i++){

        scanf("%d", &ptr[i] ) ;
    }

    printf("After assigining:\n");

    for(int i=0 ; i<n ; i++){

        printf("%d\n",ptr[i]);

    }

    return 0 ;
}
