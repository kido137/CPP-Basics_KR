

#define HUNGRY 0x001
// #define 매크로는 가독성이 좋다.
// 유지보수가 유리하다.
#define MAX_SIZE 40

#define THIRSTY 0x002
#define TIRED 0x004
// 비트에 대응하는 숫자를 기입해야 하기 때문에 4 를 입력 (2진법 0000 1000)
#define FIRE 0x008
#define COLD 0x010
// 16진수를 표현 할땐 앞에 0x 를 붙인다.
#define APOISON 0x010
#define BPOISON 0x020
#define CPOISON 0x040
#define DPOISON 0x080
#define EPOISON 0x100
#define FPOISON 0x200
#define GPOISON 0x400
#define HPOISON 0x800
// 16진수를 2의 승수로 표현 한것이다.


// 주석 
// 설명 역활, 코드로 인식되지 않는다.

// 전역변수
int global = 0;

int Add(int left, int right)// (int left, int right) 도 지역변수
{
	return left + right;
}


// 함수
int main()
{
	// 자료형 (크기 단위, byte) Data Type
	// 정수형 : char(1), short(2), int(4) , long(4) , long long(8)
	// 실수형 : float(4), double(8)
	// 1바이트 의 경우의 수는 256가지

	// 1바이트로 양수만 표현
	// 256 가지 -> 0 ~ 255
	int i = 0;
	unsigned char c = 0;
	// unsigned char 는 양수만 표현 할때 사용
	c = 0;
	// "=" 대입 연산자 C 에 0 를 넣어줘

	//c = 256;
	// C 에 대입된 256 는 1비트(8바이트) 임으로 255[1111 1111] 256[1[0000 0000] 임으로 0이 된다. 

	// 1바이트로 양수 , 음수 둘다 표현
	// -128 ~ 0 ~ 127
	char c1 = 0;
	c1 = -1;
	//c1 = 255; 양수 음수를 둘다 표현할수 있는 경우 c1 안에 있는 값은 -1 
	// 기본적으로 정수형 자료만 사용할 경우 signed 키워드가 생략되어 있다
	// signed 음수와 양수를 모두 받아드릴수 있다.

	// 음의 정수 찾기(2의 보수법)
	// 대응되는 양수의 부호를 반전 후, 1을 더한다.

	int a = 4 + (int)4.0;
	//int 는 정수이기 때문에 실수인 4.0 은 형변환 되어 정수인 a = 8 이 된다.

	// 정수표현 방식과 실수 표현 방식은 다르다
	// 실수 표현방식은 정밀도에 의존한다.
	// 따라서 double(8) 자료형이 float(4) 보다 더 아래의 소수점까지 정확하게 표현이 가능하다

	// 정수는 정수끼리, 실수는 실수끼리 연산하되, 두 표현방식의 피 연산자가 연산될 경우 명시적으로 변환하자
	float f = 10.2415f + (float)28;

	//실수를 상수로 적을경우 소수점 뒤에 f 를 붙이면 float 자료형으로, f 를 붙이지 않으면 double 자료형으로 간주한다.
	//0.f;0.1;





	// 연산자
	//  대입 연산자, =
	// 
	// 산술 연산자
	// +. -. *, /, %(모듈러스, 나머지, 피연산자가 모두 정수)
	// ++, -- (증감 연산자) [한 단계 증가 또는 감소]

	int data = 10 + 10;

	//data = data + 20;
	// 위 아레 연산자는 동일하다.
	data += 20;

	data = (int)(10. / 3.);
	// 피연산자가 한개라도 있을경우 연산자는 나머지 연산자를 할수 없다.

	data = 0;
	++data; //전위 (전치)
	data++; //후위 (후치)

	data = 0;

	a = 10;
	data = a++; // data 값은 10
	data = ++a; // data 값은 11

	//후위 연산자로 사용하는 경우, 연산자 우선순위가 가장 나중으로 밀린다.

	// 논리 연산자
	// !(논리 반전), &&(AND), ||(OR)
	// 참(true), 거짓(false)
	// 참은 0 이 아닌 값, 대표적으로 : 1 (1뿐만 아니라 100을 넣어도 true 이다.)
	// 거짓 : 0

	int truefalse = true;
	// int 자료형에 true 를 넣었음으로 truefalse 는 1이 된다

	bool IsTrue = 100;
	// IsTrue 의 값은 1, bool 자료형은 0,1 만 표기 할수 있다. 
	// bool 은 참과 거짓만 다루는 전용 자료형 [bool 1바이트]

	IsTrue = true;
	IsTrue = !IsTrue;
	// ! 는 값이 true 면 false, false 면 true 로 반전 시킨다.

	int iTrue = 0;
	iTrue = !iTrue;
	// iTrue 값은 ! 논리 연산자로 인해 1이 된다.

	IsTrue = 100 && 200;
	// && 논리 연산자는 두 값이 모두 참이면 true(1) 한개라도 거짓이면 false(0)

	IsTrue = 0 && 100;
	// 해당 IsTrue 의 값은 거짓 false(0)

	IsTrue = 0 || 100;
	// || 논리 연산자는 둘중 하나라도 참이면 true(1)





	// 비교 연산자
	// ==, !=, <, >, <=, >=
	// == 같은지
	// != 다른지
	// 비교 연산자도 참, 거짓으로 결과가 나옴

	// 구문
	// if , else
	data = 0;
	if (100 && 200) // 100 && 200 논리 연산자는 참(1)임으로 실행된다
	{
		data = 100;
	}
	// if (0 && 100) 일경우 거짓 임으로 if 구문은 실행되지 않고 스킵한다.
	/*
	if (data == 100)
	{
		// if 가 참인 경우 수행
	}
	else
	{
		// if 가 거짓인 경우 수행
	}
	if ()
	{
		// 조권 우선 수행
	}
	else if ()
	{
		// 아닐경우 다른 조권으로 수행
	}
	else if ()
	{
		// 아닐경우 다른 조권으로 수행 (반복 사용가능)
	}
	else
	{
		// 아무 조권도 걸리지 않을때 실행
	}
	*/
	// 이때 하나의 조권이 해당하면 나머지 조권문은 실행되지 않는다.

	// 상황에 따라서 else 를 사용하지 않아도 된다.

	// if 문은 동시 에 실행을 할수 있다.
	// 예로 들어 if 문법으로 W 를 눌러서 캐릭터를 앞으로 전진시킨다.
	// else if 는 동시에 실행이 되지않기 때문에 if , if  문법으로 사용을 하면 D 를 누르는 순간 캐릭터는 대각선으로 이동을 할것이다.





	// switch case
	int iTest = 20;
	switch (iTest)
	{
	case 10:

		break;
	case 20:
		// iTest 가 20 이기때문에 case 20 를 실행
		break; // break 를 넣지 않을경우 defal
	default:

		break;
	}


	int iTest = 10;
	if (iTest = 10 || iTest == 20 || iTest == 30)// || 셋중 하나만 참일 경우 문법을 수행한다.
	{

	}
	else if (iTest == 20)
	{

	}
	
	else
	{

	}
	




	// 삼형 연산자
	// : ?

	iTest == 20 ? iTest = 100 : iTest = 200;
	// iTest 값이 20이 맞으면 100을 대입 아닐경우 200을 대입

	//같은 의미
	if (iTest == 20)
	{
		iTest = 100;
	}
	else
	{
		iTest = 200;
	}





	// 비트 연산자
	// 비트 단위로 연산이 될때 사용하는 연산자
	// 비트쉬프트 <<, >>
	// <<, >> 비트를 한칸씩 이동시킨다. (민다.)

	unsigned char byte = 10;

	byte <<= 2; // 2^n 배수

	// << 1 = 2배, << 2 = 3배, << 4 = 4배 로 증가한다.

	byte >>= 2; // 2^n 나눈 몫

	// 반대로 >>= 대입한 값의 2의 제곱 배수 만큼 나눈다. (나머지 연산은 해당 식에서 사용하지 않았음으로 표기 되지 않는다.)

	// 비트 곱(&), 합(|), xor(^) 반전(~)
	// 비트단위 연산을 진행
	// 비트 곱 & 비트단위 기준으로 둘다 합이면 1 둘중 한개라도 틀리면 0
	// 비트 합 | 비트단위 기준으로 둘 중에 한개라도 참이면 1
	// 비트 xor ^ 두 자리의 비트가 같으면 0 다르면 1이다.
	// 비트 반전 ~ [1111 0000] 일 경우 이를 반전시켜 [0000 1111] 이 된다.


	unsigned int iStatus = 0;
	// 해당 DEF 는 #define ABC 매크로인 1인 값이 지정되있음으로 DEF 의 값는 1이 된다.
	// define은 유지보수의 유리하다.

	// 상태 추가
	iStatus |= HUNGRY;
	iStatus |= THIRSTY;

	// 상태 확인
	if (iStatus & THIRSTY)
	{

	}

	// 특정 자리 비트 제거
	iStatus &= ~THIRSTY;
	// 비트 곱을 실행시키기 전에 THIRSTY 를 반전 시킨다.

	


	// 변수
	// 1. 지역변수 (함수 안에 있는 변수)
	// 2. 전역변수 (함수 밖에 있는 변수)
	// 3. 정적변수
	// 4. 외부변수


	// 지역변수
	int iName = 0;
	
	// 괄호 안에 선언된 변수(함수, 지역)
	{
		// 변수명 규칙
		int iName = 0; 
		// 같은 지역 변수를 우선 순위로 선정한다.
		iName;
		{

		}
	}

	iName = 100;


	// 함수
	data = Add(10, 20);
	// 31번째줄 모듈로 계산




	return 0;
}