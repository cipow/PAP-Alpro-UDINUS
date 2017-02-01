#include "pustaka.h"

int main()
{
    mahasiswa dataMhs[100];
    puts("\t\tPAP-11");
    puts("\t\t------\n");
    dataMhs[0]=makeMhs("AP5C","M.AFIFUDIN",makeDate(18,9,1997),3.7);
    dataMhs[1]=makeMhs("AP4A","CIPOWELA",makeDate(8,2,1998),3);
    dataMhs[2]=makeMhs("AP9D","NOVALA",makeDate(10,5,1990),3.5);
    dataMhs[3]=makeMhs("APNN","P.E.K.K.A",makeDate(20,10,1997),3.8);
    dataMhs[4]=makeMhs("CIPO","WELAHAN",makeDate(8,8,1998),3.8);
    puts("List Mahasiswa");
    listAllMhs(dataMhs);
    puts("\nList Mahasiswa IPK < 3.5");
    listByIPK(dataMhs,'<',3.5);
    puts("\nList Mahasiswa IPK > 3.4");
    listByIPK(dataMhs,'>',3.4);
    puts("\nList Mahasiswa IPK = 3.8");
    listByIPK(dataMhs,'=',3.8);
    puts("\nSorting Nama");
    mhssortByName(dataMhs);
    listAllMhs(dataMhs);
    puts("\nSorting IPK");
    mhssortByIPK(dataMhs);
    listAllMhs(dataMhs);
    puts("\nCari NIM CIPO");
    findMhsByNIM(dataMhs,"CIPO");
    puts("\nCari NIM PIPO");
    findMhsByNIM(dataMhs,"PIPO");
    return 0;
}
