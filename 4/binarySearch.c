#include <stdio.h>

main()  {
        int
           arr[200],
           DESIRED_VAL,
           i,j,
           lower,
           upper,
           middle;

        printf("please enter desired value\n");
        scanf("%d",&DESIRED_VAL); 
        {   
        FILE *in;
        in= fopen("4.txt","r");
        arr[200]=getchar;
        fclose(in);
        {
        for (i = 0; i <200; i++)
            arr[i] = 2*i;
        lower = 0;
        upper = 200 - 1;
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
}
