/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct tbaselexer164018 tbaselexer164018;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tllstream163204 tllstream163204;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef NU8 TY114118[32];
typedef N_NIMCALL_PTR(void, TY889) (void* p, NI op);
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY889 marker;
};
struct TNimObject {
TNimType* m_type;
};
struct tbaselexer164018 {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
tllstream163204* Stream;
NI Linenumber;
NI Sentinel;
NI Linestart;
};
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tllstream163204 {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
};
N_NIMCALL(void, closebaselexer_164035)(tbaselexer164018* l);
N_NOCONV(void, dealloc_4011)(void* p);
N_NIMCALL(void, llstreamclose_163238)(tllstream163204* s);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, fillbuffer_164072)(tbaselexer164018* l);
N_NIMCALL(void, hiddenraiseassert_77217)(NimStringDesc* msg);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(NI, mulInt)(NI a, NI b);
N_NIMCALL(NI, llstreamread_163242)(tllstream163204* s, void* buf, NI buflen);
static N_INLINE(NI, divInt)(NI a, NI b);
N_NOINLINE(void, raiseDivByZero)(void);
N_NOCONV(void*, realloc_4007)(void* p, NI newsize);
N_NIMCALL(NI, fillbaselexer_164812)(tbaselexer164018* l, NI pos);
N_NIMCALL(NI, handlecr_164050)(tbaselexer164018* l, NI pos);
N_NIMCALL(NI, handlelf_164056)(tbaselexer164018* l, NI pos);
N_NIMCALL(void, skiputf8bom_165413)(tbaselexer164018* l);
N_NIMCALL(void, openbaselexer_164027)(tbaselexer164018* l, tllstream163204* inputstream, NI buflen);
N_NOCONV(void*, alloc_4001)(NI size);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NI, getcolnumber_164045)(tbaselexer164018* l, NI pos);
N_NIMCALL(NimStringDesc*, getcurrentline_164040)(tbaselexer164018* l, NIM_BOOL marker);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NI count, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
NIM_CONST TY114118 newlines_164014 = {
0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP1616, "L.sentinel < L.bufLen ", 22);
STRING_LITERAL(TMP1619, "0 <= toCopy ", 12);
STRING_LITERAL(TMP1627, "s < L.bufLen ", 13);
STRING_LITERAL(TMP1631, "L.bufLen - oldBufLen == oldBufLen ", 34);
STRING_LITERAL(TMP1637, "pos <= L.sentinel ", 18);
STRING_LITERAL(TMP1639, "L.buf[pos] == \'\\x0D\' ", 21);
STRING_LITERAL(TMP1640, "L.buf[pos] == \'\\x0A\' ", 21);
STRING_LITERAL(TMP1641, "0 < bufLen ", 11);
STRING_LITERAL(TMP1645, "", 0);
STRING_LITERAL(TMP1646, "\015\012", 2);
STRING_LITERAL(TMP1647, "^\015\012", 3);
extern TFrame* frameptr_12037;
extern TNimType NTI1009; /* TObject */
TNimType NTI164018; /* TBaseLexer */
extern TNimType NTI105; /* int */
extern TNimType NTI144; /* cstring */
extern TNimType NTI163206; /* PLLStream */

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12037;
	frameptr_12037 = s;
}
static N_INLINE(void, popFrame)(void) {
	frameptr_12037 = (*frameptr_12037).prev;
}
N_NIMCALL(void, closebaselexer_164035)(tbaselexer164018* l) {
	nimfr("closeBaseLexer", "nimlexbase.nim")
	nimln(71, "nimlexbase.nim");
	dealloc_4011(((void*) ((*l).Buf)));	nimln(72, "nimlexbase.nim");
	llstreamclose_163238((*l).Stream);	popFrame();
}
static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU32)(a) - (NU32)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ (NI)((NU32) ~(b))));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}	LA5: ;
	raiseOverflow();	BeforeRet: ;	return result;
}
static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU32)(a) + (NU32)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ b));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}	LA5: ;
	raiseOverflow();	BeforeRet: ;	return result;
}
static N_INLINE(NI, divInt)(NI a, NI b) {
	NI result;
	result = 0;
	{
		if (!(b == 0)) goto LA3;
		raiseDivByZero();	}	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == (-2147483647 -1));
		if (!(LOC7)) goto LA8;
		LOC7 = (b == -1);
		LA8: ;
		if (!LOC7) goto LA9;
		raiseOverflow();	}	LA9: ;
	result = (NI32)(a / b);
	goto BeforeRet;
	BeforeRet: ;	return result;
}
N_NIMCALL(void, fillbuffer_164072)(tbaselexer164018* l) {
	NI charsread;
	NI tocopy;
	NI s;
	NI oldbuflen;
	NI TMP1617;
	NI TMP1618;
	NI TMP1622;
	NI TMP1623;
	NI LOC13;
	NI TMP1624;
	NI TMP1625;
	nimfr("FillBuffer", "nimlexbase.nim")
	charsread = 0;
	tocopy = 0;
	s = 0;
	oldbuflen = 0;
	nimln(82, "nimlexbase.nim");
	{
		nimln(82, "nimlexbase.nim");
		nimln(82, "nimlexbase.nim");
		if (!!(((*l).Sentinel < (*l).Buflen))) goto LA3;
		nimln(82, "nimlexbase.nim");
		hiddenraiseassert_77217(((NimStringDesc*) &TMP1616));	}	LA3: ;
	nimln(83, "nimlexbase.nim");
	nimln(83, "nimlexbase.nim");
	nimln(83, "nimlexbase.nim");
	TMP1617 = subInt((*l).Buflen, (*l).Sentinel);
	TMP1618 = subInt((NI32)(TMP1617), 1);
	tocopy = (NI32)(TMP1618);
	nimln(84, "nimlexbase.nim");
	{
		nimln(84, "nimlexbase.nim");
		nimln(84, "nimlexbase.nim");
		if (!!((0 <= tocopy))) goto LA7;
		nimln(84, "nimlexbase.nim");
		hiddenraiseassert_77217(((NimStringDesc*) &TMP1619));	}	LA7: ;
	nimln(85, "nimlexbase.nim");
	{
		NI TMP1620;
		NI TMP1621;
		nimln(706, "system.nim");
		if (!(0 < tocopy)) goto LA11;
		nimln(86, "nimlexbase.nim");
		nimln(86, "nimlexbase.nim");
		TMP1620 = addInt((*l).Sentinel, 1);
		nimln(86, "nimlexbase.nim");
		TMP1621 = mulInt(tocopy, 1);
		memmove(((void*) ((*l).Buf)), ((void*) (&(*l).Buf[(NI32)(TMP1620)])), (NI32)(TMP1621));	}	LA11: ;
	nimln(88, "nimlexbase.nim");
	nimln(89, "nimlexbase.nim");
	nimln(88, "nimlexbase.nim");
	nimln(89, "nimlexbase.nim");
	nimln(89, "nimlexbase.nim");
	TMP1622 = addInt((*l).Sentinel, 1);
	TMP1623 = mulInt((NI32)(TMP1622), 1);
	LOC13 = 0;
	LOC13 = llstreamread_163242((*l).Stream, ((void*) (&(*l).Buf[tocopy])), (NI32)(TMP1623));
	TMP1624 = divInt(LOC13, 1);
	charsread = (NI32)(TMP1624);
	nimln(90, "nimlexbase.nim");
	nimln(90, "nimlexbase.nim");
	TMP1625 = addInt(tocopy, charsread);
	s = (NI32)(TMP1625);
	nimln(91, "nimlexbase.nim");
	{
		NI TMP1626;
		nimln(91, "nimlexbase.nim");
		nimln(91, "nimlexbase.nim");
		TMP1626 = addInt((*l).Sentinel, 1);
		if (!(charsread < (NI32)(TMP1626))) goto LA16;
		nimln(92, "nimlexbase.nim");
		(*l).Buf[s] = 0;
		nimln(93, "nimlexbase.nim");
		(*l).Sentinel = s;
	}	goto LA14;
	LA16: ;
	{
		nimln(96, "nimlexbase.nim");
		s = subInt(s, 1);
		nimln(97, "nimlexbase.nim");
		while (1) {
			nimln(98, "nimlexbase.nim");
			{
				nimln(98, "nimlexbase.nim");
				nimln(98, "nimlexbase.nim");
				if (!!((s < (*l).Buflen))) goto LA22;
				nimln(98, "nimlexbase.nim");
				hiddenraiseassert_77217(((NimStringDesc*) &TMP1627));			}			LA22: ;
			nimln(99, "nimlexbase.nim");
			while (1) {
				NIM_BOOL LOC25;
				nimln(99, "nimlexbase.nim");
				LOC25 = 0;
				nimln(702, "system.nim");
				LOC25 = (0 <= s);
				if (!(LOC25)) goto LA26;
				nimln(99, "nimlexbase.nim");
				nimln(730, "system.nim");
				LOC25 = !((((NU8)((*l).Buf[s])) == ((NU8)(13)) || ((NU8)((*l).Buf[s])) == ((NU8)(10))));
				LA26: ;
				if (!LOC25) goto LA24;
				nimln(99, "nimlexbase.nim");
				s = subInt(s, 1);
			} LA24: ;
			nimln(100, "nimlexbase.nim");
			{
				nimln(702, "system.nim");
				if (!(0 <= s)) goto LA29;
				nimln(102, "nimlexbase.nim");
				(*l).Sentinel = s;
				nimln(103, "nimlexbase.nim");
				goto LA19;
			}			goto LA27;
			LA29: ;
			{
				NI TMP1628;
				NI TMP1629;
				void* LOC32;
				NI TMP1632;
				NI LOC37;
				NI TMP1633;
				NI TMP1636;
				nimln(107, "nimlexbase.nim");
				oldbuflen = (*l).Buflen;
				nimln(108, "nimlexbase.nim");
				nimln(108, "nimlexbase.nim");
				TMP1628 = mulInt((*l).Buflen, 2);
				(*l).Buflen = (NI32)(TMP1628);
				nimln(109, "nimlexbase.nim");
				nimln(109, "nimlexbase.nim");
				nimln(109, "nimlexbase.nim");
				TMP1629 = mulInt((*l).Buflen, 1);
				LOC32 = 0;
				LOC32 = realloc_4007(((void*) ((*l).Buf)), (NI32)(TMP1629));
				(*l).Buf = ((NCSTRING) (LOC32));
				nimln(110, "nimlexbase.nim");
				{
					NI TMP1630;
					nimln(110, "nimlexbase.nim");
					nimln(110, "nimlexbase.nim");
					nimln(110, "nimlexbase.nim");
					TMP1630 = subInt((*l).Buflen, oldbuflen);
					if (!!(((NI32)(TMP1630) == oldbuflen))) goto LA35;
					nimln(110, "nimlexbase.nim");
					hiddenraiseassert_77217(((NimStringDesc*) &TMP1631));				}				LA35: ;
				nimln(111, "nimlexbase.nim");
				nimln(112, "nimlexbase.nim");
				nimln(111, "nimlexbase.nim");
				nimln(112, "nimlexbase.nim");
				TMP1632 = mulInt(oldbuflen, 1);
				LOC37 = 0;
				LOC37 = llstreamread_163242((*l).Stream, ((void*) (&(*l).Buf[oldbuflen])), (NI32)(TMP1632));
				TMP1633 = divInt(LOC37, 1);
				charsread = (NI32)(TMP1633);
				nimln(113, "nimlexbase.nim");
				{
					NI TMP1634;
					NI TMP1635;
					nimln(113, "nimlexbase.nim");
					if (!(charsread < oldbuflen)) goto LA40;
					nimln(114, "nimlexbase.nim");
					nimln(114, "nimlexbase.nim");
					TMP1634 = addInt(oldbuflen, charsread);
					(*l).Buf[(NI32)(TMP1634)] = 0;
					nimln(115, "nimlexbase.nim");
					nimln(115, "nimlexbase.nim");
					TMP1635 = addInt(oldbuflen, charsread);
					(*l).Sentinel = (NI32)(TMP1635);
					nimln(116, "nimlexbase.nim");
					goto LA19;
				}				LA40: ;
				nimln(117, "nimlexbase.nim");
				nimln(117, "nimlexbase.nim");
				TMP1636 = subInt((*l).Buflen, 1);
				s = (NI32)(TMP1636);
			}			LA27: ;
		} LA19: ;
	}	LA14: ;
	popFrame();
}
N_NIMCALL(NI, fillbaselexer_164812)(tbaselexer164018* l, NI pos) {
	NI result;
	nimfr("fillBaseLexer", "nimlexbase.nim")
	result = 0;
	nimln(120, "nimlexbase.nim");
	{
		nimln(120, "nimlexbase.nim");
		nimln(120, "nimlexbase.nim");
		if (!!((pos <= (*l).Sentinel))) goto LA3;
		nimln(120, "nimlexbase.nim");
		hiddenraiseassert_77217(((NimStringDesc*) &TMP1637));	}	LA3: ;
	nimln(121, "nimlexbase.nim");
	{
		NI TMP1638;
		nimln(121, "nimlexbase.nim");
		if (!(pos < (*l).Sentinel)) goto LA7;
		nimln(122, "nimlexbase.nim");
		nimln(122, "nimlexbase.nim");
		TMP1638 = addInt(pos, 1);
		result = (NI32)(TMP1638);
	}	goto LA5;
	LA7: ;
	{
		nimln(124, "nimlexbase.nim");
		fillbuffer_164072(l);		nimln(125, "nimlexbase.nim");
		(*l).Bufpos = 0;
		nimln(126, "nimlexbase.nim");
		result = 0;
	}	LA5: ;
	nimln(127, "nimlexbase.nim");
	(*l).Linestart = result;
	popFrame();
	return result;
}
N_NIMCALL(NI, handlecr_164050)(tbaselexer164018* l, NI pos) {
	NI result;
	nimfr("HandleCR", "nimlexbase.nim")
	result = 0;
	nimln(130, "nimlexbase.nim");
	{
		nimln(130, "nimlexbase.nim");
		nimln(130, "nimlexbase.nim");
		if (!!(((NU8)((*l).Buf[pos]) == (NU8)(13)))) goto LA3;
		nimln(130, "nimlexbase.nim");
		hiddenraiseassert_77217(((NimStringDesc*) &TMP1639));	}	LA3: ;
	nimln(131, "nimlexbase.nim");
	(*l).Linenumber = addInt((*l).Linenumber, 1);
	nimln(132, "nimlexbase.nim");
	result = fillbaselexer_164812(l, pos);
	nimln(133, "nimlexbase.nim");
	{
		nimln(133, "nimlexbase.nim");
		if (!((NU8)((*l).Buf[result]) == (NU8)(10))) goto LA7;
		nimln(134, "nimlexbase.nim");
		result = fillbaselexer_164812(l, result);
	}	LA7: ;
	popFrame();
	return result;
}
N_NIMCALL(NI, handlelf_164056)(tbaselexer164018* l, NI pos) {
	NI result;
	nimfr("HandleLF", "nimlexbase.nim")
	result = 0;
	nimln(137, "nimlexbase.nim");
	{
		nimln(137, "nimlexbase.nim");
		nimln(137, "nimlexbase.nim");
		if (!!(((NU8)((*l).Buf[pos]) == (NU8)(10)))) goto LA3;
		nimln(137, "nimlexbase.nim");
		hiddenraiseassert_77217(((NimStringDesc*) &TMP1640));	}	LA3: ;
	nimln(138, "nimlexbase.nim");
	(*l).Linenumber = addInt((*l).Linenumber, 1);
	nimln(139, "nimlexbase.nim");
	result = fillbaselexer_164812(l, pos);
	popFrame();
	return result;
}
N_NIMCALL(void, skiputf8bom_165413)(tbaselexer164018* l) {
	nimfr("skip_UTF_8_BOM", "nimlexbase.nim")
	nimln(142, "nimlexbase.nim");
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		nimln(142, "nimlexbase.nim");
		LOC3 = 0;
		nimln(142, "nimlexbase.nim");
		LOC4 = 0;
		nimln(142, "nimlexbase.nim");
		LOC4 = ((NU8)((*l).Buf[0]) == (NU8)(239));
		if (!(LOC4)) goto LA5;
		nimln(142, "nimlexbase.nim");
		LOC4 = ((NU8)((*l).Buf[1]) == (NU8)(187));
		LA5: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA6;
		nimln(142, "nimlexbase.nim");
		LOC3 = ((NU8)((*l).Buf[2]) == (NU8)(191));
		LA6: ;
		if (!LOC3) goto LA7;
		nimln(143, "nimlexbase.nim");
		(*l).Bufpos = addInt((*l).Bufpos, 3);
		nimln(144, "nimlexbase.nim");
		(*l).Linestart = addInt((*l).Linestart, 3);
	}	LA7: ;
	popFrame();
}
N_NIMCALL(void, openbaselexer_164027)(tbaselexer164018* l, tllstream163204* inputstream, NI buflen) {
	NI TMP1642;
	void* LOC5;
	NI TMP1643;
	nimfr("openBaseLexer", "nimlexbase.nim")
	nimln(147, "nimlexbase.nim");
	{
		nimln(147, "nimlexbase.nim");
		nimln(147, "nimlexbase.nim");
		if (!!((0 < buflen))) goto LA3;
		nimln(147, "nimlexbase.nim");
		hiddenraiseassert_77217(((NimStringDesc*) &TMP1641));	}	LA3: ;
	nimln(148, "nimlexbase.nim");
	(*l).Bufpos = 0;
	nimln(149, "nimlexbase.nim");
	(*l).Buflen = buflen;
	nimln(150, "nimlexbase.nim");
	nimln(150, "nimlexbase.nim");
	nimln(150, "nimlexbase.nim");
	TMP1642 = mulInt(buflen, 1);
	LOC5 = 0;
	LOC5 = alloc_4001((NI32)(TMP1642));
	(*l).Buf = ((NCSTRING) (LOC5));
	nimln(151, "nimlexbase.nim");
	nimln(151, "nimlexbase.nim");
	TMP1643 = subInt(buflen, 1);
	(*l).Sentinel = (NI32)(TMP1643);
	nimln(152, "nimlexbase.nim");
	(*l).Linestart = 0;
	nimln(153, "nimlexbase.nim");
	(*l).Linenumber = 1;
	nimln(154, "nimlexbase.nim");
	unsureAsgnRef((void**) &(*l).Stream, inputstream);
	nimln(155, "nimlexbase.nim");
	fillbuffer_164072(l);	nimln(156, "nimlexbase.nim");
	skiputf8bom_165413(l);	popFrame();
}
N_NIMCALL(NI, getcolnumber_164045)(tbaselexer164018* l, NI pos) {
	NI result;
	NI TMP1644;
	nimfr("getColNumber", "nimlexbase.nim")
	result = 0;
	nimln(159, "nimlexbase.nim");
	nimln(159, "nimlexbase.nim");
	nimln(159, "nimlexbase.nim");
	TMP1644 = subInt(pos, (*l).Linestart);
	if ((NI32)(TMP1644) == (-2147483647 -1)) raiseOverflow();
	result = (NI32)abs((NI32)(TMP1644));
	popFrame();
	return result;
}
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));	(*dest).Sup.len += (*src).Sup.len;
}
N_NIMCALL(NimStringDesc*, getcurrentline_164040)(tbaselexer164018* l, NIM_BOOL marker) {
	NimStringDesc* result;
	NI i;
	nimfr("getCurrentLine", "nimlexbase.nim")
	result = 0;
	nimln(162, "nimlexbase.nim");
	result = copyString(((NimStringDesc*) &TMP1645));
	nimln(163, "nimlexbase.nim");
	i = (*l).Linestart;
	nimln(164, "nimlexbase.nim");
	while (1) {
		nimln(164, "nimlexbase.nim");
		nimln(730, "system.nim");
		if (!!((((NU8)((*l).Buf[i])) == ((NU8)(13)) || ((NU8)((*l).Buf[i])) == ((NU8)(10)) || ((NU8)((*l).Buf[i])) == ((NU8)(0))))) goto LA1;
		nimln(165, "nimlexbase.nim");
		result = addChar(result, (*l).Buf[i]);
		nimln(166, "nimlexbase.nim");
		i = addInt(i, 1);
	} LA1: ;
	nimln(167, "nimlexbase.nim");
	result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TMP1646));
	nimln(168, "nimlexbase.nim");
	{
		NimStringDesc* LOC6;
		NI LOC7;
		NimStringDesc* LOC8;
		if (!marker) goto LA4;
		nimln(169, "nimlexbase.nim");
		nimln(169, "nimlexbase.nim");
		LOC6 = 0;
		nimln(169, "nimlexbase.nim");
		nimln(169, "nimlexbase.nim");
		LOC7 = 0;
		LOC7 = getcolnumber_164045(l, (*l).Bufpos);
		LOC8 = 0;
		LOC8 = nsuRepeatChar(LOC7, 32);
		LOC6 = rawNewString(LOC8->Sup.len + 3);
appendString(LOC6, LOC8);
appendString(LOC6, ((NimStringDesc*) &TMP1647));
		result = resizeString(result, LOC6->Sup.len + 0);
appendString(result, LOC6);
	}	LA4: ;
	popFrame();
	return result;
}N_NOINLINE(void, compilernimlexbaseInit)(void) {
	nimfr("nimlexbase", "nimlexbase.nim")
	popFrame();
}

N_NOINLINE(void, compilernimlexbaseDatInit)(void) {
static TNimNode* TMP1885[7];
static TNimNode TMP1591[8];
NTI164018.size = sizeof(tbaselexer164018);
NTI164018.kind = 17;
NTI164018.base = (&NTI1009);
NTI164018.flags = 2;
TMP1885[0] = &TMP1591[1];
TMP1591[1].kind = 1;
TMP1591[1].offset = offsetof(tbaselexer164018, Bufpos);
TMP1591[1].typ = (&NTI105);
TMP1591[1].name = "bufpos";
TMP1885[1] = &TMP1591[2];
TMP1591[2].kind = 1;
TMP1591[2].offset = offsetof(tbaselexer164018, Buf);
TMP1591[2].typ = (&NTI144);
TMP1591[2].name = "buf";
TMP1885[2] = &TMP1591[3];
TMP1591[3].kind = 1;
TMP1591[3].offset = offsetof(tbaselexer164018, Buflen);
TMP1591[3].typ = (&NTI105);
TMP1591[3].name = "bufLen";
TMP1885[3] = &TMP1591[4];
TMP1591[4].kind = 1;
TMP1591[4].offset = offsetof(tbaselexer164018, Stream);
TMP1591[4].typ = (&NTI163206);
TMP1591[4].name = "stream";
TMP1885[4] = &TMP1591[5];
TMP1591[5].kind = 1;
TMP1591[5].offset = offsetof(tbaselexer164018, Linenumber);
TMP1591[5].typ = (&NTI105);
TMP1591[5].name = "LineNumber";
TMP1885[5] = &TMP1591[6];
TMP1591[6].kind = 1;
TMP1591[6].offset = offsetof(tbaselexer164018, Sentinel);
TMP1591[6].typ = (&NTI105);
TMP1591[6].name = "sentinel";
TMP1885[6] = &TMP1591[7];
TMP1591[7].kind = 1;
TMP1591[7].offset = offsetof(tbaselexer164018, Linestart);
TMP1591[7].typ = (&NTI105);
TMP1591[7].name = "lineStart";
TMP1591[0].len = 7; TMP1591[0].kind = 2; TMP1591[0].sons = &TMP1885[0];
NTI164018.node = &TMP1591[0];
}

