/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <setjmp.h>
typedef struct tpasscontext264005 tpasscontext264005;
typedef struct tsym209848 tsym209848;
typedef struct tgen538010 tgen538010;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tdocumentor367007 tdocumentor367007;
typedef struct tcell45346 tcell45346;
typedef struct tcellseq45362 tcellseq45362;
typedef struct tgcheap47616 tgcheap47616;
typedef struct tcellset45358 tcellset45358;
typedef struct tpagedesc45354 tpagedesc45354;
typedef struct tmemregion27610 tmemregion27610;
typedef struct tsmallchunk26840 tsmallchunk26840;
typedef struct tllchunk27604 tllchunk27604;
typedef struct tbigchunk26842 tbigchunk26842;
typedef struct tintset26817 tintset26817;
typedef struct ttrunk26813 ttrunk26813;
typedef struct tavlnode27608 tavlnode27608;
typedef struct tgcstat47614 tgcstat47614;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct stringtableobj132012 stringtableobj132012;
typedef struct tidobj185015 tidobj185015;
typedef struct ttypeseq209850 ttypeseq209850;
typedef struct ttype209854 ttype209854;
typedef struct tscope209842 tscope209842;
typedef struct TY209949 TY209949;
typedef struct tinstantiation209838 tinstantiation209838;
typedef struct tstrtable209822 tstrtable209822;
typedef struct tsymseq209820 tsymseq209820;
typedef struct tident185021 tident185021;
typedef struct tlineinfo181340 tlineinfo181340;
typedef struct tnode209818 tnode209818;
typedef struct tloc209832 tloc209832;
typedef struct trope178009 trope178009;
typedef struct tlib209836 tlib209836;
typedef struct trstgenerator336016 trstgenerator336016;
typedef struct TY336034 TY336034;
typedef struct ttocentry336012 ttocentry336012;
typedef struct trstnode320011 trstnode320011;
typedef struct table336052 table336052;
typedef struct keyvaluepairseq336055 keyvaluepairseq336055;
typedef struct keyvaluepair336058 keyvaluepair336058;
typedef struct Exception Exception;
typedef struct TSafePoint TSafePoint;
typedef struct tbasechunk26838 tbasechunk26838;
typedef struct tfreecell26830 tfreecell26830;
typedef struct keyvaluepairseq132010 keyvaluepairseq132010;
typedef struct keyvaluepair132008 keyvaluepair132008;
typedef struct tnodeseq209812 tnodeseq209812;
typedef struct TY209938 TY209938;
typedef struct tlistentry128022 tlistentry128022;
typedef struct trstnodeseq320009 trstnodeseq320009;
typedef N_NIMCALL_PTR(void, TY3289) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3294) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3289 marker;
TY3294 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  tpasscontext264005  {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
struct  tgen538010  {
  tpasscontext264005 Sup;
tdocumentor367007* Doc;
tsym209848* Module;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tcell45346  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq45362  {
NI Len;
NI Cap;
tcell45346** D;
};
struct  tcellset45358  {
NI Counter;
NI Max;
tpagedesc45354* Head;
tpagedesc45354** Data;
};
typedef tsmallchunk26840* TY27622[512];
typedef ttrunk26813* ttrunkbuckets26815[256];
struct  tintset26817  {
ttrunkbuckets26815 Data;
};
struct  tmemregion27610  {
NI Minlargeobj;
NI Maxlargeobj;
TY27622 Freesmallchunks;
tllchunk27604* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk26842* Freechunkslist;
tintset26817 Chunkstarts;
tavlnode27608* Root;
tavlnode27608* Deleted;
tavlnode27608* Last;
tavlnode27608* Freeavlnodes;
};
struct  tgcstat47614  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap47616  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq45362 Zct;
tcellseq45362 Decstack;
tcellset45358 Cycleroots;
tcellseq45362 Tempstack;
NI Recgclock;
tmemregion27610 Region;
tgcstat47614 Stat;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tidobj185015  {
  TNimObject Sup;
NI Id;
};
struct  tstrtable209822  {
NI Counter;
tsymseq209820* Data;
};
struct  tlineinfo181340  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  tloc209832  {
NU8 K;
NU8 S;
NU16 Flags;
ttype209854* T;
trope178009* R;
trope178009* Heaproot;
};
struct  tsym209848  {
  tidobj185015 Sup;
NU8 Kind;
union{
struct {ttypeseq209850* Typeinstcache;
tscope209842* Typscope;
} S1;
struct {TY209949* Procinstcache;
tscope209842* Scope;
} S2;
struct {TY209949* Usedgenerics;
tstrtable209822 Tab;
} S3;
struct {tsym209848* Guard;
} S4;
} kindU;
NU16 Magic;
ttype209854* Typ;
tident185021* Name;
tlineinfo181340 Info;
tsym209848* Owner;
NU32 Flags;
tnode209818* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc209832 Loc;
tlib209836* Annex;
tnode209818* Constraint;
};
struct  ttocentry336012  {
trstnode320011* N;
NimStringDesc* Refname;
NimStringDesc* Header;
};
typedef N_NIMCALL_PTR(NimStringDesc*, tfindfilehandler321023) (NimStringDesc* filename);
typedef N_NIMCALL_PTR(void, tmsghandler321021) (NimStringDesc* filename, NI line, NI col, NU8 msgkind, NimStringDesc* arg);
typedef NimStringDesc* TY336042[5];
struct keyvaluepair336058 {
NU8 Field0;
NimStringDesc* Field1;
NI Field2;
};
struct  table336052  {
keyvaluepairseq336055* Data;
NI Counter;
};
struct  trstgenerator336016  {
  TNimObject Sup;
NU8 Target;
stringtableobj132012* Config;
NI Splitafter;
TY336034* Tocpart;
NIM_BOOL Hastoc;
NimStringDesc* Theindex;
NU8 Options;
tfindfilehandler321023 Findfile;
tmsghandler321021 Msghandler;
NimStringDesc* Filename;
TY336042 Meta;
NimStringDesc* Currentsection;
table336052 Seenindexterms;
};
typedef trope178009* tsections367005[26];
struct  tdocumentor367007  {
  trstgenerator336016 Sup;
trope178009* Moddesc;
NI Id;
tsections367005 Toc;
tsections367005 Section;
NimStringDesc* Indexvalfilename;
NimStringDesc* Analytics;
stringtableobj132012* Seensymbols;
};
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClPrc) (Exception* e, void* ClEnv);
void* ClEnv;
} TY15209;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY15209 raiseAction;
};
typedef NI TY26820[16];
struct  tpagedesc45354  {
tpagedesc45354* Next;
NI Key;
TY26820 Bits;
};
struct  tbasechunk26838  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk26840  {
  tbasechunk26838 Sup;
tsmallchunk26840* Next;
tsmallchunk26840* Prev;
tfreecell26830* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk27604  {
NI Size;
NI Acc;
tllchunk27604* Next;
};
struct  tbigchunk26842  {
  tbasechunk26838 Sup;
tbigchunk26842* Next;
tbigchunk26842* Prev;
NI Align;
NF Data;
};
struct  ttrunk26813  {
ttrunk26813* Next;
NI Key;
TY26820 Bits;
};
typedef tavlnode27608* TY27614[2];
struct  tavlnode27608  {
TY27614 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct keyvaluepair132008 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  stringtableobj132012  {
  TNimObject Sup;
NI Counter;
keyvaluepairseq132010* Data;
NU8 Mode;
};
struct  ttype209854  {
  tidobj185015 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq209850* Sons;
tnode209818* N;
tsym209848* Owner;
tsym209848* Sym;
tsym209848* Destructor;
tsym209848* Deepcopy;
NI64 Size;
NI16 Align;
NI16 Locklevel;
tloc209832 Loc;
};
struct  tscope209842  {
NI Depthlevel;
tstrtable209822 Symbols;
tnodeseq209812* Usingsyms;
tscope209842* Parent;
};
struct  tinstantiation209838  {
tsym209848* Sym;
ttypeseq209850* Concretetypes;
TY209938* Usedby;
};
struct  tident185021  {
  tidobj185015 Sup;
NimStringDesc* S;
tident185021* Next;
NI H;
};
struct  tnode209818  {
ttype209854* Typ;
tlineinfo181340 Info;
NU16 Flags;
NU8 Kind;
union{
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym209848* Sym;
} S4;
struct {tident185021* Ident;
} S5;
struct {tnodeseq209812* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
struct  trope178009  {
  TNimObject Sup;
trope178009* Left;
trope178009* Right;
NI Length;
NimStringDesc* Data;
};
struct  tlistentry128022  {
  TNimObject Sup;
tlistentry128022* Prev;
tlistentry128022* Next;
};
struct  tlib209836  {
  tlistentry128022 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope178009* Name;
tnode209818* Path;
};
struct  trstnode320011  {
NU8 Kind;
NimStringDesc* Text;
NI Level;
trstnodeseq320009* Sons;
};
struct  tfreecell26830  {
tfreecell26830* Next;
NI Zerofield;
};
struct ttypeseq209850 {
  TGenericSeq Sup;
  ttype209854* data[SEQ_DECL_SIZE];
};
struct TY209949 {
  TGenericSeq Sup;
  tinstantiation209838* data[SEQ_DECL_SIZE];
};
struct tsymseq209820 {
  TGenericSeq Sup;
  tsym209848* data[SEQ_DECL_SIZE];
};
struct TY336034 {
  TGenericSeq Sup;
  ttocentry336012 data[SEQ_DECL_SIZE];
};
struct keyvaluepairseq336055 {
  TGenericSeq Sup;
  keyvaluepair336058 data[SEQ_DECL_SIZE];
};
struct keyvaluepairseq132010 {
  TGenericSeq Sup;
  keyvaluepair132008 data[SEQ_DECL_SIZE];
};
struct tnodeseq209812 {
  TGenericSeq Sup;
  tnode209818* data[SEQ_DECL_SIZE];
};
struct TY209938 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct trstnodeseq320009 {
  TGenericSeq Sup;
  trstnode320011* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP4753)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell45346*, usrtocell_49246)(void* usr);
static N_INLINE(void, rtladdzct_50804)(tcell45346* c);
N_NOINLINE(void, addzct_49217)(tcellseq45362* s, tcell45346* c);
N_NIMCALL(tdocumentor367007*, newdocumentor_367065)(NimStringDesc* filename, stringtableobj132012* config);
N_NIMCALL(NimStringDesc*, tofilename_182628)(NI32 fileidx);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_51625)(tcell45346* c);
static N_INLINE(NIM_BOOL, canbecycleroot_49267)(tcell45346* c);
static N_INLINE(void, rtladdcycleroot_50029)(tcell45346* c);
N_NOINLINE(void, incl_46271)(tcellset45358* s, tcell45346* cell);
static N_INLINE(void, decref_51204)(tcell45346* c);
N_NIMCALL(void, generatedoc_368473)(tdocumentor367007* d, tnode209818* n);
N_NIMCALL(void, writeoutput_370404)(tdocumentor367007* d, NimStringDesc* filename, NimStringDesc* outext, NIM_BOOL usewarning);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(void, generateindex_370381)(tdocumentor367007* d);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(Exception*, getCurrentException)(void);
static N_INLINE(void, popCurrentException)(void);
N_NIMCALL(void, reraiseException)(void);
STRING_LITERAL(TMP4754, "html", 4);
extern TNimType NTI264005; /* TPassContext */
TNimType NTI538010; /* TGen */
extern TNimType NTI367009; /* PDoc */
extern TNimType NTI209816; /* PSym */
TNimType NTI538012; /* PGen */
extern tgcheap47616 gch_47644;
extern stringtableobj132012* gconfigvars_170234;
extern NIM_BOOL gwholeproject_170139;
extern TSafePoint* exchandler_16643;
extern TNimType NTI3431; /* IOError */
extern Exception* currexception_16645;
N_NIMCALL(void, TMP4753)(void* p, NI op) {
	tgen538010* a;
	a = (tgen538010*)p;
	nimGCvisit((void*)(*a).Doc, op);
	nimGCvisit((void*)(*a).Module, op);
}

static N_INLINE(tcell45346*, usrtocell_49246)(void* usr) {
	tcell45346* result;
	result = 0;
	result = ((tcell45346*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell45346))))));
	return result;
}

static N_INLINE(void, rtladdzct_50804)(tcell45346* c) {
	addzct_49217((&gch_47644.Zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tcell45346* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_49246(src);
		(*c).Refcount += 8;
	}
	LA3: ;
	{
		tcell45346* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_49246((*dest));
		{
			(*c).Refcount -= 8;
			if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA11;
			rtladdzct_50804(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

static N_INLINE(NIM_BOOL, canbecycleroot_49267)(tcell45346* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_50029)(tcell45346* c) {
	{
		if (!!((((NI) ((NI)((*c).Refcount & 3))) == 3))) goto LA3;
		(*c).Refcount = (NI)((NI)((*c).Refcount & -4) | 3);
		incl_46271((&gch_47644.Cycleroots), c);
	}
	LA3: ;
}

static N_INLINE(void, incref_51625)(tcell45346* c) {
	(*c).Refcount = (NI)((NU32)((*c).Refcount) + (NU32)(8));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_49267(c);
		if (!LOC3) goto LA4;
		rtladdcycleroot_50029(c);
	}
	LA4: ;
}

static N_INLINE(void, decref_51204)(tcell45346* c) {
	{
		(*c).Refcount -= 8;
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
		rtladdzct_50804(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = 0;
		LOC6 = canbecycleroot_49267(c);
		if (!LOC6) goto LA7;
		rtladdcycleroot_50029(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		tcell45346* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_49246(src);
		incref_51625(LOC5);
	}
	LA3: ;
	{
		tcell45346* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_49246((*dest));
		decref_51204(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

N_NIMCALL(tpasscontext264005*, myopen_538075)(tsym209848* module) {
	tpasscontext264005* result;
	tgen538010* g;
	tdocumentor367007* d;
	NimStringDesc* LOC1;
	result = 0;
	g = 0;
	g = (tgen538010*) newObj((&NTI538012), sizeof(tgen538010));
	(*g).Sup.Sup.m_type = (&NTI538010);
	asgnRefNoCycle((void**) (&(*g).Module), module);
	LOC1 = 0;
	LOC1 = tofilename_182628(((NI32) ((*module).Position)));
	d = newdocumentor_367065(LOC1, gconfigvars_170234);
	(*d).Sup.Hastoc = NIM_TRUE;
	asgnRef((void**) (&(*g).Doc), d);
	result = &g->Sup;
	return result;
}

N_NIMCALL(tnode209818*, processnode_538063)(tpasscontext264005* c, tnode209818* n) {
	tnode209818* result;
	tgen538010* g;
	result = 0;
	result = n;
	g = ((tgen538010*) (c));
	generatedoc_368473((*g).Doc, n);
	return result;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = exchandler_16643;
	exchandler_16643 = s;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_16643 = (*exchandler_16643).prev;
}

static N_INLINE(Exception*, getCurrentException)(void) {
	Exception* result;
	result = 0;
	result = currexception_16645;
	return result;
}

static N_INLINE(void, popCurrentException)(void) {
	asgnRef((void**) (&currexception_16645), (*currexception_16645).parent);
}

N_NIMCALL(tnode209818*, close_538018)(tpasscontext264005* p, tnode209818* n) {
	tnode209818* result;
	tgen538010* g;
	NIM_BOOL usewarning;
	result = 0;
	g = ((tgen538010*) (p));
	usewarning = !((((*(*g).Module).Flags &(1<<((((NU8) 12))&31)))!=0));
	{
		NIM_BOOL LOC3;
		NimStringDesc* LOC7;
		TSafePoint TMP4755;
		LOC3 = 0;
		LOC3 = gwholeproject_170139;
		if (LOC3) goto LA4;
		LOC3 = (((*(*g).Module).Flags &(1<<((((NU8) 12))&31)))!=0);
		LA4: ;
		if (!LOC3) goto LA5;
		LOC7 = 0;
		LOC7 = tofilename_182628(((NI32) ((*(*g).Module).Position)));
		writeoutput_370404((*g).Doc, LOC7, ((NimStringDesc*) &TMP4754), usewarning);
		pushSafePoint(&TMP4755);
		TMP4755.status = _setjmp(TMP4755.context);
		if (TMP4755.status == 0) {
			generateindex_370381((*g).Doc);
			popSafePoint();
		}
		else {
			popSafePoint();
			if (isObj(getCurrentException()->Sup.m_type, (&NTI3431))) {
				TMP4755.status = 0;
				popCurrentException();
			}
		}
		if (TMP4755.status != 0) reraiseException();
	}
	LA5: ;
	return result;
}

N_NIMCALL(void, finishdoc2pass_538122)(NimStringDesc* project) {
}
NIM_EXTERNC N_NOINLINE(void, compiler_docgen2Init)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_docgen2DatInit)(void) {
static TNimNode* TMP4752[2];
static TNimNode TMP984[3];
NTI538010.size = sizeof(tgen538010);
NTI538010.kind = 17;
NTI538010.base = (&NTI264005);
TMP4752[0] = &TMP984[1];
TMP984[1].kind = 1;
TMP984[1].offset = offsetof(tgen538010, Doc);
TMP984[1].typ = (&NTI367009);
TMP984[1].name = "doc";
TMP4752[1] = &TMP984[2];
TMP984[2].kind = 1;
TMP984[2].offset = offsetof(tgen538010, Module);
TMP984[2].typ = (&NTI209816);
TMP984[2].name = "module";
TMP984[0].len = 2; TMP984[0].kind = 2; TMP984[0].sons = &TMP4752[0];
NTI538010.node = &TMP984[0];
NTI538012.size = sizeof(tgen538010*);
NTI538012.kind = 22;
NTI538012.base = (&NTI538010);
NTI538012.marker = TMP4753;
}

