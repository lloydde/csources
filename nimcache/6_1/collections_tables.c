/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct ttable137540 ttable137540;
typedef struct tkeyvaluepairseq137543 tkeyvaluepairseq137543;
typedef struct tkeyvaluepair137546 tkeyvaluepair137546;
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
typedef struct ttable220059 ttable220059;
typedef struct tkeyvaluepairseq220062 tkeyvaluepairseq220062;
typedef struct tkeyvaluepair220065 tkeyvaluepair220065;
typedef struct tcall220009 tcall220009;
typedef struct tsym172689 tsym172689;
typedef struct TY220020 TY220020;
typedef struct ttable220029 ttable220029;
typedef struct tkeyvaluepairseq220032 tkeyvaluepairseq220032;
typedef struct tkeyvaluepair220035 tkeyvaluepair220035;
typedef struct tbasechunk21436 tbasechunk21436;
typedef struct tfreecell21428 tfreecell21428;
typedef struct tidobj141011 tidobj141011;
typedef struct TNimObject TNimObject;
typedef struct ttypeseq172691 ttypeseq172691;
typedef struct ttype172693 ttype172693;
typedef struct tscope172683 tscope172683;
typedef struct TY172786 TY172786;
typedef struct tinstantiation172679 tinstantiation172679;
typedef struct tstrtable172663 tstrtable172663;
typedef struct tsymseq172661 tsymseq172661;
typedef struct tident141017 tident141017;
typedef struct tlineinfo137509 tlineinfo137509;
typedef struct tnode172659 tnode172659;
typedef struct tloc172673 tloc172673;
typedef struct trope121007 trope121007;
typedef struct tlib172677 tlib172677;
typedef struct tnodeseq172653 tnodeseq172653;
typedef struct TY172775 TY172775;
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
struct tkeyvaluepair137546 {
NU8 Field0;
NimStringDesc* Field1;
NI32 Field2;
};
struct ttable137540 {
tkeyvaluepairseq137543* Data;
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
struct tcall220009 {
tsym172689* Callee;
TY220020* Args;
};
struct tkeyvaluepair220065 {
NU8 Field0;
tcall220009 Field1;
NU8 Field2;
};
struct ttable220059 {
tkeyvaluepairseq220062* Data;
NI Counter;
};
struct tkeyvaluepair220035 {
NU8 Field0;
NI Field1;
NU8 Field2;
};
struct ttable220029 {
tkeyvaluepairseq220032* Data;
NI Counter;
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
struct TNimObject {
TNimType* m_type;
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
struct tfreecell21428 {
tfreecell21428* Next;
NI Zerofield;
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
struct tkeyvaluepairseq137543 {
  TGenericSeq Sup;
  tkeyvaluepair137546 data[SEQ_DECL_SIZE];
};
struct TY220020 {
  TGenericSeq Sup;
  NU8 data[SEQ_DECL_SIZE];
};
struct tkeyvaluepairseq220062 {
  TGenericSeq Sup;
  tkeyvaluepair220065 data[SEQ_DECL_SIZE];
};
struct tkeyvaluepairseq220032 {
  TGenericSeq Sup;
  tkeyvaluepair220035 data[SEQ_DECL_SIZE];
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
struct tnodeseq172653 {
  TGenericSeq Sup;
  tnode172659* data[SEQ_DECL_SIZE];
};
struct TY172775 {
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
N_NIMCALL(void, TMP800)(void* p, NI op);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NI, rawget_137724)(ttable137540 t, NimStringDesc* key);
N_NIMCALL(NI, hash_110826)(NimStringDesc* x);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(void, enlarge_137840)(ttable137540* t);
N_NIMCALL(void, rawinsert_137893)(ttable137540* t, tkeyvaluepairseq137543** data, NimStringDesc* key, NI32 val);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell38848*, usrtocell_42239)(void* usr);
static N_INLINE(void, rtladdzct_43802)(tcell38848* c);
N_NOINLINE(void, addzct_42215)(tcellseq38864* s, tcell38848* c);
N_NIMCALL(void, TMP3092)(void* p, NI op);
N_NIMCALL(void, TMP3096)(void* p, NI op);
N_NIMCALL(NI, rawget_220650)(ttable220029 t, NI key);
static N_INLINE(NI, hash_110801)(NI x);
N_NIMCALL(void, enlarge_220767)(ttable220029* t);
N_NIMCALL(void, rawinsert_220820)(ttable220029* t, tkeyvaluepairseq220032** data, NI key, NU8 val);
N_NIMCALL(NI, rawget_221128)(ttable220059 t, tcall220009 key);
N_NIMCALL(NI, hash_220214)(tcall220009 c);
N_NIMCALL(NIM_BOOL, HEX3DHEX3D_220263)(tcall220009 a, tcall220009 b);
N_NIMCALL(void, enlarge_221197)(ttable220059* t);
N_NIMCALL(void, rawinsert_221250)(ttable220059* t, tkeyvaluepairseq220062** data, tcall220009 key, NU8 val);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, genericSeqAssign)(void* dest, void* src_71204, TNimType* mt);
STRING_LITERAL(TMP377, "counter < length ", 17);
STRING_LITERAL(TMP795, "isPowerOfTwo(initialSize) ", 26);
extern TFrame* frameptr_12037;
TNimType NTI137546; /* TKeyValuePair */
TNimType NTI117005; /* TSlotEnum */
extern TNimType NTI142; /* string */
extern TNimType NTI111; /* int32 */
TNimType NTI137543; /* TKeyValuePairSeq */
TNimType NTI137540; /* TTable */
extern TNimType NTI105; /* int */
extern tgcheap40816 gch_40844;
TNimType NTI220065; /* TKeyValuePair */
extern TNimType NTI220009; /* TCall */
extern TNimType NTI220007; /* TThreadOwner */
TNimType NTI220062; /* TKeyValuePairSeq */
TNimType NTI220059; /* TTable */
TNimType NTI220035; /* TKeyValuePair */
TNimType NTI220032; /* TKeyValuePairSeq */
TNimType NTI220029; /* TTable */
extern TNimType NTI220020; /* seq[TThreadOwner] */

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
	NI TMP378;
	NI TMP379;
	NI TMP380;
	nimfr("mustRehash", "tables.nim")
	result = 0;
	nimln(66, "tables.nim");
	{
		nimln(66, "tables.nim");
		nimln(66, "tables.nim");
		if (!!((counter < length))) goto LA3;
		nimln(66, "tables.nim");
		hiddenraiseassert_76017(((NimStringDesc*) &TMP377));	}	LA3: ;
	nimln(67, "tables.nim");
	nimln(67, "tables.nim");
	LOC5 = 0;
	nimln(67, "tables.nim");
	nimln(67, "tables.nim");
	TMP378 = mulInt(length, 2);
	nimln(67, "tables.nim");
	TMP379 = mulInt(counter, 3);
	LOC5 = ((NI32)(TMP378) < (NI32)(TMP379));
	if (LOC5) goto LA6;
	nimln(67, "tables.nim");
	nimln(67, "tables.nim");
	TMP380 = subInt(length, counter);
	LOC5 = ((NI32)(TMP380) < 4);
	LA6: ;
	result = LOC5;
	popFrame();
	return result;
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
static N_INLINE(NI, nexttry_117405)(NI h, NI maxhash) {
	NI result;
	NI TMP381;
	NI TMP382;
	nimfr("nextTry", "tables.nim")
	result = 0;
	nimln(70, "tables.nim");
	nimln(70, "tables.nim");
	nimln(70, "tables.nim");
	nimln(70, "tables.nim");
	TMP381 = mulInt(5, h);
	TMP382 = addInt((NI32)(TMP381), 1);
	result = (NI)((NI32)(TMP382) & maxhash);
	popFrame();
	return result;
}N_NIMCALL(void, TMP800)(void* p, NI op) {
	tkeyvaluepairseq137543* a;
	NI LOC1;
	a = (tkeyvaluepairseq137543*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field1, op);
	}
}

N_NIMCALL(void, inittable_137534)(NI initialsize, ttable137540* Result) {
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
		hiddenraiseassert_76017(((NimStringDesc*) &TMP795));	}	LA4: ;
	nimln(168, "tables.nim");
	(*Result).Counter = 0;
	nimln(169, "tables.nim");
	unsureAsgnRef((void**) &(*Result).Data, (tkeyvaluepairseq137543*) newSeq((&NTI137543), initialsize));
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
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (NI32)((*a).Sup.len * 1));
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	BeforeRet: ;	return result;
}
N_NIMCALL(NI, rawget_137724)(ttable137540 t, NimStringDesc* key) {
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
N_NIMCALL(NIM_BOOL, haskey_137712)(ttable137540 t, NimStringDesc* key) {
	NIM_BOOL result;
	NI LOC1;
	nimfr("hasKey", "tables.nim")
	result = 0;
	nimln(108, "tables.nim");
	nimln(702, "system.nim");
	nimln(108, "tables.nim");
	LOC1 = 0;
	LOC1 = rawget_137724(t, key);
	result = (0 <= LOC1);
	popFrame();
	return result;
}
N_NIMCALL(NI32, HEX5BHEX5D_137757)(ttable137540 t, NimStringDesc* key) {
	NI32 result;
	NI index;
	nimfr("[]", "tables.nim")
	result = 0;
	nimln(96, "tables.nim");
	index = rawget_137724(t, key);
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
N_NIMCALL(void, rawinsert_137893)(ttable137540* t, tkeyvaluepairseq137543** data, NimStringDesc* key, NI32 val) {
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
N_NIMCALL(void, enlarge_137840)(ttable137540* t) {
	tkeyvaluepairseq137543* n;
	NI TMP813;
	NI i_137879;
	NI HEX3Atmp_137934;
	NI res_137936;
	tkeyvaluepairseq137543* LOC6;
	nimfr("Enlarge", "tables.nim")
	n = 0;
	nimln(116, "tables.nim");
	nimln(116, "tables.nim");
	nimln(116, "tables.nim");
	TMP813 = mulInt((*t).Data->Sup.len, 2);
	n = (tkeyvaluepairseq137543*) newSeq((&NTI137543), (NI32)(TMP813));
	i_137879 = 0;
	HEX3Atmp_137934 = 0;
	nimln(117, "tables.nim");
	nimln(117, "tables.nim");
	HEX3Atmp_137934 = ((*t).Data->Sup.len-1);
	nimln(1301, "system.nim");
	res_137936 = 0;
	nimln(1302, "system.nim");
	while (1) {
		nimln(1302, "system.nim");
		if (!(res_137936 <= HEX3Atmp_137934)) goto LA1;
		nimln(1301, "system.nim");
		i_137879 = res_137936;
		nimln(118, "tables.nim");
		{
			nimln(118, "tables.nim");
			if ((NU)(i_137879) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
			if (!((*t).Data->data[i_137879].Field0 == ((NU8) 1))) goto LA4;
			nimln(118, "tables.nim");
			if ((NU)(i_137879) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
			if ((NU)(i_137879) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
			rawinsert_137893(t, &n, (*t).Data->data[i_137879].Field1, (*t).Data->data[i_137879].Field2);		}		LA4: ;
		nimln(1304, "system.nim");
		res_137936 = addInt(res_137936, 1);
	} LA1: ;
	nimln(119, "tables.nim");
	LOC6 = 0;
	LOC6 = (*t).Data;
	unsureAsgnRef((void**) &(*t).Data, n);
	n = LOC6;
	popFrame();
}
N_NIMCALL(void, HEX5BHEX5DHEX3D_137805)(ttable137540* t, NimStringDesc* key, NI32 val) {
	NI index;
	nimfr("[]=", "tables.nim")
	nimln(127, "tables.nim");
	index = rawget_137724((*t), key);
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
			enlarge_137840(t);		}		LA9: ;
		nimln(123, "tables.nim");
		rawinsert_137893(t, &(*t).Data, key, val);		nimln(124, "tables.nim");
		(*t).Counter = addInt((*t).Counter, 1);
	}	LA1: ;
	popFrame();
}N_NIMCALL(void, TMP3092)(void* p, NI op) {
	tkeyvaluepairseq220062* a;
	NI LOC1;
	a = (tkeyvaluepairseq220062*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field1.Callee, op);
	nimGCvisit((void*)a->data[LOC1].Field1.Args, op);
	}
}

N_NIMCALL(void, inittable_220053)(NI initialsize, ttable220059* Result) {
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
		hiddenraiseassert_76017(((NimStringDesc*) &TMP795));	}	LA4: ;
	nimln(168, "tables.nim");
	(*Result).Counter = 0;
	nimln(169, "tables.nim");
	unsureAsgnRef((void**) &(*Result).Data, (tkeyvaluepairseq220062*) newSeq((&NTI220062), initialsize));
	popFrame();
}N_NIMCALL(void, TMP3096)(void* p, NI op) {
	tkeyvaluepairseq220032* a;
	NI LOC1;
	a = (tkeyvaluepairseq220032*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}

N_NIMCALL(void, inittable_220414)(NI initialsize, ttable220029* Result) {
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
		hiddenraiseassert_76017(((NimStringDesc*) &TMP795));	}	LA4: ;
	nimln(168, "tables.nim");
	(*Result).Counter = 0;
	nimln(169, "tables.nim");
	unsureAsgnRef((void**) &(*Result).Data, (tkeyvaluepairseq220032*) newSeq((&NTI220032), initialsize));
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
N_NIMCALL(NI, rawget_220650)(ttable220029 t, NI key) {
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
N_NIMCALL(NU8, HEX5BHEX5D_220638)(ttable220029 t, NI key) {
	NU8 result;
	NI index;
	nimfr("[]", "tables.nim")
	result = 0;
	nimln(96, "tables.nim");
	index = rawget_220650(t, key);
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
N_NIMCALL(void, rawinsert_220820)(ttable220029* t, tkeyvaluepairseq220032** data, NI key, NU8 val) {
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
N_NIMCALL(void, enlarge_220767)(ttable220029* t) {
	tkeyvaluepairseq220032* n;
	NI TMP3101;
	NI i_220806;
	NI HEX3Atmp_220861;
	NI res_220863;
	tkeyvaluepairseq220032* LOC6;
	nimfr("Enlarge", "tables.nim")
	n = 0;
	nimln(116, "tables.nim");
	nimln(116, "tables.nim");
	nimln(116, "tables.nim");
	TMP3101 = mulInt((*t).Data->Sup.len, 2);
	n = (tkeyvaluepairseq220032*) newSeq((&NTI220032), (NI32)(TMP3101));
	i_220806 = 0;
	HEX3Atmp_220861 = 0;
	nimln(117, "tables.nim");
	nimln(117, "tables.nim");
	HEX3Atmp_220861 = ((*t).Data->Sup.len-1);
	nimln(1301, "system.nim");
	res_220863 = 0;
	nimln(1302, "system.nim");
	while (1) {
		nimln(1302, "system.nim");
		if (!(res_220863 <= HEX3Atmp_220861)) goto LA1;
		nimln(1301, "system.nim");
		i_220806 = res_220863;
		nimln(118, "tables.nim");
		{
			nimln(118, "tables.nim");
			if ((NU)(i_220806) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
			if (!((*t).Data->data[i_220806].Field0 == ((NU8) 1))) goto LA4;
			nimln(118, "tables.nim");
			if ((NU)(i_220806) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
			if ((NU)(i_220806) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
			rawinsert_220820(t, &n, (*t).Data->data[i_220806].Field1, (*t).Data->data[i_220806].Field2);		}		LA4: ;
		nimln(1304, "system.nim");
		res_220863 = addInt(res_220863, 1);
	} LA1: ;
	nimln(119, "tables.nim");
	LOC6 = 0;
	LOC6 = (*t).Data;
	unsureAsgnRef((void**) &(*t).Data, n);
	n = LOC6;
	popFrame();
}
N_NIMCALL(void, HEX5BHEX5DHEX3D_220732)(ttable220029* t, NI key, NU8 val) {
	NI index;
	nimfr("[]=", "tables.nim")
	nimln(127, "tables.nim");
	index = rawget_220650((*t), key);
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
			enlarge_220767(t);		}		LA9: ;
		nimln(123, "tables.nim");
		rawinsert_220820(t, &(*t).Data, key, val);		nimln(124, "tables.nim");
		(*t).Counter = addInt((*t).Counter, 1);
	}	LA1: ;
	popFrame();
}
N_NIMCALL(NI, rawget_221128)(ttable220059 t, tcall220009 key) {
	NI result;
	NI h;
	NI LOC1;
	nimfr("RawGet", "tables.nim")
	result = 0;
	nimln(73, "tables.nim");
	nimln(73, "tables.nim");
	nimln(73, "tables.nim");
	LOC1 = 0;
	LOC1 = hash_220214(key);
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
			LOC5 = HEX3DHEX3D_220263(t.Data->data[h].Field1, key);
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
N_NIMCALL(NIM_BOOL, haskey_221116)(ttable220059 t, tcall220009 key) {
	NIM_BOOL result;
	NI LOC1;
	nimfr("hasKey", "tables.nim")
	result = 0;
	nimln(108, "tables.nim");
	nimln(702, "system.nim");
	nimln(108, "tables.nim");
	LOC1 = 0;
	LOC1 = rawget_221128(t, key);
	result = (0 <= LOC1);
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
N_NIMCALL(void, rawinsert_221250)(ttable220059* t, tkeyvaluepairseq220062** data, tcall220009 key, NU8 val) {
	NI h;
	NI LOC1;
	nimfr("RawInsert", "tables.nim")
	nimln(81, "tables.nim");
	nimln(81, "tables.nim");
	nimln(81, "tables.nim");
	LOC1 = 0;
	LOC1 = hash_220214(key);
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
	genericSeqAssign(&(*data)->data[h].Field1.Args, key.Args, (&NTI220020));
	nimln(85, "tables.nim");
	if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
	(*data)->data[h].Field2 = val;
	nimln(86, "tables.nim");
	if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
	(*data)->data[h].Field0 = ((NU8) 1);
	popFrame();
}
N_NIMCALL(void, enlarge_221197)(ttable220059* t) {
	tkeyvaluepairseq220062* n;
	NI TMP3110;
	NI i_221236;
	NI HEX3Atmp_221291;
	NI res_221293;
	tkeyvaluepairseq220062* LOC6;
	nimfr("Enlarge", "tables.nim")
	n = 0;
	nimln(116, "tables.nim");
	nimln(116, "tables.nim");
	nimln(116, "tables.nim");
	TMP3110 = mulInt((*t).Data->Sup.len, 2);
	n = (tkeyvaluepairseq220062*) newSeq((&NTI220062), (NI32)(TMP3110));
	i_221236 = 0;
	HEX3Atmp_221291 = 0;
	nimln(117, "tables.nim");
	nimln(117, "tables.nim");
	HEX3Atmp_221291 = ((*t).Data->Sup.len-1);
	nimln(1301, "system.nim");
	res_221293 = 0;
	nimln(1302, "system.nim");
	while (1) {
		nimln(1302, "system.nim");
		if (!(res_221293 <= HEX3Atmp_221291)) goto LA1;
		nimln(1301, "system.nim");
		i_221236 = res_221293;
		nimln(118, "tables.nim");
		{
			nimln(118, "tables.nim");
			if ((NU)(i_221236) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
			if (!((*t).Data->data[i_221236].Field0 == ((NU8) 1))) goto LA4;
			nimln(118, "tables.nim");
			if ((NU)(i_221236) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
			if ((NU)(i_221236) >= (NU)((*t).Data->Sup.len)) raiseIndexError();
			rawinsert_221250(t, &n, (*t).Data->data[i_221236].Field1, (*t).Data->data[i_221236].Field2);		}		LA4: ;
		nimln(1304, "system.nim");
		res_221293 = addInt(res_221293, 1);
	} LA1: ;
	nimln(119, "tables.nim");
	LOC6 = 0;
	LOC6 = (*t).Data;
	unsureAsgnRef((void**) &(*t).Data, n);
	n = LOC6;
	popFrame();
}
N_NIMCALL(void, HEX5BHEX5DHEX3D_221162)(ttable220059* t, tcall220009 key, NU8 val) {
	NI index;
	nimfr("[]=", "tables.nim")
	nimln(127, "tables.nim");
	index = rawget_221128((*t), key);
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
			enlarge_221197(t);		}		LA9: ;
		nimln(123, "tables.nim");
		rawinsert_221250(t, &(*t).Data, key, val);		nimln(124, "tables.nim");
		(*t).Counter = addInt((*t).Counter, 1);
	}	LA1: ;
	popFrame();
}
N_NIMCALL(NU8, HEX5BHEX5D_221507)(ttable220059 t, tcall220009 key) {
	NU8 result;
	NI index;
	nimfr("[]", "tables.nim")
	result = 0;
	nimln(96, "tables.nim");
	index = rawget_221128(t, key);
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
static TNimNode* TMP796[3];
static TNimNode* TMP797[3];
NI TMP799;
static char* NIM_CONST TMP798[3] = {
"seEmpty", 
"seFilled", 
"seDeleted"};
static TNimNode* TMP801[2];
static TNimNode* TMP3086[3];
static TNimNode* TMP3093[2];
static TNimNode* TMP3095[3];
static TNimNode* TMP3099[2];
static TNimNode TMP373[25];
NTI137546.size = sizeof(tkeyvaluepair137546);
NTI137546.kind = 18;
NTI137546.base = 0;
NTI137546.flags = 2;
TMP796[0] = &TMP373[1];
NTI117005.size = sizeof(NU8);
NTI117005.kind = 14;
NTI117005.base = 0;
NTI117005.flags = 3;
for (TMP799 = 0; TMP799 < 3; TMP799++) {
TMP373[TMP799+2].kind = 1;
TMP373[TMP799+2].offset = TMP799;
TMP373[TMP799+2].name = TMP798[TMP799];
TMP797[TMP799] = &TMP373[TMP799+2];
}
TMP373[5].len = 3; TMP373[5].kind = 2; TMP373[5].sons = &TMP797[0];
NTI117005.node = &TMP373[5];
TMP373[1].kind = 1;
TMP373[1].offset = offsetof(tkeyvaluepair137546, Field0);
TMP373[1].typ = (&NTI117005);
TMP373[1].name = "Field0";
TMP796[1] = &TMP373[6];
TMP373[6].kind = 1;
TMP373[6].offset = offsetof(tkeyvaluepair137546, Field1);
TMP373[6].typ = (&NTI142);
TMP373[6].name = "Field1";
TMP796[2] = &TMP373[7];
TMP373[7].kind = 1;
TMP373[7].offset = offsetof(tkeyvaluepair137546, Field2);
TMP373[7].typ = (&NTI111);
TMP373[7].name = "Field2";
TMP373[0].len = 3; TMP373[0].kind = 2; TMP373[0].sons = &TMP796[0];
NTI137546.node = &TMP373[0];
NTI137543.size = sizeof(tkeyvaluepairseq137543*);
NTI137543.kind = 24;
NTI137543.base = (&NTI137546);
NTI137543.flags = 2;
NTI137543.marker = TMP800;
NTI137540.size = sizeof(ttable137540);
NTI137540.kind = 18;
NTI137540.base = 0;
NTI137540.flags = 2;
TMP801[0] = &TMP373[9];
TMP373[9].kind = 1;
TMP373[9].offset = offsetof(ttable137540, Data);
TMP373[9].typ = (&NTI137543);
TMP373[9].name = "data";
TMP801[1] = &TMP373[10];
TMP373[10].kind = 1;
TMP373[10].offset = offsetof(ttable137540, Counter);
TMP373[10].typ = (&NTI105);
TMP373[10].name = "counter";
TMP373[8].len = 2; TMP373[8].kind = 2; TMP373[8].sons = &TMP801[0];
NTI137540.node = &TMP373[8];
NTI220065.size = sizeof(tkeyvaluepair220065);
NTI220065.kind = 18;
NTI220065.base = 0;
NTI220065.flags = 2;
TMP3086[0] = &TMP373[12];
TMP373[12].kind = 1;
TMP373[12].offset = offsetof(tkeyvaluepair220065, Field0);
TMP373[12].typ = (&NTI117005);
TMP373[12].name = "Field0";
TMP3086[1] = &TMP373[13];
TMP373[13].kind = 1;
TMP373[13].offset = offsetof(tkeyvaluepair220065, Field1);
TMP373[13].typ = (&NTI220009);
TMP373[13].name = "Field1";
TMP3086[2] = &TMP373[14];
TMP373[14].kind = 1;
TMP373[14].offset = offsetof(tkeyvaluepair220065, Field2);
TMP373[14].typ = (&NTI220007);
TMP373[14].name = "Field2";
TMP373[11].len = 3; TMP373[11].kind = 2; TMP373[11].sons = &TMP3086[0];
NTI220065.node = &TMP373[11];
NTI220062.size = sizeof(tkeyvaluepairseq220062*);
NTI220062.kind = 24;
NTI220062.base = (&NTI220065);
NTI220062.flags = 2;
NTI220062.marker = TMP3092;
NTI220059.size = sizeof(ttable220059);
NTI220059.kind = 18;
NTI220059.base = 0;
NTI220059.flags = 2;
TMP3093[0] = &TMP373[16];
TMP373[16].kind = 1;
TMP373[16].offset = offsetof(ttable220059, Data);
TMP373[16].typ = (&NTI220062);
TMP373[16].name = "data";
TMP3093[1] = &TMP373[17];
TMP373[17].kind = 1;
TMP373[17].offset = offsetof(ttable220059, Counter);
TMP373[17].typ = (&NTI105);
TMP373[17].name = "counter";
TMP373[15].len = 2; TMP373[15].kind = 2; TMP373[15].sons = &TMP3093[0];
NTI220059.node = &TMP373[15];
NTI220035.size = sizeof(tkeyvaluepair220035);
NTI220035.kind = 18;
NTI220035.base = 0;
NTI220035.flags = 3;
TMP3095[0] = &TMP373[19];
TMP373[19].kind = 1;
TMP373[19].offset = offsetof(tkeyvaluepair220035, Field0);
TMP373[19].typ = (&NTI117005);
TMP373[19].name = "Field0";
TMP3095[1] = &TMP373[20];
TMP373[20].kind = 1;
TMP373[20].offset = offsetof(tkeyvaluepair220035, Field1);
TMP373[20].typ = (&NTI105);
TMP373[20].name = "Field1";
TMP3095[2] = &TMP373[21];
TMP373[21].kind = 1;
TMP373[21].offset = offsetof(tkeyvaluepair220035, Field2);
TMP373[21].typ = (&NTI220007);
TMP373[21].name = "Field2";
TMP373[18].len = 3; TMP373[18].kind = 2; TMP373[18].sons = &TMP3095[0];
NTI220035.node = &TMP373[18];
NTI220032.size = sizeof(tkeyvaluepairseq220032*);
NTI220032.kind = 24;
NTI220032.base = (&NTI220035);
NTI220032.flags = 2;
NTI220032.marker = TMP3096;
NTI220029.size = sizeof(ttable220029);
NTI220029.kind = 18;
NTI220029.base = 0;
NTI220029.flags = 2;
TMP3099[0] = &TMP373[23];
TMP373[23].kind = 1;
TMP373[23].offset = offsetof(ttable220029, Data);
TMP373[23].typ = (&NTI220032);
TMP373[23].name = "data";
TMP3099[1] = &TMP373[24];
TMP373[24].kind = 1;
TMP373[24].offset = offsetof(ttable220029, Counter);
TMP373[24].typ = (&NTI105);
TMP373[24].name = "counter";
TMP373[22].len = 2; TMP373[22].kind = 2; TMP373[22].sons = &TMP3099[0];
NTI220029.node = &TMP373[22];
}

