/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct tsym173689 tsym173689;
typedef struct ttype173693 ttype173693;
typedef struct tstrtable173663 tstrtable173663;
typedef struct tsymseq173661 tsymseq173661;
typedef struct TGenericSeq TGenericSeq;
typedef struct tidobj141011 tidobj141011;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq173691 ttypeseq173691;
typedef struct tnode173659 tnode173659;
typedef struct tloc173673 tloc173673;
typedef struct trope122007 trope122007;
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
typedef struct NimStringDesc NimStringDesc;
typedef struct tident141017 tident141017;
typedef struct tscope173683 tscope173683;
typedef struct TY173786 TY173786;
typedef struct tinstantiation173679 tinstantiation173679;
typedef struct tlineinfo137509 tlineinfo137509;
typedef struct tlib173677 tlib173677;
typedef struct tidentiter180106 tidentiter180106;
typedef struct tnodeseq173653 tnodeseq173653;
typedef struct tbasechunk21236 tbasechunk21236;
typedef struct tfreecell21228 tfreecell21228;
typedef struct TY173775 TY173775;
typedef struct tlistentry110014 tlistentry110014;
typedef ttype173693* TY218042[57];
struct TGenericSeq {
NI len;
NI reserved;
};
struct tstrtable173663 {
NI Counter;
tsymseq173661* Data;
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
struct tloc173673 {
NU8 K;
NU8 S;
NU8 Flags;
ttype173693* T;
trope122007* R;
trope122007* Heaproot;
NI A;
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
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
};
struct tlineinfo137509 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
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
struct tidentiter180106 {
NI H;
tident141017* Name;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef ttype173693* TY218241[70];
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
struct trope122007 {
  TNimObject Sup;
trope122007* Left;
trope122007* Right;
NI Length;
NimStringDesc* Data;
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
struct tfreecell21228 {
tfreecell21228* Next;
NI Zerofield;
};
struct tsymseq173661 {
  TGenericSeq Sup;
  tsym173689* data[SEQ_DECL_SIZE];
};
struct ttypeseq173691 {
  TGenericSeq Sup;
  ttype173693* data[SEQ_DECL_SIZE];
};
struct TY173786 {
  TGenericSeq Sup;
  tinstantiation173679* data[SEQ_DECL_SIZE];
};
struct tnodeseq173653 {
  TGenericSeq Sup;
  tnode173659* data[SEQ_DECL_SIZE];
};
struct TY173775 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, registersystype_218017)(ttype173693* t);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell38646*, usrtocell_42039)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdzct_43602)(tcell38646* c);
N_NOINLINE(void, addzct_42015)(tcellseq38662* s, tcell38646* c);
N_NIMCALL(ttype173693*, newsystype_218066)(NU8 kind, NI size);
N_NIMCALL(ttype173693*, newtype_173901)(NU8 kind, tsym173689* owner);
N_NIMCALL(tsym173689*, getsyssym_218037)(NimStringDesc* name);
N_NIMCALL(tsym173689*, strtableget_180084)(tstrtable173663 t, tident141017* name);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NIMCALL(tident141017*, getident_141443)(NimStringDesc* identifier);
N_NIMCALL(void, rawmessage_139191)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(tsym173689*, newsym_173894)(NU8 symkind, tident141017* name, tsym173689* owner, tlineinfo137509 info);
N_NIMCALL(void, loadstub_215392)(tsym173689* s);
N_NIMCALL(tsym173689*, getsysmagic_218110)(NimStringDesc* name, NU16 m);
N_NIMCALL(tsym173689*, initidentiter_180110)(tidentiter180106* ti, tstrtable173663 tab, tident141017* s);
N_NIMCALL(tsym173689*, nextidentiter_180117)(tidentiter180106* ti, tstrtable173663 tab);
N_NIMCALL(ttype173693*, systypefromname_218173)(NimStringDesc* name);
N_NIMCALL(ttype173693*, getsystype_218021)(NU8 kind);
N_NIMCALL(void, internalerror_139383)(NimStringDesc* errmsg);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, reprEnum)(NI e_73677, TNimType* typ);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, resetsystypes_218246)(void);
N_NIMCALL(void, initstrtable_173951)(tstrtable173663* x);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(ttype173693*, getintlittype_218317)(tnode173659* literal);
N_NIMCALL(ttype173693*, copytype_173982)(ttype173693* t, tsym173689* owner, NIM_BOOL keepid);
N_NIMCALL(ttype173693*, getfloatlittype_218351)(tnode173659* literal);
static N_INLINE(ttype173693*, skipintlit_218357)(ttype173693* t);
N_NIMCALL(void, addsonskipintlit_218386)(ttype173693* father, ttype173693* son);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(void, propagatetoowner_177094)(ttype173693* owner, ttype173693* elem);
N_NIMCALL(void, setintlittype_218432)(tnode173659* result);
N_NIMCALL(void, internalerror_139369)(tlineinfo137509 info, NimStringDesc* errmsg);
N_NIMCALL(tsym173689*, getcompilerproc_218025)(NimStringDesc* name);
N_NIMCALL(tident141017*, getident_141449)(NimStringDesc* identifier, NI h);
N_NIMCALL(NI, hashignorestyle_111856)(NimStringDesc* x);
N_NIMCALL(void, strtableadd_180078)(tstrtable173663* t, tsym173689* n);
N_NIMCALL(void, registercompilerproc_218029)(tsym173689* s);
N_NIMCALL(void, finishsystem_218033)(tstrtable173663 tab);
STRING_LITERAL(TMP3013, "tab", 3);
STRING_LITERAL(TMP3014, "int", 3);
STRING_LITERAL(TMP3015, "int8", 4);
STRING_LITERAL(TMP3016, "int16", 5);
STRING_LITERAL(TMP3017, "int32", 5);
STRING_LITERAL(TMP3018, "int64", 5);
STRING_LITERAL(TMP3019, "uint", 4);
STRING_LITERAL(TMP3020, "uint8", 5);
STRING_LITERAL(TMP3021, "uint16", 6);
STRING_LITERAL(TMP3022, "uint32", 6);
STRING_LITERAL(TMP3023, "uint64", 6);
STRING_LITERAL(TMP3024, "float", 5);
STRING_LITERAL(TMP3025, "float32", 7);
STRING_LITERAL(TMP3026, "float64", 7);
STRING_LITERAL(TMP3027, "float128", 8);
STRING_LITERAL(TMP3028, "bool", 4);
STRING_LITERAL(TMP3029, "char", 4);
STRING_LITERAL(TMP3030, "string", 6);
STRING_LITERAL(TMP3031, "cstring", 7);
STRING_LITERAL(TMP3032, "pointer", 7);
STRING_LITERAL(TMP3033, "request for typekind: ", 22);
STRING_LITERAL(TMP3034, "wanted: ", 8);
STRING_LITERAL(TMP3035, " got: ", 6);
STRING_LITERAL(TMP3036, "type not found: ", 16);
static NIM_CONST TY173865 TMP3037 = {
0xE0, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3038, "intVal", 6);
STRING_LITERAL(TMP3039, "invalid int size", 16);
tsym173689* systemmodule_218014;
TY218042 gsystypes_218044;
tstrtable173663 compilerprocs_218045;
extern TFrame* frameptr_12037;
extern tgcheap40616 gch_40644;
extern NI ptrsize_120579;
extern TNimType NTI173236; /* TTypeKind */
TY218241 inttypecache_218243;
extern TNimType NTI173691; /* TTypeSeq */
extern NI intsize_120577;
extern tstrtable173663 rodcompilerprocs_213057;

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
N_NIMCALL(void, registersystype_218017)(ttype173693* t) {
	nimfr("registerSysType", "magicsys.nim")
	nimln(31, "magicsys.nim");
	{
		nimln(31, "magicsys.nim");
		if (!(gsystypes_218044[((*t).Kind)- 0] == NIM_NIL)) goto LA3;
		nimln(31, "magicsys.nim");
		asgnRefNoCycle((void**) &gsystypes_218044[((*t).Kind)- 0], t);
	}	LA3: ;
	popFrame();
}
N_NIMCALL(ttype173693*, newsystype_218066)(NU8 kind, NI size) {
	ttype173693* result;
	nimfr("newSysType", "magicsys.nim")
	result = 0;
	nimln(34, "magicsys.nim");
	result = newtype_173901(kind, systemmodule_218014);
	nimln(35, "magicsys.nim");
	(*result).Size = ((NI64) (size));
	nimln(36, "magicsys.nim");
	(*result).Align = size;
	popFrame();
	return result;
}
N_NIMCALL(tsym173689*, getsyssym_218037)(NimStringDesc* name) {
	tsym173689* result;
	tident141017* LOC1;
	nimfr("getSysSym", "magicsys.nim")
	result = 0;
	nimln(39, "magicsys.nim");
	if (!(((64 &(1<<(((*systemmodule_218014).Kind)&31)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3013));
	nimln(39, "magicsys.nim");
	LOC1 = 0;
	LOC1 = getident_141443(name);
	result = strtableget_180084((*systemmodule_218014).kindU.S3.Tab, LOC1);
	nimln(40, "magicsys.nim");
	{
		tident141017* LOC6;
		nimln(40, "magicsys.nim");
		if (!(result == NIM_NIL)) goto LA4;
		nimln(41, "magicsys.nim");
		rawmessage_139191(((NU16) 64), name);		nimln(42, "magicsys.nim");
		nimln(42, "magicsys.nim");
		LOC6 = 0;
		LOC6 = getident_141443(name);
		result = newsym_173894(((NU8) 0), LOC6, systemmodule_218014, (*systemmodule_218014).Info);
		nimln(43, "magicsys.nim");
		asgnRefNoCycle((void**) &(*result).Typ, newtype_173901(((NU8) 50), systemmodule_218014));
	}	LA4: ;
	nimln(44, "magicsys.nim");
	{
		nimln(44, "magicsys.nim");
		if (!((*result).Kind == ((NU8) 22))) goto LA9;
		nimln(44, "magicsys.nim");
		loadstub_215392(result);	}	LA9: ;
	popFrame();
	return result;
}
N_NIMCALL(tsym173689*, getsysmagic_218110)(NimStringDesc* name, NU16 m) {
	tsym173689* result;
	tidentiter180106 ti;
	tident141017* id;
	nimfr("getSysMagic", "magicsys.nim")
	result = 0;
	memset((void*)&ti, 0, sizeof(ti));
	nimln(48, "magicsys.nim");
	id = getident_141443(name);
	nimln(49, "magicsys.nim");
	if (!(((64 &(1<<(((*systemmodule_218014).Kind)&31)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3013));
	result = initidentiter_180110(&ti, (*systemmodule_218014).kindU.S3.Tab, id);
	nimln(50, "magicsys.nim");
	while (1) {
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!((result == NIM_NIL))) goto LA1;
		nimln(51, "magicsys.nim");
		{
			nimln(51, "magicsys.nim");
			if (!((*result).Kind == ((NU8) 22))) goto LA4;
			nimln(51, "magicsys.nim");
			loadstub_215392(result);		}		LA4: ;
		nimln(52, "magicsys.nim");
		{
			nimln(52, "magicsys.nim");
			if (!((*result).Magic == m)) goto LA8;
			nimln(52, "magicsys.nim");
			goto BeforeRet;
		}		LA8: ;
		nimln(53, "magicsys.nim");
		if (!(((64 &(1<<(((*systemmodule_218014).Kind)&31)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3013));
		result = nextidentiter_180117(&ti, (*systemmodule_218014).kindU.S3.Tab);
	} LA1: ;
	nimln(54, "magicsys.nim");
	rawmessage_139191(((NU16) 64), name);	nimln(55, "magicsys.nim");
	result = newsym_173894(((NU8) 0), id, systemmodule_218014, (*systemmodule_218014).Info);
	nimln(56, "magicsys.nim");
	asgnRefNoCycle((void**) &(*result).Typ, newtype_173901(((NU8) 50), systemmodule_218014));
	BeforeRet: ;	popFrame();
	return result;
}
N_NIMCALL(ttype173693*, systypefromname_218173)(NimStringDesc* name) {
	ttype173693* result;
	tsym173689* LOC1;
	nimfr("sysTypeFromName", "magicsys.nim")
	result = 0;
	nimln(59, "magicsys.nim");
	nimln(59, "magicsys.nim");
	LOC1 = 0;
	LOC1 = getsyssym_218037(name);
	result = (*LOC1).Typ;
	popFrame();
	return result;
}
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));	(*dest).Sup.len += (*src).Sup.len;
}
N_NIMCALL(ttype173693*, getsystype_218021)(NU8 kind) {
	ttype173693* result;
	nimfr("getSysType", "magicsys.nim")
	result = 0;
	nimln(62, "magicsys.nim");
	result = gsystypes_218044[(kind)- 0];
	nimln(63, "magicsys.nim");
	{
		nimln(63, "magicsys.nim");
		if (!(result == NIM_NIL)) goto LA3;
		nimln(64, "magicsys.nim");
		switch (kind) {
		case ((NU8) 31):
		{
			nimln(65, "magicsys.nim");
			result = systypefromname_218173(((NimStringDesc*) &TMP3014));
		}		break;
		case ((NU8) 32):
		{
			nimln(66, "magicsys.nim");
			result = systypefromname_218173(((NimStringDesc*) &TMP3015));
		}		break;
		case ((NU8) 33):
		{
			nimln(67, "magicsys.nim");
			result = systypefromname_218173(((NimStringDesc*) &TMP3016));
		}		break;
		case ((NU8) 34):
		{
			nimln(68, "magicsys.nim");
			result = systypefromname_218173(((NimStringDesc*) &TMP3017));
		}		break;
		case ((NU8) 35):
		{
			nimln(69, "magicsys.nim");
			result = systypefromname_218173(((NimStringDesc*) &TMP3018));
		}		break;
		case ((NU8) 40):
		{
			nimln(70, "magicsys.nim");
			result = systypefromname_218173(((NimStringDesc*) &TMP3019));
		}		break;
		case ((NU8) 41):
		{
			nimln(71, "magicsys.nim");
			result = systypefromname_218173(((NimStringDesc*) &TMP3020));
		}		break;
		case ((NU8) 42):
		{
			nimln(72, "magicsys.nim");
			result = systypefromname_218173(((NimStringDesc*) &TMP3021));
		}		break;
		case ((NU8) 43):
		{
			nimln(73, "magicsys.nim");
			result = systypefromname_218173(((NimStringDesc*) &TMP3022));
		}		break;
		case ((NU8) 44):
		{
			nimln(74, "magicsys.nim");
			result = systypefromname_218173(((NimStringDesc*) &TMP3023));
		}		break;
		case ((NU8) 36):
		{
			nimln(75, "magicsys.nim");
			result = systypefromname_218173(((NimStringDesc*) &TMP3024));
		}		break;
		case ((NU8) 37):
		{
			nimln(76, "magicsys.nim");
			result = systypefromname_218173(((NimStringDesc*) &TMP3025));
		}		break;
		case ((NU8) 38):
		{
			nimln(77, "magicsys.nim");
			nimln(77, "magicsys.nim");
			result = systypefromname_218173(((NimStringDesc*) &TMP3026));
			goto BeforeRet;
		}		break;
		case ((NU8) 39):
		{
			nimln(78, "magicsys.nim");
			result = systypefromname_218173(((NimStringDesc*) &TMP3027));
		}		break;
		case ((NU8) 1):
		{
			nimln(79, "magicsys.nim");
			result = systypefromname_218173(((NimStringDesc*) &TMP3028));
		}		break;
		case ((NU8) 2):
		{
			nimln(80, "magicsys.nim");
			result = systypefromname_218173(((NimStringDesc*) &TMP3029));
		}		break;
		case ((NU8) 28):
		{
			nimln(81, "magicsys.nim");
			result = systypefromname_218173(((NimStringDesc*) &TMP3030));
		}		break;
		case ((NU8) 29):
		{
			nimln(82, "magicsys.nim");
			result = systypefromname_218173(((NimStringDesc*) &TMP3031));
		}		break;
		case ((NU8) 26):
		{
			nimln(83, "magicsys.nim");
			result = systypefromname_218173(((NimStringDesc*) &TMP3032));
		}		break;
		case ((NU8) 5):
		{
			nimln(84, "magicsys.nim");
			result = newsystype_218066(((NU8) 5), ptrsize_120579);
		}		break;
		default:
		{
			NimStringDesc* LOC26;
			nimln(85, "magicsys.nim");
			nimln(85, "magicsys.nim");
			LOC26 = 0;
			nimln(85, "magicsys.nim");
			LOC26 = rawNewString(reprEnum(kind, (&NTI173236))->Sup.len + 22);
appendString(LOC26, ((NimStringDesc*) &TMP3033));
appendString(LOC26, reprEnum(kind, (&NTI173236)));
			internalerror_139383(LOC26);		}		break;
		}
		nimln(86, "magicsys.nim");
		asgnRefNoCycle((void**) &gsystypes_218044[(kind)- 0], result);
	}	LA3: ;
	nimln(87, "magicsys.nim");
	{
		NimStringDesc* LOC31;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!(((*result).Kind == kind))) goto LA29;
		nimln(88, "magicsys.nim");
		nimln(88, "magicsys.nim");
		LOC31 = 0;
		nimln(88, "magicsys.nim");
		nimln(88, "magicsys.nim");
		LOC31 = rawNewString(reprEnum(kind, (&NTI173236))->Sup.len + reprEnum((*result).Kind, (&NTI173236))->Sup.len + 14);
appendString(LOC31, ((NimStringDesc*) &TMP3034));
appendString(LOC31, reprEnum(kind, (&NTI173236)));
appendString(LOC31, ((NimStringDesc*) &TMP3035));
appendString(LOC31, reprEnum((*result).Kind, (&NTI173236)));
		internalerror_139383(LOC31);	}	LA29: ;
	nimln(89, "magicsys.nim");
	{
		NimStringDesc* LOC36;
		nimln(89, "magicsys.nim");
		if (!(result == NIM_NIL)) goto LA34;
		nimln(89, "magicsys.nim");
		nimln(89, "magicsys.nim");
		LOC36 = 0;
		nimln(89, "magicsys.nim");
		LOC36 = rawNewString(reprEnum(kind, (&NTI173236))->Sup.len + 16);
appendString(LOC36, ((NimStringDesc*) &TMP3036));
appendString(LOC36, reprEnum(kind, (&NTI173236)));
		internalerror_139383(LOC36);	}	LA34: ;
	BeforeRet: ;	popFrame();
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
N_NIMCALL(void, resetsystypes_218246)(void) {
	NU8 i_218281;
	NU8 res_218308;
	NI i_218306;
	NI res_218311;
	nimfr("resetSysTypes", "magicsys.nim")
	nimln(95, "magicsys.nim");
	asgnRefNoCycle((void**) &systemmodule_218014, NIM_NIL);
	nimln(96, "magicsys.nim");
	initstrtable_173951(&compilerprocs_218045);	i_218281 = 0;
	nimln(1308, "system.nim");
	res_218308 = ((NU8) 0);
	nimln(1309, "system.nim");
	while (1) {
		nimln(1309, "system.nim");
		if (!(res_218308 <= ((NU8) 56))) goto LA1;
		nimln(1308, "system.nim");
		i_218281 = res_218308;
		nimln(98, "magicsys.nim");
		asgnRefNoCycle((void**) &gsystypes_218044[(i_218281)- 0], NIM_NIL);
		nimln(1311, "system.nim");
		res_218308 = addInt(res_218308, 1);
	} LA1: ;
	i_218306 = 0;
	nimln(1308, "system.nim");
	res_218311 = -5;
	nimln(1309, "system.nim");
	while (1) {
		nimln(1309, "system.nim");
		if (!(((NI) (res_218311)) <= 64)) goto LA2;
		nimln(1308, "system.nim");
		i_218306 = res_218311;
		nimln(101, "magicsys.nim");
		if (i_218306 < -5 || i_218306 > 64) raiseIndexError();
		asgnRefNoCycle((void**) &inttypecache_218243[(i_218306)- -5], NIM_NIL);
		nimln(1311, "system.nim");
		res_218311 = addInt(res_218311, 1);
	} LA2: ;
	popFrame();
}
N_NIMCALL(ttype173693*, getintlittype_218317)(tnode173659* literal) {
	ttype173693* result;
	NI64 value;
	nimfr("getIntLitType", "magicsys.nim")
	result = 0;
	nimln(105, "magicsys.nim");
	if (!(((TMP3037[(*literal).Kind/8] &(1<<((*literal).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3038));
	value = (*literal).kindU.S1.Intval;
	nimln(106, "magicsys.nim");
	{
		NIM_BOOL LOC3;
		nimln(106, "magicsys.nim");
		LOC3 = 0;
		nimln(702, "system.nim");
		LOC3 = (-5 <= value);
		if (!(LOC3)) goto LA4;
		nimln(106, "magicsys.nim");
		LOC3 = (value <= 64);
		LA4: ;
		if (!LOC3) goto LA5;
		nimln(107, "magicsys.nim");
		if (((NI) (value)) < -5 || ((NI) (value)) > 64) raiseIndexError();
		result = inttypecache_218243[(((NI) (value)))- -5];
		nimln(108, "magicsys.nim");
		{
			ttype173693* ti;
			nimln(108, "magicsys.nim");
			if (!(result == NIM_NIL)) goto LA9;
			nimln(109, "magicsys.nim");
			ti = getsystype_218021(((NU8) 31));
			nimln(110, "magicsys.nim");
			result = copytype_173982(ti, (*ti).Owner, NIM_FALSE);
			nimln(111, "magicsys.nim");
			asgnRefNoCycle((void**) &(*result).N, literal);
			nimln(112, "magicsys.nim");
			if (((NI) (value)) < -5 || ((NI) (value)) > 64) raiseIndexError();
			asgnRefNoCycle((void**) &inttypecache_218243[(((NI) (value)))- -5], result);
		}		LA9: ;
	}	goto LA1;
	LA5: ;
	{
		ttype173693* ti;
		nimln(114, "magicsys.nim");
		ti = getsystype_218021(((NU8) 31));
		nimln(115, "magicsys.nim");
		result = copytype_173982(ti, (*ti).Owner, NIM_FALSE);
		nimln(116, "magicsys.nim");
		asgnRefNoCycle((void**) &(*result).N, literal);
	}	LA1: ;
	popFrame();
	return result;
}
N_NIMCALL(ttype173693*, getfloatlittype_218351)(tnode173659* literal) {
	ttype173693* result;
	nimfr("getFloatLitType", "magicsys.nim")
	result = 0;
	nimln(120, "magicsys.nim");
	result = newsystype_218066(((NU8) 36), 8);
	nimln(121, "magicsys.nim");
	asgnRefNoCycle((void**) &(*result).N, literal);
	popFrame();
	return result;
}
static N_INLINE(ttype173693*, skipintlit_218357)(ttype173693* t) {
	ttype173693* result;
	nimfr("skipIntLit", "magicsys.nim")
	result = 0;
	nimln(124, "magicsys.nim");
	{
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!(((*t).N == NIM_NIL))) goto LA3;
		nimln(125, "magicsys.nim");
		{
			nimln(730, "system.nim");
			if (!((IL64(70866960384) &(IL64(1)<<(((*t).Kind)&IL64(63))))!=0)) goto LA7;
			nimln(126, "magicsys.nim");
			nimln(126, "magicsys.nim");
			result = getsystype_218021((*t).Kind);
			goto BeforeRet;
		}		LA7: ;
	}	LA3: ;
	nimln(127, "magicsys.nim");
	result = t;
	BeforeRet: ;	popFrame();
	return result;
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
N_NIMCALL(void, addsonskipintlit_218386)(ttype173693* father, ttype173693* son) {
	ttype173693* s;
	nimfr("AddSonSkipIntLit", "magicsys.nim")
	nimln(130, "magicsys.nim");
	{
		nimln(130, "magicsys.nim");
		if (!(*father).Sons == 0) goto LA3;
		nimln(130, "magicsys.nim");
		if ((*father).Sons) nimGCunrefNoCycle((*father).Sons);
		(*father).Sons = (ttypeseq173691*) newSeqRC1((&NTI173691), 0);
	}	LA3: ;
	nimln(131, "magicsys.nim");
	s = skipintlit_218357(son);
	nimln(132, "magicsys.nim");
	(*father).Sons = (ttypeseq173691*) incrSeq(&((*father).Sons)->Sup, sizeof(ttype173693*));
	asgnRefNoCycle((void**) &(*father).Sons->data[(*father).Sons->Sup.len-1], s);
	nimln(133, "magicsys.nim");
	propagatetoowner_177094(father, s);	popFrame();
}
N_NIMCALL(void, setintlittype_218432)(tnode173659* result) {
	NI64 i;
	nimfr("setIntLitType", "magicsys.nim")
	nimln(136, "magicsys.nim");
	if (!(((TMP3037[(*result).Kind/8] &(1<<((*result).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3038));
	i = (*result).kindU.S1.Intval;
	nimln(137, "magicsys.nim");
	switch (intsize_120577) {
	case 8:
	{
		nimln(138, "magicsys.nim");
		asgnRefNoCycle((void**) &(*result).Typ, getintlittype_218317(result));
	}	break;
	case 4:
	{
		nimln(140, "magicsys.nim");
		{
			NIM_BOOL LOC5;
			nimln(140, "magicsys.nim");
			LOC5 = 0;
			nimln(702, "system.nim");
			LOC5 = ((-2147483647 -1) <= i);
			if (!(LOC5)) goto LA6;
			nimln(140, "magicsys.nim");
			LOC5 = (i <= 2147483647);
			LA6: ;
			if (!LOC5) goto LA7;
			nimln(141, "magicsys.nim");
			asgnRefNoCycle((void**) &(*result).Typ, getintlittype_218317(result));
		}		goto LA3;
		LA7: ;
		{
			nimln(143, "magicsys.nim");
			asgnRefNoCycle((void**) &(*result).Typ, getsystype_218021(((NU8) 35)));
		}		LA3: ;
	}	break;
	case 2:
	{
		nimln(145, "magicsys.nim");
		{
			NIM_BOOL LOC13;
			nimln(145, "magicsys.nim");
			LOC13 = 0;
			nimln(702, "system.nim");
			LOC13 = (-32768 <= i);
			if (!(LOC13)) goto LA14;
			nimln(145, "magicsys.nim");
			LOC13 = (i <= 32767);
			LA14: ;
			if (!LOC13) goto LA15;
			nimln(146, "magicsys.nim");
			asgnRefNoCycle((void**) &(*result).Typ, getintlittype_218317(result));
		}		goto LA11;
		LA15: ;
		{
			NIM_BOOL LOC18;
			nimln(147, "magicsys.nim");
			LOC18 = 0;
			nimln(702, "system.nim");
			LOC18 = ((-2147483647 -1) <= i);
			if (!(LOC18)) goto LA19;
			nimln(147, "magicsys.nim");
			LOC18 = (i <= 2147483647);
			LA19: ;
			if (!LOC18) goto LA20;
			nimln(148, "magicsys.nim");
			asgnRefNoCycle((void**) &(*result).Typ, getsystype_218021(((NU8) 34)));
		}		goto LA11;
		LA20: ;
		{
			nimln(150, "magicsys.nim");
			asgnRefNoCycle((void**) &(*result).Typ, getsystype_218021(((NU8) 35)));
		}		LA11: ;
	}	break;
	case 1:
	{
		nimln(153, "magicsys.nim");
		{
			NIM_BOOL LOC26;
			nimln(153, "magicsys.nim");
			LOC26 = 0;
			nimln(702, "system.nim");
			LOC26 = (-128 <= i);
			if (!(LOC26)) goto LA27;
			nimln(153, "magicsys.nim");
			LOC26 = (i <= 127);
			LA27: ;
			if (!LOC26) goto LA28;
			nimln(154, "magicsys.nim");
			asgnRefNoCycle((void**) &(*result).Typ, getintlittype_218317(result));
		}		goto LA24;
		LA28: ;
		{
			NIM_BOOL LOC31;
			nimln(155, "magicsys.nim");
			LOC31 = 0;
			nimln(702, "system.nim");
			LOC31 = (-32768 <= i);
			if (!(LOC31)) goto LA32;
			nimln(155, "magicsys.nim");
			LOC31 = (i <= 32767);
			LA32: ;
			if (!LOC31) goto LA33;
			nimln(156, "magicsys.nim");
			asgnRefNoCycle((void**) &(*result).Typ, getsystype_218021(((NU8) 33)));
		}		goto LA24;
		LA33: ;
		{
			NIM_BOOL LOC36;
			nimln(157, "magicsys.nim");
			LOC36 = 0;
			nimln(702, "system.nim");
			LOC36 = ((-2147483647 -1) <= i);
			if (!(LOC36)) goto LA37;
			nimln(157, "magicsys.nim");
			LOC36 = (i <= 2147483647);
			LA37: ;
			if (!LOC36) goto LA38;
			nimln(158, "magicsys.nim");
			asgnRefNoCycle((void**) &(*result).Typ, getsystype_218021(((NU8) 34)));
		}		goto LA24;
		LA38: ;
		{
			nimln(160, "magicsys.nim");
			asgnRefNoCycle((void**) &(*result).Typ, getsystype_218021(((NU8) 35)));
		}		LA24: ;
	}	break;
	default:
	{
		nimln(161, "magicsys.nim");
		internalerror_139369((*result).Info, ((NimStringDesc*) &TMP3039));	}	break;
	}
	popFrame();
}
N_NIMCALL(tsym173689*, getcompilerproc_218025)(NimStringDesc* name) {
	tsym173689* result;
	tident141017* ident;
	NI LOC1;
	nimfr("getCompilerProc", "magicsys.nim")
	result = 0;
	nimln(164, "magicsys.nim");
	nimln(164, "magicsys.nim");
	LOC1 = 0;
	LOC1 = hashignorestyle_111856(name);
	ident = getident_141449(name, LOC1);
	nimln(165, "magicsys.nim");
	result = strtableget_180084(compilerprocs_218045, ident);
	nimln(166, "magicsys.nim");
	{
		nimln(166, "magicsys.nim");
		if (!(result == NIM_NIL)) goto LA4;
		nimln(167, "magicsys.nim");
		result = strtableget_180084(rodcompilerprocs_213057, ident);
		nimln(168, "magicsys.nim");
		{
			nimln(698, "system.nim");
			nimln(698, "system.nim");
			if (!!((result == NIM_NIL))) goto LA8;
			nimln(169, "magicsys.nim");
			strtableadd_180078(&compilerprocs_218045, result);			nimln(170, "magicsys.nim");
			{
				nimln(170, "magicsys.nim");
				if (!((*result).Kind == ((NU8) 22))) goto LA12;
				nimln(170, "magicsys.nim");
				loadstub_215392(result);			}			LA12: ;
		}		LA8: ;
	}	LA4: ;
	popFrame();
	return result;
}
N_NIMCALL(void, registercompilerproc_218029)(tsym173689* s) {
	nimfr("registerCompilerProc", "magicsys.nim")
	nimln(173, "magicsys.nim");
	strtableadd_180078(&compilerprocs_218045, s);	popFrame();
}
N_NIMCALL(void, finishsystem_218033)(tstrtable173663 tab) {
	nimfr("FinishSystem", "magicsys.nim")
	popFrame();
}N_NOINLINE(void, compilermagicsysInit)(void) {
	nimfr("magicsys", "magicsys.nim")
	nimln(177, "magicsys.nim");
	initstrtable_173951(&compilerprocs_218045);	popFrame();
}

N_NOINLINE(void, compilermagicsysDatInit)(void) {
}

