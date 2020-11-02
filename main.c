//
//  main.c
//  사용자 정의 함수
//
//  Created by 강다영 on 04/08/2020.
//  Copyright © 2020 Dayoung Dada Kang. All rights reserved.
//

#include <stdio.h>

int func_test(int n);

int main(int argc, const char * argv[]) {
    /* 사용자 정의 함수
     
     중복이 될 기능들을 뺴서 내가 원하는 위치에 부를것이다. >>> 중복 제거
     ex. printf()
    
     */
    //main 함수가 무조건 먼저 실행!!!!!!!!
    
    
    printf("func_test start\n");
    
    int n, sum; //지역 변수 : 이 지역(main 함수) 내에서만 사용 가능.
    printf("입력 : \n");  scanf("%d", &n);
    
    sum = func_test(n); //n : 매개변수. func_test한테 n을 전달해주는거
    
    printf("1 부터 %d의 합 : %d\n", n, sum);
    
    printf("func_test end\n");
    
    
    
    // 사용자 지정함수가 위가 아니라 밑에 코딩되어 있으면 오류 남.
    // > 해결하는 방법 : 사용자 지정함수 머릿글( void func_test() )을 위에다 붙이고 세미콜론 찍으면 가능
    return 0;
}



int func_test(int n) //반환자료형   함수이름(매개변수들) >>> void : 반환할 값이 없다는 뜻.
                     //                          >>> 마지막에 return 정수; 이러면                                   반환자료형을 신경써야해
                     //                          >>> void가 int로 바뀌어야하거든
{
    //하나의 함수에는 하나의 기능만!( 불필요한 낭비를 아끼기 위해)
    int i, sum = 0;
    
    
    for(i = 1; i <= n; i++)
        sum += i;
    
    return sum;
    
}
