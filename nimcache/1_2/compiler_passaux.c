/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct tpasscontext224003 tpasscontext224003;
typedef struct tsym173689 tsym173689;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tidobj141011 tidobj141011;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq173691 ttypeseq173691;
typedef struct ttype173693 ttype173693;
typedef struct tscope173683 tscope173683;
typedef struct TY173786 TY173786;
typedef struct tinstantiation173679 tinstantiation173679;
typedef struct tstrtable173663 tstrtable173663;
typedef struct tsymseq173661 tsymseq173661;
typedef struct tident141017 tident141017;
typedef struct tlineinfo137509 tlineinfo137509;
typedef struct tnode173659 tnode173659;
typedef struct tloc173673 tloc173673;
typedef struct trope122007 trope122007;
typedef struct tlib173677 tlib173677;
typedef struct tnodeseq173653 tnodeseq173653;
typedef struct tpass224015 tpass224015;
typedef struct trodreader213023 trodreader213023;
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
typedef struct tindex213021 tindex213021;
typedef struct tiitable180211 tiitable180211;
typedef struct tiipairseq180209 tiipairseq180209;
typedef struct tiipair180207 tiipair180207;
typedef struct tidtable173705 tidtable173705;
typedef struct tidpairseq173703 tidpairseq173703;
typedef struct tidpair173701 tidpair173701;
typedef struct tmemfile211204 tmemfile211204;
typedef struct tbasechunk21236 tbasechunk21236;
typedef struct tfreecell21228 tfreecell21228;
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
struct tidobj141011 {
  TNimObject Sup;
NI Id;
};
struct tstrtable173663 {
NI Counter;
tsymseq173661* Data;
};
struct tlineinfo137509 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
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
struct tident141017 {
  tidobj141011 Sup;
NimStringDesc* S;
tident141017* Next;
NI H;
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
typedef N_NIMCALL_PTR(tpasscontext224003*, tpassopen224007) (tsym173689* module);
typedef N_NIMCALL_PTR(tpasscontext224003*, tpassopencached224009) (tsym173689* module, trodreader213023* rd);
typedef N_NIMCALL_PTR(tnode173659*, tpassprocess224013) (tpasscontext224003* p, tnode173659* toplevelstmt);
typedef N_NIMCALL_PTR(tnode173659*, tpassclose224011) (tpasscontext224003* p, tnode173659* n);
struct tpass224015 {
tpassopen224007 Field0;
tpassopencached224009 Field1;
tpassprocess224013 Field2;
tpassclose224011 Field3;
};
typedef NU8 TY173865[20];
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
struct tpasscontext224003 {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
struct tiipair180207 {
NI Key;
NI Val;
};
struct tiitable180211 {
NI Counter;
tiipairseq180209* Data;
};
struct tindex213021 {
NI Lastidxkey;
NI Lastidxval;
tiitable180211 Tab;
NimStringDesc* R;
NI Offset;
};
struct tidpair173701 {
tidobj141011* Key;
TNimObject* Val;
};
struct tidtable173705 {
NI Counter;
tidpairseq173703* Data;
};
struct tmemfile211204 {
void* Mem;
NI Size;
NI Fhandle;
NI Maphandle;
};
struct trodreader213023 {
  TNimObject Sup;
NI Pos;
NCSTRING S;
NU32 Options;
NU8 Reason;
TY173775* Moddeps;
TY173775* Files;
NI Dataidx;
NI Convertersidx;
NI Initidx;
NI Interfidx;
NI Compilerprocsidx;
NI Methodsidx;
NimStringDesc* Filename;
tindex213021 Index;
tindex213021 Imports;
NI Readerindex;
NI Line;
NI Moduleid;
tidtable173705 Syms;
tmemfile211204 Memfile;
tsymseq173661* Methods;
NimStringDesc* Origfile;
NIM_BOOL Inviewmode;
};
typedef NI TY21218[8];
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
struct tnodeseq173653 {
  TGenericSeq Sup;
  tnode173659* data[SEQ_DECL_SIZE];
};
struct TY173775 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct tiipairseq180209 {
  TGenericSeq Sup;
  tiipair180207 data[SEQ_DECL_SIZE];
};
struct tidpairseq173703 {
  TGenericSeq Sup;
  tidpair173701 data[SEQ_DECL_SIZE];
};
N_NIMCALL(tpasscontext224003*, verboseopen_415006)(tsym173689* s);
N_NIMCALL(void, rawmessage_139191)(NU16 msg, NimStringDesc* arg);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(tnode173659*, verboseprocess_415013)(tpasscontext224003* context, tnode173659* n);
N_NIMCALL(void, internalerror_139383)(NimStringDesc* errmsg);
N_NIMCALL(void, message_139362)(tlineinfo137509 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_NIMCALL(tnode173659*, cleanup_415046)(tpasscontext224003* c, tnode173659* n);
static N_INLINE(NI, sonslen_174022)(tnode173659* n);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(tsym173689*, getmodule_180187)(tsym173689* s);
N_NIMCALL(NIM_BOOL, astneeded_224081)(tsym173689* s);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell38646*, usrtocell_42039)(void* usr);
static N_INLINE(void, rtladdzct_43602)(tcell38646* c);
N_NOINLINE(void, addzct_42015)(tcellseq38662* s, tcell38646* c);
STRING_LITERAL(TMP6997, "logpass: context is not nil", 27);
NIM_CONST tpass224015 verbosepass_415044 = {verboseopen_415006,
NIM_NIL,
verboseprocess_415013,
NIM_NIL}
;
static NIM_CONST TY173865 TMP6998 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP6999, "sons", 4);
static NIM_CONST TY173865 TMP7001 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP7002, "sym", 3);
NIM_CONST tpass224015 cleanuppass_415164 = {NIM_NIL,
NIM_NIL,
cleanup_415046,
cleanup_415046}
;
extern NI gverbosity_115117;
extern TFrame* frameptr_12037;
extern NU64 gnotes_138070;
extern NI gbackendid_172007;
extern NU32 gglobaloptions_115109;
extern tnode173659* emptynode_174505;
extern tgcheap40616 gch_40644;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12037;
	frameptr_12037 = s;
}
static N_INLINE(void, popFrame)(void) {
	frameptr_12037 = (*frameptr_12037).prev;
}
N_NIMCALL(tpasscontext224003*, verboseopen_415006)(tsym173689* s) {
	tpasscontext224003* result;
	nimfr("verboseOpen", "passaux.nim")
	result = 0;
	nimln(17, "passaux.nim");
	result = NIM_NIL;
	nimln(18, "passaux.nim");
	{
		nimln(706, "system.nim");
		if (!(0 < gverbosity_115117)) goto LA3;
		nimln(18, "passaux.nim");
		rawmessage_139191(((NU16) 254), (*(*s).Name).S);	}	LA3: ;
	popFrame();
	return result;
}
N_NIMCALL(tnode173659*, verboseprocess_415013)(tpasscontext224003* context, tnode173659* n) {
	tnode173659* result;
	nimfr("verboseProcess", "passaux.nim")
	result = 0;
	nimln(21, "passaux.nim");
	result = n;
	nimln(22, "passaux.nim");
	{
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!((context == NIM_NIL))) goto LA3;
		nimln(22, "passaux.nim");
		internalerror_139383(((NimStringDesc*) &TMP6997));	}	LA3: ;
	nimln(23, "passaux.nim");
	{
		NimStringDesc* LOC9;
		nimln(23, "passaux.nim");
		if (!(gverbosity_115117 == 3)) goto LA7;
		nimln(26, "passaux.nim");
		gnotes_138070 |=((NI64)(1)<<(((((NU16) 254)- 222))%(sizeof(NI64)*8)));
		nimln(27, "passaux.nim");
		nimln(27, "passaux.nim");
		LOC9 = 0;
		LOC9 = nimIntToStr(gbackendid_172007);
		message_139362((*n).Info, ((NU16) 254), LOC9);	}	LA7: ;
	popFrame();
	return result;
}
static N_INLINE(NI, sonslen_174022)(tnode173659* n) {
	NI result;
	nimfr("sonsLen", "ast.nim")
	result = 0;
	nimln(1209, "ast.nim");
	{
		nimln(1209, "ast.nim");
		if (((TMP6998[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP6999));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(1209, "ast.nim");
		result = 0;
	}	goto LA1;
	LA3: ;
	{
		nimln(1210, "ast.nim");
		nimln(1210, "ast.nim");
		if (((TMP6998[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP6999));
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
static N_INLINE(tcell38646*, usrtocell_42039)(void* usr) {
	tcell38646* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(116, "gc.nim");
	nimln(116, "gc.nim");
	nimln(116, "gc.nim");
	result = ((tcell38646*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell38646))))));
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
			if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA11;
			nimln(255, "gc.nim");
			rtladdzct_43602(c);		}		LA11: ;
	}	LA7: ;
	nimln(256, "gc.nim");
	(*dest) = src;
	popFrame();
}
N_NIMCALL(tnode173659*, cleanup_415046)(tpasscontext224003* c, tnode173659* n) {
	tnode173659* result;
	nimfr("cleanUp", "passaux.nim")
	result = 0;
	nimln(32, "passaux.nim");
	result = n;
	nimln(34, "passaux.nim");
	{
		NIM_BOOL LOC3;
		nimln(34, "passaux.nim");
		LOC3 = 0;
		nimln(730, "system.nim");
		LOC3 = ((gglobaloptions_115109 &(1<<((((NU8) 2))&31)))!=0);
		if (LOC3) goto LA4;
		nimln(34, "passaux.nim");
		LOC3 = (n == NIM_NIL);
		LA4: ;
		if (!LOC3) goto LA5;
		nimln(34, "passaux.nim");
		goto BeforeRet;
	}	LA5: ;
	nimln(35, "passaux.nim");
	switch ((*n).Kind) {
	case ((NU8) 114):
	{
		NI i_415082;
		NI HEX3Atmp_415157;
		NI LOC8;
		NI TMP7000;
		NI res_415159;
		i_415082 = 0;
		HEX3Atmp_415157 = 0;
		nimln(37, "passaux.nim");
		nimln(37, "passaux.nim");
		nimln(37, "passaux.nim");
		LOC8 = 0;
		LOC8 = sonslen_174022(n);
		TMP7000 = subInt(LOC8, 1);
		HEX3Atmp_415157 = (NI64)(TMP7000);
		nimln(1301, "system.nim");
		res_415159 = 0;
		nimln(1302, "system.nim");
		while (1) {
			tnode173659* LOC10;
			nimln(1302, "system.nim");
			if (!(res_415159 <= HEX3Atmp_415157)) goto LA9;
			nimln(1301, "system.nim");
			i_415082 = res_415159;
			nimln(37, "passaux.nim");
			nimln(37, "passaux.nim");
			if (((TMP6998[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP6999));
			if ((NU)(i_415082) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			LOC10 = 0;
			LOC10 = cleanup_415046(c, (*n).kindU.S6.Sons->data[i_415082]);
			nimln(1304, "system.nim");
			res_415159 = addInt(res_415159, 1);
		} LA9: ;
	}	break;
	case ((NU8) 79):
	case ((NU8) 80):
	{
		nimln(39, "passaux.nim");
		{
			tsym173689* s;
			nimln(39, "passaux.nim");
			if (((TMP6998[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP6999));
			if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			if (!((*(*n).kindU.S6.Sons->data[0]).Kind == ((NU8) 3))) goto LA14;
			nimln(40, "passaux.nim");
			if (((TMP6998[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP6999));
			if ((NU)(0) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			if (!(((TMP7001[(*(*n).kindU.S6.Sons->data[0]).Kind/8] &(1<<((*(*n).kindU.S6.Sons->data[0]).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP7002));
			s = (*(*n).kindU.S6.Sons->data[0]).kindU.S4.Sym;
			nimln(41, "passaux.nim");
			{
				NIM_BOOL LOC18;
				tsym173689* LOC19;
				NIM_BOOL LOC21;
				nimln(41, "passaux.nim");
				LOC18 = 0;
				nimln(731, "system.nim");
				nimln(731, "system.nim");
				nimln(41, "passaux.nim");
				LOC19 = 0;
				LOC19 = getmodule_180187(s);
				LOC18 = !((((*LOC19).Flags &(1<<((((NU8) 25))&31)))!=0));
				if (!(LOC18)) goto LA20;
				nimln(41, "passaux.nim");
				nimln(41, "passaux.nim");
				LOC21 = 0;
				LOC21 = astneeded_224081(s);
				LOC18 = !(LOC21);
				LA20: ;
				if (!LOC18) goto LA22;
				nimln(42, "passaux.nim");
				if (((TMP6998[(*(*s).Ast).Kind/8] &(1<<((*(*s).Ast).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP6999));
				if ((NU)(6) >= (NU)((*(*s).Ast).kindU.S6.Sons->Sup.len)) raiseIndexError();
				asgnRefNoCycle((void**) &(*(*s).Ast).kindU.S6.Sons->data[6], emptynode_174505);
			}			LA22: ;
		}		LA14: ;
	}	break;
	default:
	{
	}	break;
	}
	BeforeRet: ;	popFrame();
	return result;
}N_NOINLINE(void, compilerpassauxInit)(void) {
	nimfr("passaux", "passaux.nim")
	popFrame();
}

N_NOINLINE(void, compilerpassauxDatInit)(void) {
}

