/*rand �Լ��� �̿�, ����2��, �÷��̾�2�� �޴� ������Ӹ���� 
�Լ��� ������� �ض�

���� ������ ��Ģ�� ������ �����ϸ�, �� ī��� 1���� 11������ �� �� �ϳ��� �����ϴ�.
���� �� ���� ī�带 �޾� �հ谡 21�� ����� ���� �¸��ϰ� �˴ϴ�.

1.ī�� ���� �������� ����
2.�÷��̾�� ���� ī�带 ��� �ϴ� �Լ� 
3.���ڸ� ���� ���� �Լ� 
4.ī�� �̱� 
5.ī�� �հ� ���
6.ī��� �հ���� 



#include<iostream>
#include<cstdlib> //rand �Լ� ���
#include <ctime>  
using namespace std;

//1.ī�� ���� �������� ����
int DrawCard() {
	return rand() % 11 + 1;
}
//2.�÷��̾�� ���� ī�带 ��� �ϴ� �Լ� 
void displayCards(int player1, int player2, int computer1, int computer2) {
	

	cout << "�÷��̾� ī�� : " << player1 << player2 << endl;
	cout << "��ǻ�� ī�� : " << player1 << player2 << endl;
}

//3.���ڸ� ���� ���� �Լ�
void Determine(int playerTotal,int computerTotal) {
	
	cout << "�÷��̾� �հ� : " << playerTotal << endl;
	cout << "��ǻ�� �հ� : " << computerTotal << endl;

	if (playerTotal > 21 && computerTotal > 21) {
		cout << "�� �� ����Ʈ! ���º�" << endl;
	}
	else if (playerTotal > 21) {
		cout << "�÷��̾� ����Ʈ! ��ǻ�� �¸�!" << endl;
	}
	else if (computerTotal > 21) {
		cout << "��ǻ�� ����Ʈ! �÷��̾� �¸�!" << endl;
	}
	else if (playerTotal > computerTotal) {
		cout << "�÷��̾� �¸�!" << endl;
	}
	else if (computerTotal > playerTotal) {
		cout << "��ǻ�� �¸�!" << endl;
	}
	else if (computerTotal == playerTotal) {
		cout << "���º�" << endl;
	}
}
int main() {
	srand(static_cast<unsigned int>(time(0)));

//ī��̱� 
int player1 = DrawCard();
int player2 = DrawCard();
int computer1 = DrawCard();
int computer2 = DrawCard();

//ī�� �հ� 
int playerTotal = player1 + player2;
int computerTotal = computer1 + computer2;

//ī��� �հ� ��� '

displayCards(player1, player2, computer1, computer2);
Determine(playerTotal, computerTotal);

return 0;
}
*/

#include <iostream>
using namespace std;

//52�� 1~13 A j q k
//dia spade clova heart
/*
com > 21 win 
com <= 21 player > 21 lose






#include <iostream>
#include <string>

using namespace std;

//52 1-13 A  10 J Q K
//Diamond  // 0
//Spade  // 1
//Clova //2
//Heart //3

int PlayerCard[10] = { 0, };
int ComputerCard[10] = { 0, };

int PlayerTotal = 0;
int ComputerTotal = 0;

int Cards[52] = { 0, };

string CardType[4] = { "��", "��", "��", "��" };



void Shuffle()
{
	for (int i = 0; i < 52; ++i)
	{
		Cards[i] = i;
	}

	for (int i = 0; i < 10000; ++i)
	{
		int FirstCard = rand() % 52;
		int SecondCard = rand() % 52;
		int Temp = Cards[FirstCard];
		Cards[FirstCard] = Cards[SecondCard];
		Cards[SecondCard] = Temp;
	}

}

int DefineType(int CardNumber)
{
	return CardNumber / 12;
}

int DefineCard(int CardNumber)
{
	return ((CardNumber % 12) + 1);
}

void DrawCard()
{
	int CardCount = 0;
	for (int i = 0; i < 2; ++i)
	{
		PlayerCard[i] = Cards[CardCount];
		PlayerTotal += DefineCard(PlayerCard[i]);
		CardCount++;
	}

	for (int i = 0; i < 2; ++i)
	{
		ComputerCard[i] = Cards[CardCount];
		ComputerTotal += DefineCard(ComputerCard[i]);
		CardCount++;
	}
}

void DetermineGame()
{
	if (ComputerTotal > 21)
	{
		cout << "�¸�" << endl;
	}
	else if (ComputerTotal <= 21 && PlayerTotal > 21)
	{
		cout << "�й�" << endl;
	}
	else //if (ComputerTotal <= 21 && PlayerTotal <= 21)
	{
		if (ComputerTotal > PlayerTotal)
		{
			cout << "�й�" << endl;
		}
		else
		{
			cout << "�¸�" << endl;
		}
	}
}

void ShowCard()
{
	cout << "Player" << endl;
	for (int i = 0; i < 2; ++i)
	{
		cout << CardType[DefineType(PlayerCard[i])];
		cout << DefineCard(PlayerCard[i]) << endl;
	}

	cout << "Computer" << endl;
	for (int i = 0; i < 2; ++i)
	{
		cout << CardType[DefineType(ComputerCard[i])];
		cout << DefineCard(ComputerCard[i]) << endl;
	}


}


int main()
{
	srand(time((time_t*)nullptr));

	Shuffle();
	DrawCard();
	ShowCard();
	DetermineGame();


	return 0;
}
*/


#include <iostream>
#include <string>

using namespace std;
/*
int main()
{
	char H[5] = { 'H', 'E', 'L', 'L', 'O' };
	for (int i = 0; i < 5; ++i)
	{
		cout << H[i];
	}
	cout << endl;
	//char M[6] = { 'H', 'E', 'L', 'L', 'O', '\0'}; ������ \n ���� ������ ������. ���ڿ� ó�� ������ \0 �־���� \0�̰� �߰��� ������ �߰��� ���� \0�ΰ��� �ϳ��κ�
	char M[6] = { "HELLO" };//���ٰ� ���� 
	cout << M << endl;
	

	return 0;
}


int main()
{
	//int, float, bool, char, string string �ѱ� ����
	string Message = "����";// \0�� ���� �׾� ������ ���
	string Message2 = "���� �;�";


	cout << Message + Message2 << endl;

}




int main()
{
  // return 0�� �Ǹ� ��
	int* P = new int; //p�� �޸� ��ġ�� �˷��� 
	//int A�������� ���� �������, ����°͵� ������� 
	//�츮���� �ʿ��Ѱ� �ű⿡ ���� �ְ� ���� 

	*P = 10;//����Ų���� �־� ��������� �ϸ� �������� 

	cout << *P << endl;

	delete P;//new�� delete�� ��Ʈ��.

	//�迭 
	int Count = 10;
	int* A = new int[Count];

	*A = 20;//�� �� ���� 
	A[0] = 20;


	*(A + 1) = 20;
	A[1] = 20;

	cout << *(A + 1) << endl;
	cout << A[1] << endl;

	delete[] A;

	return 0;
}



int main()
{
	int* P = nullptr;
	int* P2 = nullptr;
	
	P = new int; //null �� 0�̶�� �� 
	P2 = P;

	if (P2)
	{
		*P2 = 2;

	}
	*P = 100;

	cout << *P2 << endl;
	delete P;
	P = nullptr;
	P2 = nullptr;
}

#include <iostream>
#include <memory>
using namespace std;

void Maniplate(int* CountPoint)
{
	*CountPoint = 200;
}

int main()
{
	int* CountPoint = new int;
	
	*CountPoint = 100;

	Maniplate(CountPoint);
	cout << *CountPoint << endl;
	return 0;

}

#include <iostream>
using namespace std;

int main()
{	
	//[h][e][l][l][][k][o][r][e][a][\0]
	//const char* Message = "hell korea";//�ٲٸ� �ȵȴٰ� ��� 
	string MessageString = "hello World";//c++�� �� �ΰ��� �ַ� ���
	MessageString = "�ȳ��ϼ���.";//c++�� �� �ΰ��� �ַ� ���
	//Message = "�ȳ�";
	cout << MessageString<< endl;

	return 0;
}

int main()
{
	//[][][][][][]//�ڷ� ����
	int Size = 10;
	int* Numbers = new int[Size];
	for (int i = 0; i < Size; ++i)
	{
		Numbers[i] = i + 1;

	}

	//���� �ڿ� �ڷ� �߰� 

	int* Temp = new int[Size + 1];

	for (int i = 0; i < Size ; ++i)
	{
		Temp[i] = Numbers[i];
	}
	Temp[Size] = Size + 1;

	delete[] Numbers;
	Numbers = Temp;
	
	for (int i = 0; i < Size + 1; ++i)
	{
		cout << Numbers[i] << ",";
	}
	return 0;
}
*/
//custom Data
struct Vector2D// ����ü Ŀ���� �ڷ����� ����Ŵ� ����� ���� ���ϰ� 
{
	int X;
	int Y;// int 4����Ʈ ��ü 8����Ʈ

};


struct Actor
{
	Vector2D Position;
	char Shape;
	string name;

};
//Photoshop���� ����. 0~255 ���α׷���, cpu�� ���⿡ ���� 
struct Color
{
	unsigned char R;
	unsigned char G;
	unsigned char B;//char 1����Ʈ 

};
//0~1 % percent //led ������ ��� �ۼ�Ʈ�� Ȯ���� ���ϴ�. gpu�� �Ǽ��� ��
//�𸮾� ������ float  
/*struct Color
{
	float R;
	float G;
	float B;

};*/

int main() 
{
	Actor* Player = new Actor;
	
	(*Player).Position.X;//������
	Player->Position.X = 10; //�����ʹ�ſ� ȭ��ǥ�� ���ϴ�.
	Player->Position.Y = 10;
	Player->Shape = 'P';
	Player->name = "��ġ����";
	
	cout << Player->Position.X << endl;

	return 0;
}
