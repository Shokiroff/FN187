#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <stdbool.h>
int random(int a, int b)
{
	return rand()%(b-a+1)+a;
}
int main()
{
	system("clear");
	srand(time(NULL));
	int a;
	printf("Ustoz! Siz tekshirmoqchi bo'lgan vazifaning tartib raqamini kiriting(1-5)>>> ");
	scanf("%d",&a);
	printf("\n");
	switch(a)
	{
		case 1:
		{
			puts("1-Vazifa. Foydalanuvchi int tipida bir son kiritadi");
			puts("Maqsadingiz foydalanuvchi kiritgan sonning juft raqamlarini aniqlab");
			puts("O'sha raqamlarni kublarining yig'indisini topuvchi dastur yarating...");
			
			printf("\n\n");
			int c,f,sum=0,j_kub=0;
			printf("Son kiriting: ");
			scanf("%d",&c);
			printf("\n");
			for(; c>0; c/=10)
			{
				f = c % 10;
				if(f % 2 == 0)
				{
					printf("%d ",f);
					j_kub = f*f*f;
					sum += j_kub;
					
				}
			}
			printf("\n\n");
			printf("Juft raqamlar kublari yig'indisi: %d\n", sum);
			
			break;

		}
		
		case 2:
                {
                        puts("2-Vazifa. N ta elementdan tashkil topgan bir o'lchovli massive elementarini");
                        puts("Tasodifiy sonlar bilan to'ldiring...");
                        puts("Ushbu massive elementlari kvadratlaridan tashkil topgan yangi massive tashkil qiling...");
                        printf("\n\n");
			
			int p;
                        printf("Massive uzunligini kiriting: ");
                        scanf("%d",&p);
			printf("\n");
                        int e[p],r[p];
                        for(int i = 0; i < p; i++)
                        {
                                e[i]=random(1,100);
                        }
                        for(int i = 0; i < p; i++)
                        {
                                r[i]=e[i]*e[i];
                        }
                        puts("Massivning dastlabki ko'rinishi>>>");
			for(int i = 0; i<p; i++)
                        {
                                printf("%d ",e[i]);
                        }
                        printf("\n\n");
			puts("Massivning kvadratli ko'rinishi>>>");
                        for(int i = 0; i<p; i++)
                        {
                                printf("%d ",r[i]);
                        }

                        printf("\n\n");
                        break;

                }
		
		case 3:
		{
			puts("Foydalanuvchi char[6] ko'rinishida satr kiritadi...");
			puts("Maqsadingiz shu son butun son yoki kasr son ekanligini aniqlash!");
			puts("Har ikkalasi ham bo'lmasa unda 'NULL' degan qiymat chiqarib bersin!");
 			printf("\n\n");

			char str[6];
    			int nuqta_soni = 0;
    			int xato = 0;

    			printf("Satr kiriting: ");
    			scanf("%5s", str);

    			int len = strlen(str);

    			for(int i = 0; i < len; i++)
    			{
        			if(isdigit(str[i]))
        			{
            				continue;
        			}
        		else if(str[i] == '.')
        			{
            				nuqta_soni++;
        			}
        		else
        			{
            				xato = 1;
            				break;
        			}
    			}

    			if(xato || nuqta_soni > 1)
    				{
        				printf("NULL\n");
    				}
    			else if(nuqta_soni == 1)
    				{
        				printf("Kasr son\n");
    				}
    			else
    				{
        				printf("Butun son\n");
    				}

    			break;

		}	
			
		case 4:
		{
			puts("Foydalanuvchi int[5][5] tipida 25 ta butun sonni o'zi klaviaturada kiritadi");
			puts("Maqsadingiz shu arrayning o'rtadagi elementlarini o'z holida...");
			puts("Qolgan tashqi elementlarini 0(nol) ko'rinishida chiqaruvchi dastur tuzing!");
			printf("\n\n");

    			int a[5][5];
    			char tanlov[4];   
    			printf("25 ta son avtomatik to'ldirilsinmi? (YES/NO)->(Shu tartibda kiriting): ");
    			scanf("%3s", tanlov);
    			switch(tanlov[0])
    			{
        			case 'Y':   
        			{
            				for(int i = 0; i < 5; i++)
                				for(int j = 0; j < 5; j++)
                    					a[i][j] = random(1,100);

           	 					break;
        			}

        			case 'N':  
        			{
            				printf("25 ta son kiriting:\n");
					printf("\n");
           	 			for(int i = 0; i < 5; i++)
                				for(int j = 0; j < 5; j++)
                    				scanf("%d", &a[i][j]);

            						break;
        			}

        			default:
            					printf("Noto'g'ri tanlov!\n");
            						return 1;
   	 			}

    				printf("\nNatija:\n\n");

    						for(int i = 0; i < 5; i++)
    						{
        						for(int j = 0; j < 5; j++)
        						{
            							if(i >= 1 && i <= 3 && j >= 1 && j <= 3)
                						printf("%4d", a[i][j]);
            						else
                						printf("%4d", 0);
        						}
        							printf("\n");
  					 	}

			break;


		}
				
		case 5:
		{	
			puts("l.txt faylda matematik ifoda berilgan. Maqsadingiz shu fayl ichidagi ma'lumotlarni"); 
			puts("output.txt fayliga barcha amallar qancha ishlatilganligini aniqlab yozish.");	
			printf("\n\n");

    			FILE *input, *output;
    			char ch;
    			int plus = 0, minus = 0, mult = 0, divi = 0, open_br = 0, close_br = 0;

   
    			input = fopen("l.txt", "r");
    			if(input == NULL)
    			{
        			printf("l.txt fayl topilmadi!\n");
        			return 1;
    			}

    			output = fopen("output.txt", "w");
    			if(output == NULL)
    			{
        			printf("output.txt fayl ochilmadi!\n");
        			fclose(input);
        			return 1;
    			}

    
    			while((ch = fgetc(input)) != EOF)
    			{
        			switch(ch)
        			{
            				case '+': plus++; break;
            				case '-': minus++; break;
            				case '*': mult++; break;
            				case '/': divi++; break;
            				case '(': open_br++; break;
            				case ')': close_br++; break;
        			}
    			}

    			fprintf(output, "+ amali: %d ta\n", plus);
    			fprintf(output, "- amali: %d ta\n", minus);
    			fprintf(output, "* amali: %d ta\n", mult);
    			fprintf(output, "/ amali: %d ta\n", divi);
    			fprintf(output, "( amali: %d ta\n", open_br);
    			fprintf(output, ") amali: %d ta\n", close_br);

    			printf("Operatorlar sanaldi va output.txt ga yozildi.\n");
			printf("Tekshirib ko'rish uchun 'start output.txt' deb yozing!!!\n");
    			fclose(input);
    			fclose(output);

    			break;
		}

		


		default: puts("Siz mavjud bo'lmagan vazifa tartib raqamini kiritdingiz!!!");

	}
			
	return 0;

}
