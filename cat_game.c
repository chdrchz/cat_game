#include <stdio.h>
#include <stdlib.h>
#include "cat_game.h"
#include "cat_game_intro.c"
#include "cat_game_story.c"

int main(void)
{
        introduction(); // game intro function (located in cat_game_intro.c)
	
	story(); // main story (located in cat_game_story.c)
}
