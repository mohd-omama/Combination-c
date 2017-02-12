#include <stdio.h>
#include <string.h>


void combination1 (char []);	
void combination2 (char [], int);						

char out[20];										


int comb_size=0,num=0,str_len,fixer_in=0,fixer_movement;	


int main()
{
	char a[20];
	
	printf ("Enter the string :\n");
	scanf ("%[^\n]%*c",a);
	printf("\n\n");
	
	str_len=strlen(a);
	
	combination1 (a);

	return 0;
}




void combination1 (char a[])
{
	
	++comb_size;
	fixer_movement=str_len-comb_size+1; 
	if (comb_size>str_len)
		return;
	else{
		combination2 (a,0);
		
		--fixer_in;		
		
		combination1 (a);
	
		return;	
	}	
		
	
		
}


void combination2 (char a[],int k)
{
	++fixer_in;
	
	int fixer_out=fixer_in,i;
	if (fixer_in>comb_size){
		printf("%s\n",out);
		return;
	}
	
	else{
		for(i=k;i<fixer_movement;i++){
			
			out[fixer_out-1]=a[i+fixer_out-1];
			combination2 (a,i);
			--fixer_in;
		
		}
	
		return;
	
	}



}






