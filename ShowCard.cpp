#include "ShowCard.h"

void ShowCard(int PlayerCard)
{
	if (PlayerCard < 13)
	{
		cout << "��";
	}
	else if (PlayerCard < 26 && PlayerCard >= 13)
	{
		cout << "��";
	}
	else if (PlayerCard < 39 && PlayerCard >= 26)
	{
		cout << "��";
	}
	else
	{
		cout << "��";
	}

	if (PlayerCard % 13 == 0)
	{
		cout << "A";
	}
	else if (PlayerCard % 13 == 10)
	{
		cout << "J";
	}
	else if (PlayerCard % 13 == 11)
	{
		cout << "Q";
	}
	else if (PlayerCard % 13 == 12)
	{
		cout << "K";
	}
	else
	{
		cout << (PlayerCard % 13) + 1;
	}
}