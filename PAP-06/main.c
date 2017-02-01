#include "pustaka.h"

int main()
{
    int list1[]={1,2,3,4,5,6,7,8,9,10};
    int list2[]={4,8,6,1,10,3,9,2,7,5};
    int list3[]={67,4,1,3,90,8,2,8,10};
    int list4[]={9,19,29,39,49,59,69,79,89,90};
    printf("list1[]={1,2,3,4,5,6,7,8,9,10}\nlist2[]={4,8,6,1,10,3,9,2,7,5}\nlist3[]={67,4,1,3,90,8,2,8,10}\nlist4[]={9,19,29,39,49,59,69,79,89,90}\n");
    printf("binarySearch(3,list1) --> %s\n",binarySearch(3,list1)?"true":"false");
    printf("binarySearch(8,list2) --> %s\n",binarySearch(8,list2)?"true":"false");
    printf("binarySearch(50,list3) --> %s\n",binarySearch(50,list3)?"true":"false");
    printf("binarySearch(99,list4) --> %s\n\n",binarySearch(99,list4)?"true":"false");
    printf("searchWord('Dian','Universitas Dian Nuswantoro') --> %s\n",searchWord("Dian","Universitas Dian Nuswantoro")?"true":"false");
    printf("searchWord('Algo','Algoritma') --> %s\n",searchWord("Algo","Algoritma")?"true":"false");
    printf("searchWord('Program','Pemrograman') --> %s\n",searchWord("Program","Pemrograman")?"true":"false");
    printf("searchWord('Dinus','Dian Nuswantoro') --> %s\n",searchWord("Dinus","Dian Nuswantoro")?"true":"false");
    printf("searchWord('Cipo','Muhammad Afifudin a.k.a Cipo Welahan') --> %s\n",searchWord("Cipo","Muhammad Afifudin a.k.a Cipo Welahan")?"true":"false");
    printf("searchWord('Pangeran','Super Saiya 4') --> %s\n",searchWord("Pangeran","Super Saiya 4")?"true":"false");
    printf("searchWord('Assasin','Awas ada assasins!!') --> %s\n",searchWord("Assasin","Awas ada assasins!!")?"true":"false");
    return 0;
}
