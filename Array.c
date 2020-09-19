//lucas119제작
//사용전 Visual Studio나 코드블록같은 C컴파일러를 설치해주시기 바랍니다.
//현재 버전 1.1입니다
//C언어로 만들어졌습니다.
//:)

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
  printf("ARRAAY v1.1\nlucas119 제작.\n");
  
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
  int returnstr;
  int returnend;
  int finalreturnstr;
  int foundindex;
  char foundstring[100];
  int startstr;
  int endstr
  int founded=0;
  FILE *fptr;
  char directory[500];
  
  while (1)
  {
    printf("\n명령어 >");
    gets(answer);
    //명령어 실행
    if (answer=="help()")//명령어 도움말
    {
      puts("명령어 설명\nhelp()-명령어 도움말\ndefine()-배열 정의\nadd(값)-배열의 마지막에 값 추가\nchange(인덱스, 값)")
      puts("배열의 인덱스번째 값을 값으로 바꾸기\ndelete(인덱스)-인덱스번째 값 삭제하기\nreturn()배열 리턴하기\nvalue(인덱스)-인덱스번째 값 출력하기, length()-배열의 길이, isinclude(문자)-배열에 문자가 포함되어 있는가?()참이면 1, 거짓이면 0 출력");
      puts("\nseek(문자)-문자가 배열의 몇번째 인덱스에 있는지 출력(없을경우 false출력), \n save()-배열 값을 바탕화면에 저장한다.\vardef()-변수 정의\nvarrtn()-변수 값 리턴");
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
    deleteindex=7;
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
        break;
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
  else if ((answer[0]=='v')&&(answer[1]=='a')&&(answer[2]=='l')&&(answer[3]=='u')&&(answer[4]=='e')&&(answer[5]=='('))//배열값리턴
  {
     returnstr=6;
     returnend=strlen(answer)-1
     for (i=0;; i++)
     {
      
        if (isdigit(answer[i]))
        {
          if (i==6)
          {finalreturnstr=(char)answer[i];}
          else
          {strcat((char)finalreturnstr, (char)answer[i]);}
        }
       if (i==strlen(answer))
       {finalreturnstr=(int)finalreturnstr;}
        
          
     }
     printf("%s", (char *)array[finalreturnstr]);
  }
  else if ((answer[0]=='l')&&(answer[1]=='e')&&(answer[2]=='n')&&(answer[3]=='g')&&(answer[4]=='t')&&(answer[5]=='h')&&(answer[6]=='('))//배열길이
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
    printf("\n배열의 길이:%d", arraylen);
  }
  else if ((answer[0]=='s')&&(answer[1]=='e')&&(answer[2]=='e')&&(answer[3]=='k')&&(answer[4]=='('))//배열인덱스 검색
  {
    founded=0;
    startstr=10;
    endstr=strlen(answer)-1;
    for (i=0;; i++)
     {
      
        if (isdigit(answer[i]))
        {
          if (i==6)
          {foundstring=(char)answer[i];}
          else
          {strcat((char)foundstring, (char)answer[i]);}
        }
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
    for (i=0; i>arraylen; i++)
    {
      if (answer[i]==foundstr)
      {
        foundindex=i;
        founded=1;}
    }
    if (founded==1)
    {printf("\n입력하신 내용이 배열에 포함되어 있습니다.");}
    else
    {printf("\n입력하신 내용을 배열에서 찾지 못했습니다.");}
  } 
  if ((answer[0]=='i')&&(answer[1]=='s')&&(answer[2]=='i')&&(answer[3]=='n')&&(answer[4]=='c')&&(answer[5]=='l')&&(answer[6]=='u')&&(answer[7]=='d')&&(answer[8]=='e')&&(answer[9]=='('))//배열포함확인
  {
    founded=0;
    startstr=10;
    endstr=strlen(answer)-1;
    for (i=0;; i++)
     {
      
        if (isdigit(answer[i]))
        {
          if (i==6)
          {foundstring=(char)answer[i];}
          else
          {strcat((char)foundstring, (char)answer[i]);}
        }
     (type=="char")
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
    for (i=0; i>arraylen; i++)
    {
      if (answer[i]==foundstr)
      {
        foundindex=i;
        founded=1;}
    }
    if (founded==1)
    {printf("\n입력하신 내용이 배열의 %d번째 인덱스에 포함되어 있습니다.", foundindex);}
    else
    {printf("\n입력하신 내용을 배열에서 찾지 못했습니다.");}}
 else if ((answer[0]=='s')&&(answer[1]=='a')&&(answer[2]=='v')&&(answer[3]=='e')&&(answer[4]=='('))//배열저장
  {
   printf("\n디렉토리 (\\는 \\\\로 입력) >");  
   gets (directory);
   fptr=fopen(directory);
    (type=="char")
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
    
   
   for (i=0; i>arraylen; i++){fprintf ("\n%s",(char)array[i] );}
   fclose (fptr);
   printf ("성공적으로 저장하였습니다");
 }
else if ((answer[0]=='v')&&(answer[1]=='a')&&(answer[2]=='r')&&(answer[3]=='d')&&(answer[4]=='e')&&(answer[5]=='f')&&(answer[6]=='(')){
printf("\n배열 자료형(int, char, float, double) >");
      gets(type);
      if (type=="int")
      int var;
      }
      else if (type=="char")
      {
        char var;
      }
      else if (type=="float")
      {
        float var;
      }
      else if (type=="double")
      {
        double var;
      }
      puts("\n기본값 지정 >");
      char[100] basic;
      gets(basic);
      if (type=="int")
      var=(int)basic
      }
      else if (type=="char")
      {
        var=(char)basic;
      }
      else if (type=="float")
      {
        var=(float)basic;
      }
      else if (type=="double")
      {
        var=(double)basic;
      }
      
      printf("\n변수 정의가 완료되었습니다.\n");}
  }
else if ((answer[0]=='v')&&(answer[1]=='a')&&(answer[2]=='r')&&(answer[3]=='r')&&(answer[4]=='t')&&(answer[5]=='n')&&(answer[6]=='(')){
printf("%c", (char)var);}
}
