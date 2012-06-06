/*******************************************************************************
 CSCI 110 MW 
 project 4 question 4 
 by      Mao Samuel 
             Jonnhaou Sean Huang
             Kevin Gonzales
             Jonathan Hernandez
 ******************************************************************************/




#include <stdio.h>
#include <stdlib.h>

main() {
int arr[200],
    a,c,count;

FILE

      *inptr;
   
   a=0;
   
   
   inptr = fopen ("quickSortOutput", "r"); /* read txt file from equestion 1 */
   c = fscanf(inptr,"%d",&arr);
   
   while (c != EOF)
   {
           a=a+1;
	   c = fscanf(inptr,"%d",&arr[a]); /* crates an array from  the file*/
   }
       
        count = sizeof(arr);
        
       
   int
      DESIRED_VAL,
      i,j,k,
      lower,
      upper,
      middle;
           
           
        printf("please enter desired value\n"); /* allows user to define the key*/
        scanf("%d",&DESIRED_VAL);
        printf("the sequence of numbers start at position 0\n");
        
        
        {
        count = sizeof(arr);          /* counts the number of elements in array*/
        for (i = 0; i < (count/sizeof(int)); i=i+1)
        
       
        lower = 0;  
        upper = (count/sizeof(int)) - 1;
        middle = (upper - lower) / 2;
        while((arr[middle] != DESIRED_VAL) && (lower <= upper))
        {
             if (arr[middle] < DESIRED_VAL)
             {
                 lower = middle + 1;
                 middle = (upper - lower)/ 2 + lower;
             }
             else
             {
                 upper = middle - 1;
                 middle = (upper - lower) / 2 + lower;
             }
       }
       if (arr[middle] == DESIRED_VAL)
          printf("desired value %d found in position %d\n",DESIRED_VAL,middle);
         
          else
              printf("desired value %d not in array\n",DESIRED_VAL );
              system("pause"); /* command to make my execution screen from exiting*/
              return(0);
}
}
      

