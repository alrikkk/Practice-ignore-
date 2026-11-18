#include <stdio.h>

struct Character {
char name [30];
int level ;
int health ;
int coins ;
};

int main (void) {
    struct Character hero = {" Arjun ", 1 , 100 , 50};

// TODO 1: Level up the hero ( increase level by 1)

// TODO 2: Increase health by 20

// TODO 3: Decrease coins by 30 ( bought a sword )

printf (" Level : %d | HP: %d | Coins : %d\n",
hero . level , hero . health , hero . coins ) ;
return 0;
}
