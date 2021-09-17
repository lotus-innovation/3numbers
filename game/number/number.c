// ConsoleApplication1.cpp : アプリケーションのエントリ ポイントを定義します。
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

	puts("さぁ、３ナンバーズをやろうではないか。");
	puts("君ルールわかる？？　わからなさそうだから説明してあげるよwww\n");

	printf("【そんなのいらない！…0 ／ 教えてください。。。…9】:");
	scanf_s("%d", &r);

	switch (r)
	{

	case 0:
		puts("\nそんな意地を張るなよ～。まぁいいやww"); break;

	case 9:
		puts("\nまったく..．手間のかかる子だな～\n");
		puts("３ナンバーズはね、３桁の数字を当てるゲームだよ♪\n");
		puts("HITとBLOWとNOTってのがあるんだけど、説明いる？ｗｗ"); break;

	}
	if (r == 0)
	{
		puts("君の実力を確かめさせてもらうよ！\n");
		printf("かかってこい！…0／ダメ。…9:");
		scanf_s("%d", &l);

		switch (l)
		{

		case 0:
			puts("\n吠え面かくなよ！！\n"); break;

		case 9:
			puts("\nえ、え？　ダメなの？ｗ　ま、まぁ自分なりに頑張って...\n");
		}
	}
	else
	{
		printf("【いるに決まってんだろ！…0 ／ いらねーし。。。…9】:");
		scanf_s("%d", &r);

		switch (r)
		{

		case 0:
			puts("\nそだね～\n");
			printf("HITは桁が合っている数字の数。\nBLOWは桁は違うけれど使われている数字の数だよ！\n");
			printf("例えば、正解の数字が「４５６」のとき\n「５４６」だったら「1HIT 2BLOW」\n「１２３」だったらどれもないから「NOT」だよ！\n"); break;

		case 9:
			puts("\nそんな拗ねるなって！\n");
			printf("HITは桁が合っている数字の数。\nBLOWは桁は違うけれど使われている数字の数だよ！\n");
			printf("例えば、正解の数字が「１２３」のとき\n「１３２」だったら「1HIT 2BLOW」\n「５６７」だったらどれもないから「NOT」だよ！\n");
		}
	}

	puts("");
	puts("じゃあ始めようか！");
	do
	{
		do
		{
			ans = rand() % 900 + 100;
			a = ans / 100;          /*　百の位　*/
			b = ans % 100 / 10;     /*　十の位　*/
			c = ans % 100 % 10;     /*　一の位　*/

		} while (a == b == c || a == b || a == c || b == c);
		do
		{
			do
			{
				printf("３桁の数字を入力してください:");
				scanf_s("%d", &x);

				d = x / 100;        /*　百の位　*/
				e = x % 100 / 10;   /*　十の位　*/
				f = x % 100 % 10;   /*　一の位　*/
				if (d == e == f || d == e || d == f || e == f) {
					puts("同じ数字を入力したらダメだよ♪");
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

		puts("おめでとう！よく当てたね！\n");
		printf("もう１回やりたい？【Yes…0／No…9】:");
		scanf_s("%d", &retry);

		if (retry == 0){
			puts("\nしょ～がないな～");
		}
		else{
			puts("\nやめちゃうなんて　ヒドイ　(T-T)");
		}
	} while (retry == 0);

	return 0;

}





