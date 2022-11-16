//const 키워드는 절대 변경되지 말아야 할것을 지정해주는것임.
//코드를 작성할떼 const에 대한 변경을 시도한다면, 컴파일러가 잡아냄.

/*
const int val
	val의 데이터 형이 const int형이므로 수정 불가
const int *val
	val은 const int형의 포인터 값이다.
	Val의 값은 수정 가능하다.
	val이 가리키는 데이터는 (const int)이므로 수정 불가
int* const val
	val의 데이터 형은 int* 형이고, const 키워드로 인해 수정 불가
	val이 가리키는 데이터는 (int)형이므로 값을 수정할수 있다.
const int* const val
	val의 값이나, val이 가리키는 데이터나 둘 다 수정 불가.s
*/