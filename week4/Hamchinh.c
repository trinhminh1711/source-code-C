#include<stdio.h>
#include<conio.h>
#include<string.h>
#include <stdlib.h>
#include<math.h>

int DEMHOATHUONG()
{
    int demhoa, demthuong, i, n;
    char a[100];
    printf("Input: ");
    scanf("%s",&a);
    demhoa = 0;
    demthuong = 0;
    i= 0;
    n= strlen(a);// đo độ dài của chuỗi
    for(i=0; i<=n; i++)
    {

        if(a[i] >= 65 && a[i] <= 90)// các giá trị của a là chữ hoa
        {
            demhoa = demhoa+1 ;
        }
        else if(a[i] >= 97 && a[i] <= 122)// các giá trị của a là chữ thường
        {
            demthuong= demthuong + 1 ;


        }
    }
    printf("so chu hoa la :%d\n", demhoa);
    printf("so chu thuong la :%d\n", demthuong);
    getch();
}

int SAPXEP()
{
    int n, a, b, c, tg;
    printf("nhap vao n:");
    scanf("%d", &n);
    a=n/100;
    b=(n%100)/10;
    c=n%10;// tách 3 số đã nhập
    if(a<b)
    {
        tg = a;
        a = b ;
        b = tg ;
    }// đổi chỗ 3 số
    if(b<c)
    {
        tg = b;
        b = c;
        c = tg;
    }
    if (a<b)
    {
        tg = a;
        a = b;
        b = tg;
    }
    printf("%d%d%d", a, b, c);
    getch();
}

void GIATAXI()
{
    int a, cost, unit1;
    printf("nhap quang duong da di(don vi :m) :");
    scanf("%d", &a);

    if(a<=1000)
    {
        cost= 10000 ;
    }
    else if(a>1000&&a<30000)
    {
        if(a%200 == 0) // nếu a chia hết cho 200 thì quãng đường chính bằng số tiền
        {
            cost=10000+ (a-1000)*(float)1500/200;
        }
        else
        {
            cost=10000+(((a/200)*200)-1000)*(float)1500/200+1500;//làm tròn số tiền
        }
    }
    else if(a>30000)

        if(a%1000==0)
        {

            cost= 10000+(29000*(float)1500/200)+((a-30000)*8);
        }

        else
        {
            cost=10000+(29000*(float)1500/200)+(((a/1000)*1000-30000)*8)+8000;
        }

    printf("gia tien phai tra %d VND", cost);

    getch();
}
void TAMGIACCAN ()
{
    int n,i,j;
    printf("nhap chieu cao tam giac:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-i; j++)
            printf(" ");
        for(j=1; j<=2*i-1; j++)
            printf("*");
        printf("\n");
    }
    getch();
}

void NGAYTHANGNAM()
{
    int a,b,c;
    printf(" moi ban nhap ngay thang nam :\n");
    printf("nhap ngay :");
    scanf("%d", &a);
    printf("nhap thang :");
    scanf("%d", &b);
    printf("nhap nam:");
    scanf("%d", &c);
    if(a<=0||a>31||b<=0||b>12||c<=0)// cá điều kiện để ngày tháng hợp lệ
    {
        printf("ngay thang nam ban nhap k hop le");
    }
    else if(a>0 || a<31 || b>0 || b<=12|| c>0)
    {
        if(c%400==0)
        {
            printf("nam nhuan");

        }
        if(c%4==0 && c%100!=0)
        {
            printf("nam nhuan");
        }
        else if(c%4!=0 || c%400!=0||(c%400!=0 && c%100==0))
        {
            printf("nam khong nhuan");
        }
    }
    getch();

}

char CHUANHOAXAU()
{
    char c;
    char xau1[100];
    char xau2[100];
    int n, i, j;
    printf("nhap xau :");
    fflush(stdin);
    gets(xau1);
    n=strlen(xau1);

    for(i=0; i<n; i++)
    {
        if(xau1[i]==' '&& xau1[i+1]==' ')
            for(j=i; j<=n; j++)
            {
                xau1[j]=xau1[j+1];
            }
    }

    for(i=0; i<n; i++)
    {
        if((xau1[i]==' '&& xau1[i+1]==',')||(xau1[i]==' ' && xau1[i+1]=='.'))
            for(j=i; j<=n; j++)
            {
                xau1[j]=xau1[j+1];
            }
    }

    for(i=0; i<n; i++)
    {
        if((xau1[i]==','&& xau1[i+1]==',')||(xau1[i]=='.'&& xau1[i+1]=='.'))
            for(j=i; j<=n; j++)
            {
                xau1[j]=xau1[j+1];
            }
    }
    printf("output \n");
    for(i=0; i<n ; i++)
    {
        printf("%c", xau1[i]);
    }

}
char DAONGUOCXAU()
{
    char xau[100];
    printf("nhap xau can dao :");
    scanf("%s",&xau);
    printf("chuoi dao nguoc : %s", strrev(xau));// hàm đảo ngược xâu
}
int BAI7()
{
    int i, k,a,b;
    printf("nhap a : ");
    scanf("%d",&a);
    printf("nhap b : ");
    scanf("%d",&b);
    if(a>=b)
    {
        for(i=b; i>=1; i--)
        {
            if(a%i==0 && b%i==0)
            {
                printf("UCLN: %d", i);
                break;
            }
        }

    }
    else
    {
        for(k=a; k<=a; k--)
            if(a%k==0&&b%k==0)
            {
                printf("UCLN: %d",k);
                break;
            }

    }
    int tich=a*b;
    int m;
    for(m=1; m<=tich; m++)
    {
        if(m%a==0&&m%b==0)
        {
            printf("\nBCNN=%d",m);
            break;
        }
    }
}

void NHANMATRAN()
{
    int m,n,a[50][50],i,j,b[50],c[50],tg=0;
    printf("nhap so hang`");
    scanf("%d",&m);
    printf("nhap so cot ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            printf("a[%d][%d]= ", i,j);
            scanf("%d",&a[i][j]);
        }

    }
    for(i=1; i<=n; i++)
    {
        printf(" \n");
        for(j=1; j<=m; j++)
        {
            printf(" %d ",a[i][j]);
        }
    }
    printf("\nnhap vecto n \n");
    for(i=1; i<=n; i++)
    {
        printf("nhap b[%d] =",i);
        scanf("%d",&b[i]);
    }
    for(i=1; i<=n; i++)
    {
        printf("%d \n",b[i]);
    }
    printf("\n out put: \n");
    for(i=1; i<=m; i++)
    {
        tg=0;
        printf("\n");
        for(j=1; j<=n; j++)
        {
            tg=tg+a[i][j]*b[j];

        }
        printf(" out put : %d ",tg);
    }
    getch();

}
void DANHSACHLIENKETDOI()
{
    int xoa,dem,chon,h,n,i,chon2,msua,sua;
    struct node
    {
        int data;
        struct node *next;
        struct node *before;// khởi tạo 1 node

    };
    struct node *pdau=NULL;
    struct node *pcuoi=NULL;// khởi tạo danh sách
    void THEMVAODAU(int x)
    {
        struct node *p;
        p= (struct node*) malloc(sizeof(struct node));
        p->data=x;
        p->before=NULL;
        p->next=NULL;
        if(pdau==NULL)
        {
            pdau=pcuoi=p;
        }
        else
        {

            pdau->before=p;
            p->next=pdau;
            pdau=p;
        }
    }
    void THEMVAOCUOI(int y)
    {
        struct node *p;
        p= (struct node*) malloc(sizeof(struct node));
        p->data=y;

        if(pdau=NULL)
        {
            pdau=pcuoi=p;
        }
        else
        {
            pcuoi->next=p;
            p->before=pcuoi;
            pcuoi=p;
        }
    }
    void INDANHSACH()
    {
        struct node *q;
        q=pdau;
        while(q!=NULL)
        {
            printf("[%d]  ",q->data);
            q=q->next;
        }
    }
    void XOADAUDANHSACH()
    {

        struct node *pxoa;
        pxoa=(struct node *)malloc(sizeof(struct node));
        pxoa=pdau;
        pdau=pxoa->next;
        pxoa->next->before=NULL;

    }
    void DEMSOLUONGPHANTU(int dem)
    {
        dem=1;
        struct node *pdem;
        pdem=pdau;
        while(pdem->next!=NULL)
        {
            dem=dem+1;
            pdem=pdem->next;
        }
        printf("\nso luong phan tu la %d\n",dem);
    }
    void SUAPHANTU(int sua,int msua)
    {
        printf("\nnhap phan tu mua sua trong day\n");
        scanf("%d",&sua);
        printf("\nnhap gia tri muon sua\n");
        scanf("%d",&msua);
        struct node *psua;
        psua=pdau;
        while(psua!=NULL)
        {
            if(psua->data==sua)
            {
                psua->data=msua;
            }
            psua=psua->next;
        }

    }
    printf("nhap so phan tu cua danh sach :");
    scanf("%d",&n);
    for(h=0; h<n; h++)
    {
        printf("nhap phan tu can them :");
        scanf("%d",&i);
        THEMVAODAU(i);
    }
    printf("danh sach phan tu la \n");
    INDANHSACH();
    DEMSOLUONGPHANTU(dem);
    XOADAUDANHSACH();
    printf("danh sach sau khi xoa la :\n");
    INDANHSACH();
    SUAPHANTU(sua,msua);
    printf("\nday sau khi sua\n");
    INDANHSACH();
    getch();
}
void DANHSACHLIENKETDON()
{
    int i,k,a,n,h,b,tim,dem,count,them,sua,msua,chon;
    struct node
    {
        int data;
        struct node *next;//khởi tạo 1 node
    }  ;
    struct node *pdau = NULL;
    struct node *pcuoi = NULL;//khởi tạo danh sách
    void themvaodau(int i )
    {
        struct node *p;
        p=(struct node* )malloc(sizeof(struct node));
        p->data=i;
        p->next=NULL;
        if(pdau==NULL)
        {
            pdau=pcuoi=p;
        }
        else
        {
            p->next=pdau;
            pdau=p;
        }
    }

    void indanhsach()
    {
        struct node *q;
        q=pdau;
        while(q!=NULL)
        {
            printf("[ %d ]  ",q->data);
            q=q->next;
        }
    }
    void themvaocuoi(int a)
    {
        struct node *p;
        p=(struct node*)malloc(sizeof(struct node));
        p->data=a;
        p->next=NULL;
        if(pdau==NULL)
        {
            pdau=pcuoi=p;
        }
        else
        {
            pcuoi->next=p;
            pcuoi=p;
        }
    }
    void demsoluongphantu(int k)
    {
        k=0;
        struct node *dem;
        for(struct node *dem= pdau ; dem!=NULL; dem=dem->next)
        {
            k=k+1;
        }

        printf("\n\nso phan tu cua danh sach la : %d",k);

    }
    void xoadau()
    {
        struct node *pxoa;
        pxoa=pdau;
        pdau=pxoa->next;
    }
    void xoabatky(int b)
    {
        struct node *xoa;
        xoa=pdau;
        printf("\nnhap phan tu muon xoa: ");
        scanf("%d",&b);
        for(xoa=pdau; xoa->next!=NULL; xoa=xoa->next)
        {
            if((xoa->next)->data==b)
            {
                xoa->next=xoa->next->next;
            }

        }
        printf("danh sach sau khi xoa :\n");
        indanhsach();
    }
    void timkiem(int dem,int tim)
    {
        dem=1;
        struct node *ptim;
        ptim=pdau;
        printf("\nnhap gia tri can tim ");
        scanf("%d",&tim);
        for(ptim; ptim->data!=tim; ptim=ptim->next)
        {

            dem=dem+1;

        }
        printf("\nvi tri can tim   %d",dem);
    }
    void suaphantu(int sua,int msua)
    {
        struct node *psua;
        psua=pdau;
        printf("\nnhap phan tu muon sua ");
        scanf("%d",&sua);
        printf("\nnhap gia tri muon sua ");
        scanf("%d",&msua);
        for(psua=pdau; psua!=NULL; psua=psua->next)
        {
            if(psua->data==sua)
            {
                psua->data=msua;
            }
        }
        printf("danh sach sau khi sua :\n");
        indanhsach();
    }
    printf("nhap so phan tu cua danh sach :");
    scanf("%d",&n);
    for(h=0; h<n; h++)
    {
        printf("nhap phan tu can them :");
        scanf("%d",&i);
        themvaocuoi(i);
    }
    printf("danh sach ban da tao : ");
    indanhsach();
    demsoluongphantu(k);
    timkiem(dem,tim);
    xoabatky(b);
    suaphantu(sua,msua);
}
void BAI2()
{
    void SELECTION_SORT()
    {
        int a[100],i,j,n,min,tg;
        printf("nhap so phan tu : ");
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            printf("nhap a[%d]:",i);
            scanf("%d",&a[i]);
        }

        for (i=0; i<n; i++)
        {
            min = a[i];
            for (j=i; j<n; j++)
                if (a[j] < min)
                {
                    min = a[j];
                    tg = a[i];
                    a[i] = a[j];
                    a[j] = tg;
                }
        }

        for(i=0; i<n; i++)
        {
            printf("%d ",a[i]);
        }
    }
    void BUBBLE_SORT()
    {
        int a[100],i,j,n,tg;
        printf("nhap so phan tu : ");
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            printf("nhap a[%d]:",i);
            scanf("%d",&a[i]);
        }
        for(i=0; i<n; i++)
        {
            for(j=n-1; j>i; j--)
            {
                if(a[j-1]>a[j])
                {
                    tg=a[j];
                    a[j]=a[j-1];
                    a[j-1]=tg;
                }
            }
        }
        for(i=0; i<n; i++)
        {
            printf("%d ",a[i]);
        }
    }
    void INSERTION_SORT()
    {
        int a[100],i,j,n,tg;
        printf("nhap so phan tu : ");
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            printf("nhap a[%d]:",i);
            scanf("%d",&a[i]);
        }
        for(i=0; i<n; i++)
        {
            j=i;
            while(j>0&&a[j-1]>a[j])
            {
                tg=a[j-1];
                a[j-1]=a[j];
                a[j]=tg;
                j--;
            }
        }
        for(i=0; i<n; i++)
        {
            printf("%d ",a[i]);
        }
    }
    printf("thuat toan selection sort\n");
    SELECTION_SORT();
    printf("\nthuat toan bubble sort \n");
    BUBBLE_SORT();
    printf("\nthuat toan insertion sort \n");
    INSERTION_SORT();
    getch();
}
int BAI3()
{
    int i=1,n,a;
    printf("input :");
    scanf("%d",&n);
    if( n>=5||n<2)
    {
        printf("n phai lon hon 1 hoac nho hon 5\n");
        printf("nhap lai n :");
        scanf("%d",&a);
        while(11*i<pow(10,a))
        {

            printf("%d\n ",11*i);
            i++;
        }

    }
    else if(n>=2&&n<5)
    {

        while(11*i<pow(10,n))
        {
            printf("%d\n",11*i);
            i++;
        }
    }

    getch();
}
void main()
{
    printf("________MENU_________");
    int i,chon;
    do
    {
        printf("\n");
        for(i=1; i<=13; i++)
        {
            printf("%d. bai%d \n",i,i);
        }
        printf("0. de thoat khoi vong lap");
        printf("\nban muon kiem tra bai nao : \n");
        scanf("%d",&chon);
        switch(chon)
        {
        case 1 :
            SAPXEP();
            break;
        case 2:
            DEMHOATHUONG();
            break;
        case 3:
            GIATAXI();
            break;
        case 4:
            TAMGIACCAN();
            break;
        case 5:
            NGAYTHANGNAM();
            break;
        case 6:
            CHUANHOAXAU();
            break;
        case 7:
            BAI7();
            break;
        case 8:
            DAONGUOCXAU();
            break;
        case 9:
            NHANMATRAN();
            break;
        case 10:
            DANHSACHLIENKETDOI();
            break;
        case 11:
            DANHSACHLIENKETDON();
            break;
        case 12 :
            BAI2();
            break;
        case 13:
            BAI3();
            break;
        }
    }
    while(chon);
}




