#include "baum.h"
#include <stdio.h>

int main() {

    baum knoten;
    baum leftchild;
    baum rightchild;
    baum n4,n5,n6,n7;

    init_baum(&knoten,5);
    init_baum(&leftchild,6);
    init_baum(&rightchild,7);
    init_baum(&n4,8);
    init_baum(&n5,9);
    init_baum(&n6,10);
    init_baum(&n7,11);
    insert_left_right(&knoten,&leftchild,&rightchild);
    insert_left_right(&leftchild,&n4,&n5);
    insert_left_right(&rightchild,&n6,&n7);
    reverseTree(&knoten);
    printf("%d\n", n7.hight);
    printf("%d\n", getBalance(&knoten));
    printf("der baum sieht so aus: \n");
    printTree(&knoten, getTreeHeight(&knoten),0);

    return 0;
}
