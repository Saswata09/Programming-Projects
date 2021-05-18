import java.io.*;
import java.math.RoundingMode;
import java.text.DecimalFormat;
class Gaussian_Elimination
{
    InputStreamReader in = new InputStreamReader (System.in);
    BufferedReader br = new BufferedReader (in);
    int num;
    String eqn[];
    Gaussian_Elimination()
    {
        num=0;
    }
    void prog()
    {
        try
        {
            System.out.println("ENTER THE NUMBER OF EQUATIONS TO BE ENTERED");
            num=Integer.parseInt(br.readLine());
            eqn = new String [num];
            System.out.println("ENTER THE EQUATIONS");
            for(int i=0;i<num;i++)
            {
                eqn[i]=br.readLine();
            }
        }catch(IOException e){}
        char var[];
        var = new char [num];
        int l=eqn[0].length();
        int a=0;
        int flg=0;
        DecimalFormat df = new DecimalFormat("##.##");
        for(int j=0;j<l;j++)
        {
            char ch = eqn[0].charAt(j);
            int g=(int)(ch);
            if((ch>64 && ch<91) || (ch>97 && ch<123))
            {
            var[a]=ch;
            a=a+1;
            }
        }
        for(int fd=0;fd<num;fd++)
        {
            if((eqn[fd].charAt(0))!='-')
            eqn[fd]="+"+eqn[fd];
        }
        String ghr="";
        for(int gh=0;gh<num;gh++)
        {
            int lnm=eqn[gh].length();
            for(int ha=0;ha<lnm;ha++)
            {
                char hcr=eqn[gh].charAt(ha);
                if(hcr=='+' || hcr=='-')
                {
                    char rhc=eqn[gh].charAt(ha+1);
                    flg=0;
                    for(int ds=0;ds<num;ds++)
                    {
                        if(rhc==var[ds])
                        {
                        flg=1;
                        ds=num;
                    }
                    }
                    if(flg==1)
                    {
                        eqn[gh]=eqn[gh].substring(0,ha+1)+"1"+eqn[gh].substring(ha+1,lnm);
                        lnm=lnm+1;
                    }
                }
            }
        }
        System.out.println();
        int p=0;
        int flag=0;
        int vr[][];
        vr = new int [num][num];
        char chr=' ';
        char chrt=' ';
        int sm[];
        sm = new int[num];
        String str="";
        for(int t=0;t<num;t++)
        {
            int ln=eqn[t].length();
            int e=0;
            flag=0;
            for(int z=0;z<num;z++)
            { 
                flag=0;
            for(int u=0;u<ln;u++)
            {
                char cd=eqn[t].charAt(u);
                if(cd==var[e])
                {
                    for(int re=u-1;re>=0;re--)
                    {
                        if(eqn[t].charAt(re)=='+' || eqn[t].charAt(re)=='-' || re==0)
                        {
                        str=eqn[t].substring(re,u);
                        break;
                    }
                }
                if(str.charAt(0)=='+')
                str=str.substring(1,str.length());
                int n= Integer.valueOf(str);
                str="";
                vr[p][e]=n;
                flag=1;
                }
            }
                if(flag==0)
                {
                    vr[p][e]=0;
                }
                e=e+1;
            }
            p=p+1;
        } 
        int v=-1;
        for(int as=0;as<num;as++)
        {
            int lne=eqn[as].length();
            v=v+1;
            for(int cv=0;cv<lne;cv++)
            {
                char cer=eqn[as].charAt(cv);
                if(cer=='=')
                {
                    String qw=eqn[as].substring(cv+1,lne);
                    int ye=Integer.valueOf(qw);
                    sm[v]=ye; 
                }
        }
    }
    float aug[][];
    aug =new float[num][num+1];
    int po=0;
    for(int zx=0;zx<num;zx++)
    {
        for(int xc=0;xc<num;xc++)
        {
            aug[zx][xc]=(float)(vr[zx][xc]);
        }
        aug[zx][num]=sm[po];
        po=po+1;
}
int vb=0;
if(aug[0][0]==0)
{
    for(int op=1;op<num;op++)
    {
        if(aug[op][0]!=0)
        {
            vb=op;
            op=num;
            break;
        }
    }
    float bb=0;
    for(int uy=0;uy<num+1;uy++)
    {
        bb=aug[0][uy];
        aug[0][uy]=aug[vb][uy];
        aug[vb][uy]=bb;
        bb=0;
    }
}
int flag1=0;
int flag2=1;
System.out.println();
System.out.println("THE AUGMENTED FORM OF THE MARTRIX IS");
System.out.println();
for(int b=0;b<num;b++)
{
    for(int h=0;h<num+1;h++)
    {
        System.out.print(aug[b][h]+" ");
        }
        System.out.println();
    }
    float sw=0;
    for(int vv=0;vv<num-1;vv++)
    {
    for(int xx=vv+1;xx<num;xx++)
    {
    for(int fg=xx;fg<num;fg++)
    {
        sw=0;
        sw=(float)(((aug[fg][vv])/(aug[vv][vv])));
        sw=sw*-1;
        for(int yh=vv;yh<num+1;yh++)
        {
           aug[fg][yh]=(aug[fg][yh]+(float)((sw)*(aug[vv][yh])));
        }
}
}
}
System.out.println();
System.out.println("THE ECHELON FORM OF THE MATRIX IS");
System.out.println();
for(int ty=0;ty<num;ty++)
{
    for(int yt=0;yt<num+1;yt++)
    {
        System.out.print(aug[ty][yt]+" ");
    }
    System.out.println();
}
for(int er=0;er<num;er++)
{
    flag1=0;
    flag2=1;
    for(int we=0;we<num;we++)
    {
        if(aug[er][we]==0)
        flag1=1;
        else
        {
        flag1=0;
        flag2=0;
    }
    }
    if(flag1==1 && flag2==1)
    {
        if(aug[er][num]!=0)
        {
    System.out.println("THE EQUATION HAS NO SOLUTION");
    System.exit(0);
}
}
}
System.out.println();
for(int uu=num-1;uu>=1;uu--)
{
     float hh=aug[uu][uu];
    for(int tt=0;tt<num+1;tt++)
    { 
        aug[uu][tt]=(float)((aug[uu][tt])/hh);
    }
    float gd=aug[0][0];
    for(int up=0;up<num+1;up++)
    {
        aug[0][up]=(aug[0][up]/gd);
    }
    for(int ii=uu-1;ii>=0;ii--)
    {
        float bn = (aug[ii][uu]);
        for(int aa=0;aa<num+1;aa++)
        {
            aug[ii][aa]=(float)(aug[ii][aa]-(float)((aug[uu][aa])*bn)); 
        }
    }
}
System.out.println();
System.out.println("THE ROW CANNONICAL FORM OF THE MATRIX IS");
System.out.println();
for(int tyq=0;tyq<num;tyq++)
{
    for(int ytq=0;ytq<num+1;ytq++)
    {
        System.out.print(aug[tyq][ytq]+" ");
    }
    System.out.println();
}
System.out.println();
System.out.println("THE SOLUTION IS");
for(int yy=0;yy<num;yy++)
{
    for(int kk=0;kk<num;kk++)
    {
        if(aug[yy][kk]==1.0)
        {
            System.out.println(var[yy]+" = "+df.format(aug[yy][num]));
        }
    }
}
}
}
