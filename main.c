#include <stdio.h>
#include<stdlib.h>
#include "trees.h"

int main(){
        /*Creating Node */
        noeud *Tree;
    
    Tree=CreateNoead(5);
    InsertNewNoeud(&Tree,3);
    InsertNewNoeud(&Tree,7);
    InsertNewNoeud(&Tree,11);
    InsertNewNoeud(&Tree,2);
    return 0;
}