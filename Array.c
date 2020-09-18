//lucas119제작
//사용전 Visual Studio나 코드블록같은 C컴파일러를 설치해주시기 바랍니다.
//현재 버전 0.1입니다

//헤더파일
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <stype.h>

//상수
#define _CRT_SECURE_NO_WARNINGS

//메인

main()
{
  
  //시작
  printf("ARRAAY v0.1\nlucas119 제작.\n");
  
  //변수
  char answer[100];
  int arraylen;
  char addarray[100];
  int stringlength;
  int i;
  char *p;
  char type[10];
  int numberchange;
  char stringchange[100];
  int deleteindex;
  int deleteindexend;
  int finaldeleteindex;
  
  while (1)
  {
    printf("\n명령어 >");
    gets(answer);
    //명령어 실행
    if (answer=="help()")//명령어 도움말
    {
      puts("명령어 설명\nhelp()-명령어 도움말\ndefine()-배열 정의\nadd(값)-배열의 마지막에 값 추가\nchange(인덱스, 값)")
      puts("배열의 인덱스번째 값을 값으로 바꾸기\ndelete(인덱스)-인덱스번째 값 삭제하기\nreturn()배열 리턴하기\nvalue(인덱스)-인덱스번째 값 출력하기, length()-배열의 길이, isinclude(문자)-배열에 문자가 포함되어 있는가?()참이면 1, 거짓이면 0 출력");
      puts("\nseek(문자)-문자가 배열의 몇번째 인덱스에 있는지 출력(없을경우 false출력), ");
    }
    else if ((answer[0]=='a')&&(answer[1]=='d')&&(answer[2]=='d')&&(answer[3]=='('))//값 추가
    {
      arraylen=sizeof(numArr) / sizeof(int);
      stringlength=strlen(answer)-5;
      for (i=4; i==stringlength; i++){
        if (i==4)
        {
          array[arraylen+1]=answer[4]
        }
        else
        {
          if (type=="char")
          {
            strcat(array[arraylen], answer[i])}
            arraylen=sizeof(numArr) / sizeof(char);
          }
          else if (type=="int")
          {
            strcat(array[arraylen], answer[i])}
            arraylen=sizeof(numArr) / sizeof(int);
          }
          else if (type=="float")
          {
            strcat(array[arraylen], answer[i])}
            arraylen=sizeof(numArr) / sizeof(float);
          }
          else if (type=="double")
          {
            strcat(array[arraylen], answer[i])}
            arraylen=sizeof(numArr) / sizeof(double);
          }
      }
      printf("\n성공적으로 값을 추가하였습니다.\n");
    }
      
  }
  else if ((answer[0]=='d')&&(answer[1]=='e')&&(answer[2]=='f')&&(answer[3]=='i')&&(answer[4]=='n')&&(answer[5]=='e')&&(answer[6]=='('))//배열정의
  {
      p=answer;
      printf("\n배열 자료형(int, char, float, double) >");
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
      for (i=0;; i++)
      {
        printf("\nArray[%d](NULL 또는 \\0입력시 종료) >", i);
        gets(array[i])
        if ((array[i]==NULL)||(array[i]=='\0'))
        {break;}
      }
      printf("\n배열 정의가 완료되었습니다.\n");
      
  }
  else if ((answer[0]=='c')&&(answer[1]=='h')&&(answer[2]=='a')&&(answer[3]=='n')&&(answer[4]=='g')&&(answer[5]=='e')&&(answer[6]=='('))//배열값변경
  {
    for (i=0;; i++)
    {
      if (answer[i]==',')
      {numberchange=i-1;break;}
      
    }
    stringlength=strlen(answer)-8;
    for (i=8; i==stringlength; i++){
        if (i==8)
        {
          array[arraylen+1]=answer[8]
        }
        else
        {
          if (type=="char")
          {
            strcat(array[arraylen], answer[i])}
            arraylen=sizeof(numArr) / sizeof(char);
          }
          else if (type=="int")
          {
            strcat(array[arraylen], answer[i])}
            arraylen=sizeof(numArr) / sizeof(int);
          }
          else if (type=="float")
          {
            strcat(array[arraylen], answer[i])}
            arraylen=sizeof(numArr) / sizeof(float);
          }
          else if (type=="double")
          {
            strcat(array[arraylen], answer[i])}
            arraylen=sizeof(numArr) / sizeof(double);
          }
      }
    printf("\n성공적으로 값을 변경하였습니다.");
  }
  else if ((answer[0]=='d')&&(answer[1]=='e')&&(answer[2]=='l')&&(answer[3]=='e')&&(answer[4]=='t')&&(answer[5]=='e')&&(answer[6]=='('))//배열값삭제
  {
    deleteindex=strlen(answer)-8;
    for (i=7;;i++)
    {
      if (answer[i]==')')
      {
        break;
      }
      else if (isdigit(answer[i]))
      {
        delelteindex=i;
        break;
      }
      
    }
    deleteindexend=strlen(answer)-1;
    for (i=0;; i++)
    {
      if (answer[i]==deleteindex)
      {
        while(answer[i]==')')
        {
          finaldeleteindex=strcat((char)finaldeleteindex, (char)deleteindex);
        }
        finaldeleteindex=(int)finaldeleteindex;
      }
    }
    for (i=finaldeleteindex; i<sizeof(array)/sizeof()array[0]; i++)
    {
      array[i]=array[i+1];
    }
   printf("\n성공적으로 삭제되었습니다.");
  }

  else if ((answer[0]=='r')&&(answer[1]=='e')&&(answer[2]=='t')&&(answer[3]=='u')&&(answer[4]=='r')&&(answer[5]=='n')&&(answer[6]=='('))//배열값리턴
  {
    i=0;
    while(1)
    {
      printf("\nArray[%d]=%s", i, (char *)array[i]);
    }
  }
  }
}
