#include <stdio.h>

main()  {
        int
           ARR_SIZE =50,
           arr[ARR_SIZE],
           DESIRED_VAL,
           i,j,
           lower,
           upper,
           middle;

        printf("please enter desired value\n");
        scanf("%d",&DESIRED_VAL); 
        {   
        for (i = 0; i < ARR_SIZE; i++)
            arr[i] = 2*i;
        lower = 0;
        upper = ARR_SIZE - 1;
        middle = (upper - lower) / 2;
        while((arr[middle] != DESIRED_VAL) && (lower <= upper))
        {
             printf("looking in position %d\n",middle);
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
              printf("desired value %d not in array\n",DESIRED_VAL);
              system("pause");   /* command to make my execution screen from exiting*/
              return(0);      
}  
}           
