#include<stdio.h>

	/* histogram of the frequencies of different characters in its input */
	
#define ARR_MAX 26

int main()
{
	int i, j, c;
	int arr[('z'-'a')+1];						// this
	int arr2[('Z'-'A')+1];						// and this will evaluvate to 26
	int k = 0, l = 0;

	for(i = 0; i < ARR_MAX; ++i){
		arr[i] = 0;
		arr2[i] = 0;
	}
	
	while((c = getchar()) != EOF){ 				// initilaze the array with data 
		if(c >= 'a' && c <= 'z')
			++arr[c-'a'];
		if(c >= 'A' && c <= 'Z')
			++arr2[c-'A'];
	}

	
	for(i = 0; i < ARR_MAX; ++i){				// loop to find out witch array has the biggst value (Simpl & capital)
		if(arr2[i] > l)							// capital letter
			l = arr2[i];					
		if(arr[i] > k)							// simple letter
			k = arr[i];
	}

	printf("\n%d\n", k);

	/*for(i = 0; i < ARR_MAX; ++i){				// start of the histogram horizontal (Simple letter)
		//if(arr[i] != 0){
			printf("%c |", 'a'+i);
			for(j = arr[i]; j > 0; --j)
				printf(" * ");
			putchar('\n');
		//}	
	}

	printf("   ");								// lines at the end
	for(i = k; i > 0; --i)
		printf("---");

	printf("\n   ");							// number at the end
	for(i = k; i > 0; --i)
		printf("%2d ", k-i+1);

	putchar('\n');								// end of the histogram horizontal (Simple letter)

	printf("\n%d\n", l);

	for(i = 0; i < ARR_MAX; ++i){				// start of the histogram horizontal (Capital letter)
		//if(arr2[i] != 0){
			printf("%c |", 'A'+i);
			for(j = arr2[i]; j > 0; --j)
				printf(" * ");
			putchar('\n');
		//}	
	}

	printf("   ");
	for(i = l; i > 0; --i)
		printf("---");

	printf("\n   ");
	for(i = l; i > 0; --i)
		printf("%2d ", l-i+1);

	putchar('\n');	*/							// end of the histogram horizontal (Capital letter)

	for(i = k; i > 0; --i){						// start of the histogram virtical (Simpe letter)
		printf("%3d |", i);
		for(j = 0; j < ARR_MAX; ++j){
			if(arr[j] >= i)
				printf("* ");
			else
				printf("  ");
		}
		putchar('\n');
	}

	printf("     ");
	for(i = 0; i < ARR_MAX; ++i){
		printf("--");
	}
	printf("\n     ");
	for(i = 0; i < ARR_MAX; ++i){
		printf("%c ", 'a'+i);
	}
	putchar('\n');								// end of the histogram virtical (Simpe letter)

	for(i = l; i > 0; --i){						// start of the histogram virtical (Capital letter)
		printf("%3d |", i);
		for(j = 0; j < ARR_MAX; ++j){
			if(arr2[j] >= i)
				printf("* ");
			else
				printf("  ");
		}
		putchar('\n');
	}

	printf("     ");
	for(i = 0; i < ARR_MAX; ++i){
		printf("--");
	}
	printf("\n     ");
	for(i = 0; i < ARR_MAX; ++i){
		printf("%c ", 'A'+i);
	}
	putchar('\n');								// end of the histogram virtical (Capital letter)


	return 0;
}
