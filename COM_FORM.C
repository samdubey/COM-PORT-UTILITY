	int Left;
	int Top;
	int Width;
	int Height;
	int BackColor;
	char *Caption;
	void InputBox(char*);
	void MainWindow(char*);
	void Show();
	void Boxes(int L,int T,int W,int H,int BC,char *C)/*constructor*/
	{
		Left=L;
		Top=T;
		Width=W;
		Height=H;
		BackColor=BC;
		Caption=C;
	}
	void MainWindow(char *c)
	{
		Width=getmaxx()-2;/*init all the values*/
		Height=getmaxy()-2;
		Left=1;
		Top=1;
		BackColor=1;
		Caption=c;/*"COM PORT UTILITY";*/
		Show();
	}
	void Show()
	{
		setcolor(15);
		setfillstyle(1,BackColor);
		bar3d(Left,Top,Left+Width,Top+Height,0,0);
		setcolor(7);
		setfillstyle(1,7);
		bar3d(Left+3,Top+3,Left+Width-3,Top+20,0,0);
		setcolor(0);
		settextstyle(0,0,0);
		outtextxy(Left+Width/3+10,Top+10,Caption);
	}
	void InputBox(char *c)
	{
	Boxes(30,60,360,180,0,c);
	Show();
	setcolor(15);
	outtextxy(Left+10,Top+30,"Enter File Name with Full Path.");
	outtextxy(Left+10,Top+40,"File to be copied.(file name should be");
	outtextxy(Left+10,Top+50,"in DOS format i.e. maximum of 11 characters");
	outtextxy(Left+10,Top+60,"for file name and 3 for extension ");
	outtextxy(Left+10,Top+90,"Type..> ");
	}

