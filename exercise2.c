

 #include<stdio.h>
 int main(){
    int i,j ;
   int mat[3][3] = {
            
        {1,2,3},
        {4,5,6,},
        {7,8,9,}
    
         };
    for ( i = 0; i < 3 ; i++)  {
        for (j = 0; j < 3; j++)
        {
            /* code */printf("%d\n", mat[i][j]);
        }
        
    }
    {
        printf("\n");   /* code */
    }
    
      return 0;
 }