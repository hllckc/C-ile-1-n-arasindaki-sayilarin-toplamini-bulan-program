#include <stdio.h>

int topla(int);
int main(int argc, char const *argv[])
{
	int sayi;
	printf("sayi giriniz : ");
    scanf("%d",&sayi);

    printf("1-%d sayilarin toplami : %d\n",sayi,topla(sayi));
    
    //1-n e kadar olan sayıların toplamı förmülü ==> (n*(n+1))/2
    printf("1-%d sayilarin toplami : %d",sayi,(sayi*(sayi+1))/2);

    return 0;
}

int topla(int sayi){
	if(sayi==1)
		return 1;
	return sayi+topla(sayi-1);
}