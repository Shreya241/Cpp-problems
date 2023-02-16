#include <iostream>
using namespace std;

int main() {
	int t;cin>>t;
	while(t--){
	    int a,b,c;cin>>a>>b>>c;
	    int aa,bb,cc,ta,tb,tc,tha,thb,thc,fa,fb,fc,fia,fib,fic,sa,sb,sc;
	    aa=a-min(a,b);
	    bb=b-min(a,b);
	    bb=bb-min(bb,c);
	    cc=c-min(bb,c);
	    aa=aa-min(aa,cc);
	    cc=cc-min(aa,cc);
	    int onea=aa;
	    
	    tb=b-min(b,c);
	    tc=c-min(b,c);
	    ta=a-min(a,tc);
	    tc=tc-min(a,tc);
	    ta=ta-min(ta,tb);
	    tb=tb-min(ta,tb);
	    int twoa=ta;
	    
	    tha=a-min(a,b);
	    thb=b-min(a,b);
	    tha=tha-min(tha,c);
	    thc=c-min(tha,c);
	    int threea=tha;
	    
	    fb=b-min(b,c);
	    fc=c-min(b,c);
	    fa=a-min(a,fb);
	    fb=fb-min(a,fb);
	    fa=fa-min(fa,fc);
	    fc=fc-min(fa,fc);
	    int foura=fa;
	    
	    fia=a-min(a,c);
	    fic=c-min(a,c);
	    fia=fia-min(fia,b);
	    fib=b-min(fia,b);
	    int fivea=fia;
	    
	    sa=a-min(a,c);
	    sc=c-min(a,c);
	    sb=b-min(b,sc);
	    sc=sc-min(b,sc);
	    sa=sa-min(sa,sb);
	    sb=sb-min(sa,sb);
	    int sixa=sa;
	    if(onea >0|| twoa>0 || threea>0 || foura>0 ||fivea>0 || sixa>0){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
