#include "GameStart.h"

void GameStart()
{
	cout << "Black Jack Start(press s) : ";
	cin >> Start;

	while (1)
	{
		if (Start != 's' && Start != 'S')
		{
			cout << "S �Ǵ� s�� �Է����ֽʽÿ� : ";
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