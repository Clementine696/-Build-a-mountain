#include<stdio.h>
main()
{
    int mountain_num,i,j,maxhigh=0,row,c;
    scanf("%d",&mountain_num);
    int take[mountain_num];
    for(i=0;i<mountain_num;i++)
    {
        scanf("%d",&take[i]);
        if(take[i]>maxhigh)
            maxhigh=take[i];
    }
    for(row=0;row<maxhigh;row++)
    {
        for(i=0;i<mountain_num;i++)
        {
            if(take[i]<maxhigh-row)
            {
                for(c=0;c<take[i]*2;c++)
                    printf(" ");
            }
            if(take[i]>=maxhigh-row)
            {
                for(c=1;c<maxhigh-row;c++)
                    printf(" ");
                printf("/");
                for(c=take[i];c>maxhigh-row;c--)
                    printf("  ");
                printf("\\");
                for(c=1;c<maxhigh-row;c++)
                    printf(" ");
            }
        }
        printf("\n");
    }
}
