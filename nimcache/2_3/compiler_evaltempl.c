/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct tnode171659 tnode171659;
typedef struct templctx251007 templctx251007;
typedef struct ttype171693 ttype171693;
typedef struct tlineinfo136509 tlineinfo136509;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tsym171689 tsym171689;
typedef struct tident140017 tident140017;
typedef struct tnodeseq171653 tnodeseq171653;
typedef struct tidobj140011 tidobj140011;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq171691 ttypeseq171691;
typedef struct tscope171683 tscope171683;
typedef struct TY171786 TY171786;
typedef struct tinstantiation171679 tinstantiation171679;
typedef struct tstrtable171663 tstrtable171663;
typedef struct tsymseq171661 tsymseq171661;
typedef struct tloc171673 tloc171673;
typedef struct trope121007 trope121007;
typedef struct tlib171677 tlib171677;
typedef struct tidtable171705 tidtable171705;
typedef struct tidpairseq171703 tidpairseq171703;
typedef struct tidpair171701 tidpair171701;
typedef struct TY75888 TY75888;
typedef struct tcell38846 tcell38846;
typedef struct tcellseq38862 tcellseq38862;
typedef struct tgcheap40816 tgcheap40816;
typedef struct tcellset38858 tcellset38858;
typedef struct tpagedesc38854 tpagedesc38854;
typedef struct tmemregion22210 tmemregion22210;
typedef struct tsmallchunk21438 tsmallchunk21438;
typedef struct tllchunk22204 tllchunk22204;
typedef struct tbigchunk21440 tbigchunk21440;
typedef struct tintset21415 tintset21415;
typedef struct ttrunk21411 ttrunk21411;
typedef struct tavlnode22208 tavlnode22208;
typedef struct tgcstat40814 tgcstat40814;
typedef struct TY171775 TY171775;
typedef struct tlistentry109014 tlistentry109014;
typedef struct tbasechunk21436 tbasechunk21436;
typedef struct tfreecell21428 tfreecell21428;
struct tlineinfo136509 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
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
struct tnode171659 {
ttype171693* Typ;
tlineinfo136509 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym171689* Sym;
} S4;
struct {tident140017* Ident;
} S5;
struct {tnodeseq171653* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
typedef NU8 TY171865[20];
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
struct tidobj140011 {
  TNimObject Sup;
NI Id;
};
struct tstrtable171663 {
NI Counter;
tsymseq171661* Data;
};
struct tloc171673 {
NU8 K;
NU8 S;
NU8 Flags;
ttype171693* T;
trope121007* R;
trope121007* Heaproot;
NI A;
};
struct tsym171689 {
  tidobj140011 Sup;
NU8 Kind;
union {
struct {ttypeseq171691* Typeinstcache;
tscope171683* Typscope;
} S1;
struct {TY171786* Procinstcache;
tscope171683* Scope;
} S2;
struct {TY171786* Usedgenerics;
tstrtable171663 Tab;
} S3;
} kindU;
NU16 Magic;
ttype171693* Typ;
tident140017* Name;
tlineinfo136509 Info;
tsym171689* Owner;
NU32 Flags;
tnode171659* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc171673 Loc;
tlib171677* Annex;
tnode171659* Constraint;
};
struct tidpair171701 {
tidobj140011* Key;
TNimObject* Val;
};
struct tidtable171705 {
NI Counter;
tidpairseq171703* Data;
};
struct templctx251007 {
tsym171689* Owner;
tsym171689* Gensymowner;
tidtable171705 Mapping;
};
struct TY75888 {
NimStringDesc* Field0;
NI Field1;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tcell38846 {
NI Refcount;
TNimType* Typ;
};
struct tcellseq38862 {
NI Len;
NI Cap;
tcell38846** D;
};
struct tcellset38858 {
NI Counter;
NI Max;
tpagedesc38854* Head;
tpagedesc38854** Data;
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
tcellseq38862 Zct;
tcellseq38862 Decstack;
tcellset38858 Cycleroots;
tcellseq38862 Tempstack;
NI Recgclock;
tmemregion22210 Region;
tgcstat40814 Stat;
};
struct ttype171693 {
  tidobj140011 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq171691* Sons;
tnode171659* N;
tsym171689* Destructor;
tsym171689* Owner;
tsym171689* Sym;
NI64 Size;
NI Align;
tloc171673 Loc;
};
struct tident140017 {
  tidobj140011 Sup;
NimStringDesc* S;
tident140017* Next;
NI H;
};
struct tscope171683 {
NI Depthlevel;
tstrtable171663 Symbols;
tnodeseq171653* Usingsyms;
tscope171683* Parent;
};
struct tinstantiation171679 {
tsym171689* Sym;
ttypeseq171691* Concretetypes;
TY171775* Usedby;
};
struct trope121007 {
  TNimObject Sup;
trope121007* Left;
trope121007* Right;
NI Length;
NimStringDesc* Data;
};
struct tlistentry109014 {
  TNimObject Sup;
tlistentry109014* Prev;
tlistentry109014* Next;
};
struct tlib171677 {
  tlistentry109014 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope121007* Name;
tnode171659* Path;
};
typedef NI TY21418[8];
struct tpagedesc38854 {
tpagedesc38854* Next;
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
struct tnodeseq171653 {
  TGenericSeq Sup;
  tnode171659* data[SEQ_DECL_SIZE];
};
struct ttypeseq171691 {
  TGenericSeq Sup;
  ttype171693* data[SEQ_DECL_SIZE];
};
struct TY171786 {
  TGenericSeq Sup;
  tinstantiation171679* data[SEQ_DECL_SIZE];
};
struct tsymseq171661 {
  TGenericSeq Sup;
  tsym171689* data[SEQ_DECL_SIZE];
};
struct tidpairseq171703 {
  TGenericSeq Sup;
  tidpair171701 data[SEQ_DECL_SIZE];
};
struct TY171775 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, evaltemplateaux_251012)(tnode171659* templ, tnode171659* actual, templctx251007* c, tnode171659* result);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, len_172102)(tnode171659* n);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(void, add_172201)(tnode171659* father, tnode171659* son);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(tnode171659*, copytree_172078)(tnode171659* src);
N_NIMCALL(void, internalerror_138383)(NimStringDesc* errmsg);
N_NIMCALL(NimStringDesc*, HEX24_138459)(TY75888 x);
N_NIMCALL(TNimObject*, idtableget_178137)(tidtable171705 t, tidobj140011* key);
N_NIMCALL(void, chckObj)(TNimType* obj, TNimType* subclass);
N_NIMCALL(tsym171689*, copysym_171988)(tsym171689* s, NIM_BOOL keepid);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell38846*, usrtocell_42239)(void* usr);
static N_INLINE(void, rtladdzct_43802)(tcell38846* c);
N_NOINLINE(void, addzct_42215)(tcellseq38862* s, tcell38846* c);
N_NIMCALL(void, idtableput_178147)(tidtable171705* t, tidobj140011* key, TNimObject* val);
N_NIMCALL(tnode171659*, newsymnode_173300)(tsym171689* sym, tlineinfo136509 info);
N_NIMCALL(tnode171659*, copynode_172074)(tnode171659* src);
static N_INLINE(NI, sonslen_172022)(tnode171659* n);
N_NIMCALL(tnode171659*, evaltemplateargs_251201)(tnode171659* n, tsym171689* s);
static N_INLINE(NI, sonslen_172026)(ttype171693* n);
N_NIMCALL(void, globalerror_138336)(tlineinfo136509 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(tnode171659*, newnodei_171940)(NU8 kind, tlineinfo136509 info);
N_NIMCALL(void, localerror_138349)(tlineinfo136509 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, addson_172048)(tnode171659* father, tnode171659* son);
N_NIMCALL(tnode171659*, evaltemplate_251285)(tnode171659* n, tsym171689* tmpl, tsym171689* gensymowner);
N_NIMCALL(void, initidtable_171961)(tidtable171705* x);
N_NIMCALL(tnode171659*, getbody_213397)(tsym171689* s);
static N_INLINE(NIM_BOOL, isatom_176942)(tnode171659* n);
N_NIMCALL(NimStringDesc*, rendertree_189048)(tnode171659* n, NU8 renderflags);
static N_INLINE(NI, safelen_172146)(tnode171659* n);
static NIM_CONST TY171865 TMP3443 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3444, "sym", 3);
static NIM_CONST TY171865 TMP3445 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3446, "sons", 4);
STRING_LITERAL(TMP3448, "compiler/evaltempl.nim", 22);
NIM_CONST TY75888 TMP3447 = {((NimStringDesc*) &TMP3448),
34}
;
STRING_LITERAL(TMP3450, "", 0);
extern TFrame* frameptr_12037;
extern TNimType NTI171689; /* TSym */
extern tgcheap40816 gch_40844;
NI evaltemplatecounter_251283;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12037;
	frameptr_12037 = s;
}
static N_INLINE(void, popFrame)(void) {
	frameptr_12037 = (*frameptr_12037).prev;
}
static N_INLINE(NI, len_172102)(tnode171659* n) {
	NI result;
	nimfr("len", "ast.nim")
	result = 0;
	nimln(873, "ast.nim");
	{
		nimln(873, "ast.nim");
		if (((TMP3445[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3446));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(873, "ast.nim");
		result = 0;
	}	goto LA1;
	LA3: ;
	{
		nimln(874, "ast.nim");
		nimln(874, "ast.nim");
		if (((TMP3445[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3446));
		result = (*n).kindU.S6.Sons->Sup.len;
	}	LA1: ;
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
static N_INLINE(tcell38846*, usrtocell_42239)(void* usr) {
	tcell38846* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(116, "gc.nim");
	nimln(116, "gc.nim");
	nimln(116, "gc.nim");
	result = ((tcell38846*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell38846))))));
	popFrame();
	return result;
}
static N_INLINE(void, rtladdzct_43802)(tcell38846* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(197, "gc.nim");
	addzct_42215(&gch_40844.Zct, c);	popFrame();
}
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr("asgnRefNoCycle", "gc.nim")
	nimln(249, "gc.nim");
	{
		tcell38846* c;
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
		tcell38846* c;
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
			if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA11;
			nimln(255, "gc.nim");
			rtladdzct_43802(c);		}		LA11: ;
	}	LA7: ;
	nimln(256, "gc.nim");
	(*dest) = src;
	popFrame();
}
static N_INLINE(NI, sonslen_172022)(tnode171659* n) {
	NI result;
	nimfr("sonsLen", "ast.nim")
	result = 0;
	nimln(1209, "ast.nim");
	{
		nimln(1209, "ast.nim");
		if (((TMP3445[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3446));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(1209, "ast.nim");
		result = 0;
	}	goto LA1;
	LA3: ;
	{
		nimln(1210, "ast.nim");
		nimln(1210, "ast.nim");
		if (((TMP3445[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3446));
		result = (*n).kindU.S6.Sons->Sup.len;
	}	LA1: ;
	popFrame();
	return result;
}
N_NIMCALL(void, evaltemplateaux_251012)(tnode171659* templ, tnode171659* actual, templctx251007* c, tnode171659* result) {
	nimfr("evalTemplateAux", "evaltempl.nim")
	nimln(23, "evaltempl.nim");
	switch ((*templ).Kind) {
	case ((NU8) 3):
	{
		tsym171689* s;
		nimln(25, "evaltempl.nim");
		if (!(((TMP3443[(*templ).Kind/8] &(1<<((*templ).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3444));
		s = (*templ).kindU.S4.Sym;
		nimln(26, "evaltempl.nim");
		{
			nimln(26, "evaltempl.nim");
			if (!((*(*s).Owner).Sup.Id == (*(*c).Owner).Sup.Id)) goto LA4;
			nimln(27, "evaltempl.nim");
			{
				tnode171659* x;
				nimln(27, "evaltempl.nim");
				if (!((*s).Kind == ((NU8) 3))) goto LA8;
				nimln(28, "evaltempl.nim");
				if (((TMP3445[(*actual).Kind/8] &(1<<((*actual).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3446));
				if ((NU)((*s).Position) >= (NU)((*actual).kindU.S6.Sons->Sup.len)) raiseIndexError();
				x = (*actual).kindU.S6.Sons->data[(*s).Position];
				nimln(29, "evaltempl.nim");
				{
					tnode171659* y_251059;
					NI i_251113;
					NI HEX3Atmp_251115;
					NI LOC14;
					NI res_251117;
					nimln(29, "evaltempl.nim");
					if (!((*x).Kind == ((NU8) 147))) goto LA12;
					y_251059 = 0;
					i_251113 = 0;
					HEX3Atmp_251115 = 0;
					nimln(1419, "ast.nim");
					nimln(1419, "ast.nim");
					nimln(1419, "ast.nim");
					LOC14 = 0;
					LOC14 = len_172102(x);
					HEX3Atmp_251115 = subInt(LOC14, 1);
					nimln(1308, "system.nim");
					res_251117 = 0;
					nimln(1309, "system.nim");
					while (1) {
						nimln(1309, "system.nim");
						if (!(res_251117 <= HEX3Atmp_251115)) goto LA15;
						nimln(1308, "system.nim");
						i_251113 = res_251117;
						nimln(1419, "ast.nim");
						if (((TMP3445[(*x).Kind/8] &(1<<((*x).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3446));
						if ((NU)(i_251113) >= (NU)((*x).kindU.S6.Sons->Sup.len)) raiseIndexError();
						y_251059 = (*x).kindU.S6.Sons->data[i_251113];
						nimln(30, "evaltempl.nim");
						add_172201(result, y_251059);						nimln(1311, "system.nim");
						res_251117 = addInt(res_251117, 1);
					} LA15: ;
				}				goto LA10;
				LA12: ;
				{
					tnode171659* LOC17;
					nimln(32, "evaltempl.nim");
					nimln(32, "evaltempl.nim");
					LOC17 = 0;
					LOC17 = copytree_172078(x);
					add_172201(result, LOC17);				}				LA10: ;
			}			goto LA6;
			LA8: ;
			{
				tsym171689* x;
				TNimObject* LOC24;
				tnode171659* LOC29;
				nimln(826, "msgs.nim");
				{
					NimStringDesc* LOC23;
					nimln(826, "msgs.nim");
					nimln(730, "system.nim");
					if (!!((((*s).Flags &(1<<((((NU8) 31))&31)))!=0))) goto LA21;
					nimln(826, "msgs.nim");
					nimln(826, "msgs.nim");
					LOC23 = 0;
					LOC23 = HEX24_138459(TMP3447);
					internalerror_138383(LOC23);				}				LA21: ;
				nimln(35, "evaltempl.nim");
				nimln(35, "evaltempl.nim");
				LOC24 = 0;
				LOC24 = idtableget_178137((*c).Mapping, &s->Sup);
				if (LOC24) chckObj((*LOC24).m_type, (&NTI171689));
				x = ((tsym171689*) (LOC24));
				nimln(36, "evaltempl.nim");
				{
					nimln(36, "evaltempl.nim");
					if (!(x == NIM_NIL)) goto LA27;
					nimln(37, "evaltempl.nim");
					x = copysym_171988(s, NIM_FALSE);
					nimln(38, "evaltempl.nim");
					asgnRefNoCycle((void**) &(*x).Owner, (*c).Gensymowner);
					nimln(39, "evaltempl.nim");
					idtableput_178147(&(*c).Mapping, &s->Sup, &x->Sup.Sup);				}				LA27: ;
				nimln(40, "evaltempl.nim");
				nimln(40, "evaltempl.nim");
				LOC29 = 0;
				LOC29 = newsymnode_173300(x, (*templ).Info);
				add_172201(result, LOC29);			}			LA6: ;
		}		goto LA2;
		LA4: ;
		{
			tnode171659* LOC31;
			nimln(42, "evaltempl.nim");
			nimln(42, "evaltempl.nim");
			LOC31 = 0;
			LOC31 = copynode_172074(templ);
			add_172201(result, LOC31);		}		LA2: ;
	}	break;
	case ((NU8) 0) ... ((NU8) 2):
	case ((NU8) 4) ... ((NU8) 23):
	{
		tnode171659* LOC33;
		nimln(44, "evaltempl.nim");
		nimln(44, "evaltempl.nim");
		LOC33 = 0;
		LOC33 = copynode_172074(templ);
		add_172201(result, LOC33);	}	break;
	default:
	{
		tnode171659* res;
		NI i_251100;
		NI HEX3Atmp_251118;
		NI LOC35;
		NI TMP3449;
		NI res_251120;
		nimln(46, "evaltempl.nim");
		res = copynode_172074(templ);
		i_251100 = 0;
		HEX3Atmp_251118 = 0;
		nimln(47, "evaltempl.nim");
		nimln(47, "evaltempl.nim");
		nimln(47, "evaltempl.nim");
		LOC35 = 0;
		LOC35 = sonslen_172022(templ);
		TMP3449 = subInt(LOC35, 1);
		HEX3Atmp_251118 = (NI64)(TMP3449);
		nimln(1301, "system.nim");
		res_251120 = 0;
		nimln(1302, "system.nim");
		while (1) {
			nimln(1302, "system.nim");
			if (!(res_251120 <= HEX3Atmp_251118)) goto LA36;
			nimln(1301, "system.nim");
			i_251100 = res_251120;
			nimln(48, "evaltempl.nim");
			if (((TMP3445[(*templ).Kind/8] &(1<<((*templ).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3446));
			if ((NU)(i_251100) >= (NU)((*templ).kindU.S6.Sons->Sup.len)) raiseIndexError();
			evaltemplateaux_251012((*templ).kindU.S6.Sons->data[i_251100], actual, c, res);			nimln(1304, "system.nim");
			res_251120 = addInt(res_251120, 1);
		} LA36: ;
		nimln(49, "evaltempl.nim");
		add_172201(result, res);	}	break;
	}
	popFrame();
}
static N_INLINE(NI, sonslen_172026)(ttype171693* n) {
	NI result;
	nimfr("sonsLen", "ast.nim")
	result = 0;
	nimln(1195, "ast.nim");
	{
		nimln(1195, "ast.nim");
		if (!(*n).Sons == 0) goto LA3;
		nimln(1195, "ast.nim");
		result = 0;
	}	goto LA1;
	LA3: ;
	{
		nimln(1196, "ast.nim");
		nimln(1196, "ast.nim");
		result = (*n).Sons->Sup.len;
	}	LA1: ;
	popFrame();
	return result;
}
N_NIMCALL(tnode171659*, evaltemplateargs_251201)(tnode171659* n, tsym171689* s) {
	tnode171659* result;
	NI a;
	NI f;
	NI i_251218;
	NI HEX3Atmp_251276;
	NI TMP3451;
	NI res_251278;
	nimfr("evalTemplateArgs", "evaltempl.nim")
	result = 0;
	a = 0;
	nimln(81, "evaltempl.nim");
	switch ((*n).Kind) {
	case ((NU8) 27):
	case ((NU8) 29):
	case ((NU8) 30):
	case ((NU8) 31):
	case ((NU8) 26):
	case ((NU8) 28):
	{
		nimln(83, "evaltempl.nim");
		a = sonslen_172022(n);
	}	break;
	default:
	{
		nimln(84, "evaltempl.nim");
		a = 0;
	}	break;
	}
	nimln(85, "evaltempl.nim");
	f = sonslen_172026((*s).Typ);
	nimln(86, "evaltempl.nim");
	{
		nimln(706, "system.nim");
		if (!(f < a)) goto LA5;
		nimln(86, "evaltempl.nim");
		globalerror_138336((*n).Info, ((NU16) 133), ((NimStringDesc*) &TMP3450));	}	LA5: ;
	nimln(88, "evaltempl.nim");
	result = newnodei_171940(((NU8) 147), (*n).Info);
	i_251218 = 0;
	HEX3Atmp_251276 = 0;
	nimln(89, "evaltempl.nim");
	nimln(89, "evaltempl.nim");
	TMP3451 = subInt(f, 1);
	HEX3Atmp_251276 = (NI64)(TMP3451);
	nimln(1301, "system.nim");
	res_251278 = 1;
	nimln(1302, "system.nim");
	while (1) {
		tnode171659* arg;
		nimln(1302, "system.nim");
		if (!(res_251278 <= HEX3Atmp_251276)) goto LA7;
		nimln(1301, "system.nim");
		i_251218 = res_251278;
		nimln(90, "evaltempl.nim");
		nimln(90, "evaltempl.nim");
		{
			nimln(90, "evaltempl.nim");
			if (!(i_251218 < a)) goto LA10;
			if (((TMP3445[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3446));
			if ((NU)(i_251218) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			arg = (*n).kindU.S6.Sons->data[i_251218];
		}		goto LA8;
		LA10: ;
		{
			nimln(90, "evaltempl.nim");
			if (((TMP3445[(*(*(*s).Typ).N).Kind/8] &(1<<((*(*(*s).Typ).N).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3446));
			if ((NU)(i_251218) >= (NU)((*(*(*s).Typ).N).kindU.S6.Sons->Sup.len)) raiseIndexError();
			if (!(((TMP3443[(*(*(*(*s).Typ).N).kindU.S6.Sons->data[i_251218]).Kind/8] &(1<<((*(*(*(*s).Typ).N).kindU.S6.Sons->data[i_251218]).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3444));
			arg = copytree_172078((*(*(*(*(*s).Typ).N).kindU.S6.Sons->data[i_251218]).kindU.S4.Sym).Ast);
		}		LA8: ;
		nimln(91, "evaltempl.nim");
		{
			NIM_BOOL LOC15;
			nimln(91, "evaltempl.nim");
			LOC15 = 0;
			nimln(91, "evaltempl.nim");
			LOC15 = (arg == NIM_NIL);
			if (LOC15) goto LA16;
			nimln(91, "evaltempl.nim");
			LOC15 = ((*arg).Kind == ((NU8) 1));
			LA16: ;
			if (!LOC15) goto LA17;
			nimln(92, "evaltempl.nim");
			localerror_138349((*n).Info, ((NU16) 133), ((NimStringDesc*) &TMP3450));		}		LA17: ;
		nimln(93, "evaltempl.nim");
		addson_172048(result, arg);		nimln(1304, "system.nim");
		res_251278 = addInt(res_251278, 1);
	} LA7: ;
	popFrame();
	return result;
}
static N_INLINE(NIM_BOOL, isatom_176942)(tnode171659* n) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	nimfr("isAtom", "ast.nim")
	result = 0;
	nimln(1422, "ast.nim");
	nimln(1422, "ast.nim");
	LOC1 = 0;
	nimln(702, "system.nim");
	LOC1 = (((NU8) 0) <= (*n).Kind);
	if (!(LOC1)) goto LA2;
	nimln(1422, "ast.nim");
	LOC1 = ((*n).Kind <= ((NU8) 23));
	LA2: ;
	result = LOC1;
	popFrame();
	return result;
}
static N_INLINE(NI, safelen_172146)(tnode171659* n) {
	NI result;
	nimfr("safeLen", "ast.nim")
	result = 0;
	nimln(878, "ast.nim");
	{
		NIM_BOOL LOC3;
		nimln(878, "ast.nim");
		LOC3 = 0;
		nimln(730, "system.nim");
		LOC3 = ((*n).Kind >= ((NU8) 0) && (*n).Kind <= ((NU8) 23));
		if (LOC3) goto LA4;
		nimln(878, "ast.nim");
		if (((TMP3445[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3446));
		LOC3 = (*n).kindU.S6.Sons == 0;
		LA4: ;
		if (!LOC3) goto LA5;
		nimln(878, "ast.nim");
		result = 0;
	}	goto LA1;
	LA5: ;
	{
		nimln(879, "ast.nim");
		nimln(879, "ast.nim");
		if (((TMP3445[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3446));
		result = (*n).kindU.S6.Sons->Sup.len;
	}	LA1: ;
	popFrame();
	return result;
}
N_NIMCALL(tnode171659*, evaltemplate_251285)(tnode171659* n, tsym171689* tmpl, tsym171689* gensymowner) {
	tnode171659* result;
	tnode171659* args;
	templctx251007 ctx;
	tnode171659* body;
	nimfr("evalTemplate", "evaltempl.nim")
	result = 0;
	nimln(99, "evaltempl.nim");
	evaltemplatecounter_251283 = addInt(evaltemplatecounter_251283, 1);
	nimln(100, "evaltempl.nim");
	{
		nimln(706, "system.nim");
		if (!(100 < evaltemplatecounter_251283)) goto LA3;
		nimln(101, "evaltempl.nim");
		globalerror_138336((*n).Info, ((NU16) 183), ((NimStringDesc*) &TMP3450));		nimln(102, "evaltempl.nim");
		result = n;
	}	LA3: ;
	nimln(105, "evaltempl.nim");
	args = evaltemplateargs_251201(n, tmpl);
	memset((void*)&ctx, 0, sizeof(ctx));
	nimln(107, "evaltempl.nim");
	ctx.Owner = tmpl;
	nimln(108, "evaltempl.nim");
	ctx.Gensymowner = gensymowner;
	nimln(109, "evaltempl.nim");
	initidtable_171961(&ctx.Mapping);	nimln(111, "evaltempl.nim");
	body = getbody_213397(tmpl);
	nimln(112, "evaltempl.nim");
	{
		NIM_BOOL LOC7;
		nimln(112, "evaltempl.nim");
		LOC7 = 0;
		LOC7 = isatom_176942(body);
		if (!LOC7) goto LA8;
		nimln(113, "evaltempl.nim");
		result = newnodei_171940(((NU8) 37), (*body).Info);
		nimln(114, "evaltempl.nim");
		evaltemplateaux_251012(body, args, &ctx, result);		nimln(115, "evaltempl.nim");
		{
			NI LOC12;
			nimln(115, "evaltempl.nim");
			nimln(115, "evaltempl.nim");
			LOC12 = 0;
			LOC12 = len_172102(result);
			if (!(LOC12 == 1)) goto LA13;
			nimln(115, "evaltempl.nim");
			if (((TMP3445[(*result).Kind/8] &(1<<((*result).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3446));
			if ((NU)(0) >= (NU)((*result).kindU.S6.Sons->Sup.len)) raiseIndexError();
			result = (*result).kindU.S6.Sons->data[0];
		}		goto LA10;
		LA13: ;
		{
			NimStringDesc* LOC16;
			nimln(117, "evaltempl.nim");
			nimln(118, "evaltempl.nim");
			LOC16 = 0;
			LOC16 = rendertree_189048(result, 4);
			globalerror_138336((*result).Info, ((NU16) 1), LOC16);		}		LA10: ;
	}	goto LA5;
	LA8: ;
	{
		NI i_251329;
		NI HEX3Atmp_251353;
		NI LOC18;
		NI TMP3452;
		NI res_251355;
		nimln(120, "evaltempl.nim");
		result = copynode_172074(body);
		i_251329 = 0;
		HEX3Atmp_251353 = 0;
		nimln(122, "evaltempl.nim");
		nimln(122, "evaltempl.nim");
		nimln(122, "evaltempl.nim");
		LOC18 = 0;
		LOC18 = safelen_172146(body);
		TMP3452 = subInt(LOC18, 1);
		HEX3Atmp_251353 = (NI64)(TMP3452);
		nimln(1301, "system.nim");
		res_251355 = 0;
		nimln(1302, "system.nim");
		while (1) {
			nimln(1302, "system.nim");
			if (!(res_251355 <= HEX3Atmp_251353)) goto LA19;
			nimln(1301, "system.nim");
			i_251329 = res_251355;
			nimln(123, "evaltempl.nim");
			if (((TMP3445[(*body).Kind/8] &(1<<((*body).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3446));
			if ((NU)(i_251329) >= (NU)((*body).kindU.S6.Sons->Sup.len)) raiseIndexError();
			evaltemplateaux_251012((*body).kindU.S6.Sons->data[i_251329], args, &ctx, result);			nimln(1304, "system.nim");
			res_251355 = addInt(res_251355, 1);
		} LA19: ;
	}	LA5: ;
	nimln(125, "evaltempl.nim");
	evaltemplatecounter_251283 = subInt(evaltemplatecounter_251283, 1);
	popFrame();
	return result;
}N_NOINLINE(void, compilerevaltemplInit)(void) {
	nimfr("evaltempl", "evaltempl.nim")
	nimln(95, "evaltempl.nim");
	evaltemplatecounter_251283 = 0;
	popFrame();
}

N_NOINLINE(void, compilerevaltemplDatInit)(void) {
}

