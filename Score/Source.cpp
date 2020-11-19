#include <stdio.h>

int scorein;

int main()
{
	struct grade
	{
		char gr;
		int score;
		char quote[100];
	};
	struct grade A = {
	'A',
	100,
	"Life is like riding a bicycle.To keep your balance, you must keep moving."
	};

	struct grade B = {
	'B',
	80,
	"Don’t stop when you are tired stop when you are done."
	};

	struct grade C = {
	'C',
	70,
	"Don’t give up the beginning is always the hardest."
	};

	struct grade D = {
	'D',
	60,
	"Experience tells you what to do, Confidence allows you to do it."
	};

	struct grade F = {
	'F',
	50,
	"Failure is simply the opportunity to begin again this time more intelligently."
	};

	printf_s("Input your score : ");
	scanf_s("%d",&scorein);
	
	if(scorein >= 80)
	{ 
		printf_s("You are got grade %c\n", A.gr);
		printf_s("Another %d points you will get %d points.\n", A.score-scorein, A.score);
		printf_s("%s",A.quote);
	}
	else if(scorein >= 70 && scorein < 80)
	{
		printf_s("You are got grade %c\n", B.gr);
		printf_s("Another %d points you will get %d points.\n", B.score - scorein, B.score);
		printf_s("%s", B.quote);
	}
	else if (scorein >= 60 && scorein < 70)
	{
		printf_s("You are got grade %c\n", C.gr);
		printf_s("Another %d points you will get %d points.\n", C.score - scorein, C.score);
		printf_s("%s", C.quote);
	}
	else if (scorein >= 50 && scorein < 60)
	{
		printf_s("You are got grade %c\n", D.gr);
		printf_s("Another %d points you will get %d points.\n", D.score - scorein, D.score);
		printf_s("%s", D.quote);
	}
	else if (scorein < 50)
	{
		printf_s("You are got grade %c\n", F.gr);
		printf_s("Another %d points you will get %d points.\n", F.score - scorein, F.score);
		printf_s("%s", F.quote);
	}
	return(0);
}