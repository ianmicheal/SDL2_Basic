/*
   SDL_basic written by David Ashley, released 20080621 under the GPL
   http://www.linuxmotors.com/SDL_basic
   dashxdr@gmail.com
*/
#include "misc.h"
#include <stdarg.h>

unsigned char fontdata[96][13]={
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x00,0x04,0x00,0x00,0x00},
{0x00,0x0a,0x0a,0x0a,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x0a,0x0a,0x1f,0x0a,0x1f,0x0a,0x0a,0x00,0x00,0x00,0x00},
{0x00,0x04,0x1e,0x05,0x05,0x0e,0x14,0x14,0x0f,0x04,0x00,0x00,0x00},
{0x00,0x12,0x15,0x0a,0x08,0x04,0x02,0x0a,0x15,0x09,0x00,0x00,0x00},
{0x00,0x02,0x05,0x05,0x02,0x05,0x19,0x09,0x16,0x00,0x00,0x00,0x00},
{0x00,0x0c,0x04,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x08,0x04,0x04,0x02,0x02,0x02,0x04,0x04,0x08,0x00,0x00,0x00},
{0x00,0x02,0x04,0x04,0x08,0x08,0x08,0x04,0x04,0x02,0x00,0x00,0x00},
{0x00,0x00,0x04,0x15,0x1f,0x0e,0x1f,0x15,0x04,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x04,0x04,0x1f,0x04,0x04,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0c,0x04,0x02,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x1f,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x0e,0x04,0x00,0x00},
{0x00,0x10,0x10,0x08,0x08,0x04,0x02,0x02,0x01,0x01,0x00,0x00,0x00},
{0x00,0x04,0x0a,0x11,0x11,0x11,0x11,0x11,0x0a,0x04,0x00,0x00,0x00},
{0x00,0x04,0x06,0x05,0x04,0x04,0x04,0x04,0x04,0x1f,0x00,0x00,0x00},
{0x00,0x0e,0x11,0x11,0x10,0x08,0x04,0x02,0x01,0x1f,0x00,0x00,0x00},
{0x00,0x1f,0x10,0x08,0x04,0x0e,0x10,0x10,0x11,0x0e,0x00,0x00,0x00},
{0x00,0x08,0x08,0x0c,0x0a,0x0a,0x09,0x1f,0x08,0x08,0x00,0x00,0x00},
{0x00,0x1f,0x01,0x01,0x0d,0x13,0x10,0x10,0x11,0x0e,0x00,0x00,0x00},
{0x00,0x0e,0x11,0x01,0x01,0x0f,0x11,0x11,0x11,0x0e,0x00,0x00,0x00},
{0x00,0x1f,0x10,0x08,0x08,0x04,0x04,0x02,0x02,0x02,0x00,0x00,0x00},
{0x00,0x0e,0x11,0x11,0x11,0x0e,0x11,0x11,0x11,0x0e,0x00,0x00,0x00},
{0x00,0x0e,0x11,0x11,0x11,0x1e,0x10,0x10,0x11,0x0e,0x00,0x00,0x00},
{0x00,0x00,0x00,0x04,0x0e,0x04,0x00,0x00,0x04,0x0e,0x04,0x00,0x00},
{0x00,0x00,0x00,0x04,0x0e,0x04,0x00,0x00,0x0c,0x04,0x02,0x00,0x00},
{0x00,0x10,0x08,0x04,0x02,0x01,0x02,0x04,0x08,0x10,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x1f,0x00,0x00,0x1f,0x00,0x00,0x00,0x00,0x00},
{0x00,0x01,0x02,0x04,0x08,0x10,0x08,0x04,0x02,0x01,0x00,0x00,0x00},
{0x00,0x0e,0x11,0x11,0x10,0x08,0x04,0x04,0x00,0x04,0x00,0x00,0x00},
{0x00,0x0e,0x11,0x11,0x19,0x15,0x15,0x0d,0x01,0x1e,0x00,0x00,0x00},
{0x00,0x04,0x0a,0x11,0x11,0x11,0x1f,0x11,0x11,0x11,0x00,0x00,0x00},
{0x00,0x0f,0x12,0x12,0x12,0x0e,0x12,0x12,0x12,0x0f,0x00,0x00,0x00},
{0x00,0x0e,0x11,0x01,0x01,0x01,0x01,0x01,0x11,0x0e,0x00,0x00,0x00},
{0x00,0x0f,0x12,0x12,0x12,0x12,0x12,0x12,0x12,0x0f,0x00,0x00,0x00},
{0x00,0x1f,0x01,0x01,0x01,0x0f,0x01,0x01,0x01,0x1f,0x00,0x00,0x00},
{0x00,0x1f,0x01,0x01,0x01,0x0f,0x01,0x01,0x01,0x01,0x00,0x00,0x00},
{0x00,0x0e,0x11,0x01,0x01,0x01,0x19,0x11,0x11,0x0e,0x00,0x00,0x00},
{0x00,0x11,0x11,0x11,0x11,0x1f,0x11,0x11,0x11,0x11,0x00,0x00,0x00},
{0x00,0x0e,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x0e,0x00,0x00,0x00},
{0x00,0x1c,0x08,0x08,0x08,0x08,0x08,0x08,0x09,0x06,0x00,0x00,0x00},
{0x00,0x11,0x11,0x09,0x05,0x03,0x05,0x09,0x11,0x11,0x00,0x00,0x00},
{0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x1f,0x00,0x00,0x00},
{0x00,0x11,0x11,0x1b,0x15,0x15,0x11,0x11,0x11,0x11,0x00,0x00,0x00},
{0x00,0x11,0x13,0x13,0x15,0x15,0x19,0x19,0x11,0x11,0x00,0x00,0x00},
{0x00,0x0e,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x0e,0x00,0x00,0x00},
{0x00,0x0f,0x11,0x11,0x11,0x0f,0x01,0x01,0x01,0x01,0x00,0x00,0x00},
{0x00,0x0e,0x11,0x11,0x11,0x11,0x11,0x11,0x15,0x0e,0x10,0x00,0x00},
{0x00,0x0f,0x11,0x11,0x11,0x0f,0x05,0x09,0x11,0x11,0x00,0x00,0x00},
{0x00,0x0e,0x11,0x01,0x01,0x0e,0x10,0x10,0x11,0x0e,0x00,0x00,0x00},
{0x00,0x1f,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x00,0x00,0x00},
{0x00,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x0e,0x00,0x00,0x00},
{0x00,0x11,0x11,0x11,0x11,0x0a,0x0a,0x0a,0x04,0x04,0x00,0x00,0x00},
{0x00,0x11,0x11,0x11,0x11,0x15,0x15,0x15,0x1b,0x11,0x00,0x00,0x00},
{0x00,0x11,0x11,0x0a,0x0a,0x04,0x0a,0x0a,0x11,0x11,0x00,0x00,0x00},
{0x00,0x11,0x11,0x0a,0x0a,0x04,0x04,0x04,0x04,0x04,0x00,0x00,0x00},
{0x00,0x1f,0x10,0x08,0x08,0x04,0x02,0x02,0x01,0x1f,0x00,0x00,0x00},
{0x00,0x0e,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x0e,0x00,0x00,0x00},
{0x00,0x01,0x01,0x02,0x02,0x04,0x08,0x08,0x10,0x10,0x00,0x00,0x00},
{0x00,0x0e,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x0e,0x00,0x00,0x00},
{0x00,0x04,0x0a,0x11,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1f,0x00,0x00},
{0x00,0x0c,0x08,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x0e,0x10,0x1e,0x11,0x11,0x1e,0x00,0x00,0x00},
{0x00,0x01,0x01,0x01,0x0f,0x11,0x11,0x11,0x11,0x0f,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x0e,0x11,0x01,0x01,0x11,0x0e,0x00,0x00,0x00},
{0x00,0x10,0x10,0x10,0x1e,0x11,0x11,0x11,0x11,0x1e,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x0e,0x11,0x1f,0x01,0x11,0x0e,0x00,0x00,0x00},
{0x00,0x0c,0x12,0x02,0x02,0x0f,0x02,0x02,0x02,0x02,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x0e,0x11,0x11,0x11,0x1e,0x10,0x11,0x0e,0x00},
{0x00,0x01,0x01,0x01,0x0d,0x13,0x11,0x11,0x11,0x11,0x00,0x00,0x00},
{0x00,0x00,0x04,0x00,0x06,0x04,0x04,0x04,0x04,0x0e,0x00,0x00,0x00},
{0x00,0x00,0x08,0x00,0x0c,0x08,0x08,0x08,0x08,0x09,0x09,0x06,0x00},
{0x00,0x01,0x01,0x01,0x09,0x05,0x03,0x05,0x09,0x11,0x00,0x00,0x00},
{0x00,0x06,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x0e,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x0b,0x15,0x15,0x15,0x15,0x11,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x0d,0x13,0x11,0x11,0x11,0x11,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x0e,0x11,0x11,0x11,0x11,0x0e,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x0f,0x11,0x11,0x11,0x0f,0x01,0x01,0x01,0x00},
{0x00,0x00,0x00,0x00,0x1e,0x11,0x11,0x11,0x1e,0x10,0x10,0x10,0x00},
{0x00,0x00,0x00,0x00,0x0d,0x13,0x01,0x01,0x01,0x01,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x0e,0x11,0x06,0x08,0x11,0x0e,0x00,0x00,0x00},
{0x00,0x00,0x02,0x02,0x0f,0x02,0x02,0x02,0x12,0x0c,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x11,0x11,0x11,0x11,0x19,0x16,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x11,0x11,0x11,0x0a,0x0a,0x04,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x11,0x11,0x15,0x15,0x15,0x0a,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x11,0x0a,0x04,0x04,0x0a,0x11,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x11,0x11,0x11,0x19,0x16,0x10,0x11,0x0e,0x00},
{0x00,0x00,0x00,0x00,0x1f,0x08,0x04,0x02,0x01,0x1f,0x00,0x00,0x00},
{0x00,0x18,0x04,0x04,0x04,0x03,0x04,0x04,0x04,0x18,0x00,0x00,0x00},
{0x00,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x00,0x00,0x00},
{0x00,0x03,0x04,0x04,0x04,0x18,0x04,0x04,0x04,0x03,0x00,0x00,0x00},
{0x00,0x12,0x15,0x09,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x1f,0x1f,0x1f,0x1f,0x1f,0x1f,0x1f,0x1f,0x1f,0x1f,0x1f,0x00}};

#define FONTW 6
#define FONTH 13

void cleartext(bc *bc)
{
	memset(bc->textstate, ' ', bc->txsize * bc->tysize);
}

void inittext(bc *bc)
{
	bc->txsize = bc->xsize/FONTW;
	bc->tysize = bc->ysize/FONTH;
	bc->fwidth = FONTW;
	bc->fheight = FONTH;
	bc->textsize = bc->txsize * bc->tysize;
#warning 3 memory checks
	bc->textstate = malloc(bc->textsize);
	bc->textbak = malloc(bc->textsize);
	bc->scrollhistory = malloc(bc->txsize * SCROLLHISTORYSIZE);
	cleartext(bc);
	bc->debhist=malloc(LINESIZE*HISTSIZE);
}


void drawtext(bc *bc, int x, int y, Uint32 fgcolor, Uint32 bgcolor, char *str)
{
unsigned char c;
	taint(bc);
	while((c=*str++))
	{
		c-=' ';
		if(c>=96)
			c=0;
		drawchar(bc, x, y, fontdata[c], fgcolor, bgcolor);
		x+=6;
	}
}

// 32bpp
void scrollup(bc *bc)
{
int i;
int h,w;
unsigned char *p1, *p2;
int pitch;

	taint(bc);
	w=bc->xsize*4;
	h=bc->ysize-FONTH;
	pitch = bc->thescreen->pitch;
	p1 = bc->thescreen->pixels;
	p2 = p1 + pitch*FONTH;
	for(i=0;i<h;++i)
	{
		memcpy(p1, p2, w);
		p1+=pitch;
		p2+=pitch;
	}
	for(i=0;i<FONTH;++i)
	{
		memset(p1, 0, w);
		p1+=pitch;
	}
	memcpy(bc->scrollhistory+(bc->scrollhistoryin++ & (SCROLLHISTORYSIZE-1))*
			bc->txsize, bc->textstate, bc->txsize);
	memmove(bc->textstate, bc->textstate + bc->txsize,
		bc->txsize * (bc->tysize-1));
	memset(bc->textstate + bc->txsize * (bc->tysize-1), ' ', bc->txsize);
}

void cursor(bc *bc, int onoff)
{
char tt[2];

	onoff = !!onoff;
	taint(bc);
	tt[0] = bc->textstate[bc->typos*bc->txsize + bc->txpos];
	tt[1] = 0;
	drawtext(bc, bc->txpos*FONTW, bc->typos*FONTH,
		onoff ? bc->black : bc->white,
		onoff ? bc->cursorcolor : bc->black, tt);
	bc->cursorstate = onoff;
}

void newline(bc *bc)
{
	bc->txpos = 0;
	if(bc->typos < bc->tysize-1)
		++bc->typos;
	else
		scrollup(bc);
}

void drawcharxy(bc *bc, unsigned int x, unsigned int y, char c)
{
char tt[2];
	tt[0]=c;
	tt[1]=0;
	drawtext(bc, x*FONTW, y*FONTH, bc->white, bc->black, tt);
	if(x<bc->txsize && y<bc->tysize)
		bc->textstate[y*bc->txsize + x] = c;
}

void dprints(bc *bc, char *s)
{
char *p,ch;
static char escape=0;
int i;
static int escapedata[20],ecount;

	cursor(bc, 0);
	p=s;
	ecount=escape=0;
	while((ch=*p++))
	{
		if(escape)
		{
			if(ch>='0' && ch<='9')
			{
				escapedata[ecount]*=10;
				escapedata[ecount]+=ch-'0';
			} else if(ch==';')
			{
				++ecount;
				escapedata[ecount]=0;
			}
			else
			{
				escape=0;
				switch(ch)
				{
				case 'k':
					i=bc->txpos;
					while(i<bc->txsize)
						drawcharxy(bc, i++, bc->typos,' ');
					break;
				case 'x':
					bc->txpos=escapedata[0];
					if(bc->txpos<=0) bc->txpos=0;
					if(bc->txpos>=bc->txsize) bc->txpos=bc->txsize-1;
					break;
				case 'y':
					bc->typos = escapedata[0];
					if(bc->typos<0) bc->typos=0;
					if(bc->typos>=bc->tysize) bc->typos=bc->tysize-1;
					break;
				}
			}
			continue;
		}
		switch(ch)
		{
		case '\r':
			bc->txpos=0;
			break;
		case '\n':
			newline(bc);
			break;
		case '\t':
			while(bc->txpos&7)
				drawcharxy(bc, bc->txpos++,bc->typos,' ');
			break;
		case 8:
			if(bc->txpos)
				drawcharxy(bc, --bc->txpos,bc->typos,' ');
			break;
		case 0x1b:
			ecount=0;
			escapedata[ecount]=0;
			escape=1;
			break;
		default:
			drawcharxy(bc, bc->txpos++,bc->typos,ch);
			break;
		}
		if(bc->txpos >= bc->txsize)
			newline(bc);
	}
	cursor(bc, 1);
	update(bc);
}

void tprintf(bc *bc, char *s, ...)
{
char tbuff[2048];
va_list ap;

	va_start(ap, s);
	vsnprintf(tbuff, sizeof(tbuff), s, ap);
	va_end(ap);
	dprints(bc, tbuff);

}
