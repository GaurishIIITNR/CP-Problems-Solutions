#import<ios>
int d,i,k,l,m,n,w;
int main(){
    for(scanf("%d%d%d%d%d",&k,&l,&m,&n,&d);i++<d;)
    w+=!!(i%k&&i%l&&i%m&&i%n);
    printf("%d",d-w);
}