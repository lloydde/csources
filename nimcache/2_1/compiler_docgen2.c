/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <setjmp.h>
typedef struct tnode172659 tnode172659;
typedef struct tpasscontext223003 tpasscontext223003;
typedef struct tgen416007 tgen416007;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TNimObject TNimObject;
typedef struct tdocumentor308005 tdocumentor308005;
typedef struct tsym172689 tsym172689;
typedef struct tidobj141011 tidobj141011;
typedef struct ttypeseq172691 ttypeseq172691;
typedef struct ttype172693 ttype172693;
typedef struct TGenericSeq TGenericSeq;
typedef struct tscope172683 tscope172683;
typedef struct TY172786 TY172786;
typedef struct tinstantiation172679 tinstantiation172679;
typedef struct tstrtable172663 tstrtable172663;
typedef struct tsymseq172661 tsymseq172661;
typedef struct tident141017 tident141017;
typedef struct tlineinfo137509 tlineinfo137509;
typedef struct tloc172673 tloc172673;
typedef struct trope121007 trope121007;
typedef struct tlib172677 tlib172677;
typedef struct NimStringDesc NimStringDesc;
typedef struct E_Base E_Base;
typedef struct TSafePoint TSafePoint;
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
typedef struct tstringtable112610 tstringtable112610;
typedef struct trstgenerator289012 trstgenerator289012;
typedef struct TY289028 TY289028;
typedef struct ttocentry289008 ttocentry289008;
typedef struct trstnode279018 trstnode279018;
typedef struct tpass223015 tpass223015;
typedef struct trodreader212023 trodreader212023;
typedef struct tnodeseq172653 tnodeseq172653;
typedef struct TY172775 TY172775;
typedef struct tlistentry109014 tlistentry109014;
typedef struct tbasechunk21436 tbasechunk21436;
typedef struct tfreecell21428 tfreecell21428;
typedef struct tkeyvaluepairseq112608 tkeyvaluepairseq112608;
typedef struct TY87905 TY87905;
typedef struct TY279093 TY279093;
typedef struct tindex212021 tindex212021;
typedef struct tiitable179211 tiitable179211;
typedef struct tiipairseq179209 tiipairseq179209;
typedef struct tiipair179207 tiipair179207;
typedef struct tidtable172705 tidtable172705;
typedef struct tidpairseq172703 tidpairseq172703;
typedef struct tidpair172701 tidpair172701;
typedef struct tmemfile210204 tmemfile210204;
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
struct tgen416007 {
  tpasscontext223003 Sup;
tdocumentor308005* Doc;
tsym172689* Module;
};
struct tidobj141011 {
  TNimObject Sup;
NI Id;
};
struct TGenericSeq {
NI len;
NI reserved;
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
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
};
struct E_Base {
  TNimObject Sup;
E_Base* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClPrc) (E_Base* e, void* ClEnv);
void* ClEnv;
} TY10620;
struct TSafePoint {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY10620 raiseAction;
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
struct ttocentry289008 {
trstnode279018* N;
NimStringDesc* Refname;
NimStringDesc* Header;
};
typedef N_NIMCALL_PTR(NimStringDesc*, tfindfilehandler280017) (NimStringDesc* filename);
typedef N_NIMCALL_PTR(void, tmsghandler280015) (NimStringDesc* filename, NI line, NI col, NU8 msgkind, NimStringDesc* arg);
typedef NimStringDesc* TY289036[5];
struct trstgenerator289012 {
  TNimObject Sup;
NU8 Target;
tstringtable112610* Config;
NI Splitafter;
TY289028* Tocpart;
NIM_BOOL Hastoc;
NimStringDesc* Theindex;
NU8 Options;
tfindfilehandler280017 Findfile;
tmsghandler280015 Msghandler;
NimStringDesc* Filename;
TY289036 Meta;
};
typedef trope121007* tsections308003[23];
struct tdocumentor308005 {
  trstgenerator289012 Sup;
trope121007* Moddesc;
NI Id;
tsections308003 Toc;
tsections308003 Section;
NimStringDesc* Indexvalfilename;
};
typedef N_NIMCALL_PTR(tpasscontext223003*, tpassopen223007) (tsym172689* module);
typedef N_NIMCALL_PTR(tpasscontext223003*, tpassopencached223009) (tsym172689* module, trodreader212023* rd);
typedef N_NIMCALL_PTR(tnode172659*, tpassprocess223013) (tpasscontext223003* p, tnode172659* toplevelstmt);
typedef N_NIMCALL_PTR(tnode172659*, tpassclose223011) (tpasscontext223003* p, tnode172659* n);
struct tpass223015 {
tpassopen223007 Field0;
tpassopencached223009 Field1;
tpassprocess223013 Field2;
tpassclose223011 Field3;
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
struct tlib172677 {
  tlistentry109014 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope121007* Name;
tnode172659* Path;
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
struct TY87905 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct tstringtable112610 {
  TNimObject Sup;
NI Counter;
tkeyvaluepairseq112608* Data;
NU8 Mode;
};
struct trstnode279018 {
NU8 Kind;
NimStringDesc* Text;
NI Level;
TY279093* Sons;
};
struct tiipair179207 {
NI Key;
NI Val;
};
struct tiitable179211 {
NI Counter;
tiipairseq179209* Data;
};
struct tindex212021 {
NI Lastidxkey;
NI Lastidxval;
tiitable179211 Tab;
NimStringDesc* R;
NI Offset;
};
struct tidpair172701 {
tidobj141011* Key;
TNimObject* Val;
};
struct tidtable172705 {
NI Counter;
tidpairseq172703* Data;
};
struct tmemfile210204 {
void* Mem;
NI Size;
int Handle;
};
struct trodreader212023 {
  TNimObject Sup;
NI Pos;
NCSTRING S;
NU32 Options;
NU8 Reason;
TY172775* Moddeps;
TY172775* Files;
NI Dataidx;
NI Convertersidx;
NI Initidx;
NI Interfidx;
NI Compilerprocsidx;
NI Methodsidx;
NimStringDesc* Filename;
tindex212021 Index;
tindex212021 Imports;
NI Readerindex;
NI Line;
NI Moduleid;
tidtable172705 Syms;
tmemfile210204 Memfile;
tsymseq172661* Methods;
NimStringDesc* Origfile;
NIM_BOOL Inviewmode;
};
struct tfreecell21428 {
tfreecell21428* Next;
NI Zerofield;
};
struct ttypeseq172691 {
  TGenericSeq Sup;
  ttype172693* data[SEQ_DECL_SIZE];
};
struct TY172786 {
  TGenericSeq Sup;
  tinstantiation172679* data[SEQ_DECL_SIZE];
};
struct tsymseq172661 {
  TGenericSeq Sup;
  tsym172689* data[SEQ_DECL_SIZE];
};
struct TY289028 {
  TGenericSeq Sup;
  ttocentry289008 data[SEQ_DECL_SIZE];
};
struct tnodeseq172653 {
  TGenericSeq Sup;
  tnode172659* data[SEQ_DECL_SIZE];
};
struct TY172775 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct tkeyvaluepairseq112608 {
  TGenericSeq Sup;
  TY87905 data[SEQ_DECL_SIZE];
};
struct TY279093 {
  TGenericSeq Sup;
  trstnode279018* data[SEQ_DECL_SIZE];
};
struct tiipairseq179209 {
  TGenericSeq Sup;
  tiipair179207 data[SEQ_DECL_SIZE];
};
struct tidpairseq172703 {
  TGenericSeq Sup;
  tidpair172701 data[SEQ_DECL_SIZE];
};
N_NIMCALL(tnode172659*, close_416013)(tpasscontext223003* p, tnode172659* n);
N_NIMCALL(void, chckObj)(TNimType* obj, TNimType* subclass);
N_NIMCALL(void, writeoutput_311043)(tdocumentor308005* d, NimStringDesc* filename, NimStringDesc* outext, NIM_BOOL usewarning);
N_NIMCALL(NimStringDesc*, tofilename_138700)(NI32 fileidx);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(void, generateindex_311027)(tdocumentor308005* d);
static N_INLINE(void, popSafePoint)(void);
static N_INLINE(void, setFrame)(TFrame* s);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(E_Base*, getCurrentException)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, popCurrentException)(void);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell38848*, usrtocell_42239)(void* usr);
static N_INLINE(void, rtladdzct_43802)(tcell38848* c);
N_NOINLINE(void, addzct_42215)(tcellseq38864* s, tcell38848* c);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(tnode172659*, processnode_416043)(tpasscontext223003* c, tnode172659* n);
N_NIMCALL(void, generatedoc_308956)(tdocumentor308005* d, tnode172659* n);
N_NIMCALL(tpasscontext223003*, myopen_416051)(tsym172689* module);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP7023)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(tdocumentor308005*, newdocumentor_308038)(NimStringDesc* filename, tstringtable112610* config);
N_NIMCALL(void, finishdoc2pass_416076)(NimStringDesc* project);
STRING_LITERAL(TMP7021, "html", 4);
NIM_CONST tpass223015 docgen2pass_416073 = {myopen_416051,
NIM_NIL,
processnode_416043,
close_416013}
;
extern TNimType NTI223003; /* TPassContext */
TNimType NTI416007; /* TGen */
extern TNimType NTI308007; /* PDoc */
extern TNimType NTI172657; /* PSym */
extern NIM_BOOL gwholeproject_114119;
extern TSafePoint* exchandler_12038;
extern TFrame* frameptr_12037;
extern TNimType NTI1033; /* EIO */
extern E_Base* currexception_12040;
extern tgcheap40816 gch_40844;
TNimType NTI416009; /* PGen */
extern tstringtable112610* gconfigvars_114194;

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = exchandler_12038;
	exchandler_12038 = s;
}
static N_INLINE(void, popSafePoint)(void) {
	exchandler_12038 = (*exchandler_12038).prev;
}
static N_INLINE(void, setFrame)(TFrame* s) {
	frameptr_12037 = s;
}
static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12037;
	frameptr_12037 = s;
}
static N_INLINE(void, popFrame)(void) {
	frameptr_12037 = (*frameptr_12037).prev;
}
static N_INLINE(E_Base*, getCurrentException)(void) {
	E_Base* result;
	nimfr("getCurrentException", "system.nim")
	result = 0;
	nimln(2246, "system.nim");
	result = currexception_12040;
	popFrame();
	return result;
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
static N_INLINE(void, popCurrentException)(void) {
	asgnRefNoCycle((void**) &currexception_12040, (*currexception_12040).parent);
}
N_NIMCALL(tnode172659*, close_416013)(tpasscontext223003* p, tnode172659* n) {
	tnode172659* result;
	tgen416007* g;
	NIM_BOOL usewarning;
	nimfr("close", "docgen2.nim")
	result = 0;
	nimln(23, "docgen2.nim");
	if (p) chckObj((*p).Sup.m_type, (&NTI416007));
	g = ((tgen416007*) (p));
	nimln(24, "docgen2.nim");
	nimln(731, "system.nim");
	nimln(731, "system.nim");
	usewarning = !((((*(*g).Module).Flags &(1<<((((NU8) 12))&31)))!=0));
	nimln(25, "docgen2.nim");
	{
		NIM_BOOL LOC3;
		NimStringDesc* LOC7;
		TSafePoint TMP7022;
		nimln(25, "docgen2.nim");
		LOC3 = 0;
		LOC3 = gwholeproject_114119;
		if (LOC3) goto LA4;
		nimln(730, "system.nim");
		LOC3 = (((*(*g).Module).Flags &(1<<((((NU8) 12))&31)))!=0);
		LA4: ;
		if (!LOC3) goto LA5;
		nimln(26, "docgen2.nim");
		nimln(913, "ast.nim");
		LOC7 = 0;
		LOC7 = tofilename_138700(((NI32) ((*(*g).Module).Position)));
		writeoutput_311043((*g).Doc, LOC7, ((NimStringDesc*) &TMP7021), usewarning);		nimln(27, "docgen2.nim");
		pushSafePoint(&TMP7022);
		TMP7022.status = setjmp(TMP7022.context);
		if (TMP7022.status == 0) {
			nimln(28, "docgen2.nim");
			generateindex_311027((*g).Doc);			popSafePoint();
		}		else {
			popSafePoint();
			setFrame((TFrame*)&F);
			if (isObj(getCurrentException()->Sup.m_type, (&NTI1033))) {
				TMP7022.status = 0;
				popCurrentException();
			}		}		if (TMP7022.status != 0) reraiseException();
	}	LA5: ;
	popFrame();
	return result;
}
N_NIMCALL(tnode172659*, processnode_416043)(tpasscontext223003* c, tnode172659* n) {
	tnode172659* result;
	tgen416007* g;
	nimfr("processNode", "docgen2.nim")
	result = 0;
	nimln(33, "docgen2.nim");
	result = n;
	nimln(34, "docgen2.nim");
	if (c) chckObj((*c).Sup.m_type, (&NTI416007));
	g = ((tgen416007*) (c));
	nimln(35, "docgen2.nim");
	generatedoc_308956((*g).Doc, n);	popFrame();
	return result;
}N_NIMCALL(void, TMP7023)(void* p, NI op) {
	tgen416007* a;
	a = (tgen416007*)p;
	nimGCvisit((void*)(*a).Doc, op);
	nimGCvisit((void*)(*a).Module, op);
}

N_NIMCALL(tpasscontext223003*, myopen_416051)(tsym172689* module) {
	tpasscontext223003* result;
	tgen416007* g;
	tdocumentor308005* d;
	NimStringDesc* LOC1;
	nimfr("myOpen", "docgen2.nim")
	result = 0;
	g = 0;
	nimln(39, "docgen2.nim");
	g = (tgen416007*) newObj((&NTI416009), sizeof(tgen416007));
	(*g).Sup.Sup.m_type = (&NTI416007);
	nimln(40, "docgen2.nim");
	asgnRefNoCycle((void**) &(*g).Module, module);
	nimln(41, "docgen2.nim");
	nimln(913, "ast.nim");
	LOC1 = 0;
	LOC1 = tofilename_138700(((NI32) ((*module).Position)));
	d = newdocumentor_308038(LOC1, gconfigvars_114194);
	nimln(42, "docgen2.nim");
	(*d).Sup.Hastoc = NIM_TRUE;
	nimln(43, "docgen2.nim");
	asgnRefNoCycle((void**) &(*g).Doc, d);
	nimln(44, "docgen2.nim");
	result = &g->Sup;
	popFrame();
	return result;
}
N_NIMCALL(void, finishdoc2pass_416076)(NimStringDesc* project) {
	nimfr("finishDoc2Pass", "docgen2.nim")
	popFrame();
}N_NOINLINE(void, compilerdocgen2Init)(void) {
	nimfr("docgen2", "docgen2.nim")
	popFrame();
}

N_NOINLINE(void, compilerdocgen2DatInit)(void) {
static TNimNode* TMP7020[2];
static TNimNode TMP7018[3];
NTI416007.size = sizeof(tgen416007);
NTI416007.kind = 17;
NTI416007.base = (&NTI223003);
NTI416007.flags = 2;
TMP7020[0] = &TMP7018[1];
TMP7018[1].kind = 1;
TMP7018[1].offset = offsetof(tgen416007, Doc);
TMP7018[1].typ = (&NTI308007);
TMP7018[1].name = "doc";
TMP7020[1] = &TMP7018[2];
TMP7018[2].kind = 1;
TMP7018[2].offset = offsetof(tgen416007, Module);
TMP7018[2].typ = (&NTI172657);
TMP7018[2].name = "module";
TMP7018[0].len = 2; TMP7018[0].kind = 2; TMP7018[0].sons = &TMP7020[0];
NTI416007.node = &TMP7018[0];
NTI416009.size = sizeof(tgen416007*);
NTI416009.kind = 22;
NTI416009.base = (&NTI416007);
NTI416009.flags = 2;
NTI416009.marker = TMP7023;
}

