// ConsoleApplication1.cpp : �A�v���P�[�V�����̃G���g�� �|�C���g���`���܂��B
//


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));

	int a, b, c, d, e, f, x;
	int ans;
	int r, l;
	int retry;

	puts("�����A�R�i���o�[�Y����낤�ł͂Ȃ����B");
	puts("�N���[���킩��H�H�@�킩��Ȃ�����������������Ă������www\n");

	printf("�y����Ȃ̂���Ȃ��I�c0 �^ �����Ă��������B�B�B�c9�z:");
	scanf_s("%d", &r);

	switch (r)
	{

	case 0:
		puts("\n����ȈӒn�𒣂�Ȃ�`�B�܂�������ww"); break;

	case 9:
		puts("\n�܂�����..�D��Ԃ̂�����q���ȁ`\n");
		puts("�R�i���o�[�Y�͂ˁA�R���̐����𓖂Ă�Q�[�������\n");
		puts("HIT��BLOW��NOT���Ă̂�����񂾂��ǁA��������H����"); break;

	}
	if (r == 0)
	{
		puts("�N�̎��͂��m���߂����Ă��炤��I\n");
		printf("�������Ă����I�c0�^�_���B�c9:");
		scanf_s("%d", &l);

		switch (l)
		{

		case 0:
			puts("\n�i���ʂ����Ȃ�I�I\n"); break;

		case 9:
			puts("\n���A���H�@�_���Ȃ́H���@�܁A�܂������Ȃ�Ɋ撣����...\n");
		}
	}
	else
	{
		printf("�y����Ɍ��܂��Ă񂾂�I�c0 �^ ����ˁ[���B�B�B�c9�z:");
		scanf_s("%d", &r);

		switch (r)
		{

		case 0:
			puts("\n�����ˁ`\n");
			printf("HIT�͌��������Ă��鐔���̐��B\nBLOW�͌��͈Ⴄ����ǎg���Ă��鐔���̐�����I\n");
			printf("�Ⴆ�΁A�����̐������u�S�T�U�v�̂Ƃ�\n�u�T�S�U�v��������u1HIT 2BLOW�v\n�u�P�Q�R�v��������ǂ���Ȃ�����uNOT�v����I\n"); break;

		case 9:
			puts("\n����ȝX�˂�Ȃ��āI\n");
			printf("HIT�͌��������Ă��鐔���̐��B\nBLOW�͌��͈Ⴄ����ǎg���Ă��鐔���̐�����I\n");
			printf("�Ⴆ�΁A�����̐������u�P�Q�R�v�̂Ƃ�\n�u�P�R�Q�v��������u1HIT 2BLOW�v\n�u�T�U�V�v��������ǂ���Ȃ�����uNOT�v����I\n");
		}
	}

	puts("");
	puts("���Ⴀ�n�߂悤���I");
	do
	{
		do
		{
			ans = rand() % 900 + 100;
			a = ans / 100;          /*�@�S�̈ʁ@*/
			b = ans % 100 / 10;     /*�@�\�̈ʁ@*/
			c = ans % 100 % 10;     /*�@��̈ʁ@*/

		} while (a == b == c || a == b || a == c || b == c);
		do
		{
			do
			{
				printf("�R���̐�������͂��Ă�������:");
				scanf_s("%d", &x);

				d = x / 100;        /*�@�S�̈ʁ@*/
				e = x % 100 / 10;   /*�@�\�̈ʁ@*/
				f = x % 100 % 10;   /*�@��̈ʁ@*/
				if (d == e == f || d == e || d == f || e == f) {
					puts("������������͂�����_�������");
				}
			} while (100 > x || 999 < x && d == e == f || d == e || d == f || e == f);
			printf("\n%d\n", x);


			if (a == d && b == e && c == f){
				puts("3 H I T !!\n");
			}
			else if (a == d && b == f && c == e || b == e && a == f && c == e || c == f && a == e && b == d){
				puts("1 HIT 2 BLOW !\n");
			}
			else if (a == d && b == f || a == d && c == e || b == e && a == f || b == e && c == e || c == f && a == e || c == f && b == d){
				puts("1 HIT 1 BLOW !\n");
			}
			else if (a == d && b == e || a == d && c == f || b == e && c == f){
				puts("2 H I T !\n");
			}
			else if (a == d || b == e || c == f){
				puts("1 H I T !\n");
			}
			else if (a == e && b == f && c == d || a == f && b == d && c == e){
				puts("3 B L O W !\n");
			}
			else if (a == e && b == f || a == e && c == d || a == e && b == d || b == f && c == d || b == f && c == e || a == f && b == d || a == f && c == e || a == f && c == d || b == d && c == e){
				puts("2 B L O W !\n");
			}
			else if (a == e || a == f || b == d || b == f || c == d || c == e){
				puts("1 B L O W !\n");
			}
			else{
				puts("N O T\n");
			}

		} while (ans != x);

		puts("���߂łƂ��I�悭���Ă��ˁI\n");
		printf("�����P���肽���H�yYes�c0�^No�c9�z:");
		scanf_s("%d", &retry);

		if (retry == 0){
			puts("\n����`���Ȃ��ȁ`");
		}
		else{
			puts("\n��߂��Ⴄ�Ȃ�ā@�q�h�C�@(T-T)");
		}
	} while (retry == 0);

	return 0;

}





