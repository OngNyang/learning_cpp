/*
restrict : restrict를 쓰면, 그 포인터가 가르키는 객체는 다른 포인터가 가르키지 않는다는것을 나타냅니다.
이를 통해 컴파일러의 최적화를 도와줍니다.
*/

int my_swap(int *restrict n1, int *restrict n2)
{
	if (n1 == n2)	//restrict를 통해 선언했기에 컴파일러는 이부분을 확인할 필요가 없다.
		return (0);
	
	int temp = *p1;
	*n1 = *n2;
	*n2 = temp;
	return 0;
}