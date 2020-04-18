#include<stdio.h>
main()
{
    int num,i,j,max=0,row,c,min;
    scanf("%d",&num);
    int take[num];
    for(i=0;i<num;i++)
    {
        scanf("%d",&take[i]);
        if(take[i]>max)
            max=take[i];
    }
    min=max;
    for(row=0;row<max;row++)
    {
        for(i=0;i<num;i++)
        {
            if(take[i]<min)
            {
                for(c=0;c<take[i]*2;c++)
                    printf(" ");
            }
            if(take[i]>=min)
            {
                for(c=1;c<min;c++)
                    printf(" ");
                printf("/");
                for(c=take[i];c>min;c--)
                    printf("  ");
                printf("\\");
                for(c=1;c<min;c++)
                    printf(" ");
            }
        }
        printf("\n");
        min=min-1;
    }
}
