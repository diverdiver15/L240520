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

*/


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
void WhoisWinner(int playerTotal,int computerTotal) {
	
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
WhoisWinner(playerTotal, computerTotal);

return 0;
}
