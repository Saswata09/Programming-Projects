#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
#include<istream>
using namespace std;
int main()
{
    int choice;
    int num;
    int m;
    int final;
    char hex[]={'A','B','C','D','E','F'};
    cout<<"ENTER THE CHOICE NUMBER OF YOUR LIKING OF BASE CONVERSION\n";
    cout<<"CASE 1: DECIMAL TO BINARY\n";
    cout<<"CASE 2: DECIMAL TO OCTAL\n";
    cout<<"CASE 3: DECIMAL TO HEXADECIMAL\n";
    cout<<"CASE 4: BINARY TO DECIMAL\n";
    cout<<"CASE 5: BINARY TO OCTAL\n";
    cout<<"CASE 6: BINARY TO HEXADECIMAL\n";
    cout<<"CASE 7: OCTAL TO BINARY\n";
    cout<<"CASE 8: OCTAL TO DECIMAL\n";
    cout<<"CASE 9: OCTAL TO HEXADECIMAL\n";
    cout<<"CASE 10: HEXADECIMAL TO BINARY\n";
    cout<<"CASE 11: HEXADECIMAL TO DECIMAL\n";
    cout<<"CASE 12: HEXADECIMAL TO OCTAL\n";
    cin>>choice;
    switch(choice)
    {
        case 1:
        {
            string str="";
            cout<<"ENTER THE DECIMAL NUMBER\n";
            cin>>num;
            m=num;
            string s="";
            while(m>1)
            {
                int d=m%2;
                s=to_string(d);
                str=s+str;
                s="";
                m=(m-d)/2;
            }
            s=to_string(m);
            str=s+str;
            final=stoi(str);
            cout<<"THE BINARY VALUE OF THE DECIMAL VALUE"<<num<<" IS = "<<final;
            break;
        }
        case 2:
        {
            string str="";
            cout<<"ENTER THE DECIMAL NUMBER\n";
            cin>>num;
            m=num;
            string s="";
            while(m>7)
            {
                int d=m%8;
                s=to_string(d);
                str=s+str;
                s="";
                m=(m-d)/8;
            }
            s=to_string(m);
            str=s+str;
            final=stoi(str);
            cout<<"THE OCTAL VALUE OF THE DECIMAL VALUE "<<num<<" IS = "<<final;
            break;
        }
        case 3:
        {
            string str="";
            cout<<"ENTER THE DECIMAL NUMBER\n";
            cin>>num;
            m=num;
            string s="";
            while(m>15)
            {
                int d=m%16;
                if(d>9)
                {
                    int b=d-10;
                    s.assign(1,hex[b]);
                }
                else
                {
                s=to_string(d);
                }
                str=s+str;
                s="";
                m=(m-d)/16;
            }
            if(m>9)
            {
                int f=m-10;
                s.assign(1,hex[f]);
            }
            else
            {
                s=to_string(m);
            }
            str=s+str;
            cout<<"THE HEXADECIMAL VALUE OF THE DECIMAL VALUE "<<num<<" IS = "<<str;
            break;
        }
        case 4:
        {
            int num;
            cout<<"ENTER THE BINARY NUMBER\n";
            cin>>num;
            int m=0;
            int t=num;
            int sum=0;
            while(t>0)
            {
                int d=t%10;
                float c=pow(2,m);
                int v=(int)(c);
                int w=v*d;
                sum=sum+w;
                m=m+1;
                v=0;
                w=0;
                t=t/10;
            }
            final=sum;
            cout<<"THE DECIMAL VALUE OF THE BINARY VALUE "<<num<<" IS = "<<final;
            break;
        }
        case 5:
    {
        cout<<"ENTER THE BINARY NUMBER\n";
        cin>>num;
        string s=to_string(num);
        int len=s.length();
        char ch[100];
        if((len%3)!=0)
        {
            int t=len%3;
            t=3-t;
            for(int p=1;p<=t;p++)
            {
                s="0"+s;
            }
        }
        len=s.length();
        int m=len;
        string sr;
        string fin="";
        int sm=0;
        while(m>0)
        {
            int u=m-3;
            sr=s.substr(u,m);
            int q=stoi(sr);
            int y=0;
            for(int i=0;i<3;i++)
            {
                int w=q%10;
                float c=pow(2,y);
                int p=(int)(c);
                int j=p*w;
                sm=sm+j;
                q=q/10;
                y=y+1;
            }
            string er=to_string(sm);
            sm=0;
            fin=er+fin;
            s=s.substr(0,u);
            m=m-3;
        }
        cout<<"THE OCTAL VALUE OF THE BINARY VALUE "<<num<<" IS = "<<fin;
        break;
    }
    case 6:
    {
        cout<<"ENTER THE BINARY NUMBER\n";
        cin>>num;
        string s=to_string(num);
        int len=s.length();
        char ch[100];
        if((len%4)!=0)
        {
            int t=len%4;
            t=4-t;
            for(int p=1;p<=t;p++)
            {
                s="0"+s;
            }
        }
        len=s.length();
        int m=len;
        string sr;
        string fin="";
        int sm=0;
        while(m>0)
        {
            int u=m-4;
            sr=s.substr(u,m);
            int q=stoi(sr);
            int y=0;
            for(int i=0;i<4;i++)
            {
                int w=q%10;
                float c=pow(2,y);
                int p=(int)(c);
                int j=p*w;
                sm=sm+j;
                q=q/10;
                y=y+1;
            }
            string er;
            if(sm>9)
            {
                int h=sm-10;
                er.assign(1,hex[h]);
            }
            else
            {
            er=to_string(sm);
            }
            sm=0;
            fin=er+fin;
            s=s.substr(0,u);
            m=m-4;
        }
        cout<<"THE HEXADECIMAL VALUE OF THE BINARY VALUE "<<num<<" IS = "<<fin;
        break;
    }
    case 7:
    {
        cout<<"ENTER THE OCTAL NUMBER\n";
        cin>>num;
        string s="";
        int t=num;
        while(t>0)
        {
            int d=t%10;
            int c=0;
            string g="";
            string h="";
            while(d>1)
            {
                int r=d%2;
                h=to_string(r);
                g=h+g;
                d=(d-r)/2;
                c=c+1;
            }
            h=to_string(d);
            g=h+g;
            c=c+1;
            if(c<3)
            {
                for(int p=1;p<=(3-c);p++)
                {
                    g="0"+g;
                }
            }
            s=g+s;
            t=t/10;
        }
        final=stoi(s);
        cout<<"THE BINARY VALUE OF THE OCTAL VALUE "<<num<<" IS = "<<final;
        break;
    }
    case 8:
    {
        cout<<"ENTER THE OCTAL NUMBER\n";
        cin>>num;
        int t=num;
        int sum=0;
        int m=0;
        while(t>0)
        {
            int d=t%10;
            float c=pow(8,m);
            int y=(int)(c);
            int p=y*d;
            sum=sum+p;
            m=m+1;
            t=t/10;
        }
        final=sum;
        cout<<"THE DECIMAL VALUE OF THE OCTAL VALUE "<<num<<" IS = "<<final;
        break;
    }
    case 9:
    {
        cout<<"ENTER THE OCTAL NUMBER\n";
        cin>>num;
        int t=num;
        int sum=0;
        int m=0;
        while(t>0)
        {
            int d=t%10;
            float c=pow(8,m);
            int y=(int)(c);
            int p=y*d;
            sum=sum+p;
            m=m+1;
            t=t/10;
        }
        int o=sum;
        string s="";
        string i="";
        while(o>15)
        {
            i="";
            int w=o%16;
            cout<<w;
            if(w>9)
            {
                int y=w-10;
                i.assign(1,hex[y]);
            }
            else
            {
                i=to_string(w);
            }
            s=i+s;
            o=((o-w)/16);
        }
        i="";
        if(o>9)
        {
            int y=o-10;
            i.assign(1,hex[y]);
        }
        else
        {
            i=to_string(o);
        }
        s=i+s;
        cout<<"THE HEXADECIMAL VALUE OF THE OCTAL VALUE "<<num<<" IS = "<<s;
        break;
    }
    case 10:
    {
        std::string str;
        std::cout<<"ENTER THE HEXADECIMAL VALUE\n";
        std::cin>>str;
        int len=str.length();
        string s="";
        int t=0;
        for(int i=0;i<len;i++)
        {
            char ch=str.at(i);
            if(ch=='A' || ch=='B' || ch=='C' || ch=='D' || ch=='E' || ch=='F')
            {
                if(ch=='A')
                {
                    t=10;
                }
                else if(ch=='B')
                {
                    t=11;
                }
                else if(ch=='C')
                {
                    t=12;
                }
                else if(ch=='D')
                {
                    t=13;
                }
                else if(ch=='E')
                {
                    t=14;
                }
                else if(ch=='F')
                {
                    t=15;
                }
            }
            else
            {
                string h;
                h.assign(1,ch);
                t=stoi(h);
            }
            int u=t;
            string f="";
            string a="";
            while(u>1)
            {
                int d=u%2;
                f=to_string(d);
                a=f+a;
                u=((u-d)/2);
            }
            f=to_string(u);
            a=f+a;
            if(a.length()<4)
            {
                int l=(4-(a.length()));
                for(int y=1;y<=l;y++)
                {
                    a="0"+a;
                }
            }
            s=s+a;
            a="";
        }
        int z=0;
        int r=0;
        while(z==0)
        {
            if(s.at(r)=='0')
            {
                s=s.substr(r+1,s.length()); 
            }
            else
            {
                z=1;
            }
        }
        std::cout<<"THE BINARY VALUE OF THE HEXADECIMAL VALUE "<<str<<" IS = "<<s;
        break;
    }
    case 11:
    {
        std::string str;
        std::cout<<"ENTER THE HEXADECIMAL VALUE\n";
        std::cin>>str;
        int len=str.length();
        int t=0;
        int sum=0;
        int m=0;
        for(int i=len-1;i>=0;i--)
        {
            char ch=str.at(i);
            if(ch=='A')
            {
                t=10;
            }
            else if(ch=='B')
            {
                t=11;
            }
            else if(ch=='C')
            {
                t=12;
            }
            else if(ch=='D')
            {
                t=13;
            }
            else if(ch=='E')
            {
                t=14;
            }
            else if(ch=='F')
            {
                t=15;
            }
            else
            {
                string h;
                h.assign(1,ch);
                t=stoi(h);
            }
            float c=pow(16,m);
            int v=(int)c;
            int q=v*t;
            sum=sum+q;
            m=m+1;
        }
        final=sum;
        std::cout<<"THE DECIMAL VALUE OF THE HEXADECIMAL VALUE "<<str<<" IS = "<<final;
        break;
    }
    case 12:
    {
        std::string str;
        std::cout<<"ENTER THE HEXADECIMAL VALUE\n";
        std::cin>>str;
        int len=str.length();
        int t=0;
        int sum=0;
        int m=0;
        for(int i=len-1;i>=0;i--)
        {
            char ch=str.at(i);
            if(ch=='A')
            {
                t=10;
            }
            else if(ch=='B')
            {
                t=11;
            }
            else if(ch=='C')
            {
                t=12;
            }
            else if(ch=='D')
            {
                t=13;
            }
            else if(ch=='E')
            {
                t=14;
            }
            else if(ch=='F')
            {
                t=15;
            }
            else
            {
                string h;
                h.assign(1,ch);
                t=stoi(h);
            }
            float c=pow(16,m);
            int v=(int)c;
            int q=v*t;
            sum=sum+q;
            m=m+1;
        }
        int a=sum;
        string q="";
        string st="";
        while(a>7)
        {
            int d=a%8;
            q=to_string(d);
            st=q+st;
            a=a/8;
        }
        q=to_string(a);
        st=q+st;
        final=stoi(st);
        std::cout<<"THE OCTAL VALUE OF THE HEXADECIMAL VALUE "<<str<<" IS = "<<final;
        break;
    }
    }
}