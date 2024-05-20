/*rand 함수를 이용, 딜러2장, 플레이어2장 받는 블랙잭게임만들기 
함수는 직접사용 해라

블랙잭 게임의 규칙을 간단히 설명하면, 각 카드는 1부터 11까지의 값 중 하나를 가집니다.
각자 두 장의 카드를 받아 합계가 21에 가까운 쪽이 승리하게 됩니다.

1.카드 값을 랜덤으로 생성
2.플레이어와 딜러 카드를 출력 하는 함수 
3.승자를 결정 짓는 함수 
4.카드 뽑기 
5.카드 합계 계산
6.카드와 합계출력 



#include<iostream>
#include<cstdlib> //rand 함수 사용
#include <ctime>  
using namespace std;

//1.카드 값을 랜덤으로 생성
int DrawCard() {
	return rand() % 11 + 1;
}
//2.플레이어와 딜러 카드를 출력 하는 함수 
void displayCards(int player1, int player2, int computer1, int computer2) {
	

	cout << "플레이어 카드 : " << player1 << player2 << endl;
	cout << "컴퓨터 카드 : " << player1 << player2 << endl;
}

//3.승자를 결정 짓는 함수
void Determine(int playerTotal,int computerTotal) {
	
	cout << "플레이어 합계 : " << playerTotal << endl;
	cout << "컴퓨터 합계 : " << computerTotal << endl;

	if (playerTotal > 21 && computerTotal > 21) {
		cout << "둘 다 버스트! 무승부" << endl;
	}
	else if (playerTotal > 21) {
		cout << "플레이어 버스트! 컴퓨터 승리!" << endl;
	}
	else if (computerTotal > 21) {
		cout << "컴퓨터 버스트! 플레이어 승리!" << endl;
	}
	else if (playerTotal > computerTotal) {
		cout << "플레이어 승리!" << endl;
	}
	else if (computerTotal > playerTotal) {
		cout << "컴퓨터 승리!" << endl;
	}
	else if (computerTotal == playerTotal) {
		cout << "무승부" << endl;
	}
}
int main() {
	srand(static_cast<unsigned int>(time(0)));

//카드뽑기 
int player1 = DrawCard();
int player2 = DrawCard();
int computer1 = DrawCard();
int computer2 = DrawCard();

//카드 합계 
int playerTotal = player1 + player2;
int computerTotal = computer1 + computer2;

//카드와 합계 출력 '

displayCards(player1, player2, computer1, computer2);
Determine(playerTotal, computerTotal);

return 0;
}
*/

#include <iostream>
using namespace std;

//52장 1~13 A j q k
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

string CardType[4] = { "◆", "♠", "♣", "♥" };



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
		cout << "승리" << endl;
	}
	else if (ComputerTotal <= 21 && PlayerTotal > 21)
	{
		cout << "패배" << endl;
	}
	else //if (ComputerTotal <= 21 && PlayerTotal <= 21)
	{
		if (ComputerTotal > PlayerTotal)
		{
			cout << "패배" << endl;
		}
		else
		{
			cout << "승리" << endl;
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
	//char M[6] = { 'H', 'E', 'L', 'L', 'O', '\0'}; 무조건 \n 문자 만나면 끝난다. 문자열 처럼 쓸려면 \0 있어야함 \0이걸 중간에 넣으면 중간에 끊김 \0두개를 하나로봄
	char M[6] = { "HELLO" };//윗줄과 같음 
	cout << M << endl;
	

	return 0;
}


int main()
{
	//int, float, bool, char, string string 한글 가능
	string Message = "집에";// \0을 쓰면 그앞 까지만 출력
	string Message2 = "가고 싶엉";


	cout << Message + Message2 << endl;

}




int main()
{
  // return 0이 되면 끝
	int* P = new int; //p는 메모리 위치만 알려줌 
	//int A차이점은 선언도 내맘대로, 지우는것도 내맘대로 
	//우리에게 필요한건 거기에 값을 넣고 빼고 

	*P = 10;//가리킨곳에 넣어 가져오라고 하면 가져오는 

	cout << *P << endl;

	delete P;//new랑 delete랑 세트다.

	//배열 
	int Count = 10;
	int* A = new int[Count];

	*A = 20;//둘 다 같음 
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
	
	P = new int; //null 즉 0이라는 말 
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
	//const char* Message = "hell korea";//바꾸면 안된다고 뜬다 
	string MessageString = "hello World";//c++은 이 두개만 주로 사용
	MessageString = "안녕하세여.";//c++은 이 두개만 주로 사용
	//Message = "안녕";
	cout << MessageString<< endl;

	return 0;
}

int main()
{
	//[][][][][][]//자료 구조
	int Size = 10;
	int* Numbers = new int[Size];
	for (int i = 0; i < Size; ++i)
	{
		Numbers[i] = i + 1;

	}

	//제일 뒤에 자료 추가 

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
struct Vector2D// 구조체 커스텀 자료형을 만들거다 사람이 보기 편하게 
{
	int X;
	int Y;// int 4바이트 전체 8바이트

};


struct Actor
{
	Vector2D Position;
	char Shape;
	string name;

};
//Photoshop에서 쓴다. 0~255 프로그램을, cpu를 쓰기에 정수 
struct Color
{
	unsigned char R;
	unsigned char G;
	unsigned char B;//char 1바이트 

};
//0~1 % percent //led 디자인 밝기 퍼센트가 확장이 편하다. gpu는 실수만 씀
//언리얼 엔진은 float  
/*struct Color
{
	float R;
	float G;
	float B;

};*/

int main() 
{
	Actor* Player = new Actor;
	
	(*Player).Position.X;//같은말
	Player->Position.X = 10; //포인터대신에 화살표가 편하다.
	Player->Position.Y = 10;
	Player->Shape = 'P';
	Player->name = "김치만두";
	
	cout << Player->Position.X << endl;

	return 0;
}
