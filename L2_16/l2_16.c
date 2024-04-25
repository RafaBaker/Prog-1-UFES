#include <stdio.h>

int main () {

    int num = 0, menor = 32000, primeira = -1, ultima = 0, i = 0;
    char espaco = '\0';

    while ((scanf("%d%c", &num, &espaco)) >= 1) {
	if (num < menor) {
		menor = num;
    	}
    }
    scanf("%*[^\n]");
    while ((scanf("%d%c", &num, &espaco)) >= 1) {
    	if (num == menor) {
    		if (primeira == -1) {
    			primeira = i;
    		} else {
    			ultima = i;
    		}
    	}
    	i += 1;
    }
    
    if (primeira == -1) {
    	primeira = i;
    	ultima = i;
    }
    
    if (ultima == 0) {
    	ultima = primeira;
    }
    
    printf("%d %d %d", menor, primeira, ultima);
    
    return 0;
}
