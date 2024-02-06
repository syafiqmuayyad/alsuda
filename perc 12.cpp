#include <stdio.h>
#include <string.h>

struct dtnilai
{
char nrp[10];
char nama[20];
double nilai;
};
int main () {
struct dtnilai my_struct ={"01","Syafiq",65.5};
struct dtnilai *st_ptr; 
st_ptr =&my_struct;
printf("\n%s ",st_ptr->nrp);
printf("%s ",st_ptr->nama);
printf("%d\n", st_ptr->nilai);
}

