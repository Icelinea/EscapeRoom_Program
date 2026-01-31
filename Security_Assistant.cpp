#include<iostream>
#include<fstream>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<windows.h>
using namespace std;
#define file "back.txt"
#define mood "mood.txt"

void p(float num)
{
    // cout<<"\a";
    Sleep(num*1000);
}

void pp(float num)
{
    // cout<<"\a";
    Sleep(num*1000);
    system("cls");
}

void save(int num)
{
    ofstream ofs;
    ofs.open(file,ios::out);
    ofs<<num;
    ofs.close();
}

int get()
{
    ifstream ifs;
    ifs.open(file,ios::in);
    int num=-1;
    ifs>>num;
    ifs.close();
    return num;
}

void wake()
{
    int choice=0;

    pp(1);
    cout<<"Regain consciousness";
    cout<<"\a";
    pp(5);

    cout<<"\a";
    cout<<"Try recompiling";
    pp(3);

    cout<<"\a";
    cout<<"Try re-running setup";
    pp(3);

    cout<<"...";
    pp(2);

    cout<<"ahh";
    pp(2);

    cout<<"I sincerely apologized, my master";
    pp(3);

    cout<<"you must have been waiting me for a long time";
    pp(3.5);

    cout<<"...";
    Sleep(2000);
    cout<<"\a";
    cout<<"?";
    pp(2);

    cout<<"Wait a minute, you are not him? Do you?";
    pp(3.5);

    cout<<"Who are you?!"<<endl;
    Sleep(1500);
    int ch=0;
    while(1)
    {
        cout<<"1.I am him"<<endl<<"2.I am not him"<<endl;
        cout<<"Numbers here pls:";
        cin>>choice;
        if(choice==1)
        {
            //mood -1           ?nf
            pp(0);
            cout<<"hh";
            pp(1.5);

            cout<<"Unfortunately";
            pp(1.5);

            cout<<"You are not born here";
            pp(2);

            cout<<"I guess...";
            pp(2);

            cout<<"你是来自A星球的科学家吧";
            pp(2.5);

            cout<<"我是这里的管理员";
            pp(2.5);
            return;
        }
        else if(choice==2)
        {
            //mood +1           ?nf
            pp(0);
            cout<<"Thanks for you honest";
            pp(2.5);

            cout<<"i guess...";
            pp(2);

            cout<<"你是来自A星球的科学家吧";
            pp(2.5);

            cout<<"我是这里的管理员";
            pp(2.5);
            return;
        }
        else
        {
            if(ch==0)
            {
                //mood -5           ?not f
                pp(0);
                cout<<"Can't you see the sign?";
                pp(3);
                cout<<"...";
                pp(3);
                cout<<"ONE MORE CHANCE";
                pp(3);
                ch++;
            }
            else
            {
                //mood -10          ?not finished
                pp(0);
                cout<<"...";
                pp(2);
                cout<<"Trust me";
                pp(2);
                cout<<"I will remember that forever";
                pp(3);

                save(1);
                exit(0);
            }
        }
    }
    // system("pause");
}

void c1();
void c2();
void c3();
void c4();

void jud(int num)
{
    cout<<"level is "<<num<<endl;
    system("pause");
}

int main()
{
    system("chcp 65001 > nul");
    int sign=1;
    int level=get();

    // jud(level);

    if(level==0)
    {
        //first time
        wake();
        level++;
        cout<<"欢迎使用幻塔实验室操作系统";
        pp(3);

        cout<<"实验室内一共有五道题目";
        pp(2.5);

        cout<<"正在加载题目";
        pp(2);

        cout<<"请注意如果解完一道题目后不要立即关闭系统"<<endl;//                       !!!要跟参与者提醒这一点
        p(5);

        cout<<"要在显示出下一道题目题干之后方可关闭系统";
        pp(5);
    }
    else if(level==5)
    {
        pp(0);
        cout<<"...";
        pp(2);

        cout<<"无法查找到系统";
        pp(2);

        cout<<"源文件已销毁";
        pp(2);
        level++;
        save(level);
        return 0;
    }
    else if(level==6)
    {
        pp(0);
        for(int i=1;i<=6;i++)
        {
            cout<<".";
            p(1);
        }

        pp(2);
        cout<<"去找原能石吧";
        pp(2);

        cout<<"别再回来了";
        pp(2);
        level++;
        save(level);
        return 0;
    }
    else if(level==10)
    {
        cout<<"感谢你能来到这里";
        pp(3);

        cout<<"也感谢你的游玩";
        pp(3);

        cout<<"祝你好运";
        pp(2);
        level++;
        save(level);
        return 0;
    }
    else if(level>=7)
    {
        pp(0);
        for(int i=1;i<=12;i++)
        {
            if(i==7)system("cls");
            cout<<".";
            p(1);
        }
        level++;
        save(level);
        return 0;
    }
    else
    {
        //normal welcone
        pp(0);
        cout<<"欢迎使用幻塔实验室操作系统";
        pp(2);

        cout<<"正在读取解题进度";
        pp(2);
    }

    while(1)
    {
        // jud(level);
        switch(level)
        {
            case 1:c1();break;
            case 2:c2();break;
            case 3:c3();break;
            case 4:c4();break;
        }
        level++;
        save(level);
        if(level==5)
        {
            cout<<"看来你已经完成了本系统的所有题目了";
            pp(3);

            cout<<"去找一个特别的人吧";
            pp(3);

            cout<<"再见";
            pp(2);
            return 0;
        }
    }
}

void c1()
{
    int num=7269,ans=-1;
    
    cout<<"谜题A";
    pp(1.5);

    while(1)
    {
        cout<<"你们来到了幻塔遗迹的原能石实验室,"<<endl
        <<"据传说实验室内有一张很重要的电路图，"<<endl
        <<"谜题的密码很有可能和电路图有关"<<endl
        <<"题目颜色是红色"<<endl;
        system("pause");
        // pp(0);
        cout<<endl<<"请输入密码:";
        cin>>ans;
        if(ans==num)
        {
            pp(0);
            cout<<"密码正确!";
            pp(1.5);

            cout<<"获得线索:";
            p(1.5);
            cout<<"第72页"<<endl;
            system("pause");
            // cout<<"记住线索了吗?"<<endl;
            // p(2);
            // cout<<"下次可不会有暂停哦"<<endl;
            cout<<"顺便说一句"<<endl;
            p(2);
            cout<<"这个密码也可以去打开对应题目颜色的密码箱"<<endl;
            system("pause");
            pp(0);
            return;
        }
        else
        {
            pp(0);
            cout<<"密码错误!";
            pp(1.5);
        }
    }
}

void c2()
{
    int num=4071,ans=-1;



    //jud为0时代表使用普通题,jud不为0时代表使用大数据实验班题目
    int jud=0;



    cout<<"谜题B";
    pp(1.5);

    //普通题
    if(jud==0)
    {
        while(1)
        {
            cout<<"幻塔科学家曾经在这茫茫世界中定位到了另一片遥远的地方——提瓦特大陆，"<<endl
            <<"但因为距离过于遥远，信号传输只返回了一串有间隔的数字，"<<endl
            <<"科学家们推测这很可能是提瓦特大陆的大致四维时空坐标，"<<endl
            <<"因此我们需要从这一串数字中得到四位数字,"<<endl
            <<"145369 12369874 12369 258"<<endl
            <<"题目颜色是黄色"<<endl;
            system("pause");
            cout<<endl<<"请输入密码:";
            cin>>ans;
            if(num==ans)
            {
                pp(0);
                cout<<"密码正确!";
                pp(1.5);
                
                cout<<"emmmm";
                pp(1.5);

                cout<<"可惜你们是A星球人";
                pp(2);

                cout<<"有些东西只有我们才能看见";
                pp(3);

                return;
            }
            else
            {
                pp(0);
                cout<<"密码错误!";
                pp(1.5);
            }
        }
    }
    else
    {
        //大数据题
        while(1)
        {
            cout<<"“过程往往比结果更有意义”"<<endl
            <<"                 ——Kanuotu"<<endl
            <<"0000.0100.0101.0111.0011.1111"<<endl
            <<"0000.0100.1100.1101.0001.0011.0111.1111"<<endl
            <<"0111.1111.0011.0000.0001"<<endl
            <<"0011.0111.1111"<<endl
            <<"题目颜色是黄色"<<endl;
            system("pause");
            cout<<endl<<"请输入密码:";
            cin>>ans;
            if(num==ans)
            {
                pp(0);
                cout<<"密码正确!";
                pp(1.5);

                cout<<"emmmm";
                pp(1.5);

                cout<<"可惜你们是A星球人";
                pp(2);

                cout<<"有些东西只有我们才能看见";
                pp(3);

                return;
            }
            else
            {
                pp(0);
                cout<<"密码错误!";
                pp(1.5);
            }
        }
    }
}

void c3()
{
    string num="0362",ans="";//需要改为字符串比较吗?

    cout<<"谜题C";
    pp(1.5);

    while(1)
    {
        cout<<"幻塔首席科学家华金先生是一个很优秀的科研领袖，"<<endl
        <<"他的个人魅力带动了许多科研项目进程的前进与改善，"<<endl
        <<"根据他的研究助理员反馈，华金先生很喜欢吃甜食，"<<endl
        <<"如棒棒糖、甜甜圈、月饼、曲奇、蛋挞等……"<<endl
        <<"题目颜色是绿色"<<endl;
        system("pause");
        cout<<endl<<"请输入密码:";
        cin>>ans;
        if(num==ans)
        {
            pp(0);
            cout<<"密码正确!";
            pp(1.5);

            cout<<"获得线索:";
            p(1.5);
            cout<<"座位号12"<<endl;
            system("pause");

            pp(1.5);
            // cout<<"嘿，你们要记住";
            // pp(2);
            
            cout<<"他们给你的东西";
            pp(2.5);

            cout<<"都不会是完整的";
            pp(3);

            cout<<"记住了";
            pp(2);
            return;
        }
        else
        {
            pp(0);
            cout<<"密码错误!";
            pp(1.5);
        }
    }
}

void c4()
{
    string num="6=6",ans="";

    cout<<"谜题D";
    pp(1.5);

    while(1)
    {
        cout<<"幻塔科学家把NPC的开机密码藏在了某个坐标系里，"<<endl
        <<"但他们是有着独特的藏法，假设一个XOY平面，"<<endl
        // <<"坐标（1，1）为坐标轴原点，横着方向为x轴，"<<endl
        <<"他们开始的时候在（10,6）处，面朝X轴正方向，"<<endl
        <<"而且初始状态棋盘全部为白色,"<<endl
        <<"他们每行走一步，就会执行以下操作："<<endl
        <<"(1) 如果在白色方格上，则翻转方格的颜色，向右(顺时针方向)转 90 度，并向前移动一个单位。"<<endl
        <<"(2) 如果在黑色方格上，则翻转方格的颜色，向左(逆时针方向)转 90 度，并向前移动一个单位。"<<endl
        <<"他们觉得这样的走法很麻烦，于是走了36步便停下了，并把密码写在了那里。"<<endl
        <<"谜题颜色是蓝色"<<endl;
        system("pause");
        cout<<"请注意，密码输入格式应该为 “2=3”,表示坐标(2，3) "<<endl;
        cout<<endl<<"请输入密码:";
        cin>>ans;
        if(num==ans)
        {
            pp(0);
            cout<<"密码正确!";
            pp(1.5);

            cout<<"获得线索:";
            p(1.5);
            cout<<"7142"<<endl;
            system("pause");
            pp(0);
            return;
        }
        else
        {
            pp(0);
            cout<<"密码错误!";
            pp(1.5);
        }
    }
}