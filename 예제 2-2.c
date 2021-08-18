#include <stdio.h>

int main(void)
{
	printf("Be happy\n"); //줄바꿈
	printf("12345678901234567890\n"); //줄바꿈
	printf("My friend\n"); //My 를 출력하고 탭 위치로 이동(\t) 후에 friend 출력
	printf("Goot\bd\tchance\n"); // Goot를 출력하고 왼쪽으로 이동(\b) 해 t를 d로 바꾸고 탭위치로 이동
	printf("Cow\rW\a\n"); //맨앞으로 이동(\r)해 C 를 W 로 바꾸고 벨소리를 (\a) 내고 줄바꿈

	return 0;
}