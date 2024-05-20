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

*/


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
void WhoisWinner(int playerTotal,int computerTotal) {
	
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
WhoisWinner(playerTotal, computerTotal);

return 0;
}
