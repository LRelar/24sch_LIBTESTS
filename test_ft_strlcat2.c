#include <stdio.h>
#include <string.h>
int main()
{
	size_t	size = 0;
	char	*ss[17];
	char	s0[25] = "paraw";
	char	*t = "hello12";
	char	s1[25] = "paraw";
	char	s2[25] = "paraw";
	char	s3[25] = "paraw";
	char	s4[25] = "paraw";
	char	s5[25] = "paraw";
	char	s6[25] = "paraw";
	char	s7[25] = "paraw";
	char	s8[25] = "paraw";
	char	s9[25] = "paraw";
	char	s10[25] = "paraw";
	char	s11[25] = "paraw";
	char	s12[25] = "paraw";
	char	s13[25] = "paraw";
	char	s14[25] = "paraw";
	char	s15[25] = "paraw";
	char	s16[25] = "paraw";

	ss[0] = s0;
	ss[1] = s1;
	ss[2] = s2;
	ss[3] = s3;
	ss[4] = s4;
	ss[5] = s5;
	ss[6] = s6;
	ss[7] = s7;
	ss[8] = s8;
	ss[9] = s9;
	ss[10] = s10;
	ss[11] = s11;
	ss[12] = s12;
	ss[13] = s13;
	ss[14] = s14;
	ss[15] = s15;
	ss[16] = s16;

while (size < 15)
{
	printf("%ld\n%s\n%s\n", strlcat(ss[size], t, size), ss[size], t);  //len(t) + size
	size++;
}
			/*printf("%ld\n%s\n%s\n", strlcat(s0, t, 0), s0, t);  //len(t) + size
			printf("%ld\n%s\n%s\n", strlcat(s1, t, 1), s1, t); // len(t) + size
			printf("%ld\n%s\n%s\n", strlcat(s2, t, 2), s2, t); // len(t) + size
			printf("%ld\n%s\n%s\n", strlcat(s3, t, 3), s3, t); // len(t) + size
			printf("%ld\n%s\n%s\n", strlcat(s4, t, 4), s4, t); // len(t) + size
			printf("%ld\n%s\n%s\n", strlcat(s5, t, 5), s5, t); // len(t) + size
			printf("%ld\n%s\n%s\n", strlcat(s6, t, 6), s6, t); // len(t) + len(s)
			printf("%ld\n%s\n%s\n", strlcat(s7, t, 7), s7, t); // len(t) + len(s)
			printf("%ld\n%s\n%s\n", strlcat(s8, t, 8), s8, t); // len(t) + len(s)
			printf("%ld\n%s\n%s\n", strlcat(s9, t, 9), s9, t); // len(t) + len(s)
			printf("%ld\n%s\n%s\n", strlcat(s10, t, 10), s10, t); // len(t) + len(s)
			printf("%ld\n%s\n%s\n", strlcat(s11, t, 11), s11, t); // len(t) + len(s)
			printf("%ld\n%s\n%s\n", strlcat(s12, t, 12), s12, t); // len(t) + len(s)
			printf("%ld\n%s\n%s\n", strlcat(s13, t, 13), s13, t); // len(t) + len(s)
			printf("%ld\n%s\n%s\n", strlcat(s14, t, 14), s14, t); // len(t) + len(s)
			printf("%ld\n%s\n%s\n", strlcat(s15, t, 15), s15, t); // len(t) + len(s)
			printf("%ld\n%s\n%s\n", strlcat(s16, t, 16), s16, t); // len(t) + len(s) */
			return 0;
}