#include<stdio.h>

int main(void)
{
    struct address
    {
        char phone[10];
        char city[15];
    };
    struct emp
    {
        char name[15];
        int id;
        struct address a;
    };
    //way 1
     struct emp a[]={{"la",1,{"2345","Sfdg"}},
                                  {"ash",2,{"3456","TRHt"}},
                                  {"arsh",3,{"5475","FDgdh"}}};
    //  way 2
    struct emp b[]={"la",1,"2345","Sfdg",
                                  "ash",2,"3456","TRHt",
                                  "arsh",3,"5475","FDgdh"};
    // note index is optional like in arrays
    struct emp c[3]={{"la",1,"2345","Sfdg"},
                                  {"ash",2,{"3456","TRHt"}},
                                  {"arsh",3,{"5475","FDgdh"}}};

    return 0;
}
