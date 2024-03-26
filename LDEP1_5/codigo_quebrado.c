#include <stdio.h>

int main(){
	int a, b, den=1, i=0, mdc=0, mmc=1, limMDC, limMMC;

	scanf("%d %d", &a, &b);


	//Acha limites da busca
	if (a < b){ 
		limMDC = a;
		limMMC = b;
	} else {
		limMDC = b;
		limMMC = a;
	}
	
	//MDC
	for(den=1; den <= limMDC; den++){   
		if((a%den == 0) && (b%den == 0)){ 
			mdc = den;
		}
	}
	
	//MMC
	// i = limMMC;
	// while(1){
	// 	if (mdc == 1) {
	// 		mmc = a*b; 
	// 		break;
	// 	}
	// 	else if ((i%a == 0) && (i%b == 0)) {      
	// 		mmc = i;
	// 		break;
	// 	i++;
	// 	}
	// }
	mmc = a * (b/mdc);

	printf("%d %d", mdc, mmc);

	return 0;
}
