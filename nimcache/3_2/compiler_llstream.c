/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <stdio.h>

#include <string.h>
typedef struct tllstream161204 tllstream161204;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tcell38848 tcell38848;
typedef struct tcellseq38864 tcellseq38864;
typedef struct tgcheap40816 tgcheap40816;
typedef struct tcellset38860 tcellset38860;
typedef struct tpagedesc38856 tpagedesc38856;
typedef struct tmemregion22210 tmemregion22210;
typedef struct tsmallchunk21438 tsmallchunk21438;
typedef struct tllchunk22204 tllchunk22204;
typedef struct tbigchunk21440 tbigchunk21440;
typedef struct tintset21415 tintset21415;
typedef struct ttrunk21411 ttrunk21411;
typedef struct tavlnode22208 tavlnode22208;
typedef struct tgcstat40814 tgcstat40814;
typedef struct tbasechunk21436 tbasechunk21436;
typedef struct tfreecell21428 tfreecell21428;
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
};
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
struct tllstream161204 {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tcell38848 {
NI Refcount;
TNimType* Typ;
};
struct tcellseq38864 {
NI Len;
NI Cap;
tcell38848** D;
};
struct tcellset38860 {
NI Counter;
NI Max;
tpagedesc38856* Head;
tpagedesc38856** Data;
};
typedef tsmallchunk21438* TY22222[512];
typedef ttrunk21411* ttrunkbuckets21413[256];
struct tintset21415 {
ttrunkbuckets21413 Data;
};
struct tmemregion22210 {
NI Minlargeobj;
NI Maxlargeobj;
TY22222 Freesmallchunks;
tllchunk22204* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk21440* Freechunkslist;
tintset21415 Chunkstarts;
tavlnode22208* Root;
tavlnode22208* Deleted;
tavlnode22208* Last;
tavlnode22208* Freeavlnodes;
};
struct tgcstat40814 {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct tgcheap40816 {
void* Stackbottom;
NI Cyclethreshold;
tcellseq38864 Zct;
tcellseq38864 Decstack;
tcellset38860 Cycleroots;
tcellseq38864 Tempstack;
NI Recgclock;
tmemregion22210 Region;
tgcstat40814 Stat;
};
typedef NU8 TY113118[32];
typedef NI TY21418[8];
struct tpagedesc38856 {
tpagedesc38856* Next;
NI Key;
TY21418 Bits;
};
struct tbasechunk21436 {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct tsmallchunk21438 {
  tbasechunk21436 Sup;
tsmallchunk21438* Next;
tsmallchunk21438* Prev;
tfreecell21428* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct tllchunk22204 {
NI Size;
NI Acc;
tllchunk22204* Next;
};
struct tbigchunk21440 {
  tbasechunk21436 Sup;
tbigchunk21440* Next;
tbigchunk21440* Prev;
NI Align;
NF Data;
};
struct ttrunk21411 {
ttrunk21411* Next;
NI Key;
TY21418 Bits;
};
typedef tavlnode22208* TY22214[2];
struct tavlnode22208 {
TY22214 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct tfreecell21428 {
tfreecell21428* Next;
NI Zerofield;
};
N_NIMCALL(tllstream161204*, llstreamopen_161218)(NimStringDesc* data);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP1597)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell38848*, usrtocell_42239)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdzct_43802)(tcell38848* c);
N_NOINLINE(void, addzct_42215)(tcellseq38864* s, tcell38848* c);
N_NIMCALL(tllstream161204*, llstreamopen_161222)(FILE** f);
N_NIMCALL(tllstream161204*, llstreamopen_161227)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(NIM_BOOL, open_9203)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(tllstream161204*, llstreamopen_161232)(void);
N_NIMCALL(tllstream161204*, llstreamopenstdin_161235)(void);
N_NIMCALL(void, llstreamclose_161238)(tllstream161204* s);
N_NIMCALL(NIM_BOOL, readlinefromstdin_161376)(NimStringDesc* prompt, NimStringDesc** line);
N_NIMCALL(void, write_9459)(FILE* f, NimStringDesc* s);
N_NIMCALL(NIM_BOOL, readline_9483)(FILE* f, NimStringDesc** line);
N_NIMCALL(NIM_BOOL, endswith_161402)(NimStringDesc* x, TY113118 s);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NIM_BOOL, endswithopr_161437)(NimStringDesc* x);
static N_INLINE(NIM_BOOL, continueline_161443)(NimStringDesc* line, NIM_BOOL intriplestring);
N_NIMCALL(NI, counttriples_161462)(NimStringDesc* s);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(NI, llreadfromstdin_161501)(tllstream161204* s, void* buf, NI buflen);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NI, llstreamread_161242)(tllstream161204* s, void* buf, NI buflen);
N_NIMCALL(NI, readbuffer_9514)(FILE* f, void* buffer, NI len);
N_NIMCALL(NIM_BOOL, llstreamreadline_161248)(tllstream161204* s, NimStringDesc** line);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(void, llstreamwrite_161258)(tllstream161204* s, NimStringDesc* data);
N_NIMCALL(void, llstreamwriteln_161274)(tllstream161204* s, NimStringDesc* data);
N_NIMCALL(void, llstreamwrite_161263)(tllstream161204* s, NIM_CHAR data);
N_NIMCALL(NI, writebuffer_9533)(FILE* f, void* buffer, NI len);
N_NIMCALL(void, llstreamwrite_161268)(tllstream161204* s, void* buf, NI buflen);
N_NIMCALL(NimStringDesc*, llstreamreadall_161254)(tllstream161204* s);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
STRING_LITERAL(TMP1598, "", 0);
NIM_CONST TY113118 linecontinuationoprs_161432 = {
0x00, 0x00, 0x00, 0x00, 0x72, 0xBC, 0x00, 0xD0,
0x01, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x50,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
NIM_CONST TY113118 additionallinecontinuationoprs_161434 = {
0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x24,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
static NIM_CONST TY113118 TMP1600 = {
0x00, 0x00, 0x00, 0x00, 0x72, 0xBC, 0x00, 0xD0,
0x01, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x50,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
static NIM_CONST TY113118 TMP1601 = {
0x00, 0x00, 0x00, 0x00, 0x7A, 0xBC, 0x00, 0xF4,
0x01, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x50,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP1604, ">>> ", 4);
STRING_LITERAL(TMP1605, "... ", 4);
STRING_LITERAL(TMP1606, "\012", 1);
extern TNimType NTI1009; /* TObject */
TNimType NTI161204; /* TLLStream */
TNimType NTI161202; /* TLLStreamKind */
extern TNimType NTI9004; /* TFile */
extern TNimType NTI142; /* string */
extern TNimType NTI105; /* int */
TNimType NTI161206; /* PLLStream */
extern TFrame* frameptr_12037;
extern tgcheap40816 gch_40844;
N_NIMCALL(void, TMP1597)(void* p, NI op) {
	tllstream161204* a;
	a = (tllstream161204*)p;
	nimGCvisit((void*)(*a).S, op);
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12037;
	frameptr_12037 = s;
}
static N_INLINE(void, popFrame)(void) {
	frameptr_12037 = (*frameptr_12037).prev;
}
static N_INLINE(tcell38848*, usrtocell_42239)(void* usr) {
	tcell38848* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(116, "gc.nim");
	nimln(116, "gc.nim");
	nimln(116, "gc.nim");
	result = ((tcell38848*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell38848))))));
	popFrame();
	return result;
}
static N_INLINE(void, rtladdzct_43802)(tcell38848* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(197, "gc.nim");
	addzct_42215(&gch_40844.Zct, c);	popFrame();
}
static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell38848* c;
	nimfr("nimGCunrefNoCycle", "gc.nim")
	nimln(231, "gc.nim");
	c = usrtocell_42239(p);
	nimln(233, "gc.nim");
	{
		nimln(165, "gc.nim");
		(*c).Refcount -= 8;
		nimln(166, "gc.nim");
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		nimln(234, "gc.nim");
		rtladdzct_43802(c);	}	LA3: ;
	popFrame();
}
N_NIMCALL(tllstream161204*, llstreamopen_161218)(NimStringDesc* data) {
	tllstream161204* result;
	NimStringDesc* LOC1;
	nimfr("LLStreamOpen", "llstream.nim")
	result = 0;
	nimln(49, "llstream.nim");
	result = (tllstream161204*) newObj((&NTI161206), sizeof(tllstream161204));
	(*result).Sup.m_type = (&NTI161204);
	nimln(50, "llstream.nim");
	LOC1 = 0;
	LOC1 = (*result).S; (*result).S = copyStringRC1(data);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	nimln(51, "llstream.nim");
	(*result).Kind = ((NU8) 1);
	popFrame();
	return result;
}
N_NIMCALL(tllstream161204*, llstreamopen_161222)(FILE** f) {
	tllstream161204* result;
	nimfr("LLStreamOpen", "llstream.nim")
	result = 0;
	nimln(54, "llstream.nim");
	result = (tllstream161204*) newObj((&NTI161206), sizeof(tllstream161204));
	(*result).Sup.m_type = (&NTI161204);
	nimln(55, "llstream.nim");
	(*result).F = (*f);
	nimln(56, "llstream.nim");
	(*result).Kind = ((NU8) 2);
	popFrame();
	return result;
}
N_NIMCALL(tllstream161204*, llstreamopen_161227)(NimStringDesc* filename, NU8 mode) {
	tllstream161204* result;
	nimfr("LLStreamOpen", "llstream.nim")
	result = 0;
	nimln(59, "llstream.nim");
	result = (tllstream161204*) newObj((&NTI161206), sizeof(tllstream161204));
	(*result).Sup.m_type = (&NTI161204);
	nimln(60, "llstream.nim");
	(*result).Kind = ((NU8) 2);
	nimln(61, "llstream.nim");
	{
		NIM_BOOL LOC3;
		nimln(61, "llstream.nim");
		nimln(61, "llstream.nim");
		LOC3 = 0;
		LOC3 = open_9203(&(*result).F, filename, mode, -1);
		if (!!(LOC3)) goto LA4;
		nimln(61, "llstream.nim");
		result = NIM_NIL;
	}	LA4: ;
	popFrame();
	return result;
}
N_NIMCALL(tllstream161204*, llstreamopen_161232)(void) {
	tllstream161204* result;
	nimfr("LLStreamOpen", "llstream.nim")
	result = 0;
	nimln(64, "llstream.nim");
	result = (tllstream161204*) newObj((&NTI161206), sizeof(tllstream161204));
	(*result).Sup.m_type = (&NTI161204);
	nimln(65, "llstream.nim");
	(*result).Kind = ((NU8) 0);
	popFrame();
	return result;
}
N_NIMCALL(tllstream161204*, llstreamopenstdin_161235)(void) {
	tllstream161204* result;
	NimStringDesc* LOC1;
	nimfr("LLStreamOpenStdIn", "llstream.nim")
	result = 0;
	nimln(68, "llstream.nim");
	result = (tllstream161204*) newObj((&NTI161206), sizeof(tllstream161204));
	(*result).Sup.m_type = (&NTI161204);
	nimln(69, "llstream.nim");
	(*result).Kind = ((NU8) 3);
	nimln(70, "llstream.nim");
	LOC1 = 0;
	LOC1 = (*result).S; (*result).S = copyStringRC1(((NimStringDesc*) &TMP1598));
	if (LOC1) nimGCunrefNoCycle(LOC1);
	nimln(71, "llstream.nim");
	(*result).Lineoffset = -1;
	popFrame();
	return result;
}
N_NIMCALL(void, llstreamclose_161238)(tllstream161204* s) {
	nimfr("LLStreamClose", "llstream.nim")
	nimln(74, "llstream.nim");
	switch ((*s).Kind) {
	case ((NU8) 0):
	case ((NU8) 1):
	case ((NU8) 3):
	{
	}	break;
	case ((NU8) 2):
	{
		nimln(78, "llstream.nim");
		fclose((*s).F);	}	break;
	}
	popFrame();
}
N_NIMCALL(NIM_BOOL, readlinefromstdin_161376)(NimStringDesc* prompt, NimStringDesc** line) {
	NIM_BOOL result;
	nimfr("ReadLineFromStdin", "llstream.nim")
	result = 0;
	nimln(83, "llstream.nim");
	write_9459(stdout, prompt);	nimln(84, "llstream.nim");
	result = readline_9483(stdin, line);
	popFrame();
	return result;
}
static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ (NI)((NU64) ~(b))));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}	LA5: ;
	raiseOverflow();	BeforeRet: ;	return result;
}
N_NIMCALL(NIM_BOOL, endswith_161402)(NimStringDesc* x, TY113118 s) {
	NIM_BOOL result;
	NI i;
	NI TMP1599;
	nimfr("endsWith", "llstream.nim")
	result = 0;
	nimln(87, "llstream.nim");
	nimln(87, "llstream.nim");
	nimln(87, "llstream.nim");
	TMP1599 = subInt(x->Sup.len, 1);
	i = (NI64)(TMP1599);
	nimln(88, "llstream.nim");
	while (1) {
		NIM_BOOL LOC2;
		nimln(88, "llstream.nim");
		LOC2 = 0;
		nimln(702, "system.nim");
		LOC2 = (0 <= i);
		if (!(LOC2)) goto LA3;
		nimln(88, "llstream.nim");
		if ((NU)(i) > (NU)(x->Sup.len)) raiseIndexError();
		LOC2 = ((NU8)(x->data[i]) == (NU8)(32));
		LA3: ;
		if (!LOC2) goto LA1;
		nimln(88, "llstream.nim");
		i = subInt(i, 1);
	} LA1: ;
	nimln(89, "llstream.nim");
	{
		NIM_BOOL LOC6;
		nimln(89, "llstream.nim");
		LOC6 = 0;
		nimln(702, "system.nim");
		LOC6 = (0 <= i);
		if (!(LOC6)) goto LA7;
		nimln(730, "system.nim");
		if ((NU)(i) > (NU)(x->Sup.len)) raiseIndexError();
		LOC6 = ((s[((NU8)(x->data[i]))/8] &(1<<(((NU8)(x->data[i]))%8)))!=0);
		LA7: ;
		if (!LOC6) goto LA8;
		nimln(90, "llstream.nim");
		result = NIM_TRUE;
	}	LA8: ;
	popFrame();
	return result;
}
N_NIMCALL(NIM_BOOL, endswithopr_161437)(NimStringDesc* x) {
	NIM_BOOL result;
	nimfr("endsWithOpr", "llstream.nim")
	result = 0;
	nimln(99, "llstream.nim");
	result = endswith_161402(x, TMP1600);
	popFrame();
	return result;
}
static N_INLINE(NIM_BOOL, continueline_161443)(NimStringDesc* line, NIM_BOOL intriplestring) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	NIM_BOOL LOC2;
	nimfr("continueLine", "llstream.nim")
	result = 0;
	nimln(102, "llstream.nim");
	nimln(103, "llstream.nim");
	LOC1 = 0;
	nimln(102, "llstream.nim");
	LOC2 = 0;
	LOC2 = intriplestring;
	if (LOC2) goto LA3;
	nimln(103, "llstream.nim");
	if ((NU)(0) > (NU)(line->Sup.len)) raiseIndexError();
	LOC2 = ((NU8)(line->data[0]) == (NU8)(32));
	LA3: ;
	LOC1 = LOC2;
	if (LOC1) goto LA4;
	nimln(104, "llstream.nim");
	LOC1 = endswith_161402(line, TMP1601);
	LA4: ;
	result = LOC1;
	popFrame();
	return result;
}
static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU64)(a) + (NU64)(b));
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
N_NIMCALL(NI, counttriples_161462)(NimStringDesc* s) {
	NI result;
	NI i;
	nimfr("countTriples", "llstream.nim")
	result = 0;
	nimln(107, "llstream.nim");
	i = 0;
	nimln(108, "llstream.nim");
	while (1) {
		nimln(108, "llstream.nim");
		nimln(108, "llstream.nim");
		if (!(i < s->Sup.len)) goto LA1;
		nimln(109, "llstream.nim");
		{
			NIM_BOOL LOC4;
			NIM_BOOL LOC5;
			NI TMP1602;
			NI TMP1603;
			nimln(109, "llstream.nim");
			LOC4 = 0;
			nimln(109, "llstream.nim");
			LOC5 = 0;
			nimln(109, "llstream.nim");
			if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
			LOC5 = ((NU8)(s->data[i]) == (NU8)(34));
			if (!(LOC5)) goto LA6;
			nimln(109, "llstream.nim");
			nimln(109, "llstream.nim");
			TMP1602 = addInt(i, 1);
			if ((NU)((NI64)(TMP1602)) > (NU)(s->Sup.len)) raiseIndexError();
			LOC5 = ((NU8)(s->data[(NI64)(TMP1602)]) == (NU8)(34));
			LA6: ;
			LOC4 = LOC5;
			if (!(LOC4)) goto LA7;
			nimln(109, "llstream.nim");
			nimln(109, "llstream.nim");
			TMP1603 = addInt(i, 2);
			if ((NU)((NI64)(TMP1603)) > (NU)(s->Sup.len)) raiseIndexError();
			LOC4 = ((NU8)(s->data[(NI64)(TMP1603)]) == (NU8)(34));
			LA7: ;
			if (!LOC4) goto LA8;
			nimln(110, "llstream.nim");
			result = addInt(result, 1);
			nimln(111, "llstream.nim");
			i = addInt(i, 2);
		}		LA8: ;
		nimln(112, "llstream.nim");
		i = addInt(i, 1);
	} LA1: ;
	popFrame();
	return result;
}
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));	(*dest).Sup.len += (*src).Sup.len;
}
N_NIMCALL(NI, llreadfromstdin_161501)(tllstream161204* s, void* buf, NI buflen) {
	NI result;
	NimStringDesc* LOC1;
	NimStringDesc* line;
	NI triples;
	NI TMP1607;
	nimfr("LLreadFromStdin", "llstream.nim")
	result = 0;
	nimln(115, "llstream.nim");
	LOC1 = 0;
	LOC1 = (*s).S; (*s).S = copyStringRC1(((NimStringDesc*) &TMP1598));
	if (LOC1) nimGCunrefNoCycle(LOC1);
	nimln(116, "llstream.nim");
	(*s).Rd = 0;
	nimln(117, "llstream.nim");
	nimln(117, "llstream.nim");
	line = rawNewString(120);
	nimln(118, "llstream.nim");
	triples = 0;
	nimln(119, "llstream.nim");
	while (1) {
		NimStringDesc* LOC3;
		NIM_BOOL LOC9;
		NI LOC10;
		nimln(119, "llstream.nim");
		LOC3 = 0;
		nimln(119, "llstream.nim");
		{
			nimln(119, "llstream.nim");
			nimln(119, "llstream.nim");
			if (!((*s).S->Sup.len == 0)) goto LA6;
			LOC3 = copyString(((NimStringDesc*) &TMP1604));
		}		goto LA4;
		LA6: ;
		{
			LOC3 = copyString(((NimStringDesc*) &TMP1605));
		}		LA4: ;
		LOC9 = 0;
		LOC9 = readlinefromstdin_161376(LOC3, &line);
		if (!LOC9) goto LA2;
		nimln(120, "llstream.nim");
		(*s).S = resizeString((*s).S, line->Sup.len + 0);
appendString((*s).S, line);
		nimln(121, "llstream.nim");
		(*s).S = resizeString((*s).S, 1);
appendString((*s).S, ((NimStringDesc*) &TMP1606));
		nimln(122, "llstream.nim");
		nimln(122, "llstream.nim");
		LOC10 = 0;
		LOC10 = counttriples_161462(line);
		triples = addInt(triples, LOC10);
		nimln(123, "llstream.nim");
		{
			NIM_BOOL LOC13;
			nimln(123, "llstream.nim");
			nimln(123, "llstream.nim");
			nimln(123, "llstream.nim");
			nimln(123, "llstream.nim");
			LOC13 = 0;
			LOC13 = continueline_161443(line, (((NI) ((NI)(triples & 1))) == 1));
			if (!!(LOC13)) goto LA14;
			nimln(123, "llstream.nim");
			goto LA2;
		}		LA14: ;
	} LA2: ;
	nimln(124, "llstream.nim");
	(*s).Lineoffset = addInt((*s).Lineoffset, 1);
	nimln(125, "llstream.nim");
	nimln(125, "llstream.nim");
	nimln(125, "llstream.nim");
	nimln(125, "llstream.nim");
	TMP1607 = subInt((*s).S->Sup.len, (*s).Rd);
	result = ((buflen <= (NI64)(TMP1607)) ? buflen : (NI64)(TMP1607));
	nimln(126, "llstream.nim");
	{
		nimln(706, "system.nim");
		if (!(0 < result)) goto LA18;
		nimln(127, "llstream.nim");
		if ((NU)((*s).Rd) > (NU)((*s).S->Sup.len)) raiseIndexError();
		memcpy(buf, ((void*) (&(*s).S->data[(*s).Rd])), result);		nimln(128, "llstream.nim");
		(*s).Rd = addInt((*s).Rd, result);
	}	LA18: ;
	popFrame();
	return result;
}
N_NIMCALL(NI, llstreamread_161242)(tllstream161204* s, void* buf, NI buflen) {
	NI result;
	nimfr("LLStreamRead", "llstream.nim")
	result = 0;
	nimln(131, "llstream.nim");
	switch ((*s).Kind) {
	case ((NU8) 0):
	{
		nimln(133, "llstream.nim");
		result = 0;
	}	break;
	case ((NU8) 1):
	{
		NI TMP1608;
		nimln(135, "llstream.nim");
		nimln(135, "llstream.nim");
		nimln(135, "llstream.nim");
		nimln(135, "llstream.nim");
		TMP1608 = subInt((*s).S->Sup.len, (*s).Rd);
		result = ((buflen <= (NI64)(TMP1608)) ? buflen : (NI64)(TMP1608));
		nimln(136, "llstream.nim");
		{
			NI TMP1609;
			nimln(706, "system.nim");
			if (!(0 < result)) goto LA5;
			nimln(137, "llstream.nim");
			nimln(137, "llstream.nim");
			TMP1609 = addInt(0, (*s).Rd);
			if ((NU)((NI64)(TMP1609)) > (NU)((*s).S->Sup.len)) raiseIndexError();
			memcpy(buf, ((void*) (&(*s).S->data[(NI64)(TMP1609)])), result);			nimln(138, "llstream.nim");
			(*s).Rd = addInt((*s).Rd, result);
		}		LA5: ;
	}	break;
	case ((NU8) 2):
	{
		nimln(140, "llstream.nim");
		result = readbuffer_9514((*s).F, buf, buflen);
	}	break;
	case ((NU8) 3):
	{
		nimln(142, "llstream.nim");
		result = llreadfromstdin_161501(s, buf, buflen);
	}	break;
	}
	popFrame();
	return result;
}
N_NIMCALL(NIM_BOOL, llstreamreadline_161248)(tllstream161204* s, NimStringDesc** line) {
	NIM_BOOL result;
	nimfr("LLStreamReadLine", "llstream.nim")
	result = 0;
	nimln(145, "llstream.nim");
	(*line) = setLengthStr((*line), 0);
	nimln(146, "llstream.nim");
	switch ((*s).Kind) {
	case ((NU8) 0):
	{
		nimln(148, "llstream.nim");
		result = NIM_TRUE;
	}	break;
	case ((NU8) 1):
	{
		NIM_BOOL LOC11;
		nimln(150, "llstream.nim");
		while (1) {
			nimln(150, "llstream.nim");
			nimln(150, "llstream.nim");
			if (!((*s).Rd < (*s).S->Sup.len)) goto LA3;
			nimln(151, "llstream.nim");
			if ((NU)((*s).Rd) > (NU)((*s).S->Sup.len)) raiseIndexError();
			switch (((NU8)((*s).S->data[(*s).Rd]))) {
			case 13:
			{
				nimln(153, "llstream.nim");
				(*s).Rd = addInt((*s).Rd, 1);
				nimln(154, "llstream.nim");
				{
					nimln(154, "llstream.nim");
					if ((NU)((*s).Rd) > (NU)((*s).S->Sup.len)) raiseIndexError();
					if (!((NU8)((*s).S->data[(*s).Rd]) == (NU8)(10))) goto LA7;
					nimln(154, "llstream.nim");
					(*s).Rd = addInt((*s).Rd, 1);
				}				LA7: ;
				nimln(155, "llstream.nim");
				goto LA3;
			}			break;
			case 10:
			{
				nimln(157, "llstream.nim");
				(*s).Rd = addInt((*s).Rd, 1);
				nimln(158, "llstream.nim");
				goto LA3;
			}			break;
			default:
			{
				nimln(160, "llstream.nim");
				if ((NU)((*s).Rd) > (NU)((*s).S->Sup.len)) raiseIndexError();
				(*line) = addChar((*line), (*s).S->data[(*s).Rd]);
				nimln(161, "llstream.nim");
				(*s).Rd = addInt((*s).Rd, 1);
			}			break;
			}
		} LA3: ;
		nimln(162, "llstream.nim");
		nimln(162, "llstream.nim");
		LOC11 = 0;
		nimln(706, "system.nim");
		nimln(162, "llstream.nim");
		LOC11 = (0 < (*line)->Sup.len);
		if (LOC11) goto LA12;
		nimln(162, "llstream.nim");
		nimln(162, "llstream.nim");
		LOC11 = ((*s).Rd < (*s).S->Sup.len);
		LA12: ;
		result = LOC11;
	}	break;
	case ((NU8) 2):
	{
		nimln(164, "llstream.nim");
		result = readline_9483((*s).F, line);
	}	break;
	case ((NU8) 3):
	{
		nimln(166, "llstream.nim");
		result = readline_9483(stdin, line);
	}	break;
	}
	popFrame();
	return result;
}
N_NIMCALL(void, llstreamwrite_161258)(tllstream161204* s, NimStringDesc* data) {
	nimfr("LLStreamWrite", "llstream.nim")
	nimln(169, "llstream.nim");
	switch ((*s).Kind) {
	case ((NU8) 0):
	case ((NU8) 3):
	{
	}	break;
	case ((NU8) 1):
	{
		nimln(173, "llstream.nim");
		(*s).S = resizeString((*s).S, data->Sup.len + 0);
appendString((*s).S, data);
		nimln(174, "llstream.nim");
		nimln(174, "llstream.nim");
		(*s).Wr = addInt((*s).Wr, data->Sup.len);
	}	break;
	case ((NU8) 2):
	{
		nimln(176, "llstream.nim");
		write_9459((*s).F, data);	}	break;
	}
	popFrame();
}
N_NIMCALL(void, llstreamwriteln_161274)(tllstream161204* s, NimStringDesc* data) {
	nimfr("LLStreamWriteln", "llstream.nim")
	nimln(179, "llstream.nim");
	llstreamwrite_161258(s, data);	nimln(180, "llstream.nim");
	llstreamwrite_161258(s, ((NimStringDesc*) &TMP1606));	popFrame();
}
N_NIMCALL(void, llstreamwrite_161263)(tllstream161204* s, NIM_CHAR data) {
	NIM_CHAR c;
	nimfr("LLStreamWrite", "llstream.nim")
	c = 0;
	nimln(184, "llstream.nim");
	switch ((*s).Kind) {
	case ((NU8) 0):
	case ((NU8) 3):
	{
	}	break;
	case ((NU8) 1):
	{
		nimln(188, "llstream.nim");
		(*s).S = addChar((*s).S, data);
		nimln(189, "llstream.nim");
		(*s).Wr = addInt((*s).Wr, 1);
	}	break;
	case ((NU8) 2):
	{
		NI LOC4;
		nimln(191, "llstream.nim");
		c = data;
		nimln(192, "llstream.nim");
		nimln(192, "llstream.nim");
		LOC4 = 0;
		LOC4 = writebuffer_9533((*s).F, ((void*) (&c)), 1);
	}	break;
	}
	popFrame();
}
N_NIMCALL(void, llstreamwrite_161268)(tllstream161204* s, void* buf, NI buflen) {
	nimfr("LLStreamWrite", "llstream.nim")
	nimln(195, "llstream.nim");
	switch ((*s).Kind) {
	case ((NU8) 0):
	case ((NU8) 3):
	{
	}	break;
	case ((NU8) 1):
	{
		nimln(199, "llstream.nim");
		{
			NI TMP1610;
			NI TMP1611;
			nimln(706, "system.nim");
			if (!(0 < buflen)) goto LA5;
			nimln(200, "llstream.nim");
			nimln(200, "llstream.nim");
			nimln(200, "llstream.nim");
			TMP1610 = addInt((*s).S->Sup.len, buflen);
			(*s).S = setLengthStr((*s).S, (NI64)(TMP1610));
			nimln(201, "llstream.nim");
			nimln(201, "llstream.nim");
			TMP1611 = addInt(0, (*s).Wr);
			if ((NU)((NI64)(TMP1611)) > (NU)((*s).S->Sup.len)) raiseIndexError();
			memcpy(((void*) (&(*s).S->data[(NI64)(TMP1611)])), buf, buflen);			nimln(202, "llstream.nim");
			(*s).Wr = addInt((*s).Wr, buflen);
		}		LA5: ;
	}	break;
	case ((NU8) 2):
	{
		NI LOC8;
		nimln(204, "llstream.nim");
		nimln(204, "llstream.nim");
		LOC8 = 0;
		LOC8 = writebuffer_9533((*s).F, buf, buflen);
	}	break;
	}
	popFrame();
}
N_NIMCALL(NimStringDesc*, llstreamreadall_161254)(tllstream161204* s) {
	NimStringDesc* result;
	NI bytes;
	NI i;
	nimfr("LLStreamReadAll", "llstream.nim")
	result = 0;
	bytes = 0;
	i = 0;
	nimln(210, "llstream.nim");
	switch ((*s).Kind) {
	case ((NU8) 0):
	case ((NU8) 3):
	{
		nimln(212, "llstream.nim");
		result = copyString(((NimStringDesc*) &TMP1598));
	}	break;
	case ((NU8) 1):
	{
		nimln(214, "llstream.nim");
		{
			nimln(214, "llstream.nim");
			if (!((*s).Rd == 0)) goto LA5;
			nimln(214, "llstream.nim");
			result = copyString((*s).S);
		}		goto LA3;
		LA5: ;
		{
			nimln(215, "llstream.nim");
			nimln(215, "llstream.nim");
			result = copyStr((*s).S, (*s).Rd);
		}		LA3: ;
		nimln(216, "llstream.nim");
		nimln(216, "llstream.nim");
		(*s).Rd = (*s).S->Sup.len;
	}	break;
	case ((NU8) 2):
	{
		nimln(218, "llstream.nim");
		nimln(218, "llstream.nim");
		result = mnewString(2048);
		nimln(219, "llstream.nim");
		if ((NU)(0) > (NU)(result->Sup.len)) raiseIndexError();
		bytes = readbuffer_9514((*s).F, ((void*) (&result->data[0])), 2048);
		nimln(220, "llstream.nim");
		i = bytes;
		nimln(221, "llstream.nim");
		while (1) {
			NI TMP1612;
			NI TMP1613;
			nimln(221, "llstream.nim");
			if (!(bytes == 2048)) goto LA9;
			nimln(222, "llstream.nim");
			nimln(222, "llstream.nim");
			TMP1612 = addInt(i, 2048);
			result = setLengthStr(result, (NI64)(TMP1612));
			nimln(223, "llstream.nim");
			nimln(223, "llstream.nim");
			TMP1613 = addInt(i, 0);
			if ((NU)((NI64)(TMP1613)) > (NU)(result->Sup.len)) raiseIndexError();
			bytes = readbuffer_9514((*s).F, ((void*) (&result->data[(NI64)(TMP1613)])), 2048);
			nimln(224, "llstream.nim");
			i = addInt(i, bytes);
		} LA9: ;
		nimln(225, "llstream.nim");
		result = setLengthStr(result, i);
	}	break;
	}
	popFrame();
	return result;
}N_NOINLINE(void, compilerllstreamInit)(void) {
	nimfr("llstream", "llstream.nim")
	popFrame();
}

N_NOINLINE(void, compilerllstreamDatInit)(void) {
static TNimNode* TMP1593[6];
static TNimNode* TMP1594[4];
NI TMP1596;
static char* NIM_CONST TMP1595[4] = {
"llsNone", 
"llsString", 
"llsFile", 
"llsStdIn"};
static TNimNode TMP1591[12];
NTI161204.size = sizeof(tllstream161204);
NTI161204.kind = 17;
NTI161204.base = (&NTI1009);
NTI161204.flags = 2;
TMP1593[0] = &TMP1591[1];
NTI161202.size = sizeof(NU8);
NTI161202.kind = 14;
NTI161202.base = 0;
NTI161202.flags = 3;
for (TMP1596 = 0; TMP1596 < 4; TMP1596++) {
TMP1591[TMP1596+2].kind = 1;
TMP1591[TMP1596+2].offset = TMP1596;
TMP1591[TMP1596+2].name = TMP1595[TMP1596];
TMP1594[TMP1596] = &TMP1591[TMP1596+2];
}
TMP1591[6].len = 4; TMP1591[6].kind = 2; TMP1591[6].sons = &TMP1594[0];
NTI161202.node = &TMP1591[6];
TMP1591[1].kind = 1;
TMP1591[1].offset = offsetof(tllstream161204, Kind);
TMP1591[1].typ = (&NTI161202);
TMP1591[1].name = "kind";
TMP1593[1] = &TMP1591[7];
TMP1591[7].kind = 1;
TMP1591[7].offset = offsetof(tllstream161204, F);
TMP1591[7].typ = (&NTI9004);
TMP1591[7].name = "f";
TMP1593[2] = &TMP1591[8];
TMP1591[8].kind = 1;
TMP1591[8].offset = offsetof(tllstream161204, S);
TMP1591[8].typ = (&NTI142);
TMP1591[8].name = "s";
TMP1593[3] = &TMP1591[9];
TMP1591[9].kind = 1;
TMP1591[9].offset = offsetof(tllstream161204, Rd);
TMP1591[9].typ = (&NTI105);
TMP1591[9].name = "rd";
TMP1593[4] = &TMP1591[10];
TMP1591[10].kind = 1;
TMP1591[10].offset = offsetof(tllstream161204, Wr);
TMP1591[10].typ = (&NTI105);
TMP1591[10].name = "wr";
TMP1593[5] = &TMP1591[11];
TMP1591[11].kind = 1;
TMP1591[11].offset = offsetof(tllstream161204, Lineoffset);
TMP1591[11].typ = (&NTI105);
TMP1591[11].name = "lineOffset";
TMP1591[0].len = 6; TMP1591[0].kind = 2; TMP1591[0].sons = &TMP1593[0];
NTI161204.node = &TMP1591[0];
NTI161206.size = sizeof(tllstream161204*);
NTI161206.kind = 22;
NTI161206.base = (&NTI161204);
NTI161206.flags = 2;
NTI161206.marker = TMP1597;
}

