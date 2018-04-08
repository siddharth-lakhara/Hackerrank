#include <stdio.h>

void update(int *a,int *b) {
    int aOld = *a;
	int bOld = *b;
	*a = aOld + bOld;
    int bNew = aOld - bOld;
	*b = (bNew < 0 ? -bNew : bNew) ;    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
