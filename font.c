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

void inittext(bc *bc)
{
	bc->txsize = bc->xsize/FONTW;
	bc->tysize = bc->ysize/FONTH;
	bc->fwidth = FONTW;
	bc->fheight = FONTH;
#warning memory check
	bc->textstate = malloc(bc->txsize * bc->tysize);
	memset(bc->textstate, ' ', bc->txsize * bc->tysize);
}


void drawtext(bc *bc, int x, int y, Uint32 fgcolor, Uint32 bgcolor, char *str)
{
int v;
unsigned char *p, c;
	bc->tainted = 1;
	while((c=*str++))
	{
		c-=' ';
		if(c>=96)
			c=0;
		p=fontdata[c];
		for(v=0;v<13;++v)
		{
			c=*p++;
			colordot(bc, x+0,y+v,(c&0x01) ? fgcolor : bgcolor);
			colordot(bc, x+1,y+v,(c&0x02) ? fgcolor : bgcolor);
			colordot(bc, x+2,y+v,(c&0x04) ? fgcolor : bgcolor);
			colordot(bc, x+3,y+v,(c&0x08) ? fgcolor : bgcolor);
			colordot(bc, x+4,y+v,(c&0x10) ? fgcolor : bgcolor);
			colordot(bc, x+5,y+v,(c&0x20) ? fgcolor : bgcolor);
		}
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

	w=bc->txsize*FONTW*4;
	h=(bc->tysize-1)*FONTH;
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
}

void cursor(bc *bc, int onoff)
{
char tt[2];

	onoff = !!onoff;
	if(bc->cursorstate != onoff)
	{
		bc->tainted = 1;
		tt[0] = bc->textstate[bc->typos*bc->txsize + bc->txpos];
		tt[1] = 0;
		drawtext(bc, bc->txpos*FONTW, bc->typos*FONTH,
			onoff ? bc->black : bc->white,
			onoff ? bc->cursorcolor : bc->black, tt);
		bc->cursorstate = onoff;
	}
}

void newline(bc *bc)
{
	++bc->typos;
	if(bc->typos == bc->tysize)
	{
		scrollup(bc);
		--bc->typos;
	}
}


void termtext(bc *bc, char *str, ...)
{
char c;
char temp[1024];
int intemp;
int white, black;
char tbuff[2048];
va_list ap;

	va_start(ap, str);
	vsnprintf(tbuff, sizeof(tbuff), str, ap);
	va_end(ap);
	str = tbuff;

	cursor(bc, 0);
	white = bc->white;
	black = bc->black;
	intemp=0;
	for(;;)
	{
		c=*str++;
		if(c==0 || c=='\n')
		{
			if(intemp)
			{
				temp[intemp]=0;
				if(bc->txpos + intemp >= bc->txsize)
				{
					int clip, csave;
					clip = bc->txsize - bc->txpos;
					csave = temp[clip];
					temp[clip] = 0;
					drawtext(bc, bc->txpos*FONTW, bc->typos*FONTH,
						white, black, temp);
					temp[clip] = csave;
					memmove(temp, temp+clip, intemp-clip);
					intemp -= clip;
					temp[intemp] = 0;
					bc->txpos = 0;
					newline(bc);
				}
				drawtext(bc, bc->txpos*FONTW, bc->typos*FONTH,
					white, black, temp);
				bc->txpos += intemp;
				intemp=0;
			}
			if(!c) break;
// must have a newline then
			bc->txpos = 0;
			newline(bc);
		} else
			if(intemp<sizeof(temp)-1)
				temp[intemp++] = c;
	}
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
			bc->txpos=0;
			if(bc->typos<bc->tysize-1)
				++bc->typos;
			else
				scrollup(bc);
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
	}
	cursor(bc, 1);
	updatef(bc);
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
