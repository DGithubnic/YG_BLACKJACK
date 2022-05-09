#include "GameStart.h"

void GameStart()
{
	cout << "Black Jack Start(press s) : ";
	cin >> Start;

	while (1)
	{
		if (Start != 's' && Start != 'S')
		{
			cout << "S 또는 s를 입력해주십시오 : ";
			cin >> Start;
		}

		else
		{
			cout << endl;
			cout << "--------- Game Start ---------" << endl;
			break;
		}
	}
}