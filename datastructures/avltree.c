#include <stdio.h>

struct node{
    int data ;
    int height ;
    struct node * left ;
    struct node *right ;
} ;

int max(int a, int b){
    if(a>b){
        return a ;
    }
    else{
        return b ;
    }
}

int height(struct node * root){
    if(root == NULL){
        return ;
    }
    else{
        return max(root->right,root->left) + 1 ;
    }
}

int balancefactor(struct node * root){
    if(root == NULL){
        return ;
    }
    else{
        return (height(root->left) - height(root->right)) ;
    }
}

struct node* rightrotate(struct node *y){
    struct node *x = y->left ;
    struct node *t2 = x->right ;
    
    x->right = y ;
    y->left = t2 ;
    
    x->height = height(x) ;
    y->height = height(y) ;
    
    return x ;
}

struct node* leftrotate(struct node *x){
    struct node *y = x->right ;
    struct node *t2 = y->left ;
    
    y->left = x ;
    x->right = t2 ;
    
    x->height = height(x) ;
    y->height = height(y) ;
    
    return y ;
}

struct node* newnode(int key){
    struct node* Node = (struct node *)malloc(sizeof(struct node)) ;
    Node->data = key ;
    Node->right = NULL ;
    Node->left = NULL ;
    Node->height = 1 ;
    
    return Node ;
}

struct node* insert(struct node* root ,int key){
    if(root == NULL){
        return newnode(key) ;
    }
    else{
        if(key < root->data){
            root->left = insert(root->left,key) ;
        }
        else if(key > root->data){
            root->right = insert(root->right,key) ;
        }
        else{
            return root ;
    }
    
}
