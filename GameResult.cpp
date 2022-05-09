#include "GameResult.h"
#include "ShowCard.h"

void GameResult()
{
	for (i = 0; i < 6; i = i + 2)
	{
		Dealer[Count] = Deck[i];
		Player[Count] = Deck[i + 1];

		cout << Count + 1 << "번째 카드 드로우!!" << endl;
		cout << "Dealer : ";
		ShowCard(Dealer[Count]);
		cout << '\n' << "Player : ";
		ShowCard(Player[Count]);
		cout << endl;

		Count = Count + 1;

		for (DealerI = 0; DealerI < Count; DealerI++)
		{
			if (Dealer[DealerI] % 13 > 9)
			{
				Dealer[DealerI] = 9;
			}

			ResultD += (Dealer[DealerI] % 13);
		}

		for (PlayerI = 0; PlayerI < Count; PlayerI++)
		{
			if (Player[PlayerI] % 13 > 9)
			{
				Player[PlayerI] = 9;
			}

			ResultP += (Player[PlayerI] % 13);
		}

		cout << "Dealer Score : " << ResultD + Count << endl;
		cout << "Player Score : " << ResultP + Count << endl;

		if (ResultD + Count > 21 && ResultP + Count > 21)
		{
			cout << "Draw!!" << endl;
			i = MAX;
		}

		else if (ResultD + Count > 21)
		{
			cout << "Player Win!!" << endl;
			i = MAX;
		}

		else if (ResultP + Count > 21)
		{
			cout << "Dealer Win!!" << endl;
			i = MAX;
		}

		else if (ResultP >= ResultD)
		{
			cout << "Player Win!!" << endl;
		}

		else
		{
			cout << "Dealer Win!!" << endl;
		}

		ResultD = 0;
		ResultP = 0;
	}
}