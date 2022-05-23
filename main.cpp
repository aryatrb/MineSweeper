#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;
using namespace sf;
struct noghte {
public:
	bool clickkardan = 0;
	bool bomb = 0;
	bool wrongbomb=0;
	bool parcham = 0;
	Texture FlagEasy;
	Texture FlagNormal;
	Sprite FlagEasyspr;
	Sprite FlagNormalSpr;

	Texture khali;
	Texture khali2;

	Sprite khalispr;
	Sprite khalispr2;

	Texture harkhune;
	Texture harkhune2;

	Sprite harkhunespr;
	Sprite harkhunespr2;

	bool kenarkhali = 0;
	int x = 0;
	int x2 = 0;

	int y = 0;
	int y2=0;

	Texture BombEasy;
	Sprite BombEasySPR;
	Texture BombNormal;
	Sprite BombNormalSPR;

	Texture WrongBombEasy;
	Sprite WrongBombEasySPR;
	Texture WrongBombNormal;
	Sprite WrongBombNormalSPR;

	int numberesh = 0;
	Texture NumberEasy[8];
    Sprite NumberEasySPR[8];
    Texture NumberNormal[7];
	Sprite NumberNormalSPR[7];
};
int main()
{
	srand(time(NULL));

	Music TheBlueDanube;
	if(!TheBlueDanube.openFromFile("PlayingSong.ogg"));
	TheBlueDanube.play();

	Texture SoundOn;
	Sprite SoundOnSPR;
	if(!SoundOn.loadFromFile("soundon.png"));
	SoundOnSPR.setTexture(SoundOn);
	SoundOnSPR.setPosition(0,1230);

	Texture SoundOff;
	Sprite SoundOffSPR;
	if(!SoundOff.loadFromFile("soundoff.png"));
	SoundOffSPR.setTexture(SoundOff);
	SoundOffSPR.setPosition(0,1230);

	Texture hardtomenu;
	Sprite hardtomenuspr;
	if(!hardtomenu.loadFromFile("hardtomenu.png"));
	hardtomenuspr.setTexture(hardtomenu);

	Texture backtomenu;
	Sprite backtomenuspr;
	if(!backtomenu.loadFromFile("backtomenu.png"));
	backtomenuspr.setTexture(backtomenu);
	backtomenuspr.setPosition(559, 1029);

	Texture comingsoon;
	Sprite comingsoonspr;
	if(!comingsoon.loadFromFile("hard.png"));
	comingsoonspr.setTexture(comingsoon);

	Texture tedadparchamEasy;
	Sprite tedadparchamEasyspr;
	if(!tedadparchamEasy.loadFromFile("tedadparchamEasy.png"));
	tedadparchamEasyspr.setTexture(tedadparchamEasy);

	Texture tedadparchamNormal;
	Sprite tedadparchamNormalspr;
	if(!tedadparchamNormal.loadFromFile("tedadparchamNormal.png"));
	tedadparchamNormalspr.setTexture(tedadparchamNormal);

	Texture whatever;
	Sprite whateverspr;
	if(!whatever.loadFromFile("whatever.png"));
	whateverspr.setTexture(whatever);
	whateverspr.setPosition(36,1029);

	Texture winphoto;
	Sprite winphotospr;
	if(!winphoto.loadFromFile("win.png"));
	winphotospr.setTexture(winphoto);
    double ywin=1080;
    winphotospr.setPosition(0,ywin);

	Texture backgr;
	Sprite backgrspr;
    if(!backgr.loadFromFile("backgr.png"));
	backgrspr.setTexture(backgr);

	Texture gif;
	Sprite gifspr;
    if(!gif.loadFromFile("end.png"));
	gifspr.setTexture(gif);
    double ydead=1080;
    gifspr.setPosition(0,ydead);

    Texture gamebackgrEasy;
    Sprite gamebackgrEasyspr;
    if(!gamebackgrEasy.loadFromFile("gamingbackgroundeasy.png"));
    gamebackgrEasyspr.setTexture(gamebackgrEasy);
    gamebackgrEasyspr.setPosition(0,585);

    Texture gamebackgrNormal;
    Sprite gamebackgrNoramlspr;
    if(!gamebackgrNormal.loadFromFile("gamingbackgroundnormal.png"));
    gamebackgrNoramlspr.setTexture(gamebackgrNormal);
    gamebackgrNoramlspr.setPosition(0,585);

	Texture menu;
	Sprite menuspr;
	if(!menu.loadFromFile("menu.png"));
	menuspr.setTexture(menu);

	Texture atmicbomb[27];
	Sprite atmbombspr[27];
	if(!atmicbomb[0].loadFromFile("atom0.png"));
	atmbombspr[0].setTexture(atmicbomb[0]);
    if(!atmicbomb[1].loadFromFile("atom1.png"));
	atmbombspr[1].setTexture(atmicbomb[1]);
	if(!atmicbomb[2].loadFromFile("atom2.png"));
	atmbombspr[2].setTexture(atmicbomb[2]);
	if(!atmicbomb[3].loadFromFile("atom3.png"));
	atmbombspr[3].setTexture(atmicbomb[3]);
	if(!atmicbomb[4].loadFromFile("atom4.png"));
	atmbombspr[4].setTexture(atmicbomb[4]);
	if(!atmicbomb[5].loadFromFile("atom5.png"));
	atmbombspr[5].setTexture(atmicbomb[5]);
	if(!atmicbomb[6].loadFromFile("atom6.png"));
	atmbombspr[6].setTexture(atmicbomb[6]);
    if(!atmicbomb[7].loadFromFile("atom7.png"));
	atmbombspr[7].setTexture(atmicbomb[7]);
	if(!atmicbomb[8].loadFromFile("atom8.png"));
	atmbombspr[8].setTexture(atmicbomb[8]);
	if(!atmicbomb[9].loadFromFile("atom9.png"));
	atmbombspr[9].setTexture(atmicbomb[9]);
	if(!atmicbomb[10].loadFromFile("atom10.png"));
	atmbombspr[10].setTexture(atmicbomb[10]);
	if(!atmicbomb[11].loadFromFile("atom11.png"));
	atmbombspr[11].setTexture(atmicbomb[11]);
	if(!atmicbomb[12].loadFromFile("atom12.png"));
	atmbombspr[12].setTexture(atmicbomb[12]);
    if(!atmicbomb[13].loadFromFile("atom13.png"));
	atmbombspr[13].setTexture(atmicbomb[13]);
	if(!atmicbomb[14].loadFromFile("atom14.png"));
	atmbombspr[14].setTexture(atmicbomb[14]);
	if(!atmicbomb[15].loadFromFile("atom15.png"));
	atmbombspr[15].setTexture(atmicbomb[15]);
	if(!atmicbomb[16].loadFromFile("atom16.png"));
	atmbombspr[16].setTexture(atmicbomb[16]);
	if(!atmicbomb[17].loadFromFile("atom17.png"));
	atmbombspr[17].setTexture(atmicbomb[17]);
	if(!atmicbomb[18].loadFromFile("atom18.png"));
	atmbombspr[18].setTexture(atmicbomb[18]);
    if(!atmicbomb[19].loadFromFile("atom19.png"));
	atmbombspr[19].setTexture(atmicbomb[19]);
	if(!atmicbomb[20].loadFromFile("atom20.png"));
	atmbombspr[20].setTexture(atmicbomb[20]);
	if(!atmicbomb[21].loadFromFile("atom21.png"));
	atmbombspr[21].setTexture(atmicbomb[21]);
	if(!atmicbomb[22].loadFromFile("atom22.png"));
	atmbombspr[22].setTexture(atmicbomb[22]);
	if(!atmicbomb[23].loadFromFile("atom23.png"));
	atmbombspr[23].setTexture(atmicbomb[23]);
	if(!atmicbomb[24].loadFromFile("atom24.png"));
	atmbombspr[24].setTexture(atmicbomb[24]);
    if(!atmicbomb[25].loadFromFile("atom25.png"));
	atmbombspr[25].setTexture(atmicbomb[25]);
	if(!atmicbomb[26].loadFromFile("atom26.png"));
	atmbombspr[26].setTexture(atmicbomb[26]);


	RenderWindow window(VideoMode(1080,1300), "Shitty MineSweeper");
	noghte house[16][16];
	for (int i = 0; i<16; i++)
	{
		for (int j = 0; j<16; j++)
		{
			house[i][j].x = i * 120;
			house[i][j].y = j * 120;
            house[i][j].x2 = i * 67;
			house[i][j].y2 = j * 67;


			if(!house[i][j].BombNormal.loadFromFile("minnormal.png"));
			house[i][j].BombNormalSPR.setTexture(house[i][j].BombNormal);
			house[i][j].BombNormalSPR.setPosition(house[i][j].x2, house[i][j].y2);


			if(!house[i][j].WrongBombNormal.loadFromFile("wrongminnormal.png"));
			house[i][j].WrongBombNormalSPR.setTexture(house[i][j].WrongBombNormal);
			house[i][j].WrongBombNormalSPR.setPosition(house[i][j].x2, house[i][j].y2);


			if (!house[i][j].harkhune2.loadFromFile("aksekhune2.png"));
            house[i][j].harkhunespr2.setTexture(house[i][j].harkhune2);
            house[i][j].harkhunespr2.setPosition(house[i][j].x2, house[i][j].y2);

            if (!house[i][j].khali2.loadFromFile("khunekhali2.png"));
            house[i][j].khalispr2.setTexture(house[i][j].khali2);
            house[i][j].khalispr2.setPosition(house[i][j].x2, house[i][j].y2);

            if (!house[i][j].FlagNormal.loadFromFile("parcham2.png"));
            house[i][j].FlagNormalSpr.setTexture(house[i][j].FlagNormal);
            house[i][j].FlagNormalSpr.setPosition(house[i][j].x2, house[i][j].y2);
            if (!house[i][j].NumberNormal[1].loadFromFile("12.png"));
            house[i][j].NumberNormalSPR[1].setTexture(house[i][j].NumberNormal[1]);
            house[i][j].NumberNormalSPR[1].setPosition(house[i][j].x2, house[i][j].y2);
            if (!house[i][j].NumberNormal[2].loadFromFile("22.png"));
            house[i][j].NumberNormalSPR[2].setTexture(house[i][j].NumberNormal[2]);
            house[i][j].NumberNormalSPR[2].setPosition(house[i][j].x2, house[i][j].y2);
            if (!house[i][j].NumberNormal[3].loadFromFile("32.png"));
            house[i][j].NumberNormalSPR[3].setTexture(house[i][j].NumberNormal[3]);
            house[i][j].NumberNormalSPR[3].setPosition(house[i][j].x2, house[i][j].y2);
            if (!house[i][j].NumberNormal[4].loadFromFile("42.png"));
            house[i][j].NumberNormalSPR[4].setTexture(house[i][j].NumberNormal[4]);
            house[i][j].NumberNormalSPR[4].setPosition(house[i][j].x2, house[i][j].y2);
            if (!house[i][j].NumberNormal[5].loadFromFile("52.png"));
            house[i][j].NumberNormalSPR[5].setTexture(house[i][j].NumberNormal[5]);
            house[i][j].NumberNormalSPR[5].setPosition(house[i][j].x2, house[i][j].y2);
            if (!house[i][j].NumberNormal[6].loadFromFile("62.png"));
            house[i][j].NumberNormalSPR[6].setTexture(house[i][j].NumberNormal[6]);
            house[i][j].NumberNormalSPR[6].setPosition(house[i][j].x2, house[i][j].y2);


			if(!house[i][j].BombEasy.loadFromFile("mineeasy.png"));
			house[i][j].BombEasySPR.setTexture(house[i][j].BombEasy);
			house[i][j].BombEasySPR.setPosition(house[i][j].x, house[i][j].y);

			if(!house[i][j].WrongBombEasy.loadFromFile("wrongmineasy.png"));
			house[i][j].WrongBombEasySPR.setTexture(house[i][j].WrongBombEasy);
			house[i][j].WrongBombEasySPR.setPosition(house[i][j].x, house[i][j].y);

            if (!house[i][j].harkhune.loadFromFile("aksekhune.png"));
            house[i][j].harkhunespr.setTexture(house[i][j].harkhune);
            house[i][j].harkhunespr.setPosition(house[i][j].x, house[i][j].y);


			if (!house[i][j].khali.loadFromFile("khunekhali.png"));
			house[i][j].khalispr.setTexture(house[i][j].khali);
			house[i][j].khalispr.setPosition(house[i][j].x, house[i][j].y);


			if (!house[i][j].FlagEasy.loadFromFile("parcham.png"));
			house[i][j].FlagEasyspr.setTexture(house[i][j].FlagEasy);
			house[i][j].FlagEasyspr.setPosition(house[i][j].x, house[i][j].y);

			if (!house[i][j].NumberEasy[1].loadFromFile("1.png"));
			house[i][j].NumberEasySPR[1].setTexture(house[i][j].NumberEasy[1]);
			house[i][j].NumberEasySPR[1].setPosition(house[i][j].x, house[i][j].y);
			if (!house[i][j].NumberEasy[2].loadFromFile("2.png"));
			house[i][j].NumberEasySPR[2].setTexture(house[i][j].NumberEasy[2]);
			house[i][j].NumberEasySPR[2].setPosition(house[i][j].x, house[i][j].y);
			if (!house[i][j].NumberEasy[3].loadFromFile("3.png"));
			house[i][j].NumberEasySPR[3].setTexture(house[i][j].NumberEasy[3]);
			house[i][j].NumberEasySPR[3].setPosition(house[i][j].x, house[i][j].y);
			if (!house[i][j].NumberEasy[4].loadFromFile("4.png"));
			house[i][j].NumberEasySPR[4].setTexture(house[i][j].NumberEasy[4]);
			house[i][j].NumberEasySPR[4].setPosition(house[i][j].x, house[i][j].y);
			if (!house[i][j].NumberEasy[5].loadFromFile("5.png"));
			house[i][j].NumberEasySPR[5].setTexture(house[i][j].NumberEasy[5]);
			house[i][j].NumberEasySPR[5].setPosition(house[i][j].x, house[i][j].y);
			if (!house[i][j].NumberEasy[6].loadFromFile("6.png"));
			house[i][j].NumberEasySPR[6].setTexture(house[i][j].NumberEasy[6]);
			house[i][j].NumberEasySPR[6].setPosition(house[i][j].x, house[i][j].y);
			if (!house[i][j].NumberEasy[7].loadFromFile("7.png"));
			house[i][j].NumberEasySPR[7].setTexture(house[i][j].NumberEasy[7]);
			house[i][j].NumberEasySPR[7].setPosition(house[i][j].x, house[i][j].y);
		}
	}
	int xmouseeasy, ymouseeasy, xmousenormal, ymousenormal;
	int mouseClicks = 0;
    int wincheck=0;
    bool youwin=0;
    bool dead=0;
	int xbomb[40], ybomb[40];
	bool easy=0;
	bool normal=0;
	bool hard=0;
	int atomicbombnumber=0;
	int deadwinspeed=0;
    bool mosbatmanfitime=0;
    int xwhatever, ywhatever;
    bool whateverr=0;
    int FlagUsed=0;
    int andaze, tedadbomba, xEstefadeShode, yEstefadeShode;
    bool SoundOnOff=1;


	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			if (Mouse::isButtonPressed(Mouse::Left))
			{
				xmouseeasy = sf::Mouse::getPosition(window).x;
				ymouseeasy = sf::Mouse::getPosition(window).y;
				xwhatever=xmouseeasy;
				ywhatever=ymouseeasy;
                if(xwhatever<=70 && xwhatever>=0 && ywhatever>=1230 && ywhatever<=1300 && (dead==0 || whateverr==1) )
                {
                    if(SoundOnOff==1)
                    {
                        SoundOnOff=0;
                    }
                    else
                    {
                        SoundOnOff=1;
                    }
                }
                if(hard==1)
                {
                    if(xwhatever>=388 && xwhatever<=688 && ywhatever>=1159 && ywhatever<=1278)
                    {
                        hard=0;
                    }
                }
                else if(dead==1 && xwhatever>=36 && xwhatever<=521 && ywhatever>=1029 && ywhatever<=1256)
                {
                    whateverr=1;
                }
                else if(dead==1 && xwhatever>=559 && xwhatever<=1044 && ywhatever>=1029 && ywhatever<=1256)
                {
                    easy=0;
                    normal=0;
                    hard=0;
                }

				else if((xmouseeasy<=1080 && xmouseeasy>0 && ymouseeasy<=1300 && ymouseeasy>0) && (hard==normal==easy==0 || ((hard==1)||(easy==1)) && ymouseeasy<=1080) || (normal==1 && xmouseeasy<=1072))
                {

                    xmousenormal=xmouseeasy/67;
                    ymousenormal=ymouseeasy/67;
                    xmouseeasy = xmouseeasy/120;
				    ymouseeasy = ymouseeasy/120;
                    window.draw(menuspr);
                    int xmenu, ymenu;
                    if(mouseClicks==0 && whateverr==0)
                    {
                        xmenu=sf::Mouse::getPosition(window).x;
                        ymenu=sf::Mouse::getPosition(window).y;
                        if(xmenu>240 && xmenu<840)
                        {
                            if(ymenu>358 && ymenu<521)
                            {
                                easy=1;
                                mouseClicks++;
                            }
                            else if(ymenu>657 && ymenu<820)
                            {
                                normal=1;
                                mouseClicks++;
                            }
                            else if(ymenu>956 && ymenu<1119)
                            {
                                hard=1;
                                mouseClicks++;
                            }
                        }
                    }
                    else if(normal==1 || easy==1)
                    {
                        if(normal==1)
                        {
                            andaze=16;
                            tedadbomba=40;
                            xEstefadeShode=xmousenormal;
                            yEstefadeShode=ymousenormal;
                        }
                        else if(easy==1)
                        {
                            andaze=9;
                            tedadbomba=10;
                            xEstefadeShode=xmouseeasy;
                            yEstefadeShode=ymouseeasy;
                        }
                            if (mouseClicks == 1 && whateverr==0 )
                            {
                                for (int i = 0; i<tedadbomba; i++)
                                {
                                    xbomb[i] = rand() % andaze;
                                    ybomb[i] = rand() % andaze;
                                    if ((xbomb[i] >= xEstefadeShode - 1 && xbomb[i] <= xEstefadeShode + 1 && ybomb[i] >= yEstefadeShode - 1 && ybomb[i] <= yEstefadeShode + 1) || house[xbomb[i]][ybomb[i]].bomb == 1)
                                    {
                                        while ((xbomb[i] >= xEstefadeShode - 1 && xbomb[i] <= xEstefadeShode + 1 && ybomb[i] >= yEstefadeShode - 1 && ybomb[i] <= yEstefadeShode + 1) || house[xbomb[i]][ybomb[i]].bomb == 1)
                                        {
                                            xbomb[i] = rand() % andaze;
                                            ybomb[i] = rand() % andaze;
                                        }
                                    }
                                    house[xbomb[i]][ybomb[i]].bomb = 1;
                                    house[xEstefadeShode][yEstefadeShode].bomb = 0;
                                    if(house[xEstefadeShode][yEstefadeShode].parcham==0)
                                    house[xEstefadeShode][yEstefadeShode].clickkardan = 1;
                                    if(xEstefadeShode!=8)
                                    house[xEstefadeShode + 1][yEstefadeShode].kenarkhali = 1;
                                    if(xEstefadeShode!=0)
                                    house[xEstefadeShode - 1][yEstefadeShode].kenarkhali = 1;
                                    if(yEstefadeShode!=8)
                                    house[xEstefadeShode][yEstefadeShode + 1].kenarkhali = 1;
                                    if(yEstefadeShode!=0)
                                    house[xEstefadeShode][yEstefadeShode - 1].kenarkhali = 1;
                                }
                                for (int i = 0; i<andaze; i++)
                                {
                                    for (int j = 0; j<andaze; j++)
                                    {
                                        if (i != (andaze-1) && house[i + 1][j].bomb == 1)
                                        {
                                            house[i][j].numberesh++;
                                        }
                                        if (i != 0 && house[i - 1][j].bomb == 1)
                                        {
                                            house[i][j].numberesh++;
                                        }
                                        if (j != (andaze-1) && house[i][j + 1].bomb == 1)
                                        {
                                            house[i][j].numberesh++;
                                        }
                                        if (j != 0 && house[i][j - 1].bomb == 1)
                                        {
                                            house[i][j].numberesh++;
                                        }
                                        if (i != (andaze-1) && j != (andaze-1) && house[i + 1][j + 1].bomb == 1)
                                        {
                                            house[i][j].numberesh++;
                                        }
                                        if (i != (andaze-1) && j != 0 && house[i + 1][j - 1].bomb == 1)
                                        {
                                            house[i][j].numberesh++;
                                        }
                                        if (i != 0 && j != (andaze-1) && house[i - 1][j + 1].bomb == 1)
                                        {
                                            house[i][j].numberesh++;
                                        }
                                        if (i != 0 && j != 0 && house[i - 1][j - 1].bomb == 1)
                                        {
                                            house[i][j].numberesh++;
                                        }
                                    }
                                }

                                mouseClicks++;
                            }
                            else if (whateverr==0 && house[xEstefadeShode][yEstefadeShode].bomb == 1 && house[xEstefadeShode][yEstefadeShode].parcham==0)
                            {
                                dead = 1;
                                house[xEstefadeShode][yEstefadeShode].clickkardan = 1;
                                mouseClicks++;
                            }
                            else if(whateverr==0 && house[xEstefadeShode][yEstefadeShode].parcham==0)
                            {
                                house[xEstefadeShode][yEstefadeShode].clickkardan = 1;
                                mouseClicks++;
                            }
                            for (int m = 0; m<andaze; m++)
                            {
                                for (int i = 0; i<andaze; i++)
                                {
                                    for (int j = yEstefadeShode; j<andaze; j++)
                                    {
                                        if (house[i][j].bomb == 0)
                                        {
                                            if ((i != (andaze-1) && house[i + 1][j].clickkardan == 1 && house[i + 1][j].numberesh == 0 && house[i + 1][j].bomb == 0) || (i != 0 && house[i - 1][j].clickkardan == 1 && house[i - 1][j].numberesh == 0 && house[i - 1][j].bomb == 0) || (j != (andaze-1) && house[i][j + 1].clickkardan == 1 && house[i][j + 1].numberesh == 0 && house[i][j + 1].bomb == 0) || (j != 0 && house[i][j - 1].clickkardan == 1 && house[i][j - 1].numberesh == 0 && house[i][j - 1].bomb == 0))
                                            {
                                                if(house[i][j].parcham==0)
                                                house[i][j].clickkardan = 1;
                                            }
                                            if ((i != (andaze-1) && j != (andaze-1) && house[i + 1][j + 1].clickkardan == 1 && house[i + 1][j + 1].numberesh == 0 && house[i + 1][j + 1].bomb == 0) || (i != (andaze-1) && j != 0 && house[i + 1][j - 1].clickkardan == 1 && house[i + 1][j - 1].numberesh == 0 && house[i + 1][j - 1].bomb == 0) || (i != 0 && j != (andaze-1) && house[i - 1][j + 1].clickkardan == 1 && house[i - 1][j + 1].numberesh == 0 && house[i - 1][j + 1].bomb == 0) || (i != 0 && j != 0 && house[i - 1][j - 1].clickkardan == 1 && house[i - 1][j - 1].numberesh == 0 && house[i - 1][j - 1].bomb == 0))
                                            {
                                                if(house[i][j].parcham==0)
                                                house[i][j].clickkardan = 1;
                                            }
                                        }
                                    }
                                    for (int j = yEstefadeShode; j >= 0; j--)
                                    {
                                        if (house[i][j].bomb == 0)
                                        {
                                            if ((i != (andaze-1) && house[i + 1][j].clickkardan == 1 && house[i + 1][j].numberesh == 0 && house[i + 1][j].bomb == 0) || (i != 0 && house[i - 1][j].clickkardan == 1 && house[i - 1][j].numberesh == 0 && house[i - 1][j].bomb == 0) || (j != (andaze-1) && house[i][j + 1].clickkardan == 1 && house[i][j + 1].numberesh == 0 && house[i][j + 1].bomb == 0) || (j != 0 && house[i][j - 1].clickkardan == 1 && house[i][j - 1].numberesh == 0 && house[i][j - 1].bomb == 0))
                                            {
                                                if(house[i][j].parcham==0)
                                                house[i][j].clickkardan = 1;
                                            }
                                            if ((house[i][j].numberesh != 0 && i != (andaze-1) && j != (andaze-1) && house[i + 1][j + 1].clickkardan == 1 && house[i + 1][j + 1].numberesh == 0 && house[i + 1][j + 1].bomb == 0) || (i != (andaze-1) && j != 0 && house[i + 1][j - 1].clickkardan == 1 && house[i + 1][j - 1].numberesh == 0 && house[i + 1][j - 1].bomb == 0) || (i != 0 && j != (andaze-1) && house[i - 1][j + 1].clickkardan == 1 && house[i - 1][j + 1].numberesh == 0 && house[i - 1][j + 1].bomb == 0) || (i != 0 && j != 0 && house[i - 1][j - 1].clickkardan == 1 && house[i - 1][j - 1].numberesh == 0 && house[i - 1][j - 1].bomb == 0))
                                            {
                                                if(house[i][j].parcham==0)
                                                house[i][j].clickkardan = 1;
                                            }
                                        }
                                    }
                                }
                            }
                    }
                }
			}
			if (Mouse::isButtonPressed(Mouse::Right))
			{
				xmouseeasy = sf::Mouse::getPosition(window).x;
				ymouseeasy = sf::Mouse::getPosition(window).y;
				if(xmouseeasy<=1080 && xmouseeasy>0 && ymouseeasy<=1300 && ymouseeasy>0 && whateverr==0)
                {
                    xmousenormal=xmouseeasy/67;
                    ymousenormal=ymouseeasy/67;
                    xmouseeasy=xmouseeasy/120;
                    ymouseeasy=ymouseeasy/120;
                    if(normal==1 || easy==1)
                    {
                        if(normal==1)
                        {
                            xEstefadeShode=xmousenormal;
                            yEstefadeShode=ymousenormal;
                            andaze=16;
                            tedadbomba=40;
                        }
                        else if(easy==1)
                        {
                            xEstefadeShode=xmouseeasy;
                            yEstefadeShode=ymouseeasy;
                            andaze=9;
                            tedadbomba=10;
                        }
                        if (house[xEstefadeShode][yEstefadeShode].parcham == 0)
                        {
                            house[xEstefadeShode][yEstefadeShode].parcham = 1;
                        }
                        else if (house[xEstefadeShode][yEstefadeShode].parcham == 1)
                        {
                            house[xEstefadeShode][yEstefadeShode].parcham = 0;
                        }
                        if (house[xEstefadeShode][yEstefadeShode].clickkardan == 1)
                        {
                            house[xEstefadeShode][yEstefadeShode].parcham = 0;
                        }

                        for(int i=0;i<andaze;i++)
                        {
                            for(int j=0; j<andaze;j++)
                            {
                                if(house[i][j].parcham==1)
                                FlagUsed++;
                                if(house[i][j].parcham==1 && house[i][j].bomb==1)
                                {
                                    wincheck++;
                                    if(wincheck==tedadbomba)
                                    {
                                        youwin=1;
                                    }
                                }
                            }
                        }
                        tedadparchamEasyspr.setPosition(-108 * FlagUsed,0);
                        tedadparchamNormalspr.setPosition(-27 * FlagUsed,0);
                        FlagUsed=0;
                        wincheck=0;
                    }
                }
			}
		}
		window.clear();

		if(easy==0 && normal==0 && hard==0)
        {
            window.draw(menuspr);
            for(int i=0;i<16;i++)
            {
                for(int j=0; j<16; j++)
                {
                    house[i][j].clickkardan=0;
                    house[i][j].bomb=0;
                    house[i][j].wrongbomb=0;
                    house[i][j].parcham=0;
                    house[i][j].kenarkhali=0;
                    house[i][j].numberesh=0;
                    mouseClicks=0;
                    wincheck=0;
                    youwin=0;
                    dead=0;
                    easy=0;
                    normal=0;
                    hard=0;
                    atomicbombnumber=0;
                    mosbatmanfitime=0;
                    whateverr=0;
                    FlagUsed=0;
                }
            }
        }
        else if(hard==1)
        {
            window.draw(comingsoonspr);
            window.draw(hardtomenuspr);
        }
        else if(normal==1)
        {
                window.draw(gamebackgrNoramlspr);
                window.draw(tedadparchamNormalspr);
                for (int i = 0; i<16; i++)
                {
                    for (int j = 0; j<16; j++)
                    {
                        window.draw(house[i][j].harkhunespr2);
                        if (house[i][j].clickkardan == 1)
                        {
                            if (house[i][j].bomb == 0)
                            {
                                window.draw(house[i][j].khalispr2);
                                if (house[i][j].numberesh != 0)
                                {
                                    window.draw(house[i][j].NumberNormalSPR[house[i][j].numberesh]);
                                }
                            }
                        }
                        if (house[i][j].parcham == 1)
                        {
                            window.draw(house[i][j].FlagNormalSpr);
                        }
                    }
                }
                if(dead==1)
                {
                    for(int i=0; i<16; i++)
                    {
                        for(int j=0; j<16; j++)
                        {
                            if(house[i][j].bomb==1)
                            {
                                if(house[i][j].parcham==1)
                                {
                                    window.draw(house[i][j].WrongBombNormalSPR);
                                }
                                else
                                {
                                    window.draw(house[i][j].BombNormalSPR);
                                }
                            }
                        }
                    }
                }
        }
        else if(easy==1){
                window.draw(gamebackgrEasyspr);
                window.draw(tedadparchamEasyspr);
                for (int i = 0; i<9; i++)
                {
                    for (int j = 0; j<9; j++)
                    {
                        window.draw(house[i][j].harkhunespr);
                        if (house[i][j].clickkardan == 1)
                        {
                            if (house[i][j].bomb == 0)
                            {
                                window.draw(house[i][j].khalispr);
                                if (house[i][j].numberesh != 0)
                                {
                                    window.draw(house[i][j].NumberEasySPR[house[i][j].numberesh]);
                                }
                            }
                        }
                        if (house[i][j].parcham == 1)
                        {
                            window.draw(house[i][j].FlagEasyspr);
                        }
                    }
                }
                if(dead==1)
                {
                    for(int i=0; i<16; i++)
                    {
                        for(int j=0; j<16; j++)
                        {
                            if(house[i][j].bomb==1)
                            {
                                if(house[i][j].parcham==1)
                                {
                                    window.draw(house[i][j].WrongBombEasySPR);
                                }
                                else
                                {
                                    window.draw(house[i][j].BombEasySPR);
                                }
                            }
                        }
                    }
                }
        }
        if(youwin==1)
        {
            if(ywin<=220)
            window.draw(backgrspr);
            if(ywin>0)
            {
                ywin=ywin-5;
            }
            deadwinspeed++;
            winphotospr.setPosition(0,ywin);
            window.draw(winphotospr);
        }
        if(dead==1 && whateverr==0)
        {
            if(ydead<=0)
            window.draw(backgrspr);
            if(ydead>0)
            {
                ydead=ydead-10;
            }
            deadwinspeed++;
            if(deadwinspeed==15 && mosbatmanfitime==0)
            {
                atomicbombnumber++;
                deadwinspeed=0;
            }

            else if(deadwinspeed==5 && mosbatmanfitime==1)
            {
                atomicbombnumber--;
                deadwinspeed=0;
            }

            if(atomicbombnumber==26)
            {
                mosbatmanfitime=1;
            }

            else if(atomicbombnumber==0)
            {
                mosbatmanfitime=0;
            }
            atmbombspr[atomicbombnumber].setPosition(0,ydead);
            window.draw(atmbombspr[atomicbombnumber]);
            if(ydead<=0)
            {
                window.draw(backtomenuspr);
                window.draw(whateverspr);
            }
        }
        if(SoundOnOff==1)
        {
            window.draw(SoundOnSPR);
            TheBlueDanube.setVolume(100);
        }
        else
        {
            window.draw(SoundOffSPR);
            TheBlueDanube.setVolume(0);
        }

		window.display();
	}
	return 0;
}
