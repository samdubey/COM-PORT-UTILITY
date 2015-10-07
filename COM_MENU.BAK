	int MTop;
	int MLeft;
	int MWidth;
	char* Text;
	int Active;
	void Draw(int);
	void MenuItem(int,int,int,char*);
	void Menu(int);
	void MenuItem(int L,int To,int W,char *T)
	{
		MTop=To;
		MLeft=L;
		MWidth=W;
		Text=T;
		Active=1;
	}
	void Draw(int Active)
	{
		setfillstyle(0,0);
		if(Active)
		{
			setcolor(15);
		}
		else
		{
			setcolor(8);
		}
		bar3d(MLeft,MTop,MLeft+MWidth,MTop+20,0,0);
		outtextxy(MLeft+5,MTop+7,Text);
	}

	void Menu(int Index)
	{
	MLeft=40;
	MTop=60;
	MWidth=340;
	MenuItem(MLeft,MTop+50,MWidth,"1.Recieve File.");
	if(Index==1)
	{
	Draw(1);
	}
	else
	{
	Draw(0);
	}
	MenuItem(MLeft,MTop+30,MWidth,"2.Send File.");
	if(Index==2)
	{
	Draw(1);
	}
	else
	{
	Draw(0);
	}
	MenuItem(MLeft,MTop+30,MWidth,"3.Chat Utility.");
	if(Index==3)
	{
	Draw(1);
	}
	else
	{
	Draw(0);
	}
	MenuItem(MLeft,MTop+30,MWidth,"4.Exit.");
	if(Index==4)
	{
	Draw(1);
	}
	else
	{
	Draw(0);
	}
	}
