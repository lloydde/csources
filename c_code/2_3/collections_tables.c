/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct ttable136540 ttable136540;
typedef struct tkeyvaluepairseq136543 tkeyvaluepairseq136543;
typedef struct tkeyvaluepair136546 tkeyvaluepair136546;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
typedef struct ttable219059 ttable219059;
typedef struct tkeyvaluepairseq219062 tkeyvaluepairseq219062;
typedef struct tkeyvaluepair219065 tkeyvaluepair219065;
typedef struct tcall219009 tcall219009;
typedef struct tsym171689 tsym171689;
typedef struct TY219020 TY219020;
typedef struct ttable219029 ttable219029;
typedef struct tkeyvaluepairseq219032 tkeyvaluepairseq219032;
typedef struct tkeyvaluepair219035 tkeyvaluepair219035;
typedef struct tbasechunk21436 tbasechunk21436;
typedef struct tfreecell21428 tfreecell21428;
typedef struct tidobj140011 tidobj140011;
typedef struct TNimObject TNimObject;
typedef struct ttypeseq171691 ttypeseq171691;
typedef struct ttype171693 ttype171693;
typedef struct tscope171683 tscope171683;
typedef struct TY171786 TY171786;
typedef struct tinstantiation171679 tinstantiation171679;
typedef struct tstrtable171663 tstrtable171663;
typedef struct tsymseq171661 tsymseq171661;
typedef struct tident140017 tident140017;
typedef struct tlineinfo136509 tlineinfo136509;
typedef struct tnode171659 tnode171659;
typedef struct tloc171673 tloc171673;
typedef struct trope121007 trope121007;
typedef struct tlib171677 tlib171677;
typedef struct tnodeseq171653 tnodeseq171653;
typedef struct TY171775 TY171775;
typedef struct tlistentry109014 tlistentry109014;
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
};
struct tkeyvaluepair136546 {
NU8 Field0;
NimStringDesc* Field1;
NI32 Field2;
};
struct ttable136540 {
tkeyvaluepairseq136543* Data;
NI Counter;
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
struct tcall219009 {
tsym171689* Callee;
TY219020* Args;
};
struct tkeyvaluepair219065 {
NU8 Field0;
tcall219009 Field1;
NU8 Field2;
};
struct ttable219059 {
tkeyvaluepairseq219062* Data;
NI Counter;
};
struct tkeyvaluepair219035 {
NU8 Field0;
NI Field1;
NU8 Field2;
};
struct ttable219029 {
tkeyvaluepairseq219032* Data;
NI Counter;
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
struct tlineinfo136509 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
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
struct tfreecell21428 {
tfreecell21428* Next;
NI Zerofield;
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
struct tident140017 {
  tidobj140011 Sup;
NimStringDesc* S;
tident140017* Next;
NI H;
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
struct tkeyvaluepairseq136543 {
  TGenericSeq Sup;
  tkeyvaluepair136546 data[SEQ_DECL_SIZE];
};
struct TY219020 {
  TGenericSeq Sup;
  NU8 data[SEQ_DECL_SIZE];
};
struct tkeyvaluepairseq219062 {
  TGenericSeq Sup;
  tkeyvaluepair219065 data[SEQ_DECL_SIZE];
};
struct tkeyvaluepairseq219032 {
  TGenericSeq Sup;
  tkeyvaluepair219035 data[SEQ_DECL_SIZE];
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
struct tnodeseq171653 {
  TGenericSeq Sup;
  tnode171659* data[SEQ_DECL_SIZE];
};
struct TY171775 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
static N_INLINE(NIM_BOOL, mustrehash_117295)(NI length, NI counter);
N_NIMCALL(void, hiddenraiseassert_76017)(NimStringDesc* msg);
N_NIMCALL(NI, mulInt)(NI a, NI b);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, nexttry_117405)(NI h, NI maxhash);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(NIM_BOOL, ispoweroftwo_115272)(NI x);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP796)(void* p, NI op);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NI, rawget_136724)(ttable136540 t, NimStringDesc* key);
N_NIMCALL(NI, hash_110826)(NimStringDesc* x);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(void, enlarge_136840)(ttable136540* t);
N_NIMCALL(void, rawinsert_136893)(ttable136540* t, tkeyvaluepairseq136543** data, NimStringDesc* key, NI32 val);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell38846*, usrtocell_42239)(void* usr);
static N_INLINE(void, rtladdzct_43802)(tcell38846* c);
N_NOINLINE(void, addzct_42215)(tcellseq38862* s, tcell38846* c);
N_NIMCALL(void, TMP3086)(void* p, NI op);
N_NIMCALL(void, TMP3090)(void* p, NI op);
N_NIMCALL(NI, rawget_219650)(ttable219029 t, NI key);
static N_INLINE(NI, hash_110801)(NI x);
N_NIMCALL(void, enlarge_219767)(ttable219029* t);
N_NIMCALL(void, rawinsert_219820)(ttable219029* t, tkeyvaluepairseq219032** data, NI key, NU8 val);
N_NIMCALL(NI, rawget_220128)(ttable219059 t, tcall219009 key);
N_NIMCALL(NI, hash_219214)(tcall219009 c);
N_NIMCALL(NIM_BOOL, HEX3DHEX3D_219263)(tcall219009 a, tcall219009 b);
N_NIMCALL(void, enlarge_220197)(ttable219059* t);
N_NIMCALL(void, rawinsert_220250)(ttable219059* t, tkeyvaluepairseq219062** data, tcall219009 key, NU8 val);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, genericSeqAssign)(void* dest, void* src_71204, TNimType* mt);
STRING_LITERAL(TMP373, "counter < length ", 17);
STRING_LITERAL(TMP791, "isPowerOfTwo(initialSize) ", 26);
extern TFrame* frameptr_12037;
TNimType NTI136546; /* TKeyValuePair */
TNimType NTI117005; /* TSlotEnum */
extern TNimType NTI142; /* string */
extern TNimType NTI111; /* int32 */
TNimType NTI136543; /* TKeyValuePairSeq */
TNimType NTI136540; /* TTable */
extern TNimType NTI105; /* int */
extern tgcheap40816 gch_40844;
TNimType NTI219065; /* TKeyValuePair */
extern TNimType NTI219009; /* TCall */
extern TNimType NTI219007; /* TThreadOwner */
TNimType NTI219062; /* TKeyValuePairSeq */
TNimType NTI219059; /* TTable */
TNimType NTI219035; /* TKeyValuePair */
TNimType NTI219032; /* TKeyValuePairSeq */
TNimType NTI219029; /* TTable */
extern TNimType NTI219020; /* seq[TThreadOwner] */

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
static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12037;
	frameptr_12037 = s;
}
static N_INLINE(void, popFrame)(void) {
	frameptr_12037 = (*frameptr_12037).prev;
}
static N_INLINE(NIM_BOOL, mustrehash_117295)(NI length, NI counter) {
	NIM_BOOL result;
	NIM_BOOL LOC5;
	NI TMP374;
	NI TMP375;
	NI TMP376;
	nimfr("mustRehash", "tables.nim")
	result = 0;
	nimln(66, "tables.nim");
	{
		nimln(66, "tables.nim");
		nimln(66, "tables.nim");
		if (!!((counter < length))) goto LA3;
		nimln(66, "tables.nim");
		hiddenraiseassert_76017(((NimStringDesc*) &TMP373));	}	LA3: ;
	nimln(67, "tables.nim");
	nimln(67, "tables.nim");
	LOC5 = 0;
	nimln(67, "tables.nim");
	nimln(67, "tables.nim");
	TMP374 = mulInt(length, 2);
	nimln(67, "tables.nim");
	TMP375 = mulInt(counter, 3);
	LOC5 = ((NI64)(TMP374) < (NI64)(TMP375));
	if (LOC5) goto LA6;
	nimln(67, "tables.nim");
	nimln(67, "tables.nim");
	TMP376 = subInt(length, counter);
	LOC5 = ((NI64)(TMP376) < 4);
	LA6: ;
	result = LOC5;
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
static N_INLINE(NI, nexttry_117405)(NI h, NI maxhash) {
	NI result;
	NI TMP377;
	NI TMP378;
	nimfr("nextTry", "tables.nim")
	result = 0;
	nimln(70, "tables.nim");
	nimln(70, "tables.nim");
	nimln(70, "tables.nim");
	nimln(70, "tables.nim");
	TMP377 = mulInt(5, h);
	TMP378 = addInt((NI64)(TMP377), 1);
	result = (NI)((NI64)(TMP378) & maxhash);
	popFrame();
	return result;
}N_NIMCALL(void, TMP796)(void* p, NI op) {
	tkeyvaluepairseq136543* a;
	NI LOC1;
	a = (tkeyvaluepairseq136543*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field1, op);
	}
}

N_NIMCALL(void, inittable_136534)(NI initialsize, ttable136540* Result) {
	nimfr("initTable", "tables.nim")
	nimln(167, "tables.nim");
	{
		NIM_BOOL LOC3;
		nimln(167, "tables.nim");
		nimln(167, "tables.nim");
		LOC3 = 0;
		LOC3 = ispoweroftwo_115272(initialsize);
		if (!!(LOC3)) goto LA4;
		nimln(167, "tables.nim");
		hiddenraiseassert_76017(((NimStringDesc*) &TMP791));	}	LA4: ;
	nimln(168, "tables.nim");
	(*Result).Counter = 0;
	nimln(169, "tables.nim");
	unsureAsgnRef((void**) &(*Result).Data, (tkeyvaluepairseq136543*) newSeq((&NTI136543), initialsize));
	popFrame();
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
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (NI64)((*a).Sup.len * 1));
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	BeforeRet: ;	return result;
}
N_NIMCALL(NI, rawget_136724)(ttable136540 t, NimStringDesc* key) {
	NI result;
	NI h;
	NI LOC1;
	nimfr("RawGet", "tables.nim")
	result = 0;
	nimln(73, "tables.nim");
	nimln(73, "tables.nim");
	nimln(73, "tables.nim");
	LOC1 = 0;
	LOC1 = hash_110826(key);
	nimln(73, "tables.nim");
	h = (NI)(LOC1 & (t.Data->Sup.len-1));
	nimln(74, "tables.nim");
	while (1) {
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if ((NU)(h) >= (NU)(t.Data->Sup.len)) raiseIndexError();
		if (!!((t.Data->data[h].Field0 == ((NU8) 0)))) goto LA2;
		nimln(75, "tables.nim");
		{
			NIM_BOOL LOC5;
			nimln(75, "tables.nim");
			LOC5 = 0;
			nimln(75, "tables.nim");
			if ((NU)(h) >= (NU)(t.Data->Sup.len)) raiseIndexError();
			LOC5 = eqStrings(t.Data->data[h].Field1, key);
			if (!(LOC5)) goto LA6;
			nimln(75, "tables.nim");
			if ((NU)(h) >= (NU)(t.Data->Sup.len)) raiseIndexError();
			LOC5 = (t.Data->data[h].Field0 == ((NU8) 1));
			LA6: ;
			if (!LOC5) goto LA7;
			nimln(76, "tables.nim");
			nimln(76, "tables.nim");
			result = h;
			goto BeforeRet;
		}		LA7: ;
		nimln(77, "tables.nim");
		nimln(77, "tables.nim");
		h = nexttry_117405(h, (t.Data->Sup.len-1));
	} LA2: ;
	nimln(78, "tables.nim");
	result = -1;
	BeforeRet: ;	popFrame();
	return result;
}
N_NIMCALL(NIM_BOOL, haskey_136712)(ttable136540 t, NimStringDesc* key) {
	NIM_BOOL result;
	NI LOC1;
	nimfr("hasKey", "tables.nim")
	result = 0;
	nimln(108, "tables.nim");
	nimln(702, "system.nim");
	nimln(108, "tables.nim");
	LOC1 = 0;
	LOC1 = rawget_136724(t, key);
	result = (0 <= LOC1);
	popFrame();
	return result;
}
N_NIMCALL(NI32, HEX5BHEX5D_136757)(ttable136540 t, NimStringDesc* key) {
	NI32 result;
	NI index;
	nimfr("[]", "tables.nim")
	result = 0;
	nimln(96, "tables.nim");
	index = rawget_136724(t, key);
	nimln(97, "tables.nim");
	{
		nimln(702, "system.nim");
		if (!(0 <= index)) goto LA3;
		nimln(97, "tables.nim");
		if ((NU)(index) >= (NU)(t.Data->Sup.len)) raiseIndexError();
		result = t.Data->data[index].Field2;
	}	LA3: ;
	popFrame();
	return result;
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
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		nimln(234, "gc.nim");
		rtladdzct_43802(c);	}	LA3: ;
	popFrame();
}
N_NIMCALL(void, rawinsert_136893)(ttable136540* t, tkeyvaluepairseq136543** data, NimStringDesc* key, NI32 val) {
	NI h;
	NI LOC1;
	NimStringDesc* LOC3;
	nimfr("RawInsert", "tables.nim")
	nimln(81, "tables.nim");
	nimln(81, "tables.nim");
	nimln(81, "tables.nim");
	LOC1 = 0;
	LOC1 = hash_110826(key);
	nimln(81, "tables.nim");
	h = (NI)(LOC1 & ((*data)->Sup.len-1));
	nimln(82, "tables.nim");
	while (1) {
		nimln(82, "tables.nim");
		if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
		if (!((*data)->data[h].Field0 == ((NU8) 1))) goto LA2;
		nimln(83, "tables.nim");
		nimln(83, "tables.nim");
		h = nexttry_117405(h, ((*data)->Sup.len-1));
	} LA2: ;
	nimln(84, "tables.nim");
	if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
	LOC3 = 0;
	LOC3 = (*data)->data[h].Field1; (*data)->data[h].Field1 = copyStringRC1(key);
	if (LOC3) nimGCunrefNoCycle(LOC3);
	nimln(85, "tables.nim");
	if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
	(*data)->data[h].Field2 = val;
	nimln(86, "tables.nim");
	if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
	(*data)->data[h].Field0 = ((NU8) 1);
	popFrame();
}
N_NIMCALL(void, enlarge_136840)(ttable136540* t) {
	tkeyvaluepairseq136543* n;
	NI TMP809;
	NI i_136879;
	NI HEX3Atmp_136934;
	NI res_136936;
	tkeyvaluepairseq136543* LOC6;
	nimfr("Enlarge", "tables.nim")
	n = 0;
	nimln(116, "tables.nim");
	nimln(116, "tables.nim");
	nimln(116, "tables.nim");
	TMP809 = mulInt((*t).Data->Sup.len, 2);
	n = (tkeyvaluepairseq136543*) newSeq((&NTI136543), (NI64)(TMP809));
	i_136879 = 0;
	HEX3Atmp_136934 = 0;
	nimln(117, "tables.nim");
	nimln(117, "tables.nim");
	HEX3Atmp_136934 = ((*t).Data->Sup.len-1);
	nimln(1301, "system.nim");
	res_136936 = 0;
	nimln(1302, "system.nim");
	while (1) {
		nimln(1302, "system.nim");
		if (!(res_136936 <= HEX3Atmp_136934)) goto LA1;
		nimln(1301, "system.nim");
		i_136879 = res_136936;
		nimln(118, "tables.nim");
		{
			nimln(118, "tables.nim");
			if ((NU)(i_136879) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
			if (!((*t).Data->data[i_136879].Field0 == ((NU8) 1))) goto LA4;
			nimln(118, "tables.nim");
			if ((NU)(i_136879) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
			if ((NU)(i_136879) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
			rawinsert_136893(t, &n, (*t).Data->data[i_136879].Field1, (*t).Data->data[i_136879].Field2);		}		LA4: ;
		nimln(1304, "system.nim");
		res_136936 = addInt(res_136936, 1);
	} LA1: ;
	nimln(119, "tables.nim");
	LOC6 = 0;
	LOC6 = (*t).Data;
	unsureAsgnRef((void**) &(*t).Data, n);
	n = LOC6;
	popFrame();
}
N_NIMCALL(void, HEX5BHEX5DHEX3D_136805)(ttable136540* t, NimStringDesc* key, NI32 val) {
	NI index;
	nimfr("[]=", "tables.nim")
	nimln(127, "tables.nim");
	index = rawget_136724((*t), key);
	nimln(128, "tables.nim");
	{
		nimln(702, "system.nim");
		if (!(0 <= index)) goto LA3;
		nimln(129, "tables.nim");
		if ((NU)(index) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
		(*t).Data->data[index].Field2 = val;
	}	goto LA1;
	LA3: ;
	{
		nimln(122, "tables.nim");
		{
			NIM_BOOL LOC8;
			nimln(122, "tables.nim");
			nimln(122, "tables.nim");
			LOC8 = 0;
			LOC8 = mustrehash_117295((*t).Data->Sup.len, (*t).Counter);
			if (!LOC8) goto LA9;
			nimln(122, "tables.nim");
			enlarge_136840(t);		}		LA9: ;
		nimln(123, "tables.nim");
		rawinsert_136893(t, &(*t).Data, key, val);		nimln(124, "tables.nim");
		(*t).Counter = addInt((*t).Counter, 1);
	}	LA1: ;
	popFrame();
}N_NIMCALL(void, TMP3086)(void* p, NI op) {
	tkeyvaluepairseq219062* a;
	NI LOC1;
	a = (tkeyvaluepairseq219062*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field1.Callee, op);
	nimGCvisit((void*)a->data[LOC1].Field1.Args, op);
	}
}

N_NIMCALL(void, inittable_219053)(NI initialsize, ttable219059* Result) {
	nimfr("initTable", "tables.nim")
	nimln(167, "tables.nim");
	{
		NIM_BOOL LOC3;
		nimln(167, "tables.nim");
		nimln(167, "tables.nim");
		LOC3 = 0;
		LOC3 = ispoweroftwo_115272(initialsize);
		if (!!(LOC3)) goto LA4;
		nimln(167, "tables.nim");
		hiddenraiseassert_76017(((NimStringDesc*) &TMP791));	}	LA4: ;
	nimln(168, "tables.nim");
	(*Result).Counter = 0;
	nimln(169, "tables.nim");
	unsureAsgnRef((void**) &(*Result).Data, (tkeyvaluepairseq219062*) newSeq((&NTI219062), initialsize));
	popFrame();
}N_NIMCALL(void, TMP3090)(void* p, NI op) {
	tkeyvaluepairseq219032* a;
	NI LOC1;
	a = (tkeyvaluepairseq219032*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}

N_NIMCALL(void, inittable_219414)(NI initialsize, ttable219029* Result) {
	nimfr("initTable", "tables.nim")
	nimln(167, "tables.nim");
	{
		NIM_BOOL LOC3;
		nimln(167, "tables.nim");
		nimln(167, "tables.nim");
		LOC3 = 0;
		LOC3 = ispoweroftwo_115272(initialsize);
		if (!!(LOC3)) goto LA4;
		nimln(167, "tables.nim");
		hiddenraiseassert_76017(((NimStringDesc*) &TMP791));	}	LA4: ;
	nimln(168, "tables.nim");
	(*Result).Counter = 0;
	nimln(169, "tables.nim");
	unsureAsgnRef((void**) &(*Result).Data, (tkeyvaluepairseq219032*) newSeq((&NTI219032), initialsize));
	popFrame();
}
static N_INLINE(NI, hash_110801)(NI x) {
	NI result;
	nimfr("hash", "hashes.nim")
	result = 0;
	nimln(80, "hashes.nim");
	result = x;
	popFrame();
	return result;
}
N_NIMCALL(NI, rawget_219650)(ttable219029 t, NI key) {
	NI result;
	NI h;
	NI LOC1;
	nimfr("RawGet", "tables.nim")
	result = 0;
	nimln(73, "tables.nim");
	nimln(73, "tables.nim");
	nimln(73, "tables.nim");
	LOC1 = 0;
	LOC1 = hash_110801(key);
	nimln(73, "tables.nim");
	h = (NI)(LOC1 & (t.Data->Sup.len-1));
	nimln(74, "tables.nim");
	while (1) {
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if ((NU)(h) >= (NU)(t.Data->Sup.len)) raiseIndexError();
		if (!!((t.Data->data[h].Field0 == ((NU8) 0)))) goto LA2;
		nimln(75, "tables.nim");
		{
			NIM_BOOL LOC5;
			nimln(75, "tables.nim");
			LOC5 = 0;
			nimln(75, "tables.nim");
			if ((NU)(h) >= (NU)(t.Data->Sup.len)) raiseIndexError();
			LOC5 = (t.Data->data[h].Field1 == key);
			if (!(LOC5)) goto LA6;
			nimln(75, "tables.nim");
			if ((NU)(h) >= (NU)(t.Data->Sup.len)) raiseIndexError();
			LOC5 = (t.Data->data[h].Field0 == ((NU8) 1));
			LA6: ;
			if (!LOC5) goto LA7;
			nimln(76, "tables.nim");
			nimln(76, "tables.nim");
			result = h;
			goto BeforeRet;
		}		LA7: ;
		nimln(77, "tables.nim");
		nimln(77, "tables.nim");
		h = nexttry_117405(h, (t.Data->Sup.len-1));
	} LA2: ;
	nimln(78, "tables.nim");
	result = -1;
	BeforeRet: ;	popFrame();
	return result;
}
N_NIMCALL(NU8, HEX5BHEX5D_219638)(ttable219029 t, NI key) {
	NU8 result;
	NI index;
	nimfr("[]", "tables.nim")
	result = 0;
	nimln(96, "tables.nim");
	index = rawget_219650(t, key);
	nimln(97, "tables.nim");
	{
		nimln(702, "system.nim");
		if (!(0 <= index)) goto LA3;
		nimln(97, "tables.nim");
		if ((NU)(index) >= (NU)(t.Data->Sup.len)) raiseIndexError();
		result = t.Data->data[index].Field2;
	}	LA3: ;
	popFrame();
	return result;
}
N_NIMCALL(void, rawinsert_219820)(ttable219029* t, tkeyvaluepairseq219032** data, NI key, NU8 val) {
	NI h;
	NI LOC1;
	nimfr("RawInsert", "tables.nim")
	nimln(81, "tables.nim");
	nimln(81, "tables.nim");
	nimln(81, "tables.nim");
	LOC1 = 0;
	LOC1 = hash_110801(key);
	nimln(81, "tables.nim");
	h = (NI)(LOC1 & ((*data)->Sup.len-1));
	nimln(82, "tables.nim");
	while (1) {
		nimln(82, "tables.nim");
		if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
		if (!((*data)->data[h].Field0 == ((NU8) 1))) goto LA2;
		nimln(83, "tables.nim");
		nimln(83, "tables.nim");
		h = nexttry_117405(h, ((*data)->Sup.len-1));
	} LA2: ;
	nimln(84, "tables.nim");
	if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
	(*data)->data[h].Field1 = key;
	nimln(85, "tables.nim");
	if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
	(*data)->data[h].Field2 = val;
	nimln(86, "tables.nim");
	if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
	(*data)->data[h].Field0 = ((NU8) 1);
	popFrame();
}
N_NIMCALL(void, enlarge_219767)(ttable219029* t) {
	tkeyvaluepairseq219032* n;
	NI TMP3095;
	NI i_219806;
	NI HEX3Atmp_219861;
	NI res_219863;
	tkeyvaluepairseq219032* LOC6;
	nimfr("Enlarge", "tables.nim")
	n = 0;
	nimln(116, "tables.nim");
	nimln(116, "tables.nim");
	nimln(116, "tables.nim");
	TMP3095 = mulInt((*t).Data->Sup.len, 2);
	n = (tkeyvaluepairseq219032*) newSeq((&NTI219032), (NI64)(TMP3095));
	i_219806 = 0;
	HEX3Atmp_219861 = 0;
	nimln(117, "tables.nim");
	nimln(117, "tables.nim");
	HEX3Atmp_219861 = ((*t).Data->Sup.len-1);
	nimln(1301, "system.nim");
	res_219863 = 0;
	nimln(1302, "system.nim");
	while (1) {
		nimln(1302, "system.nim");
		if (!(res_219863 <= HEX3Atmp_219861)) goto LA1;
		nimln(1301, "system.nim");
		i_219806 = res_219863;
		nimln(118, "tables.nim");
		{
			nimln(118, "tables.nim");
			if ((NU)(i_219806) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
			if (!((*t).Data->data[i_219806].Field0 == ((NU8) 1))) goto LA4;
			nimln(118, "tables.nim");
			if ((NU)(i_219806) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
			if ((NU)(i_219806) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
			rawinsert_219820(t, &n, (*t).Data->data[i_219806].Field1, (*t).Data->data[i_219806].Field2);		}		LA4: ;
		nimln(1304, "system.nim");
		res_219863 = addInt(res_219863, 1);
	} LA1: ;
	nimln(119, "tables.nim");
	LOC6 = 0;
	LOC6 = (*t).Data;
	unsureAsgnRef((void**) &(*t).Data, n);
	n = LOC6;
	popFrame();
}
N_NIMCALL(void, HEX5BHEX5DHEX3D_219732)(ttable219029* t, NI key, NU8 val) {
	NI index;
	nimfr("[]=", "tables.nim")
	nimln(127, "tables.nim");
	index = rawget_219650((*t), key);
	nimln(128, "tables.nim");
	{
		nimln(702, "system.nim");
		if (!(0 <= index)) goto LA3;
		nimln(129, "tables.nim");
		if ((NU)(index) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
		(*t).Data->data[index].Field2 = val;
	}	goto LA1;
	LA3: ;
	{
		nimln(122, "tables.nim");
		{
			NIM_BOOL LOC8;
			nimln(122, "tables.nim");
			nimln(122, "tables.nim");
			LOC8 = 0;
			LOC8 = mustrehash_117295((*t).Data->Sup.len, (*t).Counter);
			if (!LOC8) goto LA9;
			nimln(122, "tables.nim");
			enlarge_219767(t);		}		LA9: ;
		nimln(123, "tables.nim");
		rawinsert_219820(t, &(*t).Data, key, val);		nimln(124, "tables.nim");
		(*t).Counter = addInt((*t).Counter, 1);
	}	LA1: ;
	popFrame();
}
N_NIMCALL(NI, rawget_220128)(ttable219059 t, tcall219009 key) {
	NI result;
	NI h;
	NI LOC1;
	nimfr("RawGet", "tables.nim")
	result = 0;
	nimln(73, "tables.nim");
	nimln(73, "tables.nim");
	nimln(73, "tables.nim");
	LOC1 = 0;
	LOC1 = hash_219214(key);
	nimln(73, "tables.nim");
	h = (NI)(LOC1 & (t.Data->Sup.len-1));
	nimln(74, "tables.nim");
	while (1) {
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if ((NU)(h) >= (NU)(t.Data->Sup.len)) raiseIndexError();
		if (!!((t.Data->data[h].Field0 == ((NU8) 0)))) goto LA2;
		nimln(75, "tables.nim");
		{
			NIM_BOOL LOC5;
			nimln(75, "tables.nim");
			LOC5 = 0;
			nimln(75, "tables.nim");
			if ((NU)(h) >= (NU)(t.Data->Sup.len)) raiseIndexError();
			LOC5 = HEX3DHEX3D_219263(t.Data->data[h].Field1, key);
			if (!(LOC5)) goto LA6;
			nimln(75, "tables.nim");
			if ((NU)(h) >= (NU)(t.Data->Sup.len)) raiseIndexError();
			LOC5 = (t.Data->data[h].Field0 == ((NU8) 1));
			LA6: ;
			if (!LOC5) goto LA7;
			nimln(76, "tables.nim");
			nimln(76, "tables.nim");
			result = h;
			goto BeforeRet;
		}		LA7: ;
		nimln(77, "tables.nim");
		nimln(77, "tables.nim");
		h = nexttry_117405(h, (t.Data->Sup.len-1));
	} LA2: ;
	nimln(78, "tables.nim");
	result = -1;
	BeforeRet: ;	popFrame();
	return result;
}
N_NIMCALL(NIM_BOOL, haskey_220116)(ttable219059 t, tcall219009 key) {
	NIM_BOOL result;
	NI LOC1;
	nimfr("hasKey", "tables.nim")
	result = 0;
	nimln(108, "tables.nim");
	nimln(702, "system.nim");
	nimln(108, "tables.nim");
	LOC1 = 0;
	LOC1 = rawget_220128(t, key);
	result = (0 <= LOC1);
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
			if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA11;
			nimln(255, "gc.nim");
			rtladdzct_43802(c);		}		LA11: ;
	}	LA7: ;
	nimln(256, "gc.nim");
	(*dest) = src;
	popFrame();
}
N_NIMCALL(void, rawinsert_220250)(ttable219059* t, tkeyvaluepairseq219062** data, tcall219009 key, NU8 val) {
	NI h;
	NI LOC1;
	nimfr("RawInsert", "tables.nim")
	nimln(81, "tables.nim");
	nimln(81, "tables.nim");
	nimln(81, "tables.nim");
	LOC1 = 0;
	LOC1 = hash_219214(key);
	nimln(81, "tables.nim");
	h = (NI)(LOC1 & ((*data)->Sup.len-1));
	nimln(82, "tables.nim");
	while (1) {
		nimln(82, "tables.nim");
		if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
		if (!((*data)->data[h].Field0 == ((NU8) 1))) goto LA2;
		nimln(83, "tables.nim");
		nimln(83, "tables.nim");
		h = nexttry_117405(h, ((*data)->Sup.len-1));
	} LA2: ;
	nimln(84, "tables.nim");
	if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
	asgnRefNoCycle((void**) &(*data)->data[h].Field1.Callee, key.Callee);
	genericSeqAssign(&(*data)->data[h].Field1.Args, key.Args, (&NTI219020));
	nimln(85, "tables.nim");
	if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
	(*data)->data[h].Field2 = val;
	nimln(86, "tables.nim");
	if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
	(*data)->data[h].Field0 = ((NU8) 1);
	popFrame();
}
N_NIMCALL(void, enlarge_220197)(ttable219059* t) {
	tkeyvaluepairseq219062* n;
	NI TMP3104;
	NI i_220236;
	NI HEX3Atmp_220291;
	NI res_220293;
	tkeyvaluepairseq219062* LOC6;
	nimfr("Enlarge", "tables.nim")
	n = 0;
	nimln(116, "tables.nim");
	nimln(116, "tables.nim");
	nimln(116, "tables.nim");
	TMP3104 = mulInt((*t).Data->Sup.len, 2);
	n = (tkeyvaluepairseq219062*) newSeq((&NTI219062), (NI64)(TMP3104));
	i_220236 = 0;
	HEX3Atmp_220291 = 0;
	nimln(117, "tables.nim");
	nimln(117, "tables.nim");
	HEX3Atmp_220291 = ((*t).Data->Sup.len-1);
	nimln(1301, "system.nim");
	res_220293 = 0;
	nimln(1302, "system.nim");
	while (1) {
		nimln(1302, "system.nim");
		if (!(res_220293 <= HEX3Atmp_220291)) goto LA1;
		nimln(1301, "system.nim");
		i_220236 = res_220293;
		nimln(118, "tables.nim");
		{
			nimln(118, "tables.nim");
			if ((NU)(i_220236) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
			if (!((*t).Data->data[i_220236].Field0 == ((NU8) 1))) goto LA4;
			nimln(118, "tables.nim");
			if ((NU)(i_220236) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
			if ((NU)(i_220236) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
			rawinsert_220250(t, &n, (*t).Data->data[i_220236].Field1, (*t).Data->data[i_220236].Field2);		}		LA4: ;
		nimln(1304, "system.nim");
		res_220293 = addInt(res_220293, 1);
	} LA1: ;
	nimln(119, "tables.nim");
	LOC6 = 0;
	LOC6 = (*t).Data;
	unsureAsgnRef((void**) &(*t).Data, n);
	n = LOC6;
	popFrame();
}
N_NIMCALL(void, HEX5BHEX5DHEX3D_220162)(ttable219059* t, tcall219009 key, NU8 val) {
	NI index;
	nimfr("[]=", "tables.nim")
	nimln(127, "tables.nim");
	index = rawget_220128((*t), key);
	nimln(128, "tables.nim");
	{
		nimln(702, "system.nim");
		if (!(0 <= index)) goto LA3;
		nimln(129, "tables.nim");
		if ((NU)(index) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
		(*t).Data->data[index].Field2 = val;
	}	goto LA1;
	LA3: ;
	{
		nimln(122, "tables.nim");
		{
			NIM_BOOL LOC8;
			nimln(122, "tables.nim");
			nimln(122, "tables.nim");
			LOC8 = 0;
			LOC8 = mustrehash_117295((*t).Data->Sup.len, (*t).Counter);
			if (!LOC8) goto LA9;
			nimln(122, "tables.nim");
			enlarge_220197(t);		}		LA9: ;
		nimln(123, "tables.nim");
		rawinsert_220250(t, &(*t).Data, key, val);		nimln(124, "tables.nim");
		(*t).Counter = addInt((*t).Counter, 1);
	}	LA1: ;
	popFrame();
}
N_NIMCALL(NU8, HEX5BHEX5D_220507)(ttable219059 t, tcall219009 key) {
	NU8 result;
	NI index;
	nimfr("[]", "tables.nim")
	result = 0;
	nimln(96, "tables.nim");
	index = rawget_220128(t, key);
	nimln(97, "tables.nim");
	{
		nimln(702, "system.nim");
		if (!(0 <= index)) goto LA3;
		nimln(97, "tables.nim");
		if ((NU)(index) >= (NU)(t.Data->Sup.len)) raiseIndexError();
		result = t.Data->data[index].Field2;
	}	LA3: ;
	popFrame();
	return result;
}N_NOINLINE(void, collectionstablesInit)(void) {
	nimfr("tables", "tables.nim")
	popFrame();
}

N_NOINLINE(void, collectionstablesDatInit)(void) {
static TNimNode* TMP792[3];
static TNimNode* TMP793[3];
NI TMP795;
static char* NIM_CONST TMP794[3] = {
"seEmpty", 
"seFilled", 
"seDeleted"};
static TNimNode* TMP797[2];
static TNimNode* TMP3080[3];
static TNimNode* TMP3087[2];
static TNimNode* TMP3089[3];
static TNimNode* TMP3093[2];
static TNimNode TMP369[25];
NTI136546.size = sizeof(tkeyvaluepair136546);
NTI136546.kind = 18;
NTI136546.base = 0;
NTI136546.flags = 2;
TMP792[0] = &TMP369[1];
NTI117005.size = sizeof(NU8);
NTI117005.kind = 14;
NTI117005.base = 0;
NTI117005.flags = 3;
for (TMP795 = 0; TMP795 < 3; TMP795++) {
TMP369[TMP795+2].kind = 1;
TMP369[TMP795+2].offset = TMP795;
TMP369[TMP795+2].name = TMP794[TMP795];
TMP793[TMP795] = &TMP369[TMP795+2];
}
TMP369[5].len = 3; TMP369[5].kind = 2; TMP369[5].sons = &TMP793[0];
NTI117005.node = &TMP369[5];
TMP369[1].kind = 1;
TMP369[1].offset = offsetof(tkeyvaluepair136546, Field0);
TMP369[1].typ = (&NTI117005);
TMP369[1].name = "Field0";
TMP792[1] = &TMP369[6];
TMP369[6].kind = 1;
TMP369[6].offset = offsetof(tkeyvaluepair136546, Field1);
TMP369[6].typ = (&NTI142);
TMP369[6].name = "Field1";
TMP792[2] = &TMP369[7];
TMP369[7].kind = 1;
TMP369[7].offset = offsetof(tkeyvaluepair136546, Field2);
TMP369[7].typ = (&NTI111);
TMP369[7].name = "Field2";
TMP369[0].len = 3; TMP369[0].kind = 2; TMP369[0].sons = &TMP792[0];
NTI136546.node = &TMP369[0];
NTI136543.size = sizeof(tkeyvaluepairseq136543*);
NTI136543.kind = 24;
NTI136543.base = (&NTI136546);
NTI136543.flags = 2;
NTI136543.marker = TMP796;
NTI136540.size = sizeof(ttable136540);
NTI136540.kind = 18;
NTI136540.base = 0;
NTI136540.flags = 2;
TMP797[0] = &TMP369[9];
TMP369[9].kind = 1;
TMP369[9].offset = offsetof(ttable136540, Data);
TMP369[9].typ = (&NTI136543);
TMP369[9].name = "data";
TMP797[1] = &TMP369[10];
TMP369[10].kind = 1;
TMP369[10].offset = offsetof(ttable136540, Counter);
TMP369[10].typ = (&NTI105);
TMP369[10].name = "counter";
TMP369[8].len = 2; TMP369[8].kind = 2; TMP369[8].sons = &TMP797[0];
NTI136540.node = &TMP369[8];
NTI219065.size = sizeof(tkeyvaluepair219065);
NTI219065.kind = 18;
NTI219065.base = 0;
NTI219065.flags = 2;
TMP3080[0] = &TMP369[12];
TMP369[12].kind = 1;
TMP369[12].offset = offsetof(tkeyvaluepair219065, Field0);
TMP369[12].typ = (&NTI117005);
TMP369[12].name = "Field0";
TMP3080[1] = &TMP369[13];
TMP369[13].kind = 1;
TMP369[13].offset = offsetof(tkeyvaluepair219065, Field1);
TMP369[13].typ = (&NTI219009);
TMP369[13].name = "Field1";
TMP3080[2] = &TMP369[14];
TMP369[14].kind = 1;
TMP369[14].offset = offsetof(tkeyvaluepair219065, Field2);
TMP369[14].typ = (&NTI219007);
TMP369[14].name = "Field2";
TMP369[11].len = 3; TMP369[11].kind = 2; TMP369[11].sons = &TMP3080[0];
NTI219065.node = &TMP369[11];
NTI219062.size = sizeof(tkeyvaluepairseq219062*);
NTI219062.kind = 24;
NTI219062.base = (&NTI219065);
NTI219062.flags = 2;
NTI219062.marker = TMP3086;
NTI219059.size = sizeof(ttable219059);
NTI219059.kind = 18;
NTI219059.base = 0;
NTI219059.flags = 2;
TMP3087[0] = &TMP369[16];
TMP369[16].kind = 1;
TMP369[16].offset = offsetof(ttable219059, Data);
TMP369[16].typ = (&NTI219062);
TMP369[16].name = "data";
TMP3087[1] = &TMP369[17];
TMP369[17].kind = 1;
TMP369[17].offset = offsetof(ttable219059, Counter);
TMP369[17].typ = (&NTI105);
TMP369[17].name = "counter";
TMP369[15].len = 2; TMP369[15].kind = 2; TMP369[15].sons = &TMP3087[0];
NTI219059.node = &TMP369[15];
NTI219035.size = sizeof(tkeyvaluepair219035);
NTI219035.kind = 18;
NTI219035.base = 0;
NTI219035.flags = 3;
TMP3089[0] = &TMP369[19];
TMP369[19].kind = 1;
TMP369[19].offset = offsetof(tkeyvaluepair219035, Field0);
TMP369[19].typ = (&NTI117005);
TMP369[19].name = "Field0";
TMP3089[1] = &TMP369[20];
TMP369[20].kind = 1;
TMP369[20].offset = offsetof(tkeyvaluepair219035, Field1);
TMP369[20].typ = (&NTI105);
TMP369[20].name = "Field1";
TMP3089[2] = &TMP369[21];
TMP369[21].kind = 1;
TMP369[21].offset = offsetof(tkeyvaluepair219035, Field2);
TMP369[21].typ = (&NTI219007);
TMP369[21].name = "Field2";
TMP369[18].len = 3; TMP369[18].kind = 2; TMP369[18].sons = &TMP3089[0];
NTI219035.node = &TMP369[18];
NTI219032.size = sizeof(tkeyvaluepairseq219032*);
NTI219032.kind = 24;
NTI219032.base = (&NTI219035);
NTI219032.flags = 2;
NTI219032.marker = TMP3090;
NTI219029.size = sizeof(ttable219029);
NTI219029.kind = 18;
NTI219029.base = 0;
NTI219029.flags = 2;
TMP3093[0] = &TMP369[23];
TMP369[23].kind = 1;
TMP369[23].offset = offsetof(ttable219029, Data);
TMP369[23].typ = (&NTI219032);
TMP369[23].name = "data";
TMP3093[1] = &TMP369[24];
TMP369[24].kind = 1;
TMP369[24].offset = offsetof(ttable219029, Counter);
TMP369[24].typ = (&NTI105);
TMP369[24].name = "counter";
TMP369[22].len = 2; TMP369[22].kind = 2; TMP369[22].sons = &TMP3093[0];
NTI219029.node = &TMP369[22];
}

