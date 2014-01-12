/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct trstnode279018 trstnode279018;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY279093 TY279093;
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
typedef struct trendercontext279198 trendercontext279198;
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
struct trstnode279018 {
NU8 Kind;
NimStringDesc* Text;
NI Level;
TY279093* Sons;
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
typedef NIM_CHAR TY279242[9];
struct trendercontext279198 {
NI Indent;
NI Verbatim;
};
typedef NI TY21418[16];
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
struct TY279093 {
  TGenericSeq Sup;
  trstnode279018* data[SEQ_DECL_SIZE];
};
N_NIMCALL(NI, len_279089)(trstnode279018* n);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(trstnode279018*, newrstnode_279103)(NU8 kind);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP3865)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell38848*, usrtocell_42239)(void* usr);
static N_INLINE(void, rtladdzct_43802)(tcell38848* c);
N_NOINLINE(void, addzct_42215)(tcellseq38864* s, tcell38848* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(trstnode279018*, newrstnode_279138)(NU8 kind, NimStringDesc* s);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(trstnode279018*, lastson_279145)(trstnode279018* n);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(void, add_279159)(trstnode279018* father, trstnode279018* son);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, addifnotnil_279179)(trstnode279018* father, trstnode279018* son);
N_NIMCALL(void, renderrstsons_279210)(trendercontext279198* d, trstnode279018* n, NimStringDesc** result);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(void, renderrsttorst_279202)(trendercontext279198* d, trstnode279018* n, NimStringDesc** result);
N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NI count, NIM_CHAR c);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, reprEnum)(NI e_72477, TNimType* typ);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, renderrsttorst_279445)(trstnode279018* n, NimStringDesc** result);
NIM_CONST TY279242 lvltochar_279241 = {33,
61,
45,
126,
96,
60,
42,
124,
43}
;
STRING_LITERAL(TMP3868, "\012", 1);
STRING_LITERAL(TMP3870, "", 0);
STRING_LITERAL(TMP3872, "\012\012", 2);
STRING_LITERAL(TMP3874, "* ", 2);
STRING_LITERAL(TMP3875, "(#) ", 4);
STRING_LITERAL(TMP3876, "  ", 2);
STRING_LITERAL(TMP3880, "| ", 2);
STRING_LITERAL(TMP3881, "`", 1);
STRING_LITERAL(TMP3882, "`_", 2);
STRING_LITERAL(TMP3883, " <", 2);
STRING_LITERAL(TMP3884, ">`_", 3);
STRING_LITERAL(TMP3885, "`:", 2);
STRING_LITERAL(TMP3886, "`:sub:", 6);
STRING_LITERAL(TMP3887, "`:sup:", 6);
STRING_LITERAL(TMP3888, "`:idx:", 6);
STRING_LITERAL(TMP3889, "*", 1);
STRING_LITERAL(TMP3890, "**", 2);
STRING_LITERAL(TMP3891, "***", 3);
STRING_LITERAL(TMP3892, "``", 2);
STRING_LITERAL(TMP3893, "\\", 1);
STRING_LITERAL(TMP3894, "\\\\", 2);
STRING_LITERAL(TMP3895, ".. index::\012", 11);
STRING_LITERAL(TMP3896, ".. contents::", 13);
STRING_LITERAL(TMP3897, "Error: cannot render: ", 22);
extern TFrame* frameptr_12037;
TNimType NTI279018; /* TRSTNode */
TNimType NTI279012; /* TRstNodeKind */
extern TNimType NTI142; /* string */
extern TNimType NTI105; /* int */
extern TNimType NTI279093; /* seq[PRSTNode] */
TNimType NTI279014; /* PRSTNode */
extern tgcheap40816 gch_40844;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12037;
	frameptr_12037 = s;
}
static N_INLINE(void, popFrame)(void) {
	frameptr_12037 = (*frameptr_12037).prev;
}
N_NIMCALL(NI, len_279089)(trstnode279018* n) {
	NI result;
	nimfr("len", "rstast.nim")
	result = 0;
	nimln(75, "rstast.nim");
	nimln(75, "rstast.nim");
	result = (*n).Sons->Sup.len;
	popFrame();
	return result;
}N_NIMCALL(void, TMP3865)(void* p, NI op) {
	trstnode279018* a;
	a = (trstnode279018*)p;
	nimGCvisit((void*)(*a).Text, op);
	nimGCvisit((void*)(*a).Sons, op);
}

static N_INLINE(tcell38848*, usrtocell_42239)(void* usr) {
	tcell38848* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(116, "gc.nim");
	nimln(116, "gc.nim");
	nimln(116, "gc.nim");
	result = ((tcell38848*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell38848))))));
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
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
		nimln(234, "gc.nim");
		rtladdzct_43802(c);	}	LA3: ;
	popFrame();
}
N_NIMCALL(trstnode279018*, newrstnode_279103)(NU8 kind) {
	trstnode279018* result;
	nimfr("newRstNode", "rstast.nim")
	result = 0;
	nimln(78, "rstast.nim");
	result = (trstnode279018*) newObj((&NTI279014), sizeof(trstnode279018));
	nimln(79, "rstast.nim");
	if ((*result).Sons) nimGCunrefNoCycle((*result).Sons);
	(*result).Sons = (TY279093*) newSeqRC1((&NTI279093), 0);
	nimln(80, "rstast.nim");
	(*result).Kind = kind;
	popFrame();
	return result;
}
N_NIMCALL(trstnode279018*, newrstnode_279138)(NU8 kind, NimStringDesc* s) {
	trstnode279018* result;
	NimStringDesc* LOC1;
	nimfr("newRstNode", "rstast.nim")
	result = 0;
	nimln(83, "rstast.nim");
	result = newrstnode_279103(kind);
	nimln(84, "rstast.nim");
	LOC1 = 0;
	LOC1 = (*result).Text; (*result).Text = copyStringRC1(s);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	popFrame();
	return result;
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
N_NIMCALL(trstnode279018*, lastson_279145)(trstnode279018* n) {
	trstnode279018* result;
	NI TMP3866;
	nimfr("lastSon", "rstast.nim")
	result = 0;
	nimln(87, "rstast.nim");
	nimln(87, "rstast.nim");
	nimln(87, "rstast.nim");
	TMP3866 = subInt((*n).Sons->Sup.len, 1);
	if ((NU)((NI32)(TMP3866)) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
	result = (*n).Sons->data[(NI32)(TMP3866)];
	popFrame();
	return result;
}
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr("asgnRefNoCycle", "gc.nim")
	nimln(249, "gc.nim");
	{
		tcell38848* c;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(250, "gc.nim");
		c = usrtocell_42239(src);
		nimln(167, "gc.nim");
		(*c).Refcount += 8;
	}	LA3: ;
	nimln(252, "gc.nim");
	{
		tcell38848* c;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		nimln(253, "gc.nim");
		c = usrtocell_42239((*dest));
		nimln(254, "gc.nim");
		{
			nimln(165, "gc.nim");
			(*c).Refcount -= 8;
			nimln(166, "gc.nim");
			if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA11;
			nimln(255, "gc.nim");
			rtladdzct_43802(c);		}		LA11: ;
	}	LA7: ;
	nimln(256, "gc.nim");
	(*dest) = src;
	popFrame();
}
N_NIMCALL(void, add_279159)(trstnode279018* father, trstnode279018* son) {
	nimfr("add", "rstast.nim")
	nimln(90, "rstast.nim");
	(*father).Sons = (TY279093*) incrSeq(&((*father).Sons)->Sup, sizeof(trstnode279018*));
	asgnRefNoCycle((void**) &(*father).Sons->data[(*father).Sons->Sup.len-1], son);
	popFrame();
}
N_NIMCALL(void, addifnotnil_279179)(trstnode279018* father, trstnode279018* son) {
	nimfr("addIfNotNil", "rstast.nim")
	nimln(93, "rstast.nim");
	{
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!((son == NIM_NIL))) goto LA3;
		nimln(93, "rstast.nim");
		add_279159(father, son);	}	LA3: ;
	popFrame();
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
N_NIMCALL(void, renderrstsons_279210)(trendercontext279198* d, trstnode279018* n, NimStringDesc** result) {
	NI i_279226;
	NI HEX3Atmp_279227;
	NI LOC1;
	NI TMP3867;
	NI res_279229;
	nimfr("renderRstSons", "rstast.nim")
	i_279226 = 0;
	HEX3Atmp_279227 = 0;
	nimln(104, "rstast.nim");
	nimln(104, "rstast.nim");
	nimln(104, "rstast.nim");
	LOC1 = 0;
	LOC1 = len_279089(n);
	TMP3867 = subInt(LOC1, 1);
	HEX3Atmp_279227 = (NI32)(TMP3867);
	nimln(1301, "system.nim");
	res_279229 = 0;
	nimln(1302, "system.nim");
	while (1) {
		nimln(1302, "system.nim");
		if (!(res_279229 <= HEX3Atmp_279227)) goto LA2;
		nimln(1301, "system.nim");
		i_279226 = res_279229;
		nimln(105, "rstast.nim");
		if ((NU)(i_279226) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
		renderrsttorst_279202(d, (*n).Sons->data[i_279226], result);		nimln(1304, "system.nim");
		res_279229 = addInt(res_279229, 1);
	} LA2: ;
	popFrame();
}
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));	(*dest).Sup.len += (*src).Sup.len;
}
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL LOC11;
	int LOC13;
	result = 0;
	{
		if (!(a == b)) goto LA3;
		result = NIM_TRUE;
		goto BeforeRet;
	}	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == NIM_NIL);
		if (LOC7) goto LA8;
		LOC7 = (b == NIM_NIL);
		LA8: ;
		if (!LOC7) goto LA9;
		result = NIM_FALSE;
		goto BeforeRet;
	}	LA9: ;
	LOC11 = 0;
	LOC11 = ((*a).Sup.len == (*b).Sup.len);
	if (!(LOC11)) goto LA12;
	LOC13 = 0;
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (NI32)((*a).Sup.len * 1));
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	BeforeRet: ;	return result;
}
N_NIMCALL(void, renderrsttorst_279202)(trendercontext279198* d, trstnode279018* n, NimStringDesc** result) {
	NimStringDesc* ind;
	nimfr("renderRstToRst", "rstast.nim")
	nimln(112, "rstast.nim");
	{
		nimln(112, "rstast.nim");
		if (!(n == NIM_NIL)) goto LA3;
		nimln(112, "rstast.nim");
		goto BeforeRet;
	}	LA3: ;
	nimln(113, "rstast.nim");
	ind = nsuRepeatChar((*d).Indent, 32);
	nimln(114, "rstast.nim");
	switch ((*n).Kind) {
	case ((NU8) 0):
	{
		nimln(116, "rstast.nim");
		renderrstsons_279210(d, n, result);	}	break;
	case ((NU8) 1):
	{
		NI oldlen;
		NI headlinelen;
		NI TMP3869;
		NimStringDesc* LOC7;
		nimln(118, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP3868));
		nimln(119, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(121, "rstast.nim");
		nimln(121, "rstast.nim");
		oldlen = (*result)->Sup.len;
		nimln(122, "rstast.nim");
		renderrstsons_279210(d, n, result);		nimln(123, "rstast.nim");
		nimln(123, "rstast.nim");
		nimln(123, "rstast.nim");
		TMP3869 = subInt((*result)->Sup.len, oldlen);
		headlinelen = (NI32)(TMP3869);
		nimln(125, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP3868));
		nimln(126, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(127, "rstast.nim");
		nimln(127, "rstast.nim");
		if ((NU)((*n).Level) > (NU)(8)) raiseIndexError();
		LOC7 = 0;
		LOC7 = nsuRepeatChar(headlinelen, lvltochar_279241[((*n).Level)- 0]);
		(*result) = resizeString((*result), LOC7->Sup.len + 0);
appendString((*result), LOC7);
	}	break;
	case ((NU8) 2):
	{
		NimStringDesc* headline;
		NimStringDesc* lvl;
		NI TMP3871;
		nimln(129, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP3868));
		nimln(130, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(132, "rstast.nim");
		headline = copyString(((NimStringDesc*) &TMP3870));
		nimln(133, "rstast.nim");
		renderrstsons_279210(d, n, &headline);		nimln(135, "rstast.nim");
		nimln(135, "rstast.nim");
		nimln(135, "rstast.nim");
		TMP3871 = subInt(headline->Sup.len, (*d).Indent);
		if ((NU)((*n).Level) > (NU)(8)) raiseIndexError();
		lvl = nsuRepeatChar((NI32)(TMP3871), lvltochar_279241[((*n).Level)- 0]);
		nimln(136, "rstast.nim");
		(*result) = resizeString((*result), lvl->Sup.len + 0);
appendString((*result), lvl);
		nimln(137, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP3868));
		nimln(138, "rstast.nim");
		(*result) = resizeString((*result), headline->Sup.len + 0);
appendString((*result), headline);
		nimln(140, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP3868));
		nimln(141, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(142, "rstast.nim");
		(*result) = resizeString((*result), lvl->Sup.len + 0);
appendString((*result), lvl);
	}	break;
	case ((NU8) 3):
	{
		NI TMP3873;
		NimStringDesc* LOC10;
		nimln(144, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3872));
		nimln(145, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(146, "rstast.nim");
		nimln(146, "rstast.nim");
		nimln(146, "rstast.nim");
		TMP3873 = subInt(78, (*d).Indent);
		LOC10 = 0;
		LOC10 = nsuRepeatChar((NI32)(TMP3873), 45);
		(*result) = resizeString((*result), LOC10->Sup.len + 0);
appendString((*result), LOC10);
		nimln(147, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3872));
	}	break;
	case ((NU8) 4):
	{
		nimln(149, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3872));
		nimln(150, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(151, "rstast.nim");
		renderrstsons_279210(d, n, result);	}	break;
	case ((NU8) 6):
	{
		NimStringDesc* tmp;
		nimln(153, "rstast.nim");
		(*d).Indent = addInt((*d).Indent, 2);
		nimln(154, "rstast.nim");
		tmp = copyString(((NimStringDesc*) &TMP3870));
		nimln(155, "rstast.nim");
		renderrstsons_279210(d, n, &tmp);		nimln(156, "rstast.nim");
		{
			nimln(706, "system.nim");
			nimln(156, "rstast.nim");
			if (!(0 < tmp->Sup.len)) goto LA15;
			nimln(157, "rstast.nim");
			(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP3868));
			nimln(158, "rstast.nim");
			(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
			nimln(159, "rstast.nim");
			(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3874));
			nimln(160, "rstast.nim");
			(*result) = resizeString((*result), tmp->Sup.len + 0);
appendString((*result), tmp);
		}		LA15: ;
		nimln(161, "rstast.nim");
		(*d).Indent = subInt((*d).Indent, 2);
	}	break;
	case ((NU8) 8):
	{
		NimStringDesc* tmp;
		nimln(163, "rstast.nim");
		(*d).Indent = addInt((*d).Indent, 4);
		nimln(164, "rstast.nim");
		tmp = copyString(((NimStringDesc*) &TMP3870));
		nimln(165, "rstast.nim");
		renderrstsons_279210(d, n, &tmp);		nimln(166, "rstast.nim");
		{
			nimln(706, "system.nim");
			nimln(166, "rstast.nim");
			if (!(0 < tmp->Sup.len)) goto LA20;
			nimln(167, "rstast.nim");
			(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP3868));
			nimln(168, "rstast.nim");
			(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
			nimln(169, "rstast.nim");
			(*result) = resizeString((*result), 4);
appendString((*result), ((NimStringDesc*) &TMP3875));
			nimln(170, "rstast.nim");
			(*result) = resizeString((*result), tmp->Sup.len + 0);
appendString((*result), tmp);
		}		LA20: ;
		nimln(171, "rstast.nim");
		(*d).Indent = subInt((*d).Indent, 4);
	}	break;
	case ((NU8) 17):
	case ((NU8) 13):
	case ((NU8) 9):
	case ((NU8) 10):
	case ((NU8) 26):
	case ((NU8) 15):
	case ((NU8) 16):
	case ((NU8) 37):
	case ((NU8) 5):
	case ((NU8) 7):
	{
		nimln(174, "rstast.nim");
		renderrstsons_279210(d, n, result);	}	break;
	case ((NU8) 11):
	{
		nimln(176, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3872));
		nimln(177, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(178, "rstast.nim");
		renderrstsons_279210(d, n, result);	}	break;
	case ((NU8) 12):
	{
		nimln(180, "rstast.nim");
		(*d).Indent = addInt((*d).Indent, 2);
		nimln(181, "rstast.nim");
		{
			nimln(698, "system.nim");
			nimln(698, "system.nim");
			if ((NU)(0) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
			if (!!(((*(*n).Sons->data[0]).Kind == ((NU8) 5)))) goto LA27;
			nimln(182, "rstast.nim");
			(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP3868));
			nimln(183, "rstast.nim");
			(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
			nimln(184, "rstast.nim");
			(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3876));
		}		LA27: ;
		nimln(185, "rstast.nim");
		renderrstsons_279210(d, n, result);		nimln(186, "rstast.nim");
		(*d).Indent = subInt((*d).Indent, 2);
	}	break;
	case ((NU8) 14):
	{
		NimStringDesc* tmp;
		NI l;
		NI TMP3877;
		NI TMP3878;
		NI TMP3879;
		NimStringDesc* LOC30;
		nimln(188, "rstast.nim");
		tmp = copyString(((NimStringDesc*) &TMP3870));
		nimln(189, "rstast.nim");
		if ((NU)(0) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
		renderrsttorst_279202(d, (*n).Sons->data[0], &tmp);		nimln(191, "rstast.nim");
		nimln(191, "rstast.nim");
		nimln(191, "rstast.nim");
		nimln(191, "rstast.nim");
		TMP3877 = addInt(tmp->Sup.len, 3);
		l = (((NI32)(TMP3877) >= 30) ? (NI32)(TMP3877) : 30);
		nimln(192, "rstast.nim");
		(*d).Indent = addInt((*d).Indent, l);
		nimln(194, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP3868));
		nimln(195, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(196, "rstast.nim");
		(*result) = addChar((*result), 58);
		nimln(197, "rstast.nim");
		(*result) = resizeString((*result), tmp->Sup.len + 0);
appendString((*result), tmp);
		nimln(198, "rstast.nim");
		(*result) = addChar((*result), 58);
		nimln(199, "rstast.nim");
		nimln(199, "rstast.nim");
		nimln(199, "rstast.nim");
		nimln(199, "rstast.nim");
		nimln(199, "rstast.nim");
		TMP3878 = subInt(l, tmp->Sup.len);
		TMP3879 = subInt((NI32)(TMP3878), 2);
		LOC30 = 0;
		LOC30 = nsuRepeatChar((NI32)(TMP3879), 32);
		(*result) = resizeString((*result), LOC30->Sup.len + 0);
appendString((*result), LOC30);
		nimln(200, "rstast.nim");
		if ((NU)(1) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
		renderrsttorst_279202(d, (*n).Sons->data[1], result);		nimln(202, "rstast.nim");
		(*d).Indent = subInt((*d).Indent, l);
	}	break;
	case ((NU8) 27):
	{
		nimln(204, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP3868));
		nimln(205, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(206, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3880));
		nimln(207, "rstast.nim");
		renderrstsons_279210(d, n, result);	}	break;
	case ((NU8) 28):
	{
		nimln(209, "rstast.nim");
		(*d).Indent = addInt((*d).Indent, 2);
		nimln(210, "rstast.nim");
		renderrstsons_279210(d, n, result);		nimln(211, "rstast.nim");
		(*d).Indent = subInt((*d).Indent, 2);
	}	break;
	case ((NU8) 39):
	{
		nimln(213, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP3881));
		nimln(214, "rstast.nim");
		renderrstsons_279210(d, n, result);		nimln(215, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3882));
	}	break;
	case ((NU8) 38):
	{
		nimln(217, "rstast.nim");
		(*result) = addChar((*result), 96);
		nimln(218, "rstast.nim");
		if ((NU)(0) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
		renderrsttorst_279202(d, (*n).Sons->data[0], result);		nimln(219, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3883));
		nimln(220, "rstast.nim");
		if ((NU)(1) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
		renderrsttorst_279202(d, (*n).Sons->data[1], result);		nimln(221, "rstast.nim");
		(*result) = resizeString((*result), 3);
appendString((*result), ((NimStringDesc*) &TMP3884));
	}	break;
	case ((NU8) 53):
	{
		nimln(223, "rstast.nim");
		(*result) = addChar((*result), 96);
		nimln(224, "rstast.nim");
		if ((NU)(0) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
		renderrsttorst_279202(d, (*n).Sons->data[0], result);		nimln(225, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3885));
		nimln(226, "rstast.nim");
		if ((NU)(1) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
		renderrsttorst_279202(d, (*n).Sons->data[1], result);		nimln(227, "rstast.nim");
		(*result) = addChar((*result), 58);
	}	break;
	case ((NU8) 54):
	{
		nimln(229, "rstast.nim");
		(*result) = addChar((*result), 96);
		nimln(230, "rstast.nim");
		renderrstsons_279210(d, n, result);		nimln(231, "rstast.nim");
		(*result) = resizeString((*result), 6);
appendString((*result), ((NimStringDesc*) &TMP3886));
	}	break;
	case ((NU8) 55):
	{
		nimln(233, "rstast.nim");
		(*result) = addChar((*result), 96);
		nimln(234, "rstast.nim");
		renderrstsons_279210(d, n, result);		nimln(235, "rstast.nim");
		(*result) = resizeString((*result), 6);
appendString((*result), ((NimStringDesc*) &TMP3887));
	}	break;
	case ((NU8) 56):
	{
		nimln(237, "rstast.nim");
		(*result) = addChar((*result), 96);
		nimln(238, "rstast.nim");
		renderrstsons_279210(d, n, result);		nimln(239, "rstast.nim");
		(*result) = resizeString((*result), 6);
appendString((*result), ((NimStringDesc*) &TMP3888));
	}	break;
	case ((NU8) 57):
	{
		nimln(241, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP3889));
		nimln(242, "rstast.nim");
		renderrstsons_279210(d, n, result);		nimln(243, "rstast.nim");
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TMP3889));
	}	break;
	case ((NU8) 58):
	{
		nimln(245, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3890));
		nimln(246, "rstast.nim");
		renderrstsons_279210(d, n, result);		nimln(247, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3890));
	}	break;
	case ((NU8) 59):
	{
		nimln(249, "rstast.nim");
		(*result) = resizeString((*result), 3);
appendString((*result), ((NimStringDesc*) &TMP3891));
		nimln(250, "rstast.nim");
		renderrstsons_279210(d, n, result);		nimln(251, "rstast.nim");
		(*result) = resizeString((*result), 3);
appendString((*result), ((NimStringDesc*) &TMP3891));
	}	break;
	case ((NU8) 60):
	{
		nimln(253, "rstast.nim");
		(*result) = addChar((*result), 96);
		nimln(254, "rstast.nim");
		renderrstsons_279210(d, n, result);		nimln(255, "rstast.nim");
		(*result) = addChar((*result), 96);
	}	break;
	case ((NU8) 61):
	{
		nimln(257, "rstast.nim");
		(*d).Verbatim = addInt((*d).Verbatim, 1);
		nimln(258, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3892));
		nimln(259, "rstast.nim");
		renderrstsons_279210(d, n, result);		nimln(260, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3892));
		nimln(261, "rstast.nim");
		(*d).Verbatim = subInt((*d).Verbatim, 1);
	}	break;
	case ((NU8) 63):
	{
		nimln(263, "rstast.nim");
		(*result) = resizeString((*result), (*n).Text->Sup.len + 0);
appendString((*result), (*n).Text);
	}	break;
	case ((NU8) 64):
	{
		nimln(265, "rstast.nim");
		{
			NIM_BOOL LOC48;
			nimln(265, "rstast.nim");
			LOC48 = 0;
			nimln(265, "rstast.nim");
			LOC48 = ((*d).Verbatim == 0);
			if (!(LOC48)) goto LA49;
			nimln(265, "rstast.nim");
			LOC48 = eqStrings((*n).Text, ((NimStringDesc*) &TMP3893));
			LA49: ;
			if (!LOC48) goto LA50;
			nimln(266, "rstast.nim");
			(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3894));
		}		goto LA46;
		LA50: ;
		{
			nimln(268, "rstast.nim");
			(*result) = resizeString((*result), (*n).Text->Sup.len + 0);
appendString((*result), (*n).Text);
		}		LA46: ;
	}	break;
	case ((NU8) 51):
	{
		nimln(270, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3872));
		nimln(271, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(272, "rstast.nim");
		(*result) = resizeString((*result), 11);
appendString((*result), ((NimStringDesc*) &TMP3895));
		nimln(274, "rstast.nim");
		(*d).Indent = addInt((*d).Indent, 3);
		nimln(275, "rstast.nim");
		{
			nimln(698, "system.nim");
			nimln(698, "system.nim");
			if ((NU)(2) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
			if (!!(((*n).Sons->data[2] == NIM_NIL))) goto LA56;
			nimln(275, "rstast.nim");
			if ((NU)(2) >= (NU)((*n).Sons->Sup.len)) raiseIndexError();
			renderrstsons_279210(d, (*n).Sons->data[2], result);		}		LA56: ;
		nimln(276, "rstast.nim");
		(*d).Indent = subInt((*d).Indent, 3);
	}	break;
	case ((NU8) 44):
	{
		nimln(278, "rstast.nim");
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TMP3872));
		nimln(279, "rstast.nim");
		(*result) = resizeString((*result), ind->Sup.len + 0);
appendString((*result), ind);
		nimln(280, "rstast.nim");
		(*result) = resizeString((*result), 13);
appendString((*result), ((NimStringDesc*) &TMP3896));
	}	break;
	default:
	{
		NimStringDesc* LOC60;
		nimln(282, "rstast.nim");
		nimln(282, "rstast.nim");
		LOC60 = 0;
		nimln(282, "rstast.nim");
		LOC60 = rawNewString(reprEnum((*n).Kind, (&NTI279012))->Sup.len + 22);
appendString(LOC60, ((NimStringDesc*) &TMP3897));
appendString(LOC60, reprEnum((*n).Kind, (&NTI279012)));
		(*result) = resizeString((*result), LOC60->Sup.len + 0);
appendString((*result), LOC60);
	}	break;
	}
	BeforeRet: ;	popFrame();
}
N_NIMCALL(void, renderrsttorst_279445)(trstnode279018* n, NimStringDesc** result) {
	trendercontext279198 d;
	nimfr("renderRstToRst", "rstast.nim")
	memset((void*)&d, 0, sizeof(d));
	nimln(287, "rstast.nim");
	renderrsttorst_279202(&d, n, result);	popFrame();
}N_NOINLINE(void, docutilsrstastInit)(void) {
	nimfr("rstast", "rstast.nim")
	popFrame();
}

N_NOINLINE(void, docutilsrstastDatInit)(void) {
static TNimNode* TMP3860[4];
static TNimNode* TMP3861[65];
NI TMP3863;
static char* NIM_CONST TMP3862[65] = {
"rnInner", 
"rnHeadline", 
"rnOverline", 
"rnTransition", 
"rnParagraph", 
"rnBulletList", 
"rnBulletItem", 
"rnEnumList", 
"rnEnumItem", 
"rnDefList", 
"rnDefItem", 
"rnDefName", 
"rnDefBody", 
"rnFieldList", 
"rnField", 
"rnFieldName", 
"rnFieldBody", 
"rnOptionList", 
"rnOptionListItem", 
"rnOptionGroup", 
"rnOption", 
"rnOptionString", 
"rnOptionArgument", 
"rnDescription", 
"rnLiteralBlock", 
"rnQuotedLiteralBlock", 
"rnLineBlock", 
"rnLineBlockItem", 
"rnBlockQuote", 
"rnTable", 
"rnGridTable", 
"rnTableRow", 
"rnTableHeaderCell", 
"rnTableDataCell", 
"rnLabel", 
"rnFootnote", 
"rnCitation", 
"rnStandaloneHyperlink", 
"rnHyperlink", 
"rnRef", 
"rnDirective", 
"rnDirArg", 
"rnRaw", 
"rnTitle", 
"rnContents", 
"rnImage", 
"rnFigure", 
"rnCodeBlock", 
"rnRawHtml", 
"rnRawLatex", 
"rnContainer", 
"rnIndex", 
"rnSubstitutionDef", 
"rnGeneralRole", 
"rnSub", 
"rnSup", 
"rnIdx", 
"rnEmphasis", 
"rnStrongEmphasis", 
"rnTripleEmphasis", 
"rnInterpretedText", 
"rnInlineLiteral", 
"rnSubstitutionReferences", 
"rnSmiley", 
"rnLeaf"};
static TNimNode TMP3858[71];
NTI279018.size = sizeof(trstnode279018);
NTI279018.kind = 18;
NTI279018.base = 0;
NTI279018.flags = 2;
TMP3860[0] = &TMP3858[1];
NTI279012.size = sizeof(NU8);
NTI279012.kind = 14;
NTI279012.base = 0;
NTI279012.flags = 3;
for (TMP3863 = 0; TMP3863 < 65; TMP3863++) {
TMP3858[TMP3863+2].kind = 1;
TMP3858[TMP3863+2].offset = TMP3863;
TMP3858[TMP3863+2].name = TMP3862[TMP3863];
TMP3861[TMP3863] = &TMP3858[TMP3863+2];
}
TMP3858[67].len = 65; TMP3858[67].kind = 2; TMP3858[67].sons = &TMP3861[0];
NTI279012.node = &TMP3858[67];
TMP3858[1].kind = 1;
TMP3858[1].offset = offsetof(trstnode279018, Kind);
TMP3858[1].typ = (&NTI279012);
TMP3858[1].name = "kind";
TMP3860[1] = &TMP3858[68];
TMP3858[68].kind = 1;
TMP3858[68].offset = offsetof(trstnode279018, Text);
TMP3858[68].typ = (&NTI142);
TMP3858[68].name = "text";
TMP3860[2] = &TMP3858[69];
TMP3858[69].kind = 1;
TMP3858[69].offset = offsetof(trstnode279018, Level);
TMP3858[69].typ = (&NTI105);
TMP3858[69].name = "level";
TMP3860[3] = &TMP3858[70];
TMP3858[70].kind = 1;
TMP3858[70].offset = offsetof(trstnode279018, Sons);
TMP3858[70].typ = (&NTI279093);
TMP3858[70].name = "sons";
TMP3858[0].len = 4; TMP3858[0].kind = 2; TMP3858[0].sons = &TMP3860[0];
NTI279018.node = &TMP3858[0];
NTI279014.size = sizeof(trstnode279018*);
NTI279014.kind = 22;
NTI279014.base = (&NTI279018);
NTI279014.flags = 2;
NTI279014.marker = TMP3865;
}

