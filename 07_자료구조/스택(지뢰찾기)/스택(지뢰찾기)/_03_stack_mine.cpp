#include "mine.h"
void main() {
	// 1) 7 * 7 �ʿ� 0���� ����ä��� 
	// 2) 35������ź ��ġ ( ��ź�� 9�� ǥ��)
	// 3) ��ź��ġ�� ���´�.
	// 4) ��ź�� �ƴѰ�(0) �ֺ� 8������ �˻��ؼ�
	//    ��ź������ 0 �� ����
	// 5) ��ź�� �ƴѰ��� �Է¹ް� ����� ��簪�� ��ũ1 �� ���� 
	Mine** map = set_bomb();
	print_map(map);
	shuffle(map);
	print_map(map);
	count_bomb(map);
	print_map(map);
	int run = 1;
	while (run == 1) {
		system("cls");
		print_game(map);
		play_game(map);
	}

}
