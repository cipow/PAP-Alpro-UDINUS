#include "pustaka.h"

int main()
{
    puts("\tPAP-05\n\t------");
    int data[maks]={12,14,20,15,22,25,18,10,27};
    printf("int data[]={12,14,20,15,22,25,18,10,27}\n");
    printf("sequentSearch(15, data) --> %s\n",sequentSearch(15,data)?"true":"false");
    printf("sequentSearch(25, data) --> %s\n",sequentSearch(25,data)?"true":"false");
    printf("sequentSearch(39, data) --> %s\n",sequentSearch(39,data)?"true":"false");
    printf("sequentSearch(17, data) --> %s\n",sequentSearch(17,data)?"true":"false");
    printf("\n\n");
    int list1[maks]={1,2,3,4,5};
    int list2[maks]={5,4,3,2,1};
    int list3[maks]={6,7,8,9,10};
    int list4[maks]={10,9,8,7,6};
    printf("int list1[]={1,2,3,4,5}\nint list2[]={5,4,3,2,1}\nint list3[]={6,7,8,9,10}\nint list4[]={10,9,8,7,6}\n");
    printf("isInverse(list1,list2) --> %s\n",isInverse(list1,list2)?"true":"false");
    printf("isInverse(list3,list4) --> %s\n",isInverse(list3,list4)?"true":"false");
    printf("isInverse(list1,list3) --> %s\n",isInverse(list1,list3)?"true":"false");
    printf("isInverse(list2,list4) --> %s\n",isInverse(list2,list4)?"true":"false");
    printf("\n\n");
    int lists1[maks]={9,12,43,13,15};
    int lists2[maks]={12,4,19,9,22,1};
    int lists3[maks]={8,21,29,17,20,13};
    int lists4[maks]={18,11,19,25,31,15};
    int a,b;
    printf("int lists1[]={9,12,43,13,15}\nint lists2[]={12,4,19,9,22,1}\nint lists3[]={8,21,29,17,20,13}\nint lists4[]={18,11,19,25,31,15}\n");
    minMax(lists1,&a,&b);
    printf("minMax(lists1,a,b) --> a=%d b=%d\n",a,b);
    minMax(lists2,&a,&b);
    printf("minMax(lists2,a,b) --> a=%d b=%d\n",a,b);
    minMax(lists3,&a,&b);
    printf("minMax(lists3,a,b) --> a=%d b=%d\n",a,b);
    minMax(lists4,&a,&b);
    printf("minMax(lists4,a,b) --> a=%d b=%d\n",a,b);
    printf("minMaxGap(lists1) --> %d\n",minMaxGap(lists1));
    printf("minMaxGap(lists2) --> %d\n",minMaxGap(lists2));
    printf("minMaxGap(lists3) --> %d\n",minMaxGap(lists3));
    printf("minMaxGap(lists4) --> %d\n",minMaxGap(lists4));
    printf("\n\n");
    printf("atLeast('r',3,''Larry Page'') --> %s\n",atLeast('r',3,"Larry Page")?"true":"false");
    printf("atLeast('m',2,''Matt Mullenweg'') --> %s\n",atLeast('m',2,"Matt Mullenweg")?"true":"false");
    printf("atLeast('a',2,''Mark Zuckerberg'') --> %s\n",atLeast('a',2,"Mark Zuckerberg")?"true":"false");
    printf("atLeast('m',2,''Jimmy Wales'') --> %s\n",atLeast('m',2,"Jimmy Wales")?"true":"false");

    return 0;
}
