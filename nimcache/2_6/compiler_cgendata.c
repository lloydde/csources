/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct trope121007 trope121007;
typedef struct TY368134 TY368134;
typedef struct tcgen368029 tcgen368029;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tpasscontext223003 tpasscontext223003;
typedef struct TNimObject TNimObject;
typedef struct tsym172689 tsym172689;
typedef struct NimStringDesc NimStringDesc;
typedef struct tidtable172705 tidtable172705;
typedef struct tidpairseq172703 tidpairseq172703;
typedef struct tidpair172701 tidpair172701;
typedef struct tidobj141011 tidobj141011;
typedef struct tintset169043 tintset169043;
typedef struct ttrunk169039 ttrunk169039;
typedef struct ttrunkseq169041 ttrunkseq169041;
typedef struct tlinkedlist109020 tlinkedlist109020;
typedef struct tlistentry109014 tlistentry109014;
typedef struct tcproc368025 tcproc368025;
typedef struct ttypeseq172691 ttypeseq172691;
typedef struct ttype172693 ttype172693;
typedef struct tnodetable172717 tnodetable172717;
typedef struct tnodepairseq172715 tnodepairseq172715;
typedef struct tnodepair172713 tnodepair172713;
typedef struct tnode172659 tnode172659;
typedef struct tsymseq172661 tsymseq172661;
typedef struct tnodeseq172653 tnodeseq172653;
typedef struct TY368090 TY368090;
typedef struct tblock368023 tblock368023;
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
typedef struct tscope172683 tscope172683;
typedef struct TY172786 TY172786;
typedef struct tinstantiation172679 tinstantiation172679;
typedef struct tstrtable172663 tstrtable172663;
typedef struct tident141017 tident141017;
typedef struct tlineinfo137509 tlineinfo137509;
typedef struct tloc172673 tloc172673;
typedef struct tlib172677 tlib172677;
typedef struct tbasechunk21436 tbasechunk21436;
typedef struct tfreecell21428 tfreecell21428;
typedef struct TY172775 TY172775;
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
struct tpasscontext223003 {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
};
typedef trope121007* tcfilesections368013[18];
struct tidpair172701 {
tidobj141011* Key;
TNimObject* Val;
};
struct tidtable172705 {
NI Counter;
tidpairseq172703* Data;
};
struct tintset169043 {
NI Counter;
NI Max;
ttrunk169039* Head;
ttrunkseq169041* Data;
};
struct tlinkedlist109020 {
tlistentry109014* Head;
tlistentry109014* Tail;
NI Counter;
};
struct tnodepair172713 {
NI H;
tnode172659* Key;
NI Val;
};
struct tnodetable172717 {
NI Counter;
tnodepairseq172715* Data;
};
typedef trope121007* TY368125[10];
struct tcgen368029 {
  tpasscontext223003 Sup;
tsym172689* Module;
NimStringDesc* Filename;
tcfilesections368013 S;
NIM_BOOL Preventstacktrace;
NIM_BOOL Usesthreadvars;
NIM_BOOL Framedeclared;
NIM_BOOL Isheaderfile;
NIM_BOOL Includesstringh;
NimStringDesc* Cfilename;
tidtable172705 Typecache;
tidtable172705 Forwtypecache;
tintset169043 Declaredthings;
tintset169043 Declaredprotos;
tlinkedlist109020 Headerfiles;
tintset169043 Typeinfomarker;
tcproc368025* Initproc;
tcproc368025* Postinitproc;
tcproc368025* Preinitproc;
ttypeseq172691* Typestack;
tnodetable172717 Datacache;
tsymseq172661* Forwardedprocs;
NI Typenodes;
NI Nimtypes;
trope121007* Typenodesname;
trope121007* Nimtypesname;
NI Labels;
TY368125 Extensionloaders;
trope121007* Injectstmt;
};
typedef trope121007* tcprocsections368017[3];
struct tblock368023 {
NI Id;
trope121007* Label;
tcprocsections368017 Sections;
NIM_BOOL Isloop;
NI16 Nestedtrystmts;
NI16 Framelen;
};
struct tcproc368025 {
tsym172689* Prc;
NIM_BOOL Beforeretneeded;
NIM_BOOL Threadvaraccessed;
tnodeseq172653* Nestedtrystmts;
NI Inexceptblock;
NI Labels;
TY368090* Blocks;
NI Breakidx;
NU32 Options;
NI Maxframelen;
tcgen368029* Module;
NI Withinloop;
NI Gcframeid;
trope121007* Gcframetype;
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
struct tidobj141011 {
  TNimObject Sup;
NI Id;
};
struct tstrtable172663 {
NI Counter;
tsymseq172661* Data;
};
struct tlineinfo137509 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct tloc172673 {
NU8 K;
NU8 S;
NU8 Flags;
ttype172693* T;
trope121007* R;
trope121007* Heaproot;
NI A;
};
struct tsym172689 {
  tidobj141011 Sup;
NU8 Kind;
union {
struct {ttypeseq172691* Typeinstcache;
tscope172683* Typscope;
} S1;
struct {TY172786* Procinstcache;
tscope172683* Scope;
} S2;
struct {TY172786* Usedgenerics;
tstrtable172663 Tab;
} S3;
} kindU;
NU16 Magic;
ttype172693* Typ;
tident141017* Name;
tlineinfo137509 Info;
tsym172689* Owner;
NU32 Flags;
tnode172659* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc172673 Loc;
tlib172677* Annex;
tnode172659* Constraint;
};
struct trope121007 {
  TNimObject Sup;
trope121007* Left;
trope121007* Right;
NI Length;
NimStringDesc* Data;
};
typedef NI TY21418[16];
struct ttrunk169039 {
ttrunk169039* Next;
NI Key;
TY21418 Bits;
};
struct tlistentry109014 {
  TNimObject Sup;
tlistentry109014* Prev;
tlistentry109014* Next;
};
struct ttype172693 {
  tidobj141011 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq172691* Sons;
tnode172659* N;
tsym172689* Destructor;
tsym172689* Owner;
tsym172689* Sym;
NI64 Size;
NI Align;
tloc172673 Loc;
};
struct tnode172659 {
ttype172693* Typ;
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
struct {tsym172689* Sym;
} S4;
struct {tident141017* Ident;
} S5;
struct {tnodeseq172653* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
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
struct tscope172683 {
NI Depthlevel;
tstrtable172663 Symbols;
tnodeseq172653* Usingsyms;
tscope172683* Parent;
};
struct tinstantiation172679 {
tsym172689* Sym;
ttypeseq172691* Concretetypes;
TY172775* Usedby;
};
struct tident141017 {
  tidobj141011 Sup;
NimStringDesc* S;
tident141017* Next;
NI H;
};
struct tlib172677 {
  tlistentry109014 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope121007* Name;
tnode172659* Path;
};
struct tfreecell21428 {
tfreecell21428* Next;
NI Zerofield;
};
struct TY368134 {
  TGenericSeq Sup;
  tcgen368029* data[SEQ_DECL_SIZE];
};
struct tidpairseq172703 {
  TGenericSeq Sup;
  tidpair172701 data[SEQ_DECL_SIZE];
};
struct ttrunkseq169041 {
  TGenericSeq Sup;
  ttrunk169039* data[SEQ_DECL_SIZE];
};
struct ttypeseq172691 {
  TGenericSeq Sup;
  ttype172693* data[SEQ_DECL_SIZE];
};
struct tnodepairseq172715 {
  TGenericSeq Sup;
  tnodepair172713 data[SEQ_DECL_SIZE];
};
struct tsymseq172661 {
  TGenericSeq Sup;
  tsym172689* data[SEQ_DECL_SIZE];
};
struct tnodeseq172653 {
  TGenericSeq Sup;
  tnode172659* data[SEQ_DECL_SIZE];
};
struct TY368090 {
  TGenericSeq Sup;
  tblock368023 data[SEQ_DECL_SIZE];
};
struct TY172786 {
  TGenericSeq Sup;
  tinstantiation172679* data[SEQ_DECL_SIZE];
};
struct TY172775 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP5607)(void* p, NI op);
N_NIMCALL(void, TMP5608)(void* p, NI op);
N_NIMCALL(void, TMP5610)(void* p, NI op);
N_NIMCALL(void, TMP5611)(void* p, NI op);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell38846*, usrtocell_42239)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdzct_43802)(tcell38846* c);
N_NOINLINE(void, addzct_42215)(tcellseq38862* s, tcell38846* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
static N_INLINE(trope121007**, s_368161)(tcproc368025* p, NU8 s);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(trope121007**, procsec_368178)(tcproc368025* p, NU8 s);
N_NIMCALL(tcgen368029*, bmod_368187)(tsym172689* module);
N_NIMCALL(tcproc368025*, newproc_368193)(tsym172689* prc, tcgen368029* module);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_44620)(tcell38846* c);
static N_INLINE(NIM_BOOL, canbecycleroot_42257)(tcell38846* c);
static N_INLINE(void, rtladdcycleroot_43023)(tcell38846* c);
N_NOINLINE(void, incl_39649)(tcellset38858* s, tcell38846* cell);
static N_INLINE(void, decref_44202)(tcell38846* c);
trope121007* mainmodprocs_368130;
trope121007* mainmodinit_368131;
trope121007* maindatinit_368132;
trope121007* gmapping_368133;
TY368134* gmodules_368152;
extern TNimType NTI223003; /* TPassContext */
TNimType NTI368029; /* TCGen */
extern TNimType NTI172657; /* PSym */
extern TNimType NTI142; /* string */
extern TNimType NTI121005; /* PRope */
TNimType NTI368013; /* TCFileSections */
extern TNimType NTI133; /* bool */
extern TNimType NTI172705; /* TIdTable */
extern TNimType NTI169043; /* TIntSet */
extern TNimType NTI109020; /* TLinkedList */
TNimType NTI368025; /* TCProc */
extern TNimType NTI172653; /* TNodeSeq */
extern TNimType NTI105; /* int */
extern TNimType NTI67896; /* range 0..2147483647(int) */
TNimType NTI368023; /* TBlock */
TNimType NTI368017; /* TCProcSections */
extern TNimType NTI109; /* int16 */
TNimType NTI368090; /* seq[TBlock] */
extern TNimType NTI114104; /* set[TOption] */
TNimType NTI368021; /* BProc */
extern TNimType NTI172691; /* TTypeSeq */
extern TNimType NTI172717; /* TNodeTable */
extern TNimType NTI172661; /* TSymSeq */
TNimType NTI368125; /* array[48..57, PRope] */
TNimType NTI368019; /* BModule */
TNimType NTI368134; /* seq[BModule] */
extern TFrame* frameptr_12037;
extern tgcheap40816 gch_40844;
NI gforwardedprocscounter_368153;
extern NU32 goptions_114107;
N_NIMCALL(void, TMP5607)(void* p, NI op) {
	TY368090* a;
	NI LOC1;
	NI LOC2;
	a = (TY368090*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Label, op);
	LOC2 = 0;
	for (LOC2 = 0; LOC2 < 3; LOC2++) {
	nimGCvisit((void*)a->data[LOC1].Sections[LOC2], op);
	}
	}
}
N_NIMCALL(void, TMP5608)(void* p, NI op) {
	tcproc368025* a;
	a = (tcproc368025*)p;
	nimGCvisit((void*)(*a).Prc, op);
	nimGCvisit((void*)(*a).Nestedtrystmts, op);
	nimGCvisit((void*)(*a).Blocks, op);
	nimGCvisit((void*)(*a).Module, op);
	nimGCvisit((void*)(*a).Gcframetype, op);
}
N_NIMCALL(void, TMP5610)(void* p, NI op) {
	tcgen368029* a;
	NI LOC1;
	NI LOC2;
	a = (tcgen368029*)p;
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
N_NIMCALL(void, TMP5611)(void* p, NI op) {
	TY368134* a;
	NI LOC1;
	a = (TY368134*)p;
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
static N_INLINE(tcell38846*, usrtocell_42239)(void* usr) {
	tcell38846* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(116, "gc.nim");
	nimln(116, "gc.nim");
	nimln(116, "gc.nim");
	result = ((tcell38846*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell38846))))));
	popFrame();
	return result;
}
static N_INLINE(void, rtladdzct_43802)(tcell38846* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(197, "gc.nim");
	addzct_42215(&gch_40844.Zct, c);	popFrame();
}
static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell38846* c;
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
static N_INLINE(trope121007**, s_368161)(tcproc368025* p, NU8 s) {
	trope121007** result;
	NI TMP5612;
	nimfr("s", "cgendata.nim")
	result = 0;
	nimln(124, "cgendata.nim");
	nimln(124, "cgendata.nim");
	nimln(124, "cgendata.nim");
	TMP5612 = subInt((*p).Blocks->Sup.len, 1);
	if ((NU)((NI32)(TMP5612)) >= (NU)((*p).Blocks->Sup.len)) raiseIndexError();
	result = &(*p).Blocks->data[(NI32)(TMP5612)].Sections[(s)- 0];
	popFrame();
	return result;
}
static N_INLINE(trope121007**, procsec_368178)(tcproc368025* p, NU8 s) {
	trope121007** result;
	nimfr("procSec", "cgendata.nim")
	result = 0;
	nimln(128, "cgendata.nim");
	if ((NU)(0) >= (NU)((*p).Blocks->Sup.len)) raiseIndexError();
	result = &(*p).Blocks->data[0].Sections[(s)- 0];
	popFrame();
	return result;
}
N_NIMCALL(tcgen368029*, bmod_368187)(tsym172689* module) {
	tcgen368029* result;
	nimfr("bmod", "cgendata.nim")
	result = 0;
	nimln(132, "cgendata.nim");
	if ((NU)((*module).Position) >= (NU)(gmodules_368152->Sup.len)) raiseIndexError();
	result = gmodules_368152->data[(*module).Position];
	popFrame();
	return result;
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
			if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA11;
			nimln(255, "gc.nim");
			rtladdzct_43802(c);		}		LA11: ;
	}	LA7: ;
	nimln(256, "gc.nim");
	(*dest) = src;
	popFrame();
}
static N_INLINE(NIM_BOOL, canbecycleroot_42257)(tcell38846* c) {
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
static N_INLINE(void, rtladdcycleroot_43023)(tcell38846* c) {
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
		incl_39649(&gch_40844.Cycleroots, c);	}	LA3: ;
	popFrame();
}
static N_INLINE(void, incref_44620)(tcell38846* c) {
	nimfr("incRef", "gc.nim")
	nimln(214, "gc.nim");
	nimln(214, "gc.nim");
	(*c).Refcount = (NI)((NU32)((*c).Refcount) + (NU32)(8));
	nimln(217, "gc.nim");
	{
		NIM_BOOL LOC3;
		nimln(217, "gc.nim");
		LOC3 = 0;
		LOC3 = canbecycleroot_42257(c);
		if (!LOC3) goto LA4;
		nimln(218, "gc.nim");
		rtladdcycleroot_43023(c);	}	LA4: ;
	popFrame();
}
static N_INLINE(void, decref_44202)(tcell38846* c) {
	nimfr("decRef", "gc.nim")
	nimln(204, "gc.nim");
	{
		nimln(165, "gc.nim");
		(*c).Refcount -= 8;
		nimln(166, "gc.nim");
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
		nimln(205, "gc.nim");
		rtladdzct_43802(c);	}	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		nimln(206, "gc.nim");
		LOC6 = 0;
		LOC6 = canbecycleroot_42257(c);
		if (!LOC6) goto LA7;
		nimln(209, "gc.nim");
		rtladdcycleroot_43023(c);	}	goto LA1;
	LA7: ;
	LA1: ;
	popFrame();
}
static N_INLINE(void, asgnRef)(void** dest, void* src) {
	nimfr("asgnRef", "gc.nim")
	nimln(242, "gc.nim");
	{
		tcell38846* LOC5;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(242, "gc.nim");
		nimln(242, "gc.nim");
		LOC5 = 0;
		LOC5 = usrtocell_42239(src);
		incref_44620(LOC5);	}	LA3: ;
	nimln(243, "gc.nim");
	{
		tcell38846* LOC10;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		nimln(243, "gc.nim");
		nimln(243, "gc.nim");
		LOC10 = 0;
		LOC10 = usrtocell_42239((*dest));
		decref_44202(LOC10);	}	LA8: ;
	nimln(244, "gc.nim");
	(*dest) = src;
	popFrame();
}
N_NIMCALL(tcproc368025*, newproc_368193)(tsym172689* prc, tcgen368029* module) {
	tcproc368025* result;
	nimfr("newProc", "cgendata.nim")
	result = 0;
	nimln(135, "cgendata.nim");
	result = (tcproc368025*) newObj((&NTI368021), sizeof(tcproc368025));
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
		(*result).Options = goptions_114107;
	}	LA1: ;
	nimln(140, "cgendata.nim");
	if ((*result).Blocks) nimGCunrefNoCycle((*result).Blocks);
	(*result).Blocks = (TY368090*) newSeqRC1((&NTI368090), 1);
	nimln(141, "cgendata.nim");
	if ((*result).Nestedtrystmts) nimGCunrefNoCycle((*result).Nestedtrystmts);
	(*result).Nestedtrystmts = (tnodeseq172653*) newSeqRC1((&NTI172653), 0);
	popFrame();
	return result;
}N_NOINLINE(void, compilercgendataInit)(void) {
	nimfr("cgendata", "cgendata.nim")
	nimln(119, "cgendata.nim");
	if (gmodules_368152) nimGCunrefNoCycle(gmodules_368152);
	gmodules_368152 = (TY368134*) newSeqRC1((&NTI368134), 0);
	nimln(120, "cgendata.nim");
	gforwardedprocscounter_368153 = 0;
	popFrame();
}

N_NOINLINE(void, compilercgendataDatInit)(void) {
static TNimNode* TMP5604[28];
static TNimNode* TMP5605[14];
static TNimNode* TMP5606[6];
static TNimNode TMP5602[51];
NTI368029.size = sizeof(tcgen368029);
NTI368029.kind = 17;
NTI368029.base = (&NTI223003);
TMP5604[0] = &TMP5602[1];
TMP5602[1].kind = 1;
TMP5602[1].offset = offsetof(tcgen368029, Module);
TMP5602[1].typ = (&NTI172657);
TMP5602[1].name = "module";
TMP5604[1] = &TMP5602[2];
TMP5602[2].kind = 1;
TMP5602[2].offset = offsetof(tcgen368029, Filename);
TMP5602[2].typ = (&NTI142);
TMP5602[2].name = "filename";
TMP5604[2] = &TMP5602[3];
NTI368013.size = sizeof(tcfilesections368013);
NTI368013.kind = 16;
NTI368013.base = (&NTI121005);
NTI368013.flags = 2;
TMP5602[3].kind = 1;
TMP5602[3].offset = offsetof(tcgen368029, S);
TMP5602[3].typ = (&NTI368013);
TMP5602[3].name = "s";
TMP5604[3] = &TMP5602[4];
TMP5602[4].kind = 1;
TMP5602[4].offset = offsetof(tcgen368029, Preventstacktrace);
TMP5602[4].typ = (&NTI133);
TMP5602[4].name = "PreventStackTrace";
TMP5604[4] = &TMP5602[5];
TMP5602[5].kind = 1;
TMP5602[5].offset = offsetof(tcgen368029, Usesthreadvars);
TMP5602[5].typ = (&NTI133);
TMP5602[5].name = "usesThreadVars";
TMP5604[5] = &TMP5602[6];
TMP5602[6].kind = 1;
TMP5602[6].offset = offsetof(tcgen368029, Framedeclared);
TMP5602[6].typ = (&NTI133);
TMP5602[6].name = "FrameDeclared";
TMP5604[6] = &TMP5602[7];
TMP5602[7].kind = 1;
TMP5602[7].offset = offsetof(tcgen368029, Isheaderfile);
TMP5602[7].typ = (&NTI133);
TMP5602[7].name = "isHeaderFile";
TMP5604[7] = &TMP5602[8];
TMP5602[8].kind = 1;
TMP5602[8].offset = offsetof(tcgen368029, Includesstringh);
TMP5602[8].typ = (&NTI133);
TMP5602[8].name = "includesStringh";
TMP5604[8] = &TMP5602[9];
TMP5602[9].kind = 1;
TMP5602[9].offset = offsetof(tcgen368029, Cfilename);
TMP5602[9].typ = (&NTI142);
TMP5602[9].name = "cfilename";
TMP5604[9] = &TMP5602[10];
TMP5602[10].kind = 1;
TMP5602[10].offset = offsetof(tcgen368029, Typecache);
TMP5602[10].typ = (&NTI172705);
TMP5602[10].name = "typeCache";
TMP5604[10] = &TMP5602[11];
TMP5602[11].kind = 1;
TMP5602[11].offset = offsetof(tcgen368029, Forwtypecache);
TMP5602[11].typ = (&NTI172705);
TMP5602[11].name = "forwTypeCache";
TMP5604[11] = &TMP5602[12];
TMP5602[12].kind = 1;
TMP5602[12].offset = offsetof(tcgen368029, Declaredthings);
TMP5602[12].typ = (&NTI169043);
TMP5602[12].name = "declaredThings";
TMP5604[12] = &TMP5602[13];
TMP5602[13].kind = 1;
TMP5602[13].offset = offsetof(tcgen368029, Declaredprotos);
TMP5602[13].typ = (&NTI169043);
TMP5602[13].name = "declaredProtos";
TMP5604[13] = &TMP5602[14];
TMP5602[14].kind = 1;
TMP5602[14].offset = offsetof(tcgen368029, Headerfiles);
TMP5602[14].typ = (&NTI109020);
TMP5602[14].name = "headerFiles";
TMP5604[14] = &TMP5602[15];
TMP5602[15].kind = 1;
TMP5602[15].offset = offsetof(tcgen368029, Typeinfomarker);
TMP5602[15].typ = (&NTI169043);
TMP5602[15].name = "typeInfoMarker";
TMP5604[15] = &TMP5602[16];
NTI368025.size = sizeof(tcproc368025);
NTI368025.kind = 18;
NTI368025.base = 0;
TMP5605[0] = &TMP5602[18];
TMP5602[18].kind = 1;
TMP5602[18].offset = offsetof(tcproc368025, Prc);
TMP5602[18].typ = (&NTI172657);
TMP5602[18].name = "prc";
TMP5605[1] = &TMP5602[19];
TMP5602[19].kind = 1;
TMP5602[19].offset = offsetof(tcproc368025, Beforeretneeded);
TMP5602[19].typ = (&NTI133);
TMP5602[19].name = "BeforeRetNeeded";
TMP5605[2] = &TMP5602[20];
TMP5602[20].kind = 1;
TMP5602[20].offset = offsetof(tcproc368025, Threadvaraccessed);
TMP5602[20].typ = (&NTI133);
TMP5602[20].name = "ThreadVarAccessed";
TMP5605[3] = &TMP5602[21];
TMP5602[21].kind = 1;
TMP5602[21].offset = offsetof(tcproc368025, Nestedtrystmts);
TMP5602[21].typ = (&NTI172653);
TMP5602[21].name = "nestedTryStmts";
TMP5605[4] = &TMP5602[22];
TMP5602[22].kind = 1;
TMP5602[22].offset = offsetof(tcproc368025, Inexceptblock);
TMP5602[22].typ = (&NTI105);
TMP5602[22].name = "inExceptBlock";
TMP5605[5] = &TMP5602[23];
TMP5602[23].kind = 1;
TMP5602[23].offset = offsetof(tcproc368025, Labels);
TMP5602[23].typ = (&NTI67896);
TMP5602[23].name = "labels";
TMP5605[6] = &TMP5602[24];
NTI368023.size = sizeof(tblock368023);
NTI368023.kind = 18;
NTI368023.base = 0;
NTI368023.flags = 2;
TMP5606[0] = &TMP5602[26];
TMP5602[26].kind = 1;
TMP5602[26].offset = offsetof(tblock368023, Id);
TMP5602[26].typ = (&NTI105);
TMP5602[26].name = "id";
TMP5606[1] = &TMP5602[27];
TMP5602[27].kind = 1;
TMP5602[27].offset = offsetof(tblock368023, Label);
TMP5602[27].typ = (&NTI121005);
TMP5602[27].name = "label";
TMP5606[2] = &TMP5602[28];
NTI368017.size = sizeof(tcprocsections368017);
NTI368017.kind = 16;
NTI368017.base = (&NTI121005);
NTI368017.flags = 2;
TMP5602[28].kind = 1;
TMP5602[28].offset = offsetof(tblock368023, Sections);
TMP5602[28].typ = (&NTI368017);
TMP5602[28].name = "sections";
TMP5606[3] = &TMP5602[29];
TMP5602[29].kind = 1;
TMP5602[29].offset = offsetof(tblock368023, Isloop);
TMP5602[29].typ = (&NTI133);
TMP5602[29].name = "isLoop";
TMP5606[4] = &TMP5602[30];
TMP5602[30].kind = 1;
TMP5602[30].offset = offsetof(tblock368023, Nestedtrystmts);
TMP5602[30].typ = (&NTI109);
TMP5602[30].name = "nestedTryStmts";
TMP5606[5] = &TMP5602[31];
TMP5602[31].kind = 1;
TMP5602[31].offset = offsetof(tblock368023, Framelen);
TMP5602[31].typ = (&NTI109);
TMP5602[31].name = "frameLen";
TMP5602[25].len = 6; TMP5602[25].kind = 2; TMP5602[25].sons = &TMP5606[0];
NTI368023.node = &TMP5602[25];
NTI368090.size = sizeof(TY368090*);
NTI368090.kind = 24;
NTI368090.base = (&NTI368023);
NTI368090.flags = 2;
NTI368090.marker = TMP5607;
TMP5602[24].kind = 1;
TMP5602[24].offset = offsetof(tcproc368025, Blocks);
TMP5602[24].typ = (&NTI368090);
TMP5602[24].name = "blocks";
TMP5605[7] = &TMP5602[32];
TMP5602[32].kind = 1;
TMP5602[32].offset = offsetof(tcproc368025, Breakidx);
TMP5602[32].typ = (&NTI105);
TMP5602[32].name = "breakIdx";
TMP5605[8] = &TMP5602[33];
TMP5602[33].kind = 1;
TMP5602[33].offset = offsetof(tcproc368025, Options);
TMP5602[33].typ = (&NTI114104);
TMP5602[33].name = "options";
TMP5605[9] = &TMP5602[34];
TMP5602[34].kind = 1;
TMP5602[34].offset = offsetof(tcproc368025, Maxframelen);
TMP5602[34].typ = (&NTI105);
TMP5602[34].name = "maxFrameLen";
TMP5605[10] = &TMP5602[35];
TMP5602[35].kind = 1;
TMP5602[35].offset = offsetof(tcproc368025, Module);
TMP5602[35].typ = (&NTI368019);
TMP5602[35].name = "module";
TMP5605[11] = &TMP5602[36];
TMP5602[36].kind = 1;
TMP5602[36].offset = offsetof(tcproc368025, Withinloop);
TMP5602[36].typ = (&NTI105);
TMP5602[36].name = "withinLoop";
TMP5605[12] = &TMP5602[37];
TMP5602[37].kind = 1;
TMP5602[37].offset = offsetof(tcproc368025, Gcframeid);
TMP5602[37].typ = (&NTI67896);
TMP5602[37].name = "gcFrameId";
TMP5605[13] = &TMP5602[38];
TMP5602[38].kind = 1;
TMP5602[38].offset = offsetof(tcproc368025, Gcframetype);
TMP5602[38].typ = (&NTI121005);
TMP5602[38].name = "gcFrameType";
TMP5602[17].len = 14; TMP5602[17].kind = 2; TMP5602[17].sons = &TMP5605[0];
NTI368025.node = &TMP5602[17];
NTI368021.size = sizeof(tcproc368025*);
NTI368021.kind = 22;
NTI368021.base = (&NTI368025);
NTI368021.marker = TMP5608;
TMP5602[16].kind = 1;
TMP5602[16].offset = offsetof(tcgen368029, Initproc);
TMP5602[16].typ = (&NTI368021);
TMP5602[16].name = "initProc";
TMP5604[16] = &TMP5602[39];
TMP5602[39].kind = 1;
TMP5602[39].offset = offsetof(tcgen368029, Postinitproc);
TMP5602[39].typ = (&NTI368021);
TMP5602[39].name = "postInitProc";
TMP5604[17] = &TMP5602[40];
TMP5602[40].kind = 1;
TMP5602[40].offset = offsetof(tcgen368029, Preinitproc);
TMP5602[40].typ = (&NTI368021);
TMP5602[40].name = "preInitProc";
TMP5604[18] = &TMP5602[41];
TMP5602[41].kind = 1;
TMP5602[41].offset = offsetof(tcgen368029, Typestack);
TMP5602[41].typ = (&NTI172691);
TMP5602[41].name = "typeStack";
TMP5604[19] = &TMP5602[42];
TMP5602[42].kind = 1;
TMP5602[42].offset = offsetof(tcgen368029, Datacache);
TMP5602[42].typ = (&NTI172717);
TMP5602[42].name = "dataCache";
TMP5604[20] = &TMP5602[43];
TMP5602[43].kind = 1;
TMP5602[43].offset = offsetof(tcgen368029, Forwardedprocs);
TMP5602[43].typ = (&NTI172661);
TMP5602[43].name = "forwardedProcs";
TMP5604[21] = &TMP5602[44];
TMP5602[44].kind = 1;
TMP5602[44].offset = offsetof(tcgen368029, Typenodes);
TMP5602[44].typ = (&NTI105);
TMP5602[44].name = "typeNodes";
TMP5604[22] = &TMP5602[45];
TMP5602[45].kind = 1;
TMP5602[45].offset = offsetof(tcgen368029, Nimtypes);
TMP5602[45].typ = (&NTI105);
TMP5602[45].name = "nimTypes";
TMP5604[23] = &TMP5602[46];
TMP5602[46].kind = 1;
TMP5602[46].offset = offsetof(tcgen368029, Typenodesname);
TMP5602[46].typ = (&NTI121005);
TMP5602[46].name = "typeNodesName";
TMP5604[24] = &TMP5602[47];
TMP5602[47].kind = 1;
TMP5602[47].offset = offsetof(tcgen368029, Nimtypesname);
TMP5602[47].typ = (&NTI121005);
TMP5602[47].name = "nimTypesName";
TMP5604[25] = &TMP5602[48];
TMP5602[48].kind = 1;
TMP5602[48].offset = offsetof(tcgen368029, Labels);
TMP5602[48].typ = (&NTI67896);
TMP5602[48].name = "labels";
TMP5604[26] = &TMP5602[49];
NTI368125.size = sizeof(TY368125);
NTI368125.kind = 16;
NTI368125.base = (&NTI121005);
NTI368125.flags = 2;
TMP5602[49].kind = 1;
TMP5602[49].offset = offsetof(tcgen368029, Extensionloaders);
TMP5602[49].typ = (&NTI368125);
TMP5602[49].name = "extensionLoaders";
TMP5604[27] = &TMP5602[50];
TMP5602[50].kind = 1;
TMP5602[50].offset = offsetof(tcgen368029, Injectstmt);
TMP5602[50].typ = (&NTI121005);
TMP5602[50].name = "injectStmt";
TMP5602[0].len = 28; TMP5602[0].kind = 2; TMP5602[0].sons = &TMP5604[0];
NTI368029.node = &TMP5602[0];
NTI368019.size = sizeof(tcgen368029*);
NTI368019.kind = 22;
NTI368019.base = (&NTI368029);
NTI368019.marker = TMP5610;
NTI368134.size = sizeof(TY368134*);
NTI368134.kind = 24;
NTI368134.base = (&NTI368019);
NTI368134.flags = 2;
NTI368134.marker = TMP5611;
}

