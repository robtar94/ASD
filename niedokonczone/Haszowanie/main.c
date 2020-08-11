#include <stdio.h>
#include <stdlib.h>
#include "hash-open.h"

int main() {
 int tab[TAB_SIZE];
 init(tab);
 insert(tab, 206);
 insert(tab, 142);
 insert(tab, 303);
 write(tab);
	return 0;
}
