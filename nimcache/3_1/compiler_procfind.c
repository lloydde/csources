/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct tnode171659 tnode171659;
typedef struct ttype171693 ttype171693;
typedef struct tlineinfo136509 tlineinfo136509;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tsym171689 tsym171689;
typedef struct tident140017 tident140017;
typedef struct tnodeseq171653 tnodeseq171653;
typedef struct tidobj140011 tidobj140011;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq171691 ttypeseq171691;
typedef struct tscope171683 tscope171683;
typedef struct TY171786 TY171786;
typedef struct tinstantiation171679 tinstantiation171679;
typedef struct tstrtable171663 tstrtable171663;
typedef struct tsymseq171661 tsymseq171661;
typedef struct tloc171673 tloc171673;
typedef struct trope121007 trope121007;
typedef struct tlib171677 tlib171677;
typedef struct tcontext262019 tcontext262019;
typedef struct tidentiter178106 tidentiter178106;
typedef struct TY171775 TY171775;
typedef struct tlistentry109014 tlistentry109014;
typedef struct tpasscontext222003 tpasscontext222003;
typedef struct tproccon262009 tproccon262009;
typedef struct tintset168043 tintset168043;
typedef struct ttrunk168039 ttrunk168039;
typedef struct ttrunkseq168041 ttrunkseq168041;
typedef struct tlinkedlist109020 tlinkedlist109020;
typedef struct tidtable171705 tidtable171705;
typedef struct tidpairseq171703 tidpairseq171703;
typedef struct tidpair171701 tidpair171701;
typedef struct tevalcontext252212 tevalcontext252212;
typedef struct TY262110 TY262110;
typedef struct tinstantiationpair262011 tinstantiationpair262011;
typedef struct tstackframe252204 tstackframe252204;
typedef struct tidnodetable171711 tidnodetable171711;
typedef struct tidnodepairseq171709 tidnodepairseq171709;
typedef struct tidnodepair171707 tidnodepair171707;
struct tlineinfo136509 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
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
typedef NU8 TY171865[20];
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
struct tidobj140011 {
  TNimObject Sup;
NI Id;
};
struct tstrtable171663 {
NI Counter;
tsymseq171661* Data;
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
struct tident140017 {
  tidobj140011 Sup;
NimStringDesc* S;
tident140017* Next;
NI H;
};
struct tidentiter178106 {
NI H;
tident140017* Name;
};
struct tscope171683 {
NI Depthlevel;
tstrtable171663 Symbols;
tnodeseq171653* Usingsyms;
tscope171683* Parent;
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
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tinstantiation171679 {
tsym171689* Sym;
ttypeseq171691* Concretetypes;
TY171775* Usedby;
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
struct tpasscontext222003 {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
struct tintset168043 {
NI Counter;
NI Max;
ttrunk168039* Head;
ttrunkseq168041* Data;
};
struct tlinkedlist109020 {
tlistentry109014* Head;
tlistentry109014* Tail;
NI Counter;
};
struct tidpair171701 {
tidobj140011* Key;
TNimObject* Val;
};
struct tidtable171705 {
NI Counter;
tidpairseq171703* Data;
};
typedef N_NIMCALL_PTR(tnode171659*, TY262058) (tcontext262019* c, tnode171659* n);
typedef N_NIMCALL_PTR(tnode171659*, TY262063) (tcontext262019* c, tnode171659* n, NU8 flags);
typedef N_NIMCALL_PTR(tnode171659*, TY262071) (tcontext262019* c, tnode171659* n, NU8 flags, NIM_BOOL buffererrors);
typedef N_NIMCALL_PTR(tnode171659*, TY262080) (tcontext262019* c, tnode171659* n, NU8 flags);
typedef N_NIMCALL_PTR(tnode171659*, TY262088) (tcontext262019* c, tnode171659* n);
typedef N_NIMCALL_PTR(tnode171659*, TY262093) (tcontext262019* c, tnode171659* n, tnode171659* norig, NU32 filter);
typedef N_NIMCALL_PTR(ttype171693*, TY262100) (tcontext262019* c, tnode171659* n, ttype171693* prev);
struct tinstantiationpair262011 {
tsym171689* Genericsym;
tinstantiation171679* Inst;
};
struct tcontext262019 {
  tpasscontext222003 Sup;
tsym171689* Module;
tscope171683* Currentscope;
tscope171683* Importtable;
tscope171683* Toplevelscope;
tproccon262009* P;
tsym171689* Friendmodule;
NI Instcounter;
tsymseq171661* Threadentries;
tintset168043 Ambiguoussymbols;
NI Intypeclass;
NI Ingenericcontext;
NI Inunrolledcontext;
NI Incompilescontext;
NI Ingenericinst;
tsymseq171661* Converters;
tsymseq171661* Patterns;
tlinkedlist109020 Optionstack;
tidtable171705 Symmapping;
tlinkedlist109020 Libs;
TY262058 Semconstexpr;
TY262063 Semexpr;
TY262071 Semtryexpr;
TY262080 Semoperand;
TY262088 Semconstboolexpr;
TY262093 Semoverloadedcall;
TY262100 Semtypenode;
tintset168043 Includedfiles;
tstrtable171663 Userpragmas;
tevalcontext252212* Evalcontext;
tintset168043 Unknownidents;
TY262110* Generics;
NI Lastgenericidx;
NI Hloloopdetector;
};
struct tproccon262009 {
tsym171689* Owner;
tsym171689* Resultsym;
NI Nestedloopcounter;
NI Nestedblockcounter;
NI Intrystmt;
tproccon262009* Next;
};
typedef NI TY21418[16];
struct ttrunk168039 {
ttrunk168039* Next;
NI Key;
TY21418 Bits;
};
struct tidnodepair171707 {
tidobj140011* Key;
tnode171659* Val;
};
struct tidnodetable171711 {
NI Counter;
tidnodepairseq171709* Data;
};
typedef struct {
N_NIMCALL_PTR(tnode171659*, ClPrc) (tnode171659* n, void* ClEnv);
void* ClEnv;
} TY252237;
struct tevalcontext252212 {
  tpasscontext222003 Sup;
tsym171689* Module;
tstackframe252204* Tos;
tnode171659* Lastexception;
tnode171659* Callsite;
NU8 Mode;
NU8 Features;
tidnodetable171711 Globals;
TY252237 Gettype;
TY252237 Handleisoperator;
};
struct tstackframe252204 {
tsym171689* Prc;
tnodeseq171653* Slots;
tnode171659* Call;
tstackframe252204* Next;
};
struct tnodeseq171653 {
  TGenericSeq Sup;
  tnode171659* data[SEQ_DECL_SIZE];
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
struct TY171775 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct ttrunkseq168041 {
  TGenericSeq Sup;
  ttrunk168039* data[SEQ_DECL_SIZE];
};
struct tidpairseq171703 {
  TGenericSeq Sup;
  tidpair171701 data[SEQ_DECL_SIZE];
};
struct TY262110 {
  TGenericSeq Sup;
  tinstantiationpair262011 data[SEQ_DECL_SIZE];
};
struct tidnodepairseq171709 {
  TGenericSeq Sup;
  tidnodepair171707 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NIM_BOOL, equalgenericparams_269010)(tnode171659* proca, tnode171659* procb);
static N_INLINE(NI, sonslen_172022)(tnode171659* n);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(void, internalerror_138369)(tlineinfo136509 info, NimStringDesc* errmsg);
N_NIMCALL(NIM_BOOL, sametypeornil_204663)(ttype171693* a, ttype171693* b, NU8 flags);
N_NIMCALL(NIM_BOOL, exprstructuralequivalent_198122)(tnode171659* a, tnode171659* b);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(tsym171689*, searchforproc_269141)(tcontext262019* c, tscope171683* scope, tsym171689* fn);
N_NIMCALL(tsym171689*, initidentiter_178110)(tidentiter178106* ti, tstrtable171663 tab, tident140017* s);
N_NIMCALL(NIM_BOOL, isgenericroutine_176791)(tsym171689* s);
N_NIMCALL(tsym171689*, nextidentiter_178117)(tidentiter178106* ti, tstrtable171663 tab);
N_NIMCALL(NU8, equalparams_200066)(tnode171659* a, tnode171659* b);
N_NIMCALL(void, localerror_138349)(tlineinfo136509 info, NU16 msg, NimStringDesc* arg);
static NIM_CONST TY171865 TMP3692 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3693, "sons", 4);
STRING_LITERAL(TMP3695, "equalGenericParams", 18);
static NIM_CONST TY171865 TMP3696 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3697, "sym", 3);
extern TFrame* frameptr_12037;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12037;
	frameptr_12037 = s;
}
static N_INLINE(void, popFrame)(void) {
	frameptr_12037 = (*frameptr_12037).prev;
}
static N_INLINE(NI, sonslen_172022)(tnode171659* n) {
	NI result;
	nimfr("sonsLen", "ast.nim")
	result = 0;
	nimln(1209, "ast.nim");
	{
		nimln(1209, "ast.nim");
		if (((TMP3692[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3693));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(1209, "ast.nim");
		result = 0;
	}	goto LA1;
	LA3: ;
	{
		nimln(1210, "ast.nim");
		nimln(1210, "ast.nim");
		if (((TMP3692[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3693));
		result = (*n).kindU.S6.Sons->Sup.len;
	}	LA1: ;
	popFrame();
	return result;
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
N_NIMCALL(NIM_BOOL, equalgenericparams_269010)(tnode171659* proca, tnode171659* procb) {
	NIM_BOOL result;
	NI i_269024;
	NI HEX3Atmp_269134;
	NI LOC7;
	NI TMP3694;
	NI res_269136;
	nimfr("equalGenericParams", "procfind.nim")
	result = 0;
	nimln(17, "procfind.nim");
	{
		NI LOC3;
		NI LOC4;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		nimln(17, "procfind.nim");
		LOC3 = 0;
		LOC3 = sonslen_172022(proca);
		nimln(17, "procfind.nim");
		LOC4 = 0;
		LOC4 = sonslen_172022(procb);
		if (!!((LOC3 == LOC4))) goto LA5;
		nimln(17, "procfind.nim");
		goto BeforeRet;
	}	LA5: ;
	i_269024 = 0;
	HEX3Atmp_269134 = 0;
	nimln(18, "procfind.nim");
	nimln(18, "procfind.nim");
	nimln(18, "procfind.nim");
	LOC7 = 0;
	LOC7 = sonslen_172022(proca);
	TMP3694 = subInt(LOC7, 1);
	HEX3Atmp_269134 = (NI32)(TMP3694);
	nimln(1301, "system.nim");
	res_269136 = 0;
	nimln(1302, "system.nim");
	while (1) {
		tsym171689* a;
		tsym171689* b;
		nimln(1302, "system.nim");
		if (!(res_269136 <= HEX3Atmp_269134)) goto LA8;
		nimln(1301, "system.nim");
		i_269024 = res_269136;
		nimln(19, "procfind.nim");
		{
			nimln(698, "system.nim");
			nimln(698, "system.nim");
			if (((TMP3692[(*proca).Kind/8] &(1<<((*proca).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3693));
			if ((NU)(i_269024) >= (NU)((*proca).kindU.S6.Sons->Sup.len)) raiseIndexError();
			if (!!(((*(*proca).kindU.S6.Sons->data[i_269024]).Kind == ((NU8) 3)))) goto LA11;
			nimln(20, "procfind.nim");
			internalerror_138369((*proca).Info, ((NimStringDesc*) &TMP3695));			nimln(21, "procfind.nim");
			goto BeforeRet;
		}		LA11: ;
		nimln(22, "procfind.nim");
		{
			nimln(698, "system.nim");
			nimln(698, "system.nim");
			if (((TMP3692[(*procb).Kind/8] &(1<<((*procb).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3693));
			if ((NU)(i_269024) >= (NU)((*procb).kindU.S6.Sons->Sup.len)) raiseIndexError();
			if (!!(((*(*procb).kindU.S6.Sons->data[i_269024]).Kind == ((NU8) 3)))) goto LA15;
			nimln(23, "procfind.nim");
			internalerror_138369((*procb).Info, ((NimStringDesc*) &TMP3695));			nimln(24, "procfind.nim");
			goto BeforeRet;
		}		LA15: ;
		nimln(25, "procfind.nim");
		if (((TMP3692[(*proca).Kind/8] &(1<<((*proca).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3693));
		if ((NU)(i_269024) >= (NU)((*proca).kindU.S6.Sons->Sup.len)) raiseIndexError();
		if (!(((TMP3696[(*(*proca).kindU.S6.Sons->data[i_269024]).Kind/8] &(1<<((*(*proca).kindU.S6.Sons->data[i_269024]).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3697));
		a = (*(*proca).kindU.S6.Sons->data[i_269024]).kindU.S4.Sym;
		nimln(26, "procfind.nim");
		if (((TMP3692[(*procb).Kind/8] &(1<<((*procb).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3693));
		if ((NU)(i_269024) >= (NU)((*procb).kindU.S6.Sons->Sup.len)) raiseIndexError();
		if (!(((TMP3696[(*(*procb).kindU.S6.Sons->data[i_269024]).Kind/8] &(1<<((*(*procb).kindU.S6.Sons->data[i_269024]).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3697));
		b = (*(*procb).kindU.S6.Sons->data[i_269024]).kindU.S4.Sym;
		nimln(27, "procfind.nim");
		{
			NIM_BOOL LOC19;
			NIM_BOOL LOC21;
			nimln(27, "procfind.nim");
			LOC19 = 0;
			nimln(698, "system.nim");
			nimln(698, "system.nim");
			LOC19 = !(((*(*a).Name).Sup.Id == (*(*b).Name).Sup.Id));
			if (LOC19) goto LA20;
			nimln(28, "procfind.nim");
			nimln(28, "procfind.nim");
			LOC21 = 0;
			LOC21 = sametypeornil_204663((*a).Typ, (*b).Typ, 2);
			LOC19 = !(LOC21);
			LA20: ;
			if (!LOC19) goto LA22;
			nimln(28, "procfind.nim");
			goto BeforeRet;
		}		LA22: ;
		nimln(29, "procfind.nim");
		{
			NIM_BOOL LOC26;
			nimln(29, "procfind.nim");
			LOC26 = 0;
			nimln(698, "system.nim");
			nimln(698, "system.nim");
			LOC26 = !(((*a).Ast == NIM_NIL));
			if (!(LOC26)) goto LA27;
			nimln(698, "system.nim");
			nimln(698, "system.nim");
			LOC26 = !(((*b).Ast == NIM_NIL));
			LA27: ;
			if (!LOC26) goto LA28;
			nimln(30, "procfind.nim");
			{
				NIM_BOOL LOC32;
				nimln(30, "procfind.nim");
				nimln(30, "procfind.nim");
				LOC32 = 0;
				LOC32 = exprstructuralequivalent_198122((*a).Ast, (*b).Ast);
				if (!!(LOC32)) goto LA33;
				nimln(30, "procfind.nim");
				goto BeforeRet;
			}			LA33: ;
		}		LA28: ;
		nimln(1304, "system.nim");
		res_269136 = addInt(res_269136, 1);
	} LA8: ;
	nimln(31, "procfind.nim");
	result = NIM_TRUE;
	BeforeRet: ;	popFrame();
	return result;
}
N_NIMCALL(tsym171689*, searchforproc_269141)(tcontext262019* c, tscope171683* scope, tsym171689* fn) {
	tsym171689* result;
	tidentiter178106 it;
	nimfr("SearchForProc", "procfind.nim")
	result = 0;
	memset((void*)&it, 0, sizeof(it));
	nimln(38, "procfind.nim");
	result = initidentiter_178110(&it, (*scope).Symbols, (*fn).Name);
	nimln(39, "procfind.nim");
	{
		NIM_BOOL LOC3;
		nimln(39, "procfind.nim");
		LOC3 = 0;
		LOC3 = isgenericroutine_176791(fn);
		if (!LOC3) goto LA4;
		nimln(43, "procfind.nim");
		while (1) {
			nimln(698, "system.nim");
			nimln(698, "system.nim");
			if (!!((result == NIM_NIL))) goto LA6;
			nimln(44, "procfind.nim");
			{
				NIM_BOOL LOC9;
				tnode171659* genr;
				tnode171659* genf;
				nimln(44, "procfind.nim");
				LOC9 = 0;
				nimln(44, "procfind.nim");
				LOC9 = ((*result).Kind == (*fn).Kind);
				if (!(LOC9)) goto LA10;
				nimln(44, "procfind.nim");
				LOC9 = isgenericroutine_176791(result);
				LA10: ;
				if (!LOC9) goto LA11;
				nimln(45, "procfind.nim");
				if (((TMP3692[(*(*result).Ast).Kind/8] &(1<<((*(*result).Ast).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3693));
				if ((NU)(2) >= (NU)((*(*result).Ast).kindU.S6.Sons->Sup.len)) raiseIndexError();
				genr = (*(*result).Ast).kindU.S6.Sons->data[2];
				nimln(46, "procfind.nim");
				if (((TMP3692[(*(*fn).Ast).Kind/8] &(1<<((*(*fn).Ast).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3693));
				if ((NU)(2) >= (NU)((*(*fn).Ast).kindU.S6.Sons->Sup.len)) raiseIndexError();
				genf = (*(*fn).Ast).kindU.S6.Sons->data[2];
				nimln(47, "procfind.nim");
				{
					NIM_BOOL LOC15;
					NIM_BOOL LOC16;
					nimln(49, "procfind.nim");
					LOC15 = 0;
					nimln(47, "procfind.nim");
					LOC16 = 0;
					nimln(47, "procfind.nim");
					LOC16 = exprstructuralequivalent_198122(genr, genf);
					if (!(LOC16)) goto LA17;
					nimln(48, "procfind.nim");
					if (((TMP3692[(*(*result).Ast).Kind/8] &(1<<((*(*result).Ast).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3693));
					if ((NU)(3) >= (NU)((*(*result).Ast).kindU.S6.Sons->Sup.len)) raiseIndexError();
					if (((TMP3692[(*(*fn).Ast).Kind/8] &(1<<((*(*fn).Ast).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3693));
					if ((NU)(3) >= (NU)((*(*fn).Ast).kindU.S6.Sons->Sup.len)) raiseIndexError();
					LOC16 = exprstructuralequivalent_198122((*(*result).Ast).kindU.S6.Sons->data[3], (*(*fn).Ast).kindU.S6.Sons->data[3]);
					LA17: ;
					LOC15 = LOC16;
					if (!(LOC15)) goto LA18;
					nimln(50, "procfind.nim");
					LOC15 = equalgenericparams_269010(genr, genf);
					LA18: ;
					if (!LOC15) goto LA19;
					nimln(51, "procfind.nim");
					goto BeforeRet;
				}				LA19: ;
			}			LA11: ;
			nimln(52, "procfind.nim");
			result = nextidentiter_178117(&it, (*scope).Symbols);
		} LA6: ;
	}	goto LA1;
	LA4: ;
	{
		nimln(54, "procfind.nim");
		while (1) {
			nimln(698, "system.nim");
			nimln(698, "system.nim");
			if (!!((result == NIM_NIL))) goto LA22;
			nimln(55, "procfind.nim");
			{
				NIM_BOOL LOC25;
				NIM_BOOL LOC27;
				NU8 LOC30;
				nimln(55, "procfind.nim");
				LOC25 = 0;
				nimln(55, "procfind.nim");
				LOC25 = ((*result).Kind == (*fn).Kind);
				if (!(LOC25)) goto LA26;
				nimln(55, "procfind.nim");
				nimln(55, "procfind.nim");
				LOC27 = 0;
				LOC27 = isgenericroutine_176791(result);
				LOC25 = !(LOC27);
				LA26: ;
				if (!LOC25) goto LA28;
				nimln(56, "procfind.nim");
				nimln(56, "procfind.nim");
				LOC30 = 0;
				LOC30 = equalparams_200066((*(*result).Typ).N, (*(*fn).Typ).N);
				switch (LOC30) {
				case ((NU8) 1):
				{
					nimln(58, "procfind.nim");
					goto BeforeRet;
				}				break;
				case ((NU8) 2):
				{
					nimln(60, "procfind.nim");
					localerror_138349((*fn).Info, ((NU16) 66), (*(*fn).Name).S);					nimln(61, "procfind.nim");
					goto BeforeRet;
				}				break;
				case ((NU8) 0):
				{
				}				break;
				}
			}			LA28: ;
			nimln(64, "procfind.nim");
			result = nextidentiter_178117(&it, (*scope).Symbols);
		} LA22: ;
	}	LA1: ;
	BeforeRet: ;	popFrame();
	return result;
}N_NOINLINE(void, compilerprocfindInit)(void) {
	nimfr("procfind", "procfind.nim")
	popFrame();
}

N_NOINLINE(void, compilerprocfindDatInit)(void) {
}

