void counting(int n){
    if(n==0){
        return;
    }
    counting(n-1);
    printf("%d ",n);
}

// Basics(input,output,ifelse,for,while,operator)
// Arrays!
// function,recursion
// searching and sorting!
// structure,union and string!

void main(){
    int n;
    printf("Enter the NO:");
    scanf("%d",&n);
    counting(n);
    printf("Aapka program khtm ho gya h!");
    int arr[] = {1,4324332,34322432,22,23,20};
    for(int i=0;i<4;i++){
        if(arr[i]==232){
            printf("you are found at this index:%d",i);
            break;

        }
    
        else printf("cant get your number" "\n");
        
    }
}
#include<stdio.h>

int lnrsearch(int arr[], int n, int target);
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 9;
    int index =  lnrsearch (arr, n, target);
    if (index != -1)
    {
     printf("element %d found at index no %d \n", target, index);
    }
    else 
     {
     printf("element %d not found in array \n", target);
    }


return 0; 
}

int lnrsearch (int arr[], int n ,  int target)  {
for ( int i = 0; i < n ; i++)

{
    if (arr[i] == target)
    {
        /* code */return i ;

    }

}
    
     return -1;



}
