#include "Shuffle.h"

void Shuffle()
{
	for (i = 0; i < MAX * 5; i++)
	{
		Random1 = rand() % 52;
		Random2 = rand() % 52;
		Temp = Deck[Random1];
		Deck[Random1] = Deck[Random2];
		Deck[Random2] = Temp;
		Temp = 0;
	}
}