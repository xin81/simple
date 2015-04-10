#include "pi.h"
int main(void){
	printf("All about pi=%Lf\n", M_PI);
	const short int MENU_MAX=7;
	const short int STRING_MAX=15;
	char** menu=(char**) malloc(STRING_MAX * MENU_MAX);
	menu[0]="Quit";
	menu[1]="Naive";
	menu[2]="A-Tan";
	menu[3]="Gauss-Legendre";
	menu[4]="Machin";
	menu[5]="Newton";
	menu[6]="Euler";
	for(short int i=0; i < MENU_MAX; i++){
		printf("%i: %s\n", i, menu[i]);
	}

	printf("Choose a formula for pi: ");
	LDBL pi=0.0;
	int choice=0;
	if(scanf("%d", &choice) > 0){
		switch(choice){
			case 0: exit(EXIT_SUCCESS);
			break;
			case 1: pi=(naive_pi());
			break;
			case 2: pi=(arctan_pi());
			break;	
			case 3: pi=gauss_legendre_pi();
			break;
			case 4: pi=(machin_pi());
			break;
			case 5: pi=(newton_pi());
			break;
			case 6: pi=(euler_pi());
			break;
			default: perror("Unknown formula");pi=M_PI;choice=1;
		}
	}
	LDBL error=sqrt(pow(((M_PI-pi)*1.0L), 2.0L));
#if !defined(_WINDOWS_)	
	printf("%s's pi=%.48Lf\n", menu[choice], pi);
	printf("sqrt(error^2)=%.48Lf\n",error);
#else
	printf("%s's pi=%.48lf\n", menu[choice], pi);
	printf("sqrt(error^2)=%.48lf\n", error);
	system("PAUSE");
#endif
	return EXIT_SUCCESS;
}
