/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct ttable128335 ttable128335;
typedef struct tkeyvaluepairseq128340 tkeyvaluepairseq128340;
typedef struct tkeyvaluepair128345 tkeyvaluepair128345;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttable215068 ttable215068;
typedef struct tkeyvaluepairseq215073 tkeyvaluepairseq215073;
typedef struct tkeyvaluepair215078 tkeyvaluepair215078;
typedef struct tcall215008 tcall215008;
typedef struct tsym169677 tsym169677;
typedef struct TY215019 TY215019;
typedef struct ttable215028 ttable215028;
typedef struct tkeyvaluepairseq215033 tkeyvaluepairseq215033;
typedef struct tkeyvaluepair215038 tkeyvaluepair215038;
typedef struct tidobj131009 tidobj131009;
typedef struct TNimObject TNimObject;
typedef struct ttypeseq169679 ttypeseq169679;
typedef struct ttype169681 ttype169681;
typedef struct TY169771 TY169771;
typedef struct tinstantiation169667 tinstantiation169667;
typedef struct tscope169671 tscope169671;
typedef struct tstrtable169651 tstrtable169651;
typedef struct tsymseq169649 tsymseq169649;
typedef struct tident131015 tident131015;
typedef struct tlineinfo128308 tlineinfo128308;
typedef struct tnode169647 tnode169647;
typedef struct tloc169661 tloc169661;
typedef struct trope126007 trope126007;
typedef struct tlib169665 tlib169665;
typedef struct TY169763 TY169763;
typedef struct tnodeseq169641 tnodeseq169641;
typedef struct tlistentry100011 tlistentry100011;
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
};
struct tkeyvaluepair128345 {
NU8 Field0;
NimStringDesc* Field1;
NI32 Field2;
};
struct ttable128335 {
tkeyvaluepairseq128340* Data;
NI Counter;
};
typedef N_NIMCALL_PTR(void, TY891) (void* p, NI op);
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY891 marker;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tcall215008 {
tsym169677* Callee;
TY215019* Args;
};
struct tkeyvaluepair215078 {
NU8 Field0;
tcall215008 Field1;
NU8 Field2;
};
struct ttable215068 {
tkeyvaluepairseq215073* Data;
NI Counter;
};
struct tkeyvaluepair215038 {
NU8 Field0;
NI Field1;
NU8 Field2;
};
struct ttable215028 {
tkeyvaluepairseq215033* Data;
NI Counter;
};
struct TNimObject {
TNimType* m_type;
};
struct tidobj131009 {
  TNimObject Sup;
NI Id;
};
struct tstrtable169651 {
NI Counter;
tsymseq169649* Data;
};
struct tlineinfo128308 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct tloc169661 {
NU8 K;
NU8 S;
NU8 Flags;
ttype169681* T;
trope126007* R;
trope126007* Heaproot;
NI A;
};
struct tsym169677 {
  tidobj131009 Sup;
NU8 Kind;
union {
struct {ttypeseq169679* Typeinstcache;
} S1;
struct {TY169771* Procinstcache;
tscope169671* Scope;
} S2;
struct {TY169771* Usedgenerics;
tstrtable169651 Tab;
} S3;
} kindU;
NU16 Magic;
ttype169681* Typ;
tident131015* Name;
tlineinfo128308 Info;
tsym169677* Owner;
NU32 Flags;
tnode169647* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc169661 Loc;
tlib169665* Annex;
tnode169647* Constraint;
};
struct ttype169681 {
  tidobj131009 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq169679* Sons;
tnode169647* N;
tsym169677* Destructor;
tsym169677* Owner;
tsym169677* Sym;
NI64 Size;
NI Align;
tloc169661 Loc;
};
struct tinstantiation169667 {
tsym169677* Sym;
ttypeseq169679* Concretetypes;
TY169763* Usedby;
};
struct tscope169671 {
NI Depthlevel;
tstrtable169651 Symbols;
tscope169671* Parent;
};
struct tident131015 {
  tidobj131009 Sup;
NimStringDesc* S;
tident131015* Next;
NI H;
};
struct tnode169647 {
ttype169681* Typ;
tlineinfo128308 Info;
NU8 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF64 Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym169677* Sym;
} S4;
struct {tident131015* Ident;
} S5;
struct {tnodeseq169641* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
struct trope126007 {
  TNimObject Sup;
trope126007* Left;
trope126007* Right;
NI Length;
NimStringDesc* Data;
};
struct tlistentry100011 {
  TNimObject Sup;
tlistentry100011* Prev;
tlistentry100011* Next;
};
struct tlib169665 {
  tlistentry100011 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope126007* Name;
tnode169647* Path;
};
struct tkeyvaluepairseq128340 {
  TGenericSeq Sup;
  tkeyvaluepair128345 data[SEQ_DECL_SIZE];
};
struct TY215019 {
  TGenericSeq Sup;
  NU8 data[SEQ_DECL_SIZE];
};
struct tkeyvaluepairseq215073 {
  TGenericSeq Sup;
  tkeyvaluepair215078 data[SEQ_DECL_SIZE];
};
struct tkeyvaluepairseq215033 {
  TGenericSeq Sup;
  tkeyvaluepair215038 data[SEQ_DECL_SIZE];
};
struct ttypeseq169679 {
  TGenericSeq Sup;
  ttype169681* data[SEQ_DECL_SIZE];
};
struct TY169771 {
  TGenericSeq Sup;
  tinstantiation169667* data[SEQ_DECL_SIZE];
};
struct tsymseq169649 {
  TGenericSeq Sup;
  tsym169677* data[SEQ_DECL_SIZE];
};
struct TY169763 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct tnodeseq169641 {
  TGenericSeq Sup;
  tnode169647* data[SEQ_DECL_SIZE];
};
static N_INLINE(NIM_BOOL, mustrehash_108283)(NI length, NI counter);
N_NIMCALL(void, hiddenraiseassert_71620)(NimStringDesc* msg);
N_NIMCALL(NI, mulInt)(NI a, NI b);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, nexttry_108407)(NI h, NI maxhash);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP775)(void* p, NI op);
N_NIMCALL(void, TMP3020)(void* p, NI op);
N_NIMCALL(void, TMP3026)(void* p, NI op);
STRING_LITERAL(TMP357, "counter < length ", 17);
extern TFrame* frameptr_12027;
TNimType NTI128335; /* TTable */
TNimType NTI128345; /* TKeyValuePair */
TNimType NTI108005; /* TSlotEnum */
extern TNimType NTI143; /* string */
extern TNimType NTI111; /* int32 */
TNimType NTI128340; /* TKeyValuePairSeq */
extern TNimType NTI105; /* int */
TNimType NTI215068; /* TTable */
TNimType NTI215078; /* TKeyValuePair */
extern TNimType NTI215008; /* TCall */
extern TNimType NTI215006; /* TThreadOwner */
TNimType NTI215073; /* TKeyValuePairSeq */
TNimType NTI215028; /* TTable */
TNimType NTI215038; /* TKeyValuePair */
TNimType NTI215033; /* TKeyValuePairSeq */

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ (NI)((NU64) ~(b))));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	BeforeRet: ;
	return result;
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12027;
	frameptr_12027 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_12027 = (*frameptr_12027).prev;
}

static N_INLINE(NIM_BOOL, mustrehash_108283)(NI length, NI counter) {
	NIM_BOOL result;
	NIM_BOOL LOC5;
	NI TMP358;
	NI TMP359;
	NI TMP360;
	nimfr("mustRehash", "tables.nim")
	result = 0;
	nimln(66, "tables.nim");
	{
		nimln(66, "tables.nim");
		nimln(66, "tables.nim");
		if (!!((counter < length))) goto LA3;
		nimln(66, "tables.nim");
		hiddenraiseassert_71620(((NimStringDesc*) &TMP357));
	}
	LA3: ;
	nimln(67, "tables.nim");
	nimln(67, "tables.nim");
	nimln(67, "tables.nim");
	nimln(67, "tables.nim");
	TMP358 = mulInt(length, 2);
	nimln(67, "tables.nim");
	TMP359 = mulInt(counter, 3);
	LOC5 = ((NI64)(TMP358) < (NI64)(TMP359));
	if (LOC5) goto LA6;
	nimln(67, "tables.nim");
	nimln(67, "tables.nim");
	TMP360 = subInt(length, counter);
	LOC5 = ((NI64)(TMP360) < 4);
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
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ b));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	BeforeRet: ;
	return result;
}

static N_INLINE(NI, nexttry_108407)(NI h, NI maxhash) {
	NI result;
	NI TMP361;
	NI TMP362;
	nimfr("nextTry", "tables.nim")
	result = 0;
	nimln(70, "tables.nim");
	nimln(70, "tables.nim");
	nimln(70, "tables.nim");
	nimln(70, "tables.nim");
	TMP361 = mulInt(5, h);
	TMP362 = addInt((NI64)(TMP361), 1);
	result = (NI)((NI64)(TMP362) & maxhash);
	popFrame();
	return result;
}
N_NIMCALL(void, TMP775)(void* p, NI op) {
	tkeyvaluepairseq128340* a;
	NI LOC1;
	a = (tkeyvaluepairseq128340*)p;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field1, op);
	}
}
N_NIMCALL(void, TMP3020)(void* p, NI op) {
	tkeyvaluepairseq215073* a;
	NI LOC1;
	a = (tkeyvaluepairseq215073*)p;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Field1.Callee, op);
	nimGCvisit((void*)a->data[LOC1].Field1.Args, op);
	}
}
N_NIMCALL(void, TMP3026)(void* p, NI op) {
	tkeyvaluepairseq215033* a;
	NI LOC1;
	a = (tkeyvaluepairseq215033*)p;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}
N_NOINLINE(void, tablesInit)(void) {
	nimfr("tables", "tables.nim")
	popFrame();
}

N_NOINLINE(void, tablesDatInit)(void) {
static TNimNode* TMP770[2];
static TNimNode* TMP771[3];
static TNimNode* TMP772[3];
NI TMP774;
static char* NIM_CONST TMP773[3] = {
"seEmpty", 
"seFilled", 
"seDeleted"};
static TNimNode* TMP3013[2];
static TNimNode* TMP3014[3];
static TNimNode* TMP3024[2];
static TNimNode* TMP3025[3];
static TNimNode TMP353[25];
NTI128335.size = sizeof(ttable128335);
NTI128335.kind = 18;
NTI128335.base = 0;
NTI128335.flags = 2;
TMP770[0] = &TMP353[1];
NTI128345.size = sizeof(tkeyvaluepair128345);
NTI128345.kind = 18;
NTI128345.base = 0;
NTI128345.flags = 2;
TMP771[0] = &TMP353[3];
NTI108005.size = sizeof(NU8);
NTI108005.kind = 14;
NTI108005.base = 0;
NTI108005.flags = 3;
for (TMP774 = 0; TMP774 < 3; TMP774++) {
TMP353[TMP774+4].kind = 1;
TMP353[TMP774+4].offset = TMP774;
TMP353[TMP774+4].name = TMP773[TMP774];
TMP772[TMP774] = &TMP353[TMP774+4];
}
TMP353[7].len = 3; TMP353[7].kind = 2; TMP353[7].sons = &TMP772[0];
NTI108005.node = &TMP353[7];
TMP353[3].kind = 1;
TMP353[3].offset = offsetof(tkeyvaluepair128345, Field0);
TMP353[3].typ = (&NTI108005);
TMP353[3].name = "Field0";
TMP771[1] = &TMP353[8];
TMP353[8].kind = 1;
TMP353[8].offset = offsetof(tkeyvaluepair128345, Field1);
TMP353[8].typ = (&NTI143);
TMP353[8].name = "Field1";
TMP771[2] = &TMP353[9];
TMP353[9].kind = 1;
TMP353[9].offset = offsetof(tkeyvaluepair128345, Field2);
TMP353[9].typ = (&NTI111);
TMP353[9].name = "Field2";
TMP353[2].len = 3; TMP353[2].kind = 2; TMP353[2].sons = &TMP771[0];
NTI128345.node = &TMP353[2];
NTI128340.size = sizeof(tkeyvaluepairseq128340*);
NTI128340.kind = 24;
NTI128340.base = (&NTI128345);
NTI128340.flags = 2;
NTI128340.marker = TMP775;
TMP353[1].kind = 1;
TMP353[1].offset = offsetof(ttable128335, Data);
TMP353[1].typ = (&NTI128340);
TMP353[1].name = "data";
TMP770[1] = &TMP353[10];
TMP353[10].kind = 1;
TMP353[10].offset = offsetof(ttable128335, Counter);
TMP353[10].typ = (&NTI105);
TMP353[10].name = "counter";
TMP353[0].len = 2; TMP353[0].kind = 2; TMP353[0].sons = &TMP770[0];
NTI128335.node = &TMP353[0];
NTI215068.size = sizeof(ttable215068);
NTI215068.kind = 18;
NTI215068.base = 0;
NTI215068.flags = 2;
TMP3013[0] = &TMP353[12];
NTI215078.size = sizeof(tkeyvaluepair215078);
NTI215078.kind = 18;
NTI215078.base = 0;
NTI215078.flags = 2;
TMP3014[0] = &TMP353[14];
TMP353[14].kind = 1;
TMP353[14].offset = offsetof(tkeyvaluepair215078, Field0);
TMP353[14].typ = (&NTI108005);
TMP353[14].name = "Field0";
TMP3014[1] = &TMP353[15];
TMP353[15].kind = 1;
TMP353[15].offset = offsetof(tkeyvaluepair215078, Field1);
TMP353[15].typ = (&NTI215008);
TMP353[15].name = "Field1";
TMP3014[2] = &TMP353[16];
TMP353[16].kind = 1;
TMP353[16].offset = offsetof(tkeyvaluepair215078, Field2);
TMP353[16].typ = (&NTI215006);
TMP353[16].name = "Field2";
TMP353[13].len = 3; TMP353[13].kind = 2; TMP353[13].sons = &TMP3014[0];
NTI215078.node = &TMP353[13];
NTI215073.size = sizeof(tkeyvaluepairseq215073*);
NTI215073.kind = 24;
NTI215073.base = (&NTI215078);
NTI215073.flags = 2;
NTI215073.marker = TMP3020;
TMP353[12].kind = 1;
TMP353[12].offset = offsetof(ttable215068, Data);
TMP353[12].typ = (&NTI215073);
TMP353[12].name = "data";
TMP3013[1] = &TMP353[17];
TMP353[17].kind = 1;
TMP353[17].offset = offsetof(ttable215068, Counter);
TMP353[17].typ = (&NTI105);
TMP353[17].name = "counter";
TMP353[11].len = 2; TMP353[11].kind = 2; TMP353[11].sons = &TMP3013[0];
NTI215068.node = &TMP353[11];
NTI215028.size = sizeof(ttable215028);
NTI215028.kind = 18;
NTI215028.base = 0;
NTI215028.flags = 2;
TMP3024[0] = &TMP353[19];
NTI215038.size = sizeof(tkeyvaluepair215038);
NTI215038.kind = 18;
NTI215038.base = 0;
NTI215038.flags = 3;
TMP3025[0] = &TMP353[21];
TMP353[21].kind = 1;
TMP353[21].offset = offsetof(tkeyvaluepair215038, Field0);
TMP353[21].typ = (&NTI108005);
TMP353[21].name = "Field0";
TMP3025[1] = &TMP353[22];
TMP353[22].kind = 1;
TMP353[22].offset = offsetof(tkeyvaluepair215038, Field1);
TMP353[22].typ = (&NTI105);
TMP353[22].name = "Field1";
TMP3025[2] = &TMP353[23];
TMP353[23].kind = 1;
TMP353[23].offset = offsetof(tkeyvaluepair215038, Field2);
TMP353[23].typ = (&NTI215006);
TMP353[23].name = "Field2";
TMP353[20].len = 3; TMP353[20].kind = 2; TMP353[20].sons = &TMP3025[0];
NTI215038.node = &TMP353[20];
NTI215033.size = sizeof(tkeyvaluepairseq215033*);
NTI215033.kind = 24;
NTI215033.base = (&NTI215038);
NTI215033.flags = 2;
NTI215033.marker = TMP3026;
TMP353[19].kind = 1;
TMP353[19].offset = offsetof(ttable215028, Data);
TMP353[19].typ = (&NTI215033);
TMP353[19].name = "data";
TMP3024[1] = &TMP353[24];
TMP353[24].kind = 1;
TMP353[24].offset = offsetof(ttable215028, Counter);
TMP353[24].typ = (&NTI105);
TMP353[24].name = "counter";
TMP353[18].len = 2; TMP353[18].kind = 2; TMP353[18].sons = &TMP3024[0];
NTI215028.node = &TMP353[18];
}
