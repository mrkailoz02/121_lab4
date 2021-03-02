#include<stdio.h>
#include<ctype.h>
int main()
{
    char a[1000];
    int i=0,n;
    scanf("%[^\n]s",a);
    printf("%c",toupper(a[0]));
    while(a[i]!='\0')
    {
        n=0;
        if(a[i]==' ')
        {
            switch(a[i+1])
            {
                case 'i': if(a[i+2]==' '||a[i+2]=='\0')
                                n++;
                          else if(a[i+2]=='n')
                             if(a[i+3]==' '||a[i+3]=='\0')
                                n++;
                case 'o': if(a[i+2]=='n')
                            {
                                if(a[i+3]==' '||a[i+3]=='\0')
                                    n++;
                            }
                          else if(a[i+2]=='f')
                             if(a[i+3]==' '||a[i+3]=='\0')
                                n++;
                case 't': if(a[i+2]=='h')
                             if(a[i+3]=='e')
                                if(a[i+4]==' '||a[i+4]=='\0')
                                    n++;
                case 'a': if(a[i+2]==' '||a[i+2]=='\0')
                                n++;
                          else if(a[i+2]=='n')
                          {
                              if(a[i+3]==' '||a[i+3]=='\0')
                                n++;
                          }
                          else if(a[i+2]=='t')
                             if(a[i+3]==' '||a[i+3]=='\0')
                                n++;
                case 'f': if(a[i+2]=='o')
                             if(a[i+3]=='r')
                                if(a[i+4]==' '||a[i+4]=='\0')
                                n++;
                case 'w': if(a[i+2]=='i')
                             if(a[i+3]=='t')
                                if(a[i+4]=='h')
                                    if(a[i+5]==' '||a[i+5]=='\0')
                                    n++;
            }
            if(n==0)
                printf("%c",toupper(a[i+1]));
        }
        i++;
    }
    return 0;
}
