/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct trope122007 trope122007;
typedef struct TY369134 TY369134;
typedef struct tcgen369029 tcgen369029;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tpasscontext224003 tpasscontext224003;
typedef struct TNimObject TNimObject;
typedef struct tsym173689 tsym173689;
typedef struct NimStringDesc NimStringDesc;
typedef struct tidtable173705 tidtable173705;
typedef struct tidpairseq173703 tidpairseq173703;
typedef struct tidpair173701 tidpair173701;
typedef struct tidobj141011 tidobj141011;
typedef struct tintset170043 tintset170043;
typedef struct ttrunk170039 ttrunk170039;
typedef struct ttrunkseq170041 ttrunkseq170041;
typedef struct tlinkedlist110020 tlinkedlist110020;
typedef struct tlistentry110014 tlistentry110014;
typedef struct tcproc369025 tcproc369025;
typedef struct ttypeseq173691 ttypeseq173691;
typedef struct ttype173693 ttype173693;
typedef struct tnodetable173717 tnodetable173717;
typedef struct tnodepairseq173715 tnodepairseq173715;
typedef struct tnodepair173713 tnodepair173713;
typedef struct tnode173659 tnode173659;
typedef struct tsymseq173661 tsymseq173661;
typedef struct tnodeseq173653 tnodeseq173653;
typedef struct TY369090 TY369090;
typedef struct tblock369023 tblock369023;
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
typedef struct tscope173683 tscope173683;
typedef struct TY173786 TY173786;
typedef struct tinstantiation173679 tinstantiation173679;
typedef struct tstrtable173663 tstrtable173663;
typedef struct tident141017 tident141017;
typedef struct tlineinfo137509 tlineinfo137509;
typedef struct tloc173673 tloc173673;
typedef struct tlib173677 tlib173677;
typedef struct tbasechunk21236 tbasechunk21236;
typedef struct tfreecell21228 tfreecell21228;
typedef struct TY173775 TY173775;
struct TGenericSeq {
NI len;
NI reserved;
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
struct TNimObject {
TNimType* m_type;
};
struct tpasscontext224003 {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
};
typedef trope122007* tcfilesections369013[18];
struct tidpair173701 {
tidobj141011* Key;
TNimObject* Val;
};
struct tidtable173705 {
NI Counter;
tidpairseq173703* Data;
};
struct tintset170043 {
NI Counter;
NI Max;
ttrunk170039* Head;
ttrunkseq170041* Data;
};
struct tlinkedlist110020 {
tlistentry110014* Head;
tlistentry110014* Tail;
NI Counter;
};
struct tnodepair173713 {
NI H;
tnode173659* Key;
NI Val;
};
struct tnodetable173717 {
NI Counter;
tnodepairseq173715* Data;
};
typedef trope122007* TY369125[10];
struct tcgen369029 {
  tpasscontext224003 Sup;
tsym173689* Module;
NimStringDesc* Filename;
tcfilesections369013 S;
NIM_BOOL Preventstacktrace;
NIM_BOOL Usesthreadvars;
NIM_BOOL Framedeclared;
NIM_BOOL Isheaderfile;
NIM_BOOL Includesstringh;
NimStringDesc* Cfilename;
tidtable173705 Typecache;
tidtable173705 Forwtypecache;
tintset170043 Declaredthings;
tintset170043 Declaredprotos;
tlinkedlist110020 Headerfiles;
tintset170043 Typeinfomarker;
tcproc369025* Initproc;
tcproc369025* Postinitproc;
tcproc369025* Preinitproc;
ttypeseq173691* Typestack;
tnodetable173717 Datacache;
tsymseq173661* Forwardedprocs;
NI Typenodes;
NI Nimtypes;
trope122007* Typenodesname;
trope122007* Nimtypesname;
NI Labels;
TY369125 Extensionloaders;
trope122007* Injectstmt;
};
typedef trope122007* tcprocsections369017[3];
struct tblock369023 {
NI Id;
trope122007* Label;
tcprocsections369017 Sections;
NIM_BOOL Isloop;
NI16 Nestedtrystmts;
NI16 Framelen;
};
struct tcproc369025 {
tsym173689* Prc;
NIM_BOOL Beforeretneeded;
NIM_BOOL Threadvaraccessed;
tnodeseq173653* Nestedtrystmts;
NI Inexceptblock;
NI Labels;
TY369090* Blocks;
NI Breakidx;
NU32 Options;
NI Maxframelen;
tcgen369029* Module;
NI Withinloop;
NI Gcframeid;
trope122007* Gcframetype;
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
struct trope122007 {
  TNimObject Sup;
trope122007* Left;
trope122007* Right;
NI Length;
NimStringDesc* Data;
};
typedef NI TY21218[8];
struct ttrunk170039 {
ttrunk170039* Next;
NI Key;
TY21218 Bits;
};
struct tlistentry110014 {
  TNimObject Sup;
tlistentry110014* Prev;
tlistentry110014* Next;
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
struct tident141017 {
  tidobj141011 Sup;
NimStringDesc* S;
tident141017* Next;
NI H;
};
struct tlib173677 {
  tlistentry110014 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope122007* Name;
tnode173659* Path;
};
struct tfreecell21228 {
tfreecell21228* Next;
NI Zerofield;
};
struct TY369134 {
  TGenericSeq Sup;
  tcgen369029* data[SEQ_DECL_SIZE];
};
struct tidpairseq173703 {
  TGenericSeq Sup;
  tidpair173701 data[SEQ_DECL_SIZE];
};
struct ttrunkseq170041 {
  TGenericSeq Sup;
  ttrunk170039* data[SEQ_DECL_SIZE];
};
struct ttypeseq173691 {
  TGenericSeq Sup;
  ttype173693* data[SEQ_DECL_SIZE];
};
struct tnodepairseq173715 {
  TGenericSeq Sup;
  tnodepair173713 data[SEQ_DECL_SIZE];
};
struct tsymseq173661 {
  TGenericSeq Sup;
  tsym173689* data[SEQ_DECL_SIZE];
};
struct tnodeseq173653 {
  TGenericSeq Sup;
  tnode173659* data[SEQ_DECL_SIZE];
};
struct TY369090 {
  TGenericSeq Sup;
  tblock369023 data[SEQ_DECL_SIZE];
};
struct TY173786 {
  TGenericSeq Sup;
  tinstantiation173679* data[SEQ_DECL_SIZE];
};
struct TY173775 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP5603)(void* p, NI op);
N_NIMCALL(void, TMP5604)(void* p, NI op);
N_NIMCALL(void, TMP5606)(void* p, NI op);
N_NIMCALL(void, TMP5607)(void* p, NI op);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell38646*, usrtocell_42039)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdzct_43602)(tcell38646* c);
N_NOINLINE(void, addzct_42015)(tcellseq38662* s, tcell38646* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
static N_INLINE(trope122007**, s_369161)(tcproc369025* p, NU8 s);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(trope122007**, procsec_369178)(tcproc369025* p, NU8 s);
N_NIMCALL(tcgen369029*, bmod_369187)(tsym173689* module);
N_NIMCALL(tcproc369025*, newproc_369193)(tsym173689* prc, tcgen369029* module);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_44420)(tcell38646* c);
static N_INLINE(NIM_BOOL, canbecycleroot_42057)(tcell38646* c);
static N_INLINE(void, rtladdcycleroot_42823)(tcell38646* c);
N_NOINLINE(void, incl_39449)(tcellset38658* s, tcell38646* cell);
static N_INLINE(void, decref_44002)(tcell38646* c);
trope122007* mainmodprocs_369130;
trope122007* mainmodinit_369131;
trope122007* maindatinit_369132;
trope122007* gmapping_369133;
TY369134* gmodules_369152;
extern TNimType NTI224003; /* TPassContext */
TNimType NTI369029; /* TCGen */
extern TNimType NTI173657; /* PSym */
extern TNimType NTI142; /* string */
extern TNimType NTI122005; /* PRope */
TNimType NTI369013; /* TCFileSections */
extern TNimType NTI133; /* bool */
extern TNimType NTI173705; /* TIdTable */
extern TNimType NTI170043; /* TIntSet */
extern TNimType NTI110020; /* TLinkedList */
TNimType NTI369025; /* TCProc */
extern TNimType NTI173653; /* TNodeSeq */
extern TNimType NTI105; /* int */
extern TNimType NTI1005; /* Natural */
TNimType NTI369023; /* TBlock */
TNimType NTI369017; /* TCProcSections */
extern TNimType NTI109; /* int16 */
TNimType NTI369090; /* seq[TBlock] */
extern TNimType NTI115104; /* set[TOption] */
TNimType NTI369021; /* BProc */
extern TNimType NTI173691; /* TTypeSeq */
extern TNimType NTI173717; /* TNodeTable */
extern TNimType NTI173661; /* TSymSeq */
TNimType NTI369125; /* array[48..57, PRope] */
TNimType NTI369019; /* BModule */
TNimType NTI369134; /* seq[BModule] */
extern TFrame* frameptr_12037;
extern tgcheap40616 gch_40644;
NI gforwardedprocscounter_369153;
extern NU32 goptions_115107;
N_NIMCALL(void, TMP5603)(void* p, NI op) {
	TY369090* a;
	NI LOC1;
	NI LOC2;
	a = (TY369090*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Label, op);
	LOC2 = 0;
	for (LOC2 = 0; LOC2 < 3; LOC2++) {
	nimGCvisit((void*)a->data[LOC1].Sections[LOC2], op);
	}
	}
}
N_NIMCALL(void, TMP5604)(void* p, NI op) {
	tcproc369025* a;
	a = (tcproc369025*)p;
	nimGCvisit((void*)(*a).Prc, op);
	nimGCvisit((void*)(*a).Nestedtrystmts, op);
	nimGCvisit((void*)(*a).Blocks, op);
	nimGCvisit((void*)(*a).Module, op);
	nimGCvisit((void*)(*a).Gcframetype, op);
}
N_NIMCALL(void, TMP5606)(void* p, NI op) {
	tcgen369029* a;
	NI LOC1;
	NI LOC2;
	a = (tcgen369029*)p;
	nimGCvisit((void*)(*a).Module, op);
	nimGCvisit((void*)(*a).Filename, op);
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < 18; LOC1++) {
	nimGCvisit((void*)(*a).S[LOC1], op);
	}
	nimGCvisit((void*)(*a).Cfilename, op);
	nimGCvisit((void*)(*a).Typecache.Data, op);
	nimGCvisit((void*)(*a).Forwtypecache.Data, op);
	nimGCvisit((void*)(*a).Declaredthings.Head, op);
	nimGCvisit((void*)(*a).Declaredthings.Data, op);
	nimGCvisit((void*)(*a).Declaredprotos.Head, op);
	nimGCvisit((void*)(*a).Declaredprotos.Data, op);
	nimGCvisit((void*)(*a).Headerfiles.Head, op);
	nimGCvisit((void*)(*a).Headerfiles.Tail, op);
	nimGCvisit((void*)(*a).Typeinfomarker.Head, op);
	nimGCvisit((void*)(*a).Typeinfomarker.Data, op);
	nimGCvisit((void*)(*a).Initproc, op);
	nimGCvisit((void*)(*a).Postinitproc, op);
	nimGCvisit((void*)(*a).Preinitproc, op);
	nimGCvisit((void*)(*a).Typestack, op);
	nimGCvisit((void*)(*a).Datacache.Data, op);
	nimGCvisit((void*)(*a).Forwardedprocs, op);
	nimGCvisit((void*)(*a).Typenodesname, op);
	nimGCvisit((void*)(*a).Nimtypesname, op);
	LOC2 = 0;
	for (LOC2 = 0; LOC2 < 10; LOC2++) {
	nimGCvisit((void*)(*a).Extensionloaders[LOC2], op);
	}
	nimGCvisit((void*)(*a).Injectstmt, op);
}
N_NIMCALL(void, TMP5607)(void* p, NI op) {
	TY369134* a;
	NI LOC1;
	a = (TY369134*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12037;
	frameptr_12037 = s;
}
static N_INLINE(void, popFrame)(void) {
	frameptr_12037 = (*frameptr_12037).prev;
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
static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell38646* c;
	nimfr("nimGCunrefNoCycle", "gc.nim")
	nimln(231, "gc.nim");
	c = usrtocell_42039(p);
	nimln(233, "gc.nim");
	{
		nimln(165, "gc.nim");
		(*c).Refcount -= 8;
		nimln(166, "gc.nim");
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		nimln(234, "gc.nim");
		rtladdzct_43602(c);	}	LA3: ;
	popFrame();
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
static N_INLINE(trope122007**, s_369161)(tcproc369025* p, NU8 s) {
	trope122007** result;
	NI TMP5608;
	nimfr("s", "cgendata.nim")
	result = 0;
	nimln(124, "cgendata.nim");
	nimln(124, "cgendata.nim");
	nimln(124, "cgendata.nim");
	TMP5608 = subInt((*p).Blocks->Sup.len, 1);
	if ((NU)((NI64)(TMP5608)) >= (NU)((*p).Blocks->Sup.len)) raiseIndexError();
	result = &(*p).Blocks->data[(NI64)(TMP5608)].Sections[(s)- 0];
	popFrame();
	return result;
}
static N_INLINE(trope122007**, procsec_369178)(tcproc369025* p, NU8 s) {
	trope122007** result;
	nimfr("procSec", "cgendata.nim")
	result = 0;
	nimln(128, "cgendata.nim");
	if ((NU)(0) >= (NU)((*p).Blocks->Sup.len)) raiseIndexError();
	result = &(*p).Blocks->data[0].Sections[(s)- 0];
	popFrame();
	return result;
}
N_NIMCALL(tcgen369029*, bmod_369187)(tsym173689* module) {
	tcgen369029* result;
	nimfr("bmod", "cgendata.nim")
	result = 0;
	nimln(132, "cgendata.nim");
	if ((NU)((*module).Position) >= (NU)(gmodules_369152->Sup.len)) raiseIndexError();
	result = gmodules_369152->data[(*module).Position];
	popFrame();
	return result;
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
static N_INLINE(NIM_BOOL, canbecycleroot_42057)(tcell38646* c) {
	NIM_BOOL result;
	nimfr("canbeCycleRoot", "gc.nim")
	result = 0;
	nimln(119, "gc.nim");
	nimln(731, "system.nim");
	nimln(731, "system.nim");
	result = !((((*(*c).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
	popFrame();
	return result;
}
static N_INLINE(void, rtladdcycleroot_42823)(tcell38646* c) {
	nimfr("rtlAddCycleRoot", "gc.nim")
	nimln(187, "gc.nim");
	{
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		nimln(132, "gc.nim");
		if (!!((((NI) ((NI)((*c).Refcount & 3))) == 3))) goto LA3;
		nimln(137, "gc.nim");
		nimln(137, "gc.nim");
		nimln(137, "gc.nim");
		(*c).Refcount = (NI)((NI)((*c).Refcount & -4) | 3);
		nimln(189, "gc.nim");
		incl_39449(&gch_40644.Cycleroots, c);	}	LA3: ;
	popFrame();
}
static N_INLINE(void, incref_44420)(tcell38646* c) {
	nimfr("incRef", "gc.nim")
	nimln(214, "gc.nim");
	nimln(214, "gc.nim");
	(*c).Refcount = (NI)((NU64)((*c).Refcount) + (NU64)(8));
	nimln(217, "gc.nim");
	{
		NIM_BOOL LOC3;
		nimln(217, "gc.nim");
		LOC3 = 0;
		LOC3 = canbecycleroot_42057(c);
		if (!LOC3) goto LA4;
		nimln(218, "gc.nim");
		rtladdcycleroot_42823(c);	}	LA4: ;
	popFrame();
}
static N_INLINE(void, decref_44002)(tcell38646* c) {
	nimfr("decRef", "gc.nim")
	nimln(204, "gc.nim");
	{
		nimln(165, "gc.nim");
		(*c).Refcount -= 8;
		nimln(166, "gc.nim");
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		nimln(205, "gc.nim");
		rtladdzct_43602(c);	}	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		nimln(206, "gc.nim");
		LOC6 = 0;
		LOC6 = canbecycleroot_42057(c);
		if (!LOC6) goto LA7;
		nimln(209, "gc.nim");
		rtladdcycleroot_42823(c);	}	goto LA1;
	LA7: ;
	LA1: ;
	popFrame();
}
static N_INLINE(void, asgnRef)(void** dest, void* src) {
	nimfr("asgnRef", "gc.nim")
	nimln(242, "gc.nim");
	{
		tcell38646* LOC5;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(242, "gc.nim");
		nimln(242, "gc.nim");
		LOC5 = 0;
		LOC5 = usrtocell_42039(src);
		incref_44420(LOC5);	}	LA3: ;
	nimln(243, "gc.nim");
	{
		tcell38646* LOC10;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		nimln(243, "gc.nim");
		nimln(243, "gc.nim");
		LOC10 = 0;
		LOC10 = usrtocell_42039((*dest));
		decref_44002(LOC10);	}	LA8: ;
	nimln(244, "gc.nim");
	(*dest) = src;
	popFrame();
}
N_NIMCALL(tcproc369025*, newproc_369193)(tsym173689* prc, tcgen369029* module) {
	tcproc369025* result;
	nimfr("newProc", "cgendata.nim")
	result = 0;
	nimln(135, "cgendata.nim");
	result = (tcproc369025*) newObj((&NTI369021), sizeof(tcproc369025));
	nimln(136, "cgendata.nim");
	asgnRefNoCycle((void**) &(*result).Prc, prc);
	nimln(137, "cgendata.nim");
	asgnRef((void**) &(*result).Module, module);
	nimln(138, "cgendata.nim");
	{
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!((prc == NIM_NIL))) goto LA3;
		nimln(138, "cgendata.nim");
		(*result).Options = (*prc).Options;
	}	goto LA1;
	LA3: ;
	{
		nimln(139, "cgendata.nim");
		(*result).Options = goptions_115107;
	}	LA1: ;
	nimln(140, "cgendata.nim");
	if ((*result).Blocks) nimGCunrefNoCycle((*result).Blocks);
	(*result).Blocks = (TY369090*) newSeqRC1((&NTI369090), 1);
	nimln(141, "cgendata.nim");
	if ((*result).Nestedtrystmts) nimGCunrefNoCycle((*result).Nestedtrystmts);
	(*result).Nestedtrystmts = (tnodeseq173653*) newSeqRC1((&NTI173653), 0);
	popFrame();
	return result;
}N_NOINLINE(void, compilercgendataInit)(void) {
	nimfr("cgendata", "cgendata.nim")
	nimln(119, "cgendata.nim");
	if (gmodules_369152) nimGCunrefNoCycle(gmodules_369152);
	gmodules_369152 = (TY369134*) newSeqRC1((&NTI369134), 0);
	nimln(120, "cgendata.nim");
	gforwardedprocscounter_369153 = 0;
	popFrame();
}

N_NOINLINE(void, compilercgendataDatInit)(void) {
static TNimNode* TMP5600[28];
static TNimNode* TMP5601[14];
static TNimNode* TMP5602[6];
static TNimNode TMP5598[51];
NTI369029.size = sizeof(tcgen369029);
NTI369029.kind = 17;
NTI369029.base = (&NTI224003);
TMP5600[0] = &TMP5598[1];
TMP5598[1].kind = 1;
TMP5598[1].offset = offsetof(tcgen369029, Module);
TMP5598[1].typ = (&NTI173657);
TMP5598[1].name = "module";
TMP5600[1] = &TMP5598[2];
TMP5598[2].kind = 1;
TMP5598[2].offset = offsetof(tcgen369029, Filename);
TMP5598[2].typ = (&NTI142);
TMP5598[2].name = "filename";
TMP5600[2] = &TMP5598[3];
NTI369013.size = sizeof(tcfilesections369013);
NTI369013.kind = 16;
NTI369013.base = (&NTI122005);
NTI369013.flags = 2;
TMP5598[3].kind = 1;
TMP5598[3].offset = offsetof(tcgen369029, S);
TMP5598[3].typ = (&NTI369013);
TMP5598[3].name = "s";
TMP5600[3] = &TMP5598[4];
TMP5598[4].kind = 1;
TMP5598[4].offset = offsetof(tcgen369029, Preventstacktrace);
TMP5598[4].typ = (&NTI133);
TMP5598[4].name = "PreventStackTrace";
TMP5600[4] = &TMP5598[5];
TMP5598[5].kind = 1;
TMP5598[5].offset = offsetof(tcgen369029, Usesthreadvars);
TMP5598[5].typ = (&NTI133);
TMP5598[5].name = "usesThreadVars";
TMP5600[5] = &TMP5598[6];
TMP5598[6].kind = 1;
TMP5598[6].offset = offsetof(tcgen369029, Framedeclared);
TMP5598[6].typ = (&NTI133);
TMP5598[6].name = "FrameDeclared";
TMP5600[6] = &TMP5598[7];
TMP5598[7].kind = 1;
TMP5598[7].offset = offsetof(tcgen369029, Isheaderfile);
TMP5598[7].typ = (&NTI133);
TMP5598[7].name = "isHeaderFile";
TMP5600[7] = &TMP5598[8];
TMP5598[8].kind = 1;
TMP5598[8].offset = offsetof(tcgen369029, Includesstringh);
TMP5598[8].typ = (&NTI133);
TMP5598[8].name = "includesStringh";
TMP5600[8] = &TMP5598[9];
TMP5598[9].kind = 1;
TMP5598[9].offset = offsetof(tcgen369029, Cfilename);
TMP5598[9].typ = (&NTI142);
TMP5598[9].name = "cfilename";
TMP5600[9] = &TMP5598[10];
TMP5598[10].kind = 1;
TMP5598[10].offset = offsetof(tcgen369029, Typecache);
TMP5598[10].typ = (&NTI173705);
TMP5598[10].name = "typeCache";
TMP5600[10] = &TMP5598[11];
TMP5598[11].kind = 1;
TMP5598[11].offset = offsetof(tcgen369029, Forwtypecache);
TMP5598[11].typ = (&NTI173705);
TMP5598[11].name = "forwTypeCache";
TMP5600[11] = &TMP5598[12];
TMP5598[12].kind = 1;
TMP5598[12].offset = offsetof(tcgen369029, Declaredthings);
TMP5598[12].typ = (&NTI170043);
TMP5598[12].name = "declaredThings";
TMP5600[12] = &TMP5598[13];
TMP5598[13].kind = 1;
TMP5598[13].offset = offsetof(tcgen369029, Declaredprotos);
TMP5598[13].typ = (&NTI170043);
TMP5598[13].name = "declaredProtos";
TMP5600[13] = &TMP5598[14];
TMP5598[14].kind = 1;
TMP5598[14].offset = offsetof(tcgen369029, Headerfiles);
TMP5598[14].typ = (&NTI110020);
TMP5598[14].name = "headerFiles";
TMP5600[14] = &TMP5598[15];
TMP5598[15].kind = 1;
TMP5598[15].offset = offsetof(tcgen369029, Typeinfomarker);
TMP5598[15].typ = (&NTI170043);
TMP5598[15].name = "typeInfoMarker";
TMP5600[15] = &TMP5598[16];
NTI369025.size = sizeof(tcproc369025);
NTI369025.kind = 18;
NTI369025.base = 0;
TMP5601[0] = &TMP5598[18];
TMP5598[18].kind = 1;
TMP5598[18].offset = offsetof(tcproc369025, Prc);
TMP5598[18].typ = (&NTI173657);
TMP5598[18].name = "prc";
TMP5601[1] = &TMP5598[19];
TMP5598[19].kind = 1;
TMP5598[19].offset = offsetof(tcproc369025, Beforeretneeded);
TMP5598[19].typ = (&NTI133);
TMP5598[19].name = "BeforeRetNeeded";
TMP5601[2] = &TMP5598[20];
TMP5598[20].kind = 1;
TMP5598[20].offset = offsetof(tcproc369025, Threadvaraccessed);
TMP5598[20].typ = (&NTI133);
TMP5598[20].name = "ThreadVarAccessed";
TMP5601[3] = &TMP5598[21];
TMP5598[21].kind = 1;
TMP5598[21].offset = offsetof(tcproc369025, Nestedtrystmts);
TMP5598[21].typ = (&NTI173653);
TMP5598[21].name = "nestedTryStmts";
TMP5601[4] = &TMP5598[22];
TMP5598[22].kind = 1;
TMP5598[22].offset = offsetof(tcproc369025, Inexceptblock);
TMP5598[22].typ = (&NTI105);
TMP5598[22].name = "inExceptBlock";
TMP5601[5] = &TMP5598[23];
TMP5598[23].kind = 1;
TMP5598[23].offset = offsetof(tcproc369025, Labels);
TMP5598[23].typ = (&NTI1005);
TMP5598[23].name = "labels";
TMP5601[6] = &TMP5598[24];
NTI369023.size = sizeof(tblock369023);
NTI369023.kind = 18;
NTI369023.base = 0;
NTI369023.flags = 2;
TMP5602[0] = &TMP5598[26];
TMP5598[26].kind = 1;
TMP5598[26].offset = offsetof(tblock369023, Id);
TMP5598[26].typ = (&NTI105);
TMP5598[26].name = "id";
TMP5602[1] = &TMP5598[27];
TMP5598[27].kind = 1;
TMP5598[27].offset = offsetof(tblock369023, Label);
TMP5598[27].typ = (&NTI122005);
TMP5598[27].name = "label";
TMP5602[2] = &TMP5598[28];
NTI369017.size = sizeof(tcprocsections369017);
NTI369017.kind = 16;
NTI369017.base = (&NTI122005);
NTI369017.flags = 2;
TMP5598[28].kind = 1;
TMP5598[28].offset = offsetof(tblock369023, Sections);
TMP5598[28].typ = (&NTI369017);
TMP5598[28].name = "sections";
TMP5602[3] = &TMP5598[29];
TMP5598[29].kind = 1;
TMP5598[29].offset = offsetof(tblock369023, Isloop);
TMP5598[29].typ = (&NTI133);
TMP5598[29].name = "isLoop";
TMP5602[4] = &TMP5598[30];
TMP5598[30].kind = 1;
TMP5598[30].offset = offsetof(tblock369023, Nestedtrystmts);
TMP5598[30].typ = (&NTI109);
TMP5598[30].name = "nestedTryStmts";
TMP5602[5] = &TMP5598[31];
TMP5598[31].kind = 1;
TMP5598[31].offset = offsetof(tblock369023, Framelen);
TMP5598[31].typ = (&NTI109);
TMP5598[31].name = "frameLen";
TMP5598[25].len = 6; TMP5598[25].kind = 2; TMP5598[25].sons = &TMP5602[0];
NTI369023.node = &TMP5598[25];
NTI369090.size = sizeof(TY369090*);
NTI369090.kind = 24;
NTI369090.base = (&NTI369023);
NTI369090.flags = 2;
NTI369090.marker = TMP5603;
TMP5598[24].kind = 1;
TMP5598[24].offset = offsetof(tcproc369025, Blocks);
TMP5598[24].typ = (&NTI369090);
TMP5598[24].name = "blocks";
TMP5601[7] = &TMP5598[32];
TMP5598[32].kind = 1;
TMP5598[32].offset = offsetof(tcproc369025, Breakidx);
TMP5598[32].typ = (&NTI105);
TMP5598[32].name = "breakIdx";
TMP5601[8] = &TMP5598[33];
TMP5598[33].kind = 1;
TMP5598[33].offset = offsetof(tcproc369025, Options);
TMP5598[33].typ = (&NTI115104);
TMP5598[33].name = "options";
TMP5601[9] = &TMP5598[34];
TMP5598[34].kind = 1;
TMP5598[34].offset = offsetof(tcproc369025, Maxframelen);
TMP5598[34].typ = (&NTI105);
TMP5598[34].name = "maxFrameLen";
TMP5601[10] = &TMP5598[35];
TMP5598[35].kind = 1;
TMP5598[35].offset = offsetof(tcproc369025, Module);
TMP5598[35].typ = (&NTI369019);
TMP5598[35].name = "module";
TMP5601[11] = &TMP5598[36];
TMP5598[36].kind = 1;
TMP5598[36].offset = offsetof(tcproc369025, Withinloop);
TMP5598[36].typ = (&NTI105);
TMP5598[36].name = "withinLoop";
TMP5601[12] = &TMP5598[37];
TMP5598[37].kind = 1;
TMP5598[37].offset = offsetof(tcproc369025, Gcframeid);
TMP5598[37].typ = (&NTI1005);
TMP5598[37].name = "gcFrameId";
TMP5601[13] = &TMP5598[38];
TMP5598[38].kind = 1;
TMP5598[38].offset = offsetof(tcproc369025, Gcframetype);
TMP5598[38].typ = (&NTI122005);
TMP5598[38].name = "gcFrameType";
TMP5598[17].len = 14; TMP5598[17].kind = 2; TMP5598[17].sons = &TMP5601[0];
NTI369025.node = &TMP5598[17];
NTI369021.size = sizeof(tcproc369025*);
NTI369021.kind = 22;
NTI369021.base = (&NTI369025);
NTI369021.marker = TMP5604;
TMP5598[16].kind = 1;
TMP5598[16].offset = offsetof(tcgen369029, Initproc);
TMP5598[16].typ = (&NTI369021);
TMP5598[16].name = "initProc";
TMP5600[16] = &TMP5598[39];
TMP5598[39].kind = 1;
TMP5598[39].offset = offsetof(tcgen369029, Postinitproc);
TMP5598[39].typ = (&NTI369021);
TMP5598[39].name = "postInitProc";
TMP5600[17] = &TMP5598[40];
TMP5598[40].kind = 1;
TMP5598[40].offset = offsetof(tcgen369029, Preinitproc);
TMP5598[40].typ = (&NTI369021);
TMP5598[40].name = "preInitProc";
TMP5600[18] = &TMP5598[41];
TMP5598[41].kind = 1;
TMP5598[41].offset = offsetof(tcgen369029, Typestack);
TMP5598[41].typ = (&NTI173691);
TMP5598[41].name = "typeStack";
TMP5600[19] = &TMP5598[42];
TMP5598[42].kind = 1;
TMP5598[42].offset = offsetof(tcgen369029, Datacache);
TMP5598[42].typ = (&NTI173717);
TMP5598[42].name = "dataCache";
TMP5600[20] = &TMP5598[43];
TMP5598[43].kind = 1;
TMP5598[43].offset = offsetof(tcgen369029, Forwardedprocs);
TMP5598[43].typ = (&NTI173661);
TMP5598[43].name = "forwardedProcs";
TMP5600[21] = &TMP5598[44];
TMP5598[44].kind = 1;
TMP5598[44].offset = offsetof(tcgen369029, Typenodes);
TMP5598[44].typ = (&NTI105);
TMP5598[44].name = "typeNodes";
TMP5600[22] = &TMP5598[45];
TMP5598[45].kind = 1;
TMP5598[45].offset = offsetof(tcgen369029, Nimtypes);
TMP5598[45].typ = (&NTI105);
TMP5598[45].name = "nimTypes";
TMP5600[23] = &TMP5598[46];
TMP5598[46].kind = 1;
TMP5598[46].offset = offsetof(tcgen369029, Typenodesname);
TMP5598[46].typ = (&NTI122005);
TMP5598[46].name = "typeNodesName";
TMP5600[24] = &TMP5598[47];
TMP5598[47].kind = 1;
TMP5598[47].offset = offsetof(tcgen369029, Nimtypesname);
TMP5598[47].typ = (&NTI122005);
TMP5598[47].name = "nimTypesName";
TMP5600[25] = &TMP5598[48];
TMP5598[48].kind = 1;
TMP5598[48].offset = offsetof(tcgen369029, Labels);
TMP5598[48].typ = (&NTI1005);
TMP5598[48].name = "labels";
TMP5600[26] = &TMP5598[49];
NTI369125.size = sizeof(TY369125);
NTI369125.kind = 16;
NTI369125.base = (&NTI122005);
NTI369125.flags = 2;
TMP5598[49].kind = 1;
TMP5598[49].offset = offsetof(tcgen369029, Extensionloaders);
TMP5598[49].typ = (&NTI369125);
TMP5598[49].name = "extensionLoaders";
TMP5600[27] = &TMP5598[50];
TMP5598[50].kind = 1;
TMP5598[50].offset = offsetof(tcgen369029, Injectstmt);
TMP5598[50].typ = (&NTI122005);
TMP5598[50].name = "injectStmt";
TMP5598[0].len = 28; TMP5598[0].kind = 2; TMP5598[0].sons = &TMP5600[0];
NTI369029.node = &TMP5598[0];
NTI369019.size = sizeof(tcgen369029*);
NTI369019.kind = 22;
NTI369019.base = (&NTI369029);
NTI369019.marker = TMP5606;
NTI369134.size = sizeof(TY369134*);
NTI369134.kind = 24;
NTI369134.base = (&NTI369019);
NTI369134.flags = 2;
NTI369134.marker = TMP5607;
}

