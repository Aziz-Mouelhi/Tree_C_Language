#ifndef H TREES
#define H TREES

typedef struct noeud
{
    /* data*/
    int value ;
     /* Links*/
    struct noeud *Right;
    struct noeud *Left ;
    
}noeud;
typedef struct trees
{
    noeud  *trees;
};



        /* function*/

    noeud * CreateNoead(int value){
        noeud *N ;
        N = malloc(sizeof(noeud));
        N->value = value;
        N->Left = NULL;
        N->Right = NULL;
        printf("Noeud Created Successfully :\n ");

    return N ;

    }

    void InsertNewNoeud( noeud ** Racine , int value){
        noeud * N ;
        N = CreateNoead(value);
        if(*Racine == NULL){
            *Racine = N ;
            return ;
        }else{ 
            noeud *temp;
            temp = *Racine;
            while (1){
                if(N->value > temp->value){
                    if(temp->Right == NULL){
                        temp->Right = N ;
                        printf("Noeud Added Successfully (Right) :\n ");
                        break;
                    }else{
                        temp = temp->Right;
                    }
                }else{
                    if(temp->Left == NULL){
                        temp->Left = N ;
                        printf("Noeud Added Successfully (Left) :\n ");
                        break;
                    }else{
                        temp=temp->Left;
                    }
                }
            }

            
        }
    }
#endif //H TREES