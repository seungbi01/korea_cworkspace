//#include <stdio.h>
//
//int  main()
//{
//
////변수 선언 방법 - 자료형 변수이름
//	int n1; //정수형 변수 선언
//	n1 = 5; //값을 저장(초기화)
//
//	int n2 = 100; //선언과 동시에 초기화
//
//	printf("%d\t %x\n", n1, &n1); //메모리의 주소(& - 엠퍼샌드, 주소연산자)
//
//	printf("두 수의 합: %d\n", n1 + n2);
//	printf("두 수의 차: %d\n", n1 - n2);
//	
//	//실수형 변수 선언, 서식문자 - %lf(long float)
//	double rateOFbirth = 0.75;
//	
//	printf("대한민국의 2024년 출산률은 %.2lf", rateOFbirth);
//
//	//문자형 변수 선언
//	char grade = 'A'; 
//
//	printf("그 호텔의 서비스는 %c등급이다.\n", grade);
//
//	//문자열 배열 선언 
//	char nameOfFruit[] = "사과";
//
//	printf("그 과일의 이름은 %s입니다.\n", nameOfFruit);
//
//	//변수 이름은 의미가 있게 만들고, 카멜 표기법 사용
//
//	/*변수 이름 작성시 오류
//	//int 2n = 20; //숫자로 시작 안됨
//	//int a ge = 25; //공백 불가
//	//int for = 3; // 예약어(제공된 명령어) 사용 불가
//	*/ 
//
//	//자료형의 크기 -sizeof()
//	printf("\n==== 자료형의 크기 ====\n");
//	printf("int형: %dByte\n", sizeof(n1));
//	printf("double형: %dByte\n", sizeof(rateOFbirth));
//	printf("char형: %dByte\n", sizeof(grade));
//	printf("문자열 배열형: %dByte\n", sizeof(nameOfFruit));
//
//	return 0;
//
//}