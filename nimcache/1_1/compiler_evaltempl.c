/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct tnode173659 tnode173659;
typedef struct templctx253007 templctx253007;
typedef struct ttype173693 ttype173693;
typedef struct tlineinfo137509 tlineinfo137509;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tsym173689 tsym173689;
typedef struct tident141017 tident141017;
typedef struct tnodeseq173653 tnodeseq173653;
typedef struct tidobj141011 tidobj141011;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq173691 ttypeseq173691;
typedef struct tscope173683 tscope173683;
typedef struct TY173786 TY173786;
typedef struct tinstantiation173679 tinstantiation173679;
typedef struct tstrtable173663 tstrtable173663;
typedef struct tsymseq173661 tsymseq173661;
typedef struct tloc173673 tloc173673;
typedef struct trope122007 trope122007;
typedef struct tlib173677 tlib173677;
typedef struct tidtable173705 tidtable173705;
typedef struct tidpairseq173703 tidpairseq173703;
typedef struct tidpair173701 tidpair173701;
typedef struct TY77088 TY77088;
typedef struct tcell38646 tcell38646;
typedef struct tcellseq38662 tcellseq38662;
typedef struct tgcheap40616 tgcheap40616;
typedef struct tcellset38658 tcellset38658;
typedef struct tpagedesc38654 tpagedesc38654;
typedef struct tmemregion22010 tmemregion22010;
typedef struct tsmallchunk21238 tsmallchunk21238;
typedef struct tllchunk22004 tllchunk22004;
typedef struct tbigchunk21240 tbigchunk21240;
typedef struct tintset21215 tintset21215;
typedef struct ttrunk21211 ttrunk21211;
typedef struct tavlnode22008 tavlnode22008;
typedef struct tgcstat40614 tgcstat40614;
typedef struct TY173775 TY173775;
typedef struct tlistentry110014 tlistentry110014;
typedef struct tbasechunk21236 tbasechunk21236;
typedef struct tfreecell21228 tfreecell21228;
struct tlineinfo137509 {
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
struct tnode173659 {
ttype173693* Typ;
tlineinfo137509 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym173689* Sym;
} S4;
struct {tident141017* Ident;
} S5;
struct {tnodeseq173653* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
typedef NU8 TY173865[20];
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
struct tidobj141011 {
  TNimObject Sup;
NI Id;
};
struct tstrtable173663 {
NI Counter;
tsymseq173661* Data;
};
struct tloc173673 {
NU8 K;
NU8 S;
NU8 Flags;
ttype173693* T;
trope122007* R;
trope122007* Heaproot;
NI A;
};
struct tsym173689 {
  tidobj141011 Sup;
NU8 Kind;
union {
struct {ttypeseq173691* Typeinstcache;
tscope173683* Typscope;
} S1;
struct {TY173786* Procinstcache;
tscope173683* Scope;
} S2;
struct {TY173786* Usedgenerics;
tstrtable173663 Tab;
} S3;
} kindU;
NU16 Magic;
ttype173693* Typ;
tident141017* Name;
tlineinfo137509 Info;
tsym173689* Owner;
NU32 Flags;
tnode173659* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc173673 Loc;
tlib173677* Annex;
tnode173659* Constraint;
};
struct tidpair173701 {
tidobj141011* Key;
TNimObject* Val;
};
struct tidtable173705 {
NI Counter;
tidpairseq173703* Data;
};
struct templctx253007 {
tsym173689* Owner;
tsym173689* Gensymowner;
tidtable173705 Mapping;
};
struct TY77088 {
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
struct tcell38646 {
NI Refcount;
TNimType* Typ;
};
struct tcellseq38662 {
NI Len;
NI Cap;
tcell38646** D;
};
struct tcellset38658 {
NI Counter;
NI Max;
tpagedesc38654* Head;
tpagedesc38654** Data;
};
typedef tsmallchunk21238* TY22022[512];
typedef ttrunk21211* ttrunkbuckets21213[256];
struct tintset21215 {
ttrunkbuckets21213 Data;
};
struct tmemregion22010 {
NI Minlargeobj;
NI Maxlargeobj;
TY22022 Freesmallchunks;
tllchunk22004* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk21240* Freechunkslist;
tintset21215 Chunkstarts;
tavlnode22008* Root;
tavlnode22008* Deleted;
tavlnode22008* Last;
tavlnode22008* Freeavlnodes;
};
struct tgcstat40614 {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct tgcheap40616 {
void* Stackbottom;
NI Cyclethreshold;
tcellseq38662 Zct;
tcellseq38662 Decstack;
tcellset38658 Cycleroots;
tcellseq38662 Tempstack;
NI Recgclock;
tmemregion22010 Region;
tgcstat40614 Stat;
};
struct ttype173693 {
  tidobj141011 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq173691* Sons;
tnode173659* N;
tsym173689* Destructor;
tsym173689* Owner;
tsym173689* Sym;
NI64 Size;
NI Align;
tloc173673 Loc;
};
struct tident141017 {
  tidobj141011 Sup;
NimStringDesc* S;
tident141017* Next;
NI H;
};
struct tscope173683 {
NI Depthlevel;
tstrtable173663 Symbols;
tnodeseq173653* Usingsyms;
tscope173683* Parent;
};
struct tinstantiation173679 {
tsym173689* Sym;
ttypeseq173691* Concretetypes;
TY173775* Usedby;
};
struct trope122007 {
  TNimObject Sup;
trope122007* Left;
trope122007* Right;
NI Length;
NimStringDesc* Data;
};
struct tlistentry110014 {
  TNimObject Sup;
tlistentry110014* Prev;
tlistentry110014* Next;
};
struct tlib173677 {
  tlistentry110014 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope122007* Name;
tnode173659* Path;
};
typedef NI TY21218[16];
struct tpagedesc38654 {
tpagedesc38654* Next;
NI Key;
TY21218 Bits;
};
struct tbasechunk21236 {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct tsmallchunk21238 {
  tbasechunk21236 Sup;
tsmallchunk21238* Next;
tsmallchunk21238* Prev;
tfreecell21228* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct tllchunk22004 {
NI Size;
NI Acc;
tllchunk22004* Next;
};
struct tbigchunk21240 {
  tbasechunk21236 Sup;
tbigchunk21240* Next;
tbigchunk21240* Prev;
NI Align;
NF Data;
};
struct ttrunk21211 {
ttrunk21211* Next;
NI Key;
TY21218 Bits;
};
typedef tavlnode22008* TY22014[2];
struct tavlnode22008 {
TY22014 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct tfreecell21228 {
tfreecell21228* Next;
NI Zerofield;
};
struct tnodeseq173653 {
  TGenericSeq Sup;
  tnode173659* data[SEQ_DECL_SIZE];
};
struct ttypeseq173691 {
  TGenericSeq Sup;
  ttype173693* data[SEQ_DECL_SIZE];
};
struct TY173786 {
  TGenericSeq Sup;
  tinstantiation173679* data[SEQ_DECL_SIZE];
};
struct tsymseq173661 {
  TGenericSeq Sup;
  tsym173689* data[SEQ_DECL_SIZE];
};
struct tidpairseq173703 {
  TGenericSeq Sup;
  tidpair173701 data[SEQ_DECL_SIZE];
};
struct TY173775 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, evaltemplateaux_253012)(tnode173659* templ, tnode173659* actual, templctx253007* c, tnode173659* result);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, len_174102)(tnode173659* n);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(void, add_174201)(tnode173659* father, tnode173659* son);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(tnode173659*, copytree_174078)(tnode173659* src);
N_NIMCALL(void, internalerror_139383)(NimStringDesc* errmsg);
N_NIMCALL(NimStringDesc*, HEX24_139459)(TY77088 x);
N_NIMCALL(TNimObject*, idtableget_180137)(tidtable173705 t, tidobj141011* key);
N_NIMCALL(void, chckObj)(TNimType* obj, TNimType* subclass);
N_NIMCALL(tsym173689*, copysym_173988)(tsym173689* s, NIM_BOOL keepid);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell38646*, usrtocell_42039)(void* usr);
static N_INLINE(void, rtladdzct_43602)(tcell38646* c);
N_NOINLINE(void, addzct_42015)(tcellseq38662* s, tcell38646* c);
N_NIMCALL(void, idtableput_180147)(tidtable173705* t, tidobj141011* key, TNimObject* val);
N_NIMCALL(tnode173659*, newsymnode_175301)(tsym173689* sym, tlineinfo137509 info);
N_NIMCALL(tnode173659*, copynode_174074)(tnode173659* src);
static N_INLINE(NI, sonslen_174022)(tnode173659* n);
N_NIMCALL(tnode173659*, evaltemplateargs_253201)(tnode173659* n, tsym173689* s);
static N_INLINE(NI, sonslen_174026)(ttype173693* n);
N_NIMCALL(void, globalerror_139336)(tlineinfo137509 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(tnode173659*, newnodei_173940)(NU8 kind, tlineinfo137509 info);
N_NIMCALL(void, localerror_139349)(tlineinfo137509 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, addson_174048)(tnode173659* father, tnode173659* son);
N_NIMCALL(tnode173659*, evaltemplate_253285)(tnode173659* n, tsym173689* tmpl, tsym173689* gensymowner);
N_NIMCALL(void, initidtable_173961)(tidtable173705* x);
N_NIMCALL(tnode173659*, getbody_215398)(tsym173689* s);
static N_INLINE(NIM_BOOL, isatom_178941)(tnode173659* n);
N_NIMCALL(NimStringDesc*, rendertree_191048)(tnode173659* n, NU8 renderflags);
static N_INLINE(NI, safelen_174146)(tnode173659* n);
static NIM_CONST TY173865 TMP3439 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3440, "sym", 3);
static NIM_CONST TY173865 TMP3441 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3442, "sons", 4);
STRING_LITERAL(TMP3444, "compiler/evaltempl.nim", 22);
NIM_CONST TY77088 TMP3443 = {((NimStringDesc*) &TMP3444),
34}
;
STRING_LITERAL(TMP3446, "", 0);
extern TFrame* frameptr_12037;
extern TNimType NTI173689; /* TSym */
extern tgcheap40616 gch_40644;
NI evaltemplatecounter_253283;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12037;
	frameptr_12037 = s;
}
static N_INLINE(void, popFrame)(void) {
	frameptr_12037 = (*frameptr_12037).prev;
}
static N_INLINE(NI, len_174102)(tnode173659* n) {
	NI result;
	nimfr("len", "ast.nim")
	result = 0;
	nimln(873, "ast.nim");
	{
		nimln(873, "ast.nim");
		if (((TMP3441[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3442));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(873, "ast.nim");
		result = 0;
	}	goto LA1;
	LA3: ;
	{
		nimln(874, "ast.nim");
		nimln(874, "ast.nim");
		if (((TMP3441[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3442));
		result = (*n).kindU.S6.Sons->Sup.len;
	}	LA1: ;
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
static N_INLINE(tcell38646*, usrtocell_42039)(void* usr) {
	tcell38646* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(116, "gc.nim");
	nimln(116, "gc.nim");
	nimln(116, "gc.nim");
	result = ((tcell38646*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell38646))))));
	popFrame();
	return result;
}
static N_INLINE(void, rtladdzct_43602)(tcell38646* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(197, "gc.nim");
	addzct_42015(&gch_40644.Zct, c);	popFrame();
}
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr("asgnRefNoCycle", "gc.nim")
	nimln(249, "gc.nim");
	{
		tcell38646* c;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(250, "gc.nim");
		c = usrtocell_42039(src);
		nimln(167, "gc.nim");
		(*c).Refcount += 8;
	}	LA3: ;
	nimln(252, "gc.nim");
	{
		tcell38646* c;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		nimln(253, "gc.nim");
		c = usrtocell_42039((*dest));
		nimln(254, "gc.nim");
		{
			nimln(165, "gc.nim");
			(*c).Refcount -= 8;
			nimln(166, "gc.nim");
			if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA11;
			nimln(255, "gc.nim");
			rtladdzct_43602(c);		}		LA11: ;
	}	LA7: ;
	nimln(256, "gc.nim");
	(*dest) = src;
	popFrame();
}
static N_INLINE(NI, sonslen_174022)(tnode173659* n) {
	NI result;
	nimfr("sonsLen", "ast.nim")
	result = 0;
	nimln(1209, "ast.nim");
	{
		nimln(1209, "ast.nim");
		if (((TMP3441[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3442));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(1209, "ast.nim");
		result = 0;
	}	goto LA1;
	LA3: ;
	{
		nimln(1210, "ast.nim");
		nimln(1210, "ast.nim");
		if (((TMP3441[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3442));
		result = (*n).kindU.S6.Sons->Sup.len;
	}	LA1: ;
	popFrame();
	return result;
}
N_NIMCALL(void, evaltemplateaux_253012)(tnode173659* templ, tnode173659* actual, templctx253007* c, tnode173659* result) {
	nimfr("evalTemplateAux", "evaltempl.nim")
	nimln(23, "evaltempl.nim");
	switch ((*templ).Kind) {
	case ((NU8) 3):
	{
		tsym173689* s;
		nimln(25, "evaltempl.nim");
		if (!(((TMP3439[(*templ).Kind/8] &(1<<((*templ).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3440));
		s = (*templ).kindU.S4.Sym;
		nimln(26, "evaltempl.nim");
		{
			nimln(26, "evaltempl.nim");
			if (!((*(*s).Owner).Sup.Id == (*(*c).Owner).Sup.Id)) goto LA4;
			nimln(27, "evaltempl.nim");
			{
				tnode173659* x;
				nimln(27, "evaltempl.nim");
				if (!((*s).Kind == ((NU8) 3))) goto LA8;
				nimln(28, "evaltempl.nim");
				if (((TMP3441[(*actual).Kind/8] &(1<<((*actual).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3442));
				if ((NU)((*s).Position) >= (NU)((*actual).kindU.S6.Sons->Sup.len)) raiseIndexError();
				x = (*actual).kindU.S6.Sons->data[(*s).Position];
				nimln(29, "evaltempl.nim");
				{
					tnode173659* y_253059;
					NI i_253113;
					NI HEX3Atmp_253115;
					NI LOC14;
					NI res_253117;
					nimln(29, "evaltempl.nim");
					if (!((*x).Kind == ((NU8) 147))) goto LA12;
					y_253059 = 0;
					i_253113 = 0;
					HEX3Atmp_253115 = 0;
					nimln(1419, "ast.nim");
					nimln(1419, "ast.nim");
					nimln(1419, "ast.nim");
					LOC14 = 0;
					LOC14 = len_174102(x);
					HEX3Atmp_253115 = subInt(LOC14, 1);
					nimln(1308, "system.nim");
					res_253117 = 0;
					nimln(1309, "system.nim");
					while (1) {
						nimln(1309, "system.nim");
						if (!(res_253117 <= HEX3Atmp_253115)) goto LA15;
						nimln(1308, "system.nim");
						i_253113 = res_253117;
						nimln(1419, "ast.nim");
						if (((TMP3441[(*x).Kind/8] &(1<<((*x).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3442));
						if ((NU)(i_253113) >= (NU)((*x).kindU.S6.Sons->Sup.len)) raiseIndexError();
						y_253059 = (*x).kindU.S6.Sons->data[i_253113];
						nimln(30, "evaltempl.nim");
						add_174201(result, y_253059);						nimln(1311, "system.nim");
						res_253117 = addInt(res_253117, 1);
					} LA15: ;
				}				goto LA10;
				LA12: ;
				{
					tnode173659* LOC17;
					nimln(32, "evaltempl.nim");
					nimln(32, "evaltempl.nim");
					LOC17 = 0;
					LOC17 = copytree_174078(x);
					add_174201(result, LOC17);				}				LA10: ;
			}			goto LA6;
			LA8: ;
			{
				tsym173689* x;
				TNimObject* LOC24;
				tnode173659* LOC29;
				nimln(826, "msgs.nim");
				{
					NimStringDesc* LOC23;
					nimln(826, "msgs.nim");
					nimln(730, "system.nim");
					if (!!((((*s).Flags &(1<<((((NU8) 31))&31)))!=0))) goto LA21;
					nimln(826, "msgs.nim");
					nimln(826, "msgs.nim");
					LOC23 = 0;
					LOC23 = HEX24_139459(TMP3443);
					internalerror_139383(LOC23);				}				LA21: ;
				nimln(35, "evaltempl.nim");
				nimln(35, "evaltempl.nim");
				LOC24 = 0;
				LOC24 = idtableget_180137((*c).Mapping, &s->Sup);
				if (LOC24) chckObj((*LOC24).m_type, (&NTI173689));
				x = ((tsym173689*) (LOC24));
				nimln(36, "evaltempl.nim");
				{
					nimln(36, "evaltempl.nim");
					if (!(x == NIM_NIL)) goto LA27;
					nimln(37, "evaltempl.nim");
					x = copysym_173988(s, NIM_FALSE);
					nimln(38, "evaltempl.nim");
					asgnRefNoCycle((void**) &(*x).Owner, (*c).Gensymowner);
					nimln(39, "evaltempl.nim");
					idtableput_180147(&(*c).Mapping, &s->Sup, &x->Sup.Sup);				}				LA27: ;
				nimln(40, "evaltempl.nim");
				nimln(40, "evaltempl.nim");
				LOC29 = 0;
				LOC29 = newsymnode_175301(x, (*templ).Info);
				add_174201(result, LOC29);			}			LA6: ;
		}		goto LA2;
		LA4: ;
		{
			tnode173659* LOC31;
			nimln(42, "evaltempl.nim");
			nimln(42, "evaltempl.nim");
			LOC31 = 0;
			LOC31 = copynode_174074(templ);
			add_174201(result, LOC31);		}		LA2: ;
	}	break;
	case ((NU8) 0) ... ((NU8) 2):
	case ((NU8) 4) ... ((NU8) 23):
	{
		tnode173659* LOC33;
		nimln(44, "evaltempl.nim");
		nimln(44, "evaltempl.nim");
		LOC33 = 0;
		LOC33 = copynode_174074(templ);
		add_174201(result, LOC33);	}	break;
	default:
	{
		tnode173659* res;
		NI i_253100;
		NI HEX3Atmp_253118;
		NI LOC35;
		NI TMP3445;
		NI res_253120;
		nimln(46, "evaltempl.nim");
		res = copynode_174074(templ);
		i_253100 = 0;
		HEX3Atmp_253118 = 0;
		nimln(47, "evaltempl.nim");
		nimln(47, "evaltempl.nim");
		nimln(47, "evaltempl.nim");
		LOC35 = 0;
		LOC35 = sonslen_174022(templ);
		TMP3445 = subInt(LOC35, 1);
		HEX3Atmp_253118 = (NI32)(TMP3445);
		nimln(1301, "system.nim");
		res_253120 = 0;
		nimln(1302, "system.nim");
		while (1) {
			nimln(1302, "system.nim");
			if (!(res_253120 <= HEX3Atmp_253118)) goto LA36;
			nimln(1301, "system.nim");
			i_253100 = res_253120;
			nimln(48, "evaltempl.nim");
			if (((TMP3441[(*templ).Kind/8] &(1<<((*templ).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3442));
			if ((NU)(i_253100) >= (NU)((*templ).kindU.S6.Sons->Sup.len)) raiseIndexError();
			evaltemplateaux_253012((*templ).kindU.S6.Sons->data[i_253100], actual, c, res);			nimln(1304, "system.nim");
			res_253120 = addInt(res_253120, 1);
		} LA36: ;
		nimln(49, "evaltempl.nim");
		add_174201(result, res);	}	break;
	}
	popFrame();
}
static N_INLINE(NI, sonslen_174026)(ttype173693* n) {
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
N_NIMCALL(tnode173659*, evaltemplateargs_253201)(tnode173659* n, tsym173689* s) {
	tnode173659* result;
	NI a;
	NI f;
	NI i_253218;
	NI HEX3Atmp_253276;
	NI TMP3447;
	NI res_253278;
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
		a = sonslen_174022(n);
	}	break;
	default:
	{
		nimln(84, "evaltempl.nim");
		a = 0;
	}	break;
	}
	nimln(85, "evaltempl.nim");
	f = sonslen_174026((*s).Typ);
	nimln(86, "evaltempl.nim");
	{
		nimln(706, "system.nim");
		if (!(f < a)) goto LA5;
		nimln(86, "evaltempl.nim");
		globalerror_139336((*n).Info, ((NU16) 133), ((NimStringDesc*) &TMP3446));	}	LA5: ;
	nimln(88, "evaltempl.nim");
	result = newnodei_173940(((NU8) 147), (*n).Info);
	i_253218 = 0;
	HEX3Atmp_253276 = 0;
	nimln(89, "evaltempl.nim");
	nimln(89, "evaltempl.nim");
	TMP3447 = subInt(f, 1);
	HEX3Atmp_253276 = (NI32)(TMP3447);
	nimln(1301, "system.nim");
	res_253278 = 1;
	nimln(1302, "system.nim");
	while (1) {
		tnode173659* arg;
		nimln(1302, "system.nim");
		if (!(res_253278 <= HEX3Atmp_253276)) goto LA7;
		nimln(1301, "system.nim");
		i_253218 = res_253278;
		nimln(90, "evaltempl.nim");
		nimln(90, "evaltempl.nim");
		{
			nimln(90, "evaltempl.nim");
			if (!(i_253218 < a)) goto LA10;
			if (((TMP3441[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3442));
			if ((NU)(i_253218) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			arg = (*n).kindU.S6.Sons->data[i_253218];
		}		goto LA8;
		LA10: ;
		{
			nimln(90, "evaltempl.nim");
			if (((TMP3441[(*(*(*s).Typ).N).Kind/8] &(1<<((*(*(*s).Typ).N).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3442));
			if ((NU)(i_253218) >= (NU)((*(*(*s).Typ).N).kindU.S6.Sons->Sup.len)) raiseIndexError();
			if (!(((TMP3439[(*(*(*(*s).Typ).N).kindU.S6.Sons->data[i_253218]).Kind/8] &(1<<((*(*(*(*s).Typ).N).kindU.S6.Sons->data[i_253218]).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3440));
			arg = copytree_174078((*(*(*(*(*s).Typ).N).kindU.S6.Sons->data[i_253218]).kindU.S4.Sym).Ast);
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
			localerror_139349((*n).Info, ((NU16) 133), ((NimStringDesc*) &TMP3446));		}		LA17: ;
		nimln(93, "evaltempl.nim");
		addson_174048(result, arg);		nimln(1304, "system.nim");
		res_253278 = addInt(res_253278, 1);
	} LA7: ;
	popFrame();
	return result;
}
static N_INLINE(NIM_BOOL, isatom_178941)(tnode173659* n) {
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
static N_INLINE(NI, safelen_174146)(tnode173659* n) {
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
		if (((TMP3441[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3442));
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
		if (((TMP3441[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3442));
		result = (*n).kindU.S6.Sons->Sup.len;
	}	LA1: ;
	popFrame();
	return result;
}
N_NIMCALL(tnode173659*, evaltemplate_253285)(tnode173659* n, tsym173689* tmpl, tsym173689* gensymowner) {
	tnode173659* result;
	tnode173659* args;
	templctx253007 ctx;
	tnode173659* body;
	nimfr("evalTemplate", "evaltempl.nim")
	result = 0;
	nimln(99, "evaltempl.nim");
	evaltemplatecounter_253283 = addInt(evaltemplatecounter_253283, 1);
	nimln(100, "evaltempl.nim");
	{
		nimln(706, "system.nim");
		if (!(100 < evaltemplatecounter_253283)) goto LA3;
		nimln(101, "evaltempl.nim");
		globalerror_139336((*n).Info, ((NU16) 183), ((NimStringDesc*) &TMP3446));		nimln(102, "evaltempl.nim");
		result = n;
	}	LA3: ;
	nimln(105, "evaltempl.nim");
	args = evaltemplateargs_253201(n, tmpl);
	memset((void*)&ctx, 0, sizeof(ctx));
	nimln(107, "evaltempl.nim");
	ctx.Owner = tmpl;
	nimln(108, "evaltempl.nim");
	ctx.Gensymowner = gensymowner;
	nimln(109, "evaltempl.nim");
	initidtable_173961(&ctx.Mapping);	nimln(111, "evaltempl.nim");
	body = getbody_215398(tmpl);
	nimln(112, "evaltempl.nim");
	{
		NIM_BOOL LOC7;
		nimln(112, "evaltempl.nim");
		LOC7 = 0;
		LOC7 = isatom_178941(body);
		if (!LOC7) goto LA8;
		nimln(113, "evaltempl.nim");
		result = newnodei_173940(((NU8) 37), (*body).Info);
		nimln(114, "evaltempl.nim");
		evaltemplateaux_253012(body, args, &ctx, result);		nimln(115, "evaltempl.nim");
		{
			NI LOC12;
			nimln(115, "evaltempl.nim");
			nimln(115, "evaltempl.nim");
			LOC12 = 0;
			LOC12 = len_174102(result);
			if (!(LOC12 == 1)) goto LA13;
			nimln(115, "evaltempl.nim");
			if (((TMP3441[(*result).Kind/8] &(1<<((*result).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3442));
			if ((NU)(0) >= (NU)((*result).kindU.S6.Sons->Sup.len)) raiseIndexError();
			result = (*result).kindU.S6.Sons->data[0];
		}		goto LA10;
		LA13: ;
		{
			NimStringDesc* LOC16;
			nimln(117, "evaltempl.nim");
			nimln(118, "evaltempl.nim");
			LOC16 = 0;
			LOC16 = rendertree_191048(result, 4);
			globalerror_139336((*result).Info, ((NU16) 1), LOC16);		}		LA10: ;
	}	goto LA5;
	LA8: ;
	{
		NI i_253329;
		NI HEX3Atmp_253353;
		NI LOC18;
		NI TMP3448;
		NI res_253355;
		nimln(120, "evaltempl.nim");
		result = copynode_174074(body);
		i_253329 = 0;
		HEX3Atmp_253353 = 0;
		nimln(122, "evaltempl.nim");
		nimln(122, "evaltempl.nim");
		nimln(122, "evaltempl.nim");
		LOC18 = 0;
		LOC18 = safelen_174146(body);
		TMP3448 = subInt(LOC18, 1);
		HEX3Atmp_253353 = (NI32)(TMP3448);
		nimln(1301, "system.nim");
		res_253355 = 0;
		nimln(1302, "system.nim");
		while (1) {
			nimln(1302, "system.nim");
			if (!(res_253355 <= HEX3Atmp_253353)) goto LA19;
			nimln(1301, "system.nim");
			i_253329 = res_253355;
			nimln(123, "evaltempl.nim");
			if (((TMP3441[(*body).Kind/8] &(1<<((*body).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3442));
			if ((NU)(i_253329) >= (NU)((*body).kindU.S6.Sons->Sup.len)) raiseIndexError();
			evaltemplateaux_253012((*body).kindU.S6.Sons->data[i_253329], args, &ctx, result);			nimln(1304, "system.nim");
			res_253355 = addInt(res_253355, 1);
		} LA19: ;
	}	LA5: ;
	nimln(125, "evaltempl.nim");
	evaltemplatecounter_253283 = subInt(evaltemplatecounter_253283, 1);
	popFrame();
	return result;
}N_NOINLINE(void, compilerevaltemplInit)(void) {
	nimfr("evaltempl", "evaltempl.nim")
	nimln(95, "evaltempl.nim");
	evaltemplatecounter_253283 = 0;
	popFrame();
}

N_NOINLINE(void, compilerevaltemplDatInit)(void) {
}

