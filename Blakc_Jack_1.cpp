#include "Shuffle.h"
#include "GameStart.h"
#include "ShowCard.h"
#include "GameResult.h"
#include "Common.h"

int main(void)
{

	for (i = 0; i < MAX; i++)
	{
		Deck[i] = i;
	}

	srand((unsigned int)time(NULL));

	Shuffle();

	GameStart();

	cout << endl;

	GameResult();


	return 0;
}