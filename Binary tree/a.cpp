#include"head.h"

static int n=1;
void create(bintree t);
void print(bintree t);

int main()
{
    bintree t=(node*)malloc(sizeof(node));
    t->key='a';t->l=NULL;t->r=NULL;
    create(t);
    cout<<" "<<t->key<<endl;
    print(t);
    cin.ignore();
    cin.get();
}

void print(bintree t)
{
    bintree p=t->l;
    if(p==NULL) {cout<<"    ";return;}
    else cout<<" | \n";
    for (; p->r!=NULL; p=p->r)
    {
        cout<<p->key<<" -- ";
    }cout<<p->key;
    p=t->l;
    cout<<"\n";
    for(; p->r!=NULL; p=p->r)
    {
        print(p);
    }print(p);
}

void create(bintree t)
{

    if (t == NULL) return;
    bintree p;n++;
    int nch;
    cout << "\n For \"" << t->key << "\" number of child = ";
    cin >> nch;
    if (nch >= 1){
        p = (node *)malloc(nch * sizeof(node));
    t->l = p;
    for (size_t i = 0; i < nch; i++)
    {
      if(i<nch-1)(p+i)->r=p+i+1;
      else(p+i)->r=NULL;
      (p+i)->l=NULL;
    cout<<"\tvalue of child "<<i+1<<" in level "<<n<<" = ";cin>>(p+i)->key;
    }
    }
    if(t->l!=NULL) create(t->l);
    if(t->r!=NULL) create(t->r);
}