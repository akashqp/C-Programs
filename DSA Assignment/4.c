#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void main()
{
    int T, j=0;
    printf("Enter number of Test Cases:");
    scanf("%d",&T);
    char str[1000];
    while(j<T)
    {
        scanf("%s",str);
        int i=0,k,size = 0;
        while(str[i++]!='\0')
        {
            size++;
        }
        char str1[size/2+1], str2[size/2+1];
        for(i=0,k=(int)(ceil(size/2.0));i<size/2;i++,k++)
        {
            str1[i] = str[i];
            str2[i] = str[k];
        }
        char str_temp[size/2+1];
        int count, count1;
        
        k=0;
        for(i=0;i<size/2;i++)
        {
            if(strchr(str_temp,str1[i])==NULL)
            {
                str_temp[k]=str1[i];
                count=0,count1=0;
                for(int l=0;l<size/2;l++)
                {
                    if(str_temp[k]==str1[l])
                        count++;
                }
                for(int l=0;l<size/2;l++)
                {
                    if(str_temp[k]==str2[l])
                        count1++;
                }
                if(count!=count1)
                {
                    printf("NO\n");
                    goto label;
                }
                k++;
            }
        }
        printf("YES\n");
        label:
        j++;
    }
}   