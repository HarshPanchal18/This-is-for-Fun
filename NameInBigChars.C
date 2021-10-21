#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
void a()
{
	printf("\n\t AAAAAAA\n\tA       A\n\tA   	A\n\tAAAAAAAAA\n\tA	A\n\tA	A\n\t\n");
}
void b()
{
	printf("\n\tBBBBBB\n	B     B\n\tB     B\n\tBBBBBB\n\tB     B\n\tB     B\n\tBBBBBB\n\t\n");
}
void c()
{
	printf("\n\t CCCCCCC\n\tC	C\n\tC\n\tC\n\tC	C\n\t CCCCCCC \n\t\n\t");
}
void d()
{
	printf("\n\tDDDDDDDD\n\tD	D\n\tD	D\n\tD	D\n\tD	D\n\tDDDDDDDD\n\t\n\t");
}
void e()
{
	printf("\n\tEEEEEEEE\n\tE\n\tE\n\tEEEEEE\n\tE\n\tE\n\tEEEEEEEE\n\t\n\t");
}
void f()
{
	printf("\n\tFFFFFFFF\n\tF\n\tF\n\tFFFFFFF\n\tF\n\tF\n\tF\n\t\n\t");
}
void g()
{
	printf("\n\t GGGGGGG\n\tG	G\n\tG\n\tG   GGGGGGGG \n\tG	G G\n\t GGGGGGG  G\n\t\n\t");
}
void h()
{
	printf("\n\tH	H\n\tH	H\n\tHHHHHHHHH\n\tH	H\n\tH	H\n\t\n\t");
}
void ii()
{
	printf("\n\tIIIIIII\n\t   I\n    	   I\n  	   I\n           I\n\tIIIIIII\n\t\n\t");
}
void j()
{
	printf("\n\t JJJJJJJJJJJ\n\t      J\n\t      J\n\t      J\n\t      J\n\t J    J\n\t JJJJJJ\n\t\n\t");
}
void k()
{
	printf("\n\tK	K\n\tK    K\n\tK  K\n\tKK\n\tK  K\n\tK    K\n\tK	K\n\t\n\t");
}
void ll()
{
	printf("\n\tL\n\tL\n\tL\n\tL\n\tL\n\tLLLLLLLL\n\t\n\t");
}
void m()
{
	printf("\n\tM      M\n\tMM    MM\n\tM M  M M\n\tM  MM  M\n\tM      M\n\tM      M\n\t");
}
void n()
{
	printf("\n\tNN     N\n\tN N    N\n\tN  N   N\n\tN   N  N\n\tN    N N\n\tN     NN\n\t\n\t");
}
void o()
{
	printf("\n\t OOOOOOO\n\tO	O\n\tO	O\n\tO	O\n\tO	O\n\t OOOOOOO\n\t");
}
void p()
{
	printf("\n\tPPPPPPP\n\tP      P\n\tP      P\n\tP      P\n\tPPPPPPP\n\tP\n\tP\n\tP\n\t");
}
void q()
{
	printf("\n\t QQQQQQQ\n\tQ	Q\n\tQ	Q\n\tQ	Q\n\tQ    Q  Q\n\t QQQQQQQ\n\t	Q\n\t");
}
void r()
{
	printf("\n\tRRRRRRR\n\tR      R\n\tR      R\n\tRRRRRR\n\tR     R\n\tR      R\n\tR	R\n\t");
}
void s()
{
	printf("\n\t SSSSSSSS\n\tS	\n\tS   \n\t SSSSSSS\n\t	S\n\t	S\n\tSSSSSSSS\n\t");
}
void t()
{
	printf("\n\tTTTTTTTTT\n\t    T\n\t    T\n\t    T\n\t    T\n\t");
}
void u()
{
	printf("\n\tU	U\n\tU	U\n\tU	U\n\tU       U\n\tU       U\n\t UUUUUUU\n\t");
}
void v()
{
	printf("\n\tV       V\n\t V     V\n\t  V   V\n\t   V V\n\t    V");
}
void w()
{
	printf("\n\tW	     W\n\t W          W\n\t  W   WW   W\n\t   W W  W W\n\t    W    W\n\t");
}
void x()
{
	printf("\n\t X     X\n\t  X   X\n\t   X X\n\t    X\n\t   X X\n\t  X   X\n\t X     X\n\t");
}
void y()
{
	printf("\n\tY	Y\n\t Y     Y\n\t  Y   Y\n\t   Y Y\n\t    Y\n\t    Y\n\t    Y\n\t    Y\n\t");
}
void z()
{
	printf("\n\tZZZZZZZ\n\t     Z\n\t    Z\n\t   Z\n\t  Z\n\t Z\n\tZZZZZZZ\n\t");
}

int main()
{
	char name[10];
	int i = 0, l;
	printf("enter your name (Ignore case):- ");
	gets(name);
	l = strlen(name);
	while (i < l)
	{
		if (name[i] == 'a' || name[i] == 'A')
			a();
		else if (name[i] == 'b' || name[i] == 'B')
			b();
		else if (name[i] == 'c' || name[i] == 'C')
			c();
		else if (name[i] == 'd' || name[i] == 'D')
			d();
		else if (name[i] == 'e' || name[i] == 'E')
			e();
		else if (name[i] == 'f' || name[i] == 'F')
			f();
		else if (name[i] == 'g' || name[i] == 'G')
			g();
		else if (name[i] == 'h' || name[i] == 'H')
			h();
		else if (name[i] == 'i' || name[i] == 'I')
			ii();
		else if (name[i] == 'j' || name[i] == 'J')
			j();
		else if (name[i] == 'k' || name[i] == 'K')
			k();
		else if (name[i] == 'l' || name[i] == 'L')
			ll();
		else if (name[i] == 'm' || name[i] == 'M')
			m();
		else if (name[i] == 'n' || name[i] == 'N')
			n();
		else if (name[i] == 'o' || name[i] == 'O')
			o();
		else if (name[i] == 'p' || name[i] == 'P')
			p();
		else if (name[i] == 'q' || name[i] == 'Q')
			q();
		else if (name[i] == 'r' || name[i] == 'R')
			r();
		else if (name[i] == 's' || name[i] == 'S')
			s();
		else if (name[i] == 't' || name[i] == 'T')
			t();
		else if (name[i] == 'u' || name[i] == 'U')
			u();
		else if (name[i] == 'v' || name[i] == 'V')
			v();
		else if (name[i] == 'w' || name[i] == 'W')
			w();
		else if (name[i] == 'x' || name[i] == 'X')
			x();
		else if (name[i] == 'y' || name[i] == 'Y')
			y();
		else if (name[i] == 'z' || name[i] == 'Z')
			z();
		i++;
	}
	system("pause");
	return 0;
}