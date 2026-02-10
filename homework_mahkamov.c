#include <stdio.h>
#include <string.h>
void oltinchisiga(long number,long *ildiz)
{
	long i;
    	*ildiz= 0;
    	for(i = 1; i * i<= number; i++)
	{
        	if(i * i == number)
		{
            		*ildiz =i;
            	return;
        	}
    	}
}
int palindrommi(char s[]) //5 topshirqqa funskiya
{
	int i,uzunlik =strlen(s);
    	for(i = 0;i < uzunlik / 2;i++)
	{
        	if(s[i]!= s[uzunlik-i - 1])
            return 0;
    	}
    	return 1;
}

int main()
{
	int ustoznitanlovi;
    	printf("ustoz qaysi masalani tekshirmoqchisiz?(1-6): ");
    	scanf("%d",&ustoznitanlovi);
	switch (ustoznitanlovi)
	{
    		case 1:
	{
        int son,raqam,yigindi= 0;
        printf("Son kiriting: ");
        scanf("%d",&son);
        while(son> 0)
	{
		raqam = son % 10;
            	if (raqam % 2 == 1)
               		yigindi += raqam * raqam;
            	son /=10;
        }
        printf("Toq raqamlar kvadratlari yig'indisi: %d\n", yigindi);
        break;
    	}
    		case 2:
	{
        int n,i;
        printf("N >>> ");
        scanf("%d",&n);
        int a[n];
        printf("Massiv elementlarini kiriting:\n");
        for(i = 0; i < n;i++)
            scanf("%d", &a[i]);
        printf("Local maksimumlar: ");
        for(i = 1;i < n - 1;i++)
	{
            	if(a[i]> a[i - 1] && a[i]> a[i + 1])
                	printf("%d ",a[i]);
        }
        	printf("\n");
        break;
    }
	case 3:
	{
        char matn[256];
        int i;
        printf("Marhamat dardingizni kiriting: ");
        getchar();
        fgets(matn,256,stdin);
        for (i = 0; matn[i]!= '\0';i++)
	{
            	if (matn[i] == '+')
                	printf("+++");
            	else
                printf("%c",matn[i]);
        }
        break;
    }
    		case 4:
	{
        int a[5][5],i,j;
        printf("25 ta son kiriting:\n");
        for(i = 0;i < 5;i++)
	{
        	for (j=0;j < 5; j++)
		{
                scanf("%d",&a[i][j]);
            	}
        }
        printf("Natija >>>\n");
        for(i = 0; i <5; i++)
	{
            	for (j = 0;j < 5; j++)
		{
                	if (i +j < 4)
                    		printf("0 ");
                	else
                    printf("%d ",a[i][j]);
            	}
            	printf("\n");
        }
        break;
    			}
    	case 5:
	{
        long son,ildiz;
        printf("Birorta son kiriting: ");
        scanf("%ld",&son);
        oltinchisiga(son,&ildiz);
        printf("Ildiz: %ld\n",ildiz);
        break;
    	}
    		case 6:
	{
        char s[100];
        int i,n;
        printf("Nechta soz kiritasiz: ");
        scanf("%d",&n);
        printf("Palindrom sozlar:\n");
        for(i = 0;i < n;i++)
	{
            	scanf("%s",s);
            	if(palindrommi(s))
                	printf("%s\n",s);
        }
        break;
    	}
    	default:
        	printf("Ustoz afsuski bunday raqamli masala yo'qda\n");
    	}
   	return 0;
}
