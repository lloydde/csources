/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct tsym172689 tsym172689;
typedef struct tsymseq172661 tsymseq172661;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct tentry322943 tentry322943;
typedef struct TY322950 TY322950;
typedef struct tidobj141011 tidobj141011;
typedef struct TNimObject TNimObject;
typedef struct ttypeseq172691 ttypeseq172691;
typedef struct ttype172693 ttype172693;
typedef struct tscope172683 tscope172683;
typedef struct TY172786 TY172786;
typedef struct tinstantiation172679 tinstantiation172679;
typedef struct tstrtable172663 tstrtable172663;
typedef struct tident141017 tident141017;
typedef struct tlineinfo137509 tlineinfo137509;
typedef struct tnode172659 tnode172659;
typedef struct tloc172673 tloc172673;
typedef struct trope121007 trope121007;
typedef struct tlib172677 tlib172677;
typedef struct tnodeseq172653 tnodeseq172653;
typedef struct TY172775 TY172775;
typedef struct tlistentry109014 tlistentry109014;
typedef struct {
N_NIMCALL_PTR(NI, ClPrc) (tsym172689* x, tsym172689* y, void* ClEnv);
void* ClEnv;
} TY320724;
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
typedef N_CLOSURE_PTR(NI, TMP4977) (tsym172689* x, tsym172689* y);
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
};
typedef N_CLOSURE_PTR(NI, TMP4979) (tsym172689* x, tsym172689* y);
struct tentry322943 {
NI Pos;
tsym172689* Sym;
};
typedef struct {
N_NIMCALL_PTR(NI, ClPrc) (tentry322943 x, tentry322943 y, void* ClEnv);
void* ClEnv;
} TY323431;
typedef N_CLOSURE_PTR(NI, TMP4996) (tentry322943 x, tentry322943 y);
typedef N_CLOSURE_PTR(NI, TMP4997) (tentry322943 x, tentry322943 y);
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
struct tsymseq172661 {
  TGenericSeq Sup;
  tsym172689* data[SEQ_DECL_SIZE];
};
struct TY322950 {
  TGenericSeq Sup;
  tentry322943 data[SEQ_DECL_SIZE];
};
struct ttypeseq172691 {
  TGenericSeq Sup;
  ttype172693* data[SEQ_DECL_SIZE];
};
struct TY172786 {
  TGenericSeq Sup;
  tinstantiation172679* data[SEQ_DECL_SIZE];
};
struct tnodeseq172653 {
  TGenericSeq Sup;
  tnode172659* data[SEQ_DECL_SIZE];
};
struct TY172775 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
static N_INLINE(NI, HEX2A_318040)(NI x, NU8 order);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, divInt)(NI a, NI b);
N_NOINLINE(void, raiseDivByZero)(void);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, merge_320761)(tsym172689** a, NI aLen0, tsym172689** b, NI bLen0, NI lo, NI m, NI hi, TY320724 cmp, NU8 order);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(void, hiddenraiseassert_76017)(NimStringDesc* msg);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NI, mulInt)(NI a, NI b);
N_NIMCALL(void, merge_323468)(tentry322943* a, NI aLen0, tentry322943* b, NI bLen0, NI lo, NI m, NI hi, TY323431 cmp, NU8 order);
STRING_LITERAL(TMP4978, "j <= m ", 7);
extern TFrame* frameptr_12037;
extern TNimType NTI172661; /* TSymSeq */
extern TNimType NTI322950; /* seq[TEntry] */

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
static N_INLINE(NI, HEX2A_318040)(NI x, NU8 order) {
	NI result;
	NI y;
	NI TMP4969;
	NI TMP4970;
	nimfr("*", "algorithm.nim")
	result = 0;
	nimln(21, "algorithm.nim");
	nimln(21, "algorithm.nim");
	nimln(21, "algorithm.nim");
	TMP4969 = subInt(((NI) (order)), 1);
	y = (NI32)(TMP4969);
	nimln(22, "algorithm.nim");
	nimln(22, "algorithm.nim");
	nimln(22, "algorithm.nim");
	TMP4970 = subInt((NI)(x ^ ((NI) (y))), ((NI) (y)));
	result = (NI32)(TMP4970);
	popFrame();
	return result;
}
static N_INLINE(NI, divInt)(NI a, NI b) {
	NI result;
	result = 0;
	{
		if (!(b == 0)) goto LA3;
		raiseDivByZero();	}	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == (-2147483647 -1));
		if (!(LOC7)) goto LA8;
		LOC7 = (b == -1);
		LA8: ;
		if (!LOC7) goto LA9;
		raiseOverflow();	}	LA9: ;
	result = (NI32)(a / b);
	goto BeforeRet;
	BeforeRet: ;	return result;
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
N_NIMCALL(void, merge_320761)(tsym172689** a, NI aLen0, tsym172689** b, NI bLen0, NI lo, NI m, NI hi, TY320724 cmp, NU8 order) {
	NI j;
	NI bb;
	NI i;
	NI k;
	nimfr("merge", "algorithm.nim")
	nimln(71, "algorithm.nim");
	{
		NI TMP4976;
		NI LOC3;
		NI LOC4;
		nimln(71, "algorithm.nim");
		nimln(71, "algorithm.nim");
		nimln(71, "algorithm.nim");
		if ((NU)(m) >= (NU)(aLen0)) raiseIndexError();
		nimln(71, "algorithm.nim");
		TMP4976 = addInt(m, 1);
		if ((NU)((NI32)(TMP4976)) >= (NU)(aLen0)) raiseIndexError();
		LOC3 = 0;
		LOC3 = cmp.ClEnv? cmp.ClPrc(a[m], a[(NI32)(TMP4976)], cmp.ClEnv) : ((TMP4977)(cmp.ClPrc))(a[m], a[(NI32)(TMP4976)]);
		LOC4 = 0;
		LOC4 = HEX2A_318040(LOC3, order);
		if (!(LOC4 <= 0)) goto LA5;
		nimln(71, "algorithm.nim");
		goto BeforeRet;
	}	LA5: ;
	nimln(72, "algorithm.nim");
	j = lo;
	nimln(74, "algorithm.nim");
	{
		nimln(74, "algorithm.nim");
		nimln(74, "algorithm.nim");
		if (!!((j <= m))) goto LA9;
		nimln(74, "algorithm.nim");
		hiddenraiseassert_76017(((NimStringDesc*) &TMP4978));	}	LA9: ;
	nimln(76, "algorithm.nim");
	bb = 0;
	nimln(77, "algorithm.nim");
	while (1) {
		nimln(77, "algorithm.nim");
		if (!(j <= m)) goto LA11;
		nimln(64, "algorithm.nim");
		if ((NU)(bb) >= (NU)(bLen0)) raiseIndexError();
		if ((NU)(j) >= (NU)(aLen0)) raiseIndexError();
		unsureAsgnRef((void**) &b[bb], a[j]);
		nimln(79, "algorithm.nim");
		bb = addInt(bb, 1);
		nimln(80, "algorithm.nim");
		j = addInt(j, 1);
	} LA11: ;
	nimln(84, "algorithm.nim");
	i = 0;
	nimln(85, "algorithm.nim");
	k = lo;
	nimln(87, "algorithm.nim");
	while (1) {
		NIM_BOOL LOC13;
		nimln(87, "algorithm.nim");
		LOC13 = 0;
		nimln(87, "algorithm.nim");
		LOC13 = (k < j);
		if (!(LOC13)) goto LA14;
		nimln(87, "algorithm.nim");
		LOC13 = (j <= hi);
		LA14: ;
		if (!LOC13) goto LA12;
		nimln(88, "algorithm.nim");
		{
			NI LOC17;
			NI LOC18;
			nimln(88, "algorithm.nim");
			nimln(88, "algorithm.nim");
			nimln(88, "algorithm.nim");
			if ((NU)(i) >= (NU)(bLen0)) raiseIndexError();
			if ((NU)(j) >= (NU)(aLen0)) raiseIndexError();
			LOC17 = 0;
			LOC17 = cmp.ClEnv? cmp.ClPrc(b[i], a[j], cmp.ClEnv) : ((TMP4979)(cmp.ClPrc))(b[i], a[j]);
			LOC18 = 0;
			LOC18 = HEX2A_318040(LOC17, order);
			if (!(LOC18 <= 0)) goto LA19;
			nimln(64, "algorithm.nim");
			if ((NU)(k) >= (NU)(aLen0)) raiseIndexError();
			if ((NU)(i) >= (NU)(bLen0)) raiseIndexError();
			unsureAsgnRef((void**) &a[k], b[i]);
			nimln(90, "algorithm.nim");
			i = addInt(i, 1);
		}		goto LA15;
		LA19: ;
		{
			nimln(64, "algorithm.nim");
			if ((NU)(k) >= (NU)(aLen0)) raiseIndexError();
			if ((NU)(j) >= (NU)(aLen0)) raiseIndexError();
			unsureAsgnRef((void**) &a[k], a[j]);
			nimln(93, "algorithm.nim");
			j = addInt(j, 1);
		}		LA15: ;
		nimln(94, "algorithm.nim");
		k = addInt(k, 1);
	} LA12: ;
	nimln(97, "algorithm.nim");
	while (1) {
		nimln(97, "algorithm.nim");
		if (!(k < j)) goto LA22;
		nimln(64, "algorithm.nim");
		if ((NU)(k) >= (NU)(aLen0)) raiseIndexError();
		if ((NU)(i) >= (NU)(bLen0)) raiseIndexError();
		unsureAsgnRef((void**) &a[k], b[i]);
		nimln(99, "algorithm.nim");
		k = addInt(k, 1);
		nimln(100, "algorithm.nim");
		i = addInt(i, 1);
	} LA22: ;
	BeforeRet: ;	popFrame();
}
N_NIMCALL(void, sort_320717)(tsym172689** a, NI aLen0, TY320724 cmp, NU8 order) {
	NI n;
	tsymseq172661* b;
	NI TMP4973;
	NI s;
	nimfr("sort", "algorithm.nim")
	nimln(123, "algorithm.nim");
	nimln(123, "algorithm.nim");
	n = aLen0;
	b = 0;
	nimln(125, "algorithm.nim");
	nimln(125, "algorithm.nim");
	TMP4973 = divInt(n, 2);
	b = (tsymseq172661*) newSeq((&NTI172661), (NI32)(TMP4973));
	nimln(126, "algorithm.nim");
	s = 1;
	nimln(127, "algorithm.nim");
	while (1) {
		NI m;
		NI TMP4974;
		NI TMP4975;
		NI TMP4984;
		nimln(127, "algorithm.nim");
		if (!(s < n)) goto LA1;
		nimln(128, "algorithm.nim");
		nimln(128, "algorithm.nim");
		nimln(128, "algorithm.nim");
		TMP4974 = subInt(n, 1);
		TMP4975 = subInt((NI32)(TMP4974), s);
		m = (NI32)(TMP4975);
		nimln(129, "algorithm.nim");
		while (1) {
			NI TMP4980;
			NI TMP4981;
			NI TMP4982;
			NI TMP4983;
			nimln(702, "system.nim");
			if (!(0 <= m)) goto LA2;
			nimln(130, "algorithm.nim");
			nimln(130, "algorithm.nim");
			nimln(130, "algorithm.nim");
			nimln(130, "algorithm.nim");
			TMP4980 = subInt(m, s);
			TMP4981 = addInt((NI32)(TMP4980), 1);
			nimln(130, "algorithm.nim");
			TMP4982 = addInt(m, s);
			merge_320761(a, aLen0, b->data, b->Sup.len, (((NI32)(TMP4981) >= 0) ? (NI32)(TMP4981) : 0), m, (NI32)(TMP4982), cmp, order);			nimln(131, "algorithm.nim");
			nimln(131, "algorithm.nim");
			TMP4983 = mulInt(s, 2);
			m = subInt(m, (NI32)(TMP4983));
		} LA2: ;
		nimln(132, "algorithm.nim");
		nimln(132, "algorithm.nim");
		TMP4984 = mulInt(s, 2);
		s = (NI32)(TMP4984);
	} LA1: ;
	popFrame();
}
N_NIMCALL(void, merge_323468)(tentry322943* a, NI aLen0, tentry322943* b, NI bLen0, NI lo, NI m, NI hi, TY323431 cmp, NU8 order) {
	NI j;
	NI bb;
	NI i;
	NI k;
	nimfr("merge", "algorithm.nim")
	nimln(71, "algorithm.nim");
	{
		NI TMP4995;
		NI LOC3;
		NI LOC4;
		nimln(71, "algorithm.nim");
		nimln(71, "algorithm.nim");
		nimln(71, "algorithm.nim");
		if ((NU)(m) >= (NU)(aLen0)) raiseIndexError();
		nimln(71, "algorithm.nim");
		TMP4995 = addInt(m, 1);
		if ((NU)((NI32)(TMP4995)) >= (NU)(aLen0)) raiseIndexError();
		LOC3 = 0;
		LOC3 = cmp.ClEnv? cmp.ClPrc(a[m], a[(NI32)(TMP4995)], cmp.ClEnv) : ((TMP4996)(cmp.ClPrc))(a[m], a[(NI32)(TMP4995)]);
		LOC4 = 0;
		LOC4 = HEX2A_318040(LOC3, order);
		if (!(LOC4 <= 0)) goto LA5;
		nimln(71, "algorithm.nim");
		goto BeforeRet;
	}	LA5: ;
	nimln(72, "algorithm.nim");
	j = lo;
	nimln(74, "algorithm.nim");
	{
		nimln(74, "algorithm.nim");
		nimln(74, "algorithm.nim");
		if (!!((j <= m))) goto LA9;
		nimln(74, "algorithm.nim");
		hiddenraiseassert_76017(((NimStringDesc*) &TMP4978));	}	LA9: ;
	nimln(76, "algorithm.nim");
	bb = 0;
	nimln(77, "algorithm.nim");
	while (1) {
		nimln(77, "algorithm.nim");
		if (!(j <= m)) goto LA11;
		nimln(64, "algorithm.nim");
		if ((NU)(bb) >= (NU)(bLen0)) raiseIndexError();
		if ((NU)(j) >= (NU)(aLen0)) raiseIndexError();
		b[bb].Pos = a[j].Pos;
		unsureAsgnRef((void**) &b[bb].Sym, a[j].Sym);
		nimln(79, "algorithm.nim");
		bb = addInt(bb, 1);
		nimln(80, "algorithm.nim");
		j = addInt(j, 1);
	} LA11: ;
	nimln(84, "algorithm.nim");
	i = 0;
	nimln(85, "algorithm.nim");
	k = lo;
	nimln(87, "algorithm.nim");
	while (1) {
		NIM_BOOL LOC13;
		nimln(87, "algorithm.nim");
		LOC13 = 0;
		nimln(87, "algorithm.nim");
		LOC13 = (k < j);
		if (!(LOC13)) goto LA14;
		nimln(87, "algorithm.nim");
		LOC13 = (j <= hi);
		LA14: ;
		if (!LOC13) goto LA12;
		nimln(88, "algorithm.nim");
		{
			NI LOC17;
			NI LOC18;
			nimln(88, "algorithm.nim");
			nimln(88, "algorithm.nim");
			nimln(88, "algorithm.nim");
			if ((NU)(i) >= (NU)(bLen0)) raiseIndexError();
			if ((NU)(j) >= (NU)(aLen0)) raiseIndexError();
			LOC17 = 0;
			LOC17 = cmp.ClEnv? cmp.ClPrc(b[i], a[j], cmp.ClEnv) : ((TMP4997)(cmp.ClPrc))(b[i], a[j]);
			LOC18 = 0;
			LOC18 = HEX2A_318040(LOC17, order);
			if (!(LOC18 <= 0)) goto LA19;
			nimln(64, "algorithm.nim");
			if ((NU)(k) >= (NU)(aLen0)) raiseIndexError();
			if ((NU)(i) >= (NU)(bLen0)) raiseIndexError();
			a[k].Pos = b[i].Pos;
			unsureAsgnRef((void**) &a[k].Sym, b[i].Sym);
			nimln(90, "algorithm.nim");
			i = addInt(i, 1);
		}		goto LA15;
		LA19: ;
		{
			nimln(64, "algorithm.nim");
			if ((NU)(k) >= (NU)(aLen0)) raiseIndexError();
			if ((NU)(j) >= (NU)(aLen0)) raiseIndexError();
			a[k].Pos = a[j].Pos;
			unsureAsgnRef((void**) &a[k].Sym, a[j].Sym);
			nimln(93, "algorithm.nim");
			j = addInt(j, 1);
		}		LA15: ;
		nimln(94, "algorithm.nim");
		k = addInt(k, 1);
	} LA12: ;
	nimln(97, "algorithm.nim");
	while (1) {
		nimln(97, "algorithm.nim");
		if (!(k < j)) goto LA22;
		nimln(64, "algorithm.nim");
		if ((NU)(k) >= (NU)(aLen0)) raiseIndexError();
		if ((NU)(i) >= (NU)(bLen0)) raiseIndexError();
		a[k].Pos = b[i].Pos;
		unsureAsgnRef((void**) &a[k].Sym, b[i].Sym);
		nimln(99, "algorithm.nim");
		k = addInt(k, 1);
		nimln(100, "algorithm.nim");
		i = addInt(i, 1);
	} LA22: ;
	BeforeRet: ;	popFrame();
}
N_NIMCALL(void, sort_323424)(tentry322943* a, NI aLen0, TY323431 cmp, NU8 order) {
	NI n;
	TY322950* b;
	NI TMP4992;
	NI s;
	nimfr("sort", "algorithm.nim")
	nimln(123, "algorithm.nim");
	nimln(123, "algorithm.nim");
	n = aLen0;
	b = 0;
	nimln(125, "algorithm.nim");
	nimln(125, "algorithm.nim");
	TMP4992 = divInt(n, 2);
	b = (TY322950*) newSeq((&NTI322950), (NI32)(TMP4992));
	nimln(126, "algorithm.nim");
	s = 1;
	nimln(127, "algorithm.nim");
	while (1) {
		NI m;
		NI TMP4993;
		NI TMP4994;
		NI TMP5002;
		nimln(127, "algorithm.nim");
		if (!(s < n)) goto LA1;
		nimln(128, "algorithm.nim");
		nimln(128, "algorithm.nim");
		nimln(128, "algorithm.nim");
		TMP4993 = subInt(n, 1);
		TMP4994 = subInt((NI32)(TMP4993), s);
		m = (NI32)(TMP4994);
		nimln(129, "algorithm.nim");
		while (1) {
			NI TMP4998;
			NI TMP4999;
			NI TMP5000;
			NI TMP5001;
			nimln(702, "system.nim");
			if (!(0 <= m)) goto LA2;
			nimln(130, "algorithm.nim");
			nimln(130, "algorithm.nim");
			nimln(130, "algorithm.nim");
			nimln(130, "algorithm.nim");
			TMP4998 = subInt(m, s);
			TMP4999 = addInt((NI32)(TMP4998), 1);
			nimln(130, "algorithm.nim");
			TMP5000 = addInt(m, s);
			merge_323468(a, aLen0, b->data, b->Sup.len, (((NI32)(TMP4999) >= 0) ? (NI32)(TMP4999) : 0), m, (NI32)(TMP5000), cmp, order);			nimln(131, "algorithm.nim");
			nimln(131, "algorithm.nim");
			TMP5001 = mulInt(s, 2);
			m = subInt(m, (NI32)(TMP5001));
		} LA2: ;
		nimln(132, "algorithm.nim");
		nimln(132, "algorithm.nim");
		TMP5002 = mulInt(s, 2);
		s = (NI32)(TMP5002);
	} LA1: ;
	popFrame();
}N_NOINLINE(void, purealgorithmInit)(void) {
	nimfr("algorithm", "algorithm.nim")
	popFrame();
}

N_NOINLINE(void, purealgorithmDatInit)(void) {
}

