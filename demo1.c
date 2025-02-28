#include<stdio.h>
void forex(){
    printf("begin loop\n");
    for (int i = 0; i <=5; i++){
        printf("i= %d\n",i);
    }
    printf("end\n");
    
}
void forex2(){
    printf("begin\n");
    printf("nhap so ");
    int n;
    scanf("%d",&n);
    for (int i = 0; i <=n; i++)
    {
        printf("i= %d\n",i);
    }
    
}
void forex3(){
    printf("begin \n");
    printf("nhap so ");
    int n;
    scanf("%d",&n);
    for (int i = 0; i <=n; i++)
    {
        if (i%2==0)
        {
            printf("i= %d\n",i);
        }
        else{
            printf("invalid");
        }
    }
    
}
void forex4(){
    printf("begin \n");
    printf("nhap so ");
    int n;
    scanf("%d",&n);
    for (int i = 0; i <=n;)
    {
        printf("i= %d\n",i);
        i=i+2;
    }
}
void forex5(int n){
    for (int i = 0; i <=n; i++)
    {
        if (i%2==0)
        {
            printf("i= %d\n",i);
        }
        else{
            printf("invalid\n");
        }
    }
    
}




int main(){
    //forex();
    printf("nhap so ");
    int n;
    scanf("%d",&n);
    forex5(n);
    printf("nhap so ");
    int m;
    scanf("%d",&m);
    forex5(m);
    return 0;
}