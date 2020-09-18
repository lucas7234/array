//lucas119제작
//사용전 Visual Studio나 코드블록같은 C컴파일러를 설치해주시기 바랍니다.
//현재 버전 0.1입니다

//헤더파일
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

#define _CRT_SECURE_NO_WARNINGS

//메인

main()
{
  printf("ARRAAY v0.1\nlucas119 제작.\n");
  while (1)
  {
    printf("\n명령어 >");
    char answer[100];
    gets(answer);
    //명령어 실행
    if (answer=="help()")//명령어 도움말
    {
      puts("명령어 설명\nhelp()-명령어 도움말\ndefine()-배열 정의\nadd(값)-배열의 마지막에 값 추가\nchange(인덱스, 값)")
      puts("배열의 인덱스번째 값을 값으로 바꾸기\ndelete(인덱스)-인덱스번째 값 삭제하기\nreturn()배열 리턴하기\nvalue(인덱스)-인덱스번째 값 출력하기, length()-배열의 길이, isinclude(문자)-배열에 문자가 포함되어 있는가?()참이면 1, 거짓이면 0 출력");
      puts("\nseek(문자)-문자가 배열의 몇번째 인덱스에 있는지 출력(없을경우 false출력), ");
    }
    else if ((answer[0]=='d')&&(answer[1]=='e')&&(answer[2]=='f')&&(answer[3]=='i')&&(answer[4]=='n')&&(answer[5]=='e')&&(answer[6]=='('))
    {
      char *p;
      p=answer;
      printf("\n배열 자료형(int, char, float, double) >");
      char type[10];
      gets(type);
      if (type=="int")
      {
        int array[100];
      }
      else if (type=="char")
      {
        char array[100];
      }
      else if (type=="float")
      {
        float array[100];
      }
      else if (type=="double")
      {
        double array[100];
      }
      int i;
      for (i=0;; i++)
      {
        printf("\nArray[%d](NULL 또는 \\0입력시 종료) >", i);
        gets(array[i])
        if ((array[i]==NULL)||(array[i]=='\0'))
        {}
      }
      
    }
  }
}
