#include <stdio.h>
#include <stdlib.h>

main()  {
        int
           arr[]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20},
           count;
        count = sizeof(arr);
        printf("number of elements in the array: %d\n",count/sizeof(int));
        
        int
           DESIRED_VAL,
           i,j,
           lower,
           upper,
           middle;
        printf("please enter desired value\n");
        scanf("%d",&DESIRED_VAL); 
        printf("the sequence of numbers start at position 0\n");
        {
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
              system("pause");   /* command to make my execution screen from exiting*/
              return(0);      
}  
} 
      

