/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct tpass222015 tpass222015;
typedef struct tpasscontext222003 tpasscontext222003;
typedef struct tsym171689 tsym171689;
typedef struct trodreader211023 trodreader211023;
typedef struct tnode171659 tnode171659;
typedef struct tidobj140011 tidobj140011;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq171691 ttypeseq171691;
typedef struct ttype171693 ttype171693;
typedef struct TGenericSeq TGenericSeq;
typedef struct tscope171683 tscope171683;
typedef struct TY171786 TY171786;
typedef struct tinstantiation171679 tinstantiation171679;
typedef struct tstrtable171663 tstrtable171663;
typedef struct tsymseq171661 tsymseq171661;
typedef struct tident140017 tident140017;
typedef struct tlineinfo136509 tlineinfo136509;
typedef struct tloc171673 tloc171673;
typedef struct trope121007 trope121007;
typedef struct tlib171677 tlib171677;
typedef struct NimStringDesc NimStringDesc;
typedef struct tnodeseq171653 tnodeseq171653;
typedef struct tpassdata222017 tpassdata222017;
typedef struct TY9552 TY9552;
typedef struct tllstream161204 tllstream161204;
typedef struct tparsers197026 tparsers197026;
typedef struct tparser185203 tparser185203;
typedef struct tlexer164166 tlexer164166;
typedef struct tbaselexer162018 tbaselexer162018;
typedef struct ttoken164164 ttoken164164;
typedef struct TY171775 TY171775;
typedef struct tindex211021 tindex211021;
typedef struct tiitable178211 tiitable178211;
typedef struct tiipairseq178209 tiipairseq178209;
typedef struct tiipair178207 tiipair178207;
typedef struct tidtable171705 tidtable171705;
typedef struct tidpairseq171703 tidpairseq171703;
typedef struct tidpair171701 tidpair171701;
typedef struct tmemfile209204 tmemfile209204;
typedef struct tlistentry109014 tlistentry109014;
typedef N_NIMCALL_PTR(tpasscontext222003*, tpassopen222007) (tsym171689* module);
typedef N_NIMCALL_PTR(tpasscontext222003*, tpassopencached222009) (tsym171689* module, trodreader211023* rd);
typedef N_NIMCALL_PTR(tnode171659*, tpassprocess222013) (tpasscontext222003* p, tnode171659* toplevelstmt);
typedef N_NIMCALL_PTR(tnode171659*, tpassclose222011) (tpasscontext222003* p, tnode171659* n);
struct tpass222015 {
tpassopen222007 Field0;
tpassopencached222009 Field1;
tpassprocess222013 Field2;
tpassclose222011 Field3;
};
typedef N_NIMCALL_PTR(tsym171689*, TY222056) (tsym171689* m, NI32 fileidx);
typedef N_NIMCALL_PTR(tnode171659*, TY222061) (tsym171689* m, NI32 fileidx);
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
struct TGenericSeq {
NI len;
NI reserved;
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
typedef tpass222015 TY222158[10];
struct tpassdata222017 {
tnode171659* Field0;
tnode171659* Field1;
};
struct tpasscontext222003 {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
struct tbaselexer162018 {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
tllstream161204* Stream;
NI Linenumber;
NI Sentinel;
NI Linestart;
};
struct tlexer164166 {
  tbaselexer162018 Sup;
NI32 Fileidx;
NI Indentahead;
};
struct ttoken164164 {
NU8 Toktype;
NI Indent;
tident140017* Ident;
NI64 Inumber;
NF Fnumber;
NU8 Base;
NimStringDesc* Literal;
NI Line;
NI Col;
};
struct tparser185203 {
NI Currind;
NIM_BOOL Firsttok;
tlexer164166 Lex;
ttoken164164 Tok;
};
struct tparsers197026 {
NU8 Skin;
tparser185203 Parser;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef tpasscontext222003* tpasscontextarray222155[10];
struct tllstream161204 {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
};
struct tiipair178207 {
NI Key;
NI Val;
};
struct tiitable178211 {
NI Counter;
tiipairseq178209* Data;
};
struct tindex211021 {
NI Lastidxkey;
NI Lastidxval;
tiitable178211 Tab;
NimStringDesc* R;
NI Offset;
};
struct tidpair171701 {
tidobj140011* Key;
TNimObject* Val;
};
struct tidtable171705 {
NI Counter;
tidpairseq171703* Data;
};
struct tmemfile209204 {
void* Mem;
NI Size;
int Handle;
};
struct trodreader211023 {
  TNimObject Sup;
NI Pos;
NCSTRING S;
NU32 Options;
NU8 Reason;
TY171775* Moddeps;
TY171775* Files;
NI Dataidx;
NI Convertersidx;
NI Initidx;
NI Interfidx;
NI Compilerprocsidx;
NI Methodsidx;
NimStringDesc* Filename;
tindex211021 Index;
tindex211021 Imports;
NI Readerindex;
NI Line;
NI Moduleid;
tidtable171705 Syms;
tmemfile209204 Memfile;
tsymseq171661* Methods;
NimStringDesc* Origfile;
NIM_BOOL Inviewmode;
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
struct TY9552 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct TY171775 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct tiipairseq178209 {
  TGenericSeq Sup;
  tiipair178207 data[SEQ_DECL_SIZE];
};
struct tidpairseq171703 {
  TGenericSeq Sup;
  tidpair171701 data[SEQ_DECL_SIZE];
};
N_NIMCALL(tpass222015, makepass_222040)(tpassopen222007 open, tpassopencached222009 opencached, tpassprocess222013 process, tpassclose222011 close);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NIM_BOOL, skipcodegen_222074)(tnode171659* n);
N_NIMCALL(NIM_BOOL, astneeded_222081)(tsym171689* s);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NIM_BOOL, needsglobalanalysis_221604)(void);
N_NIMCALL(void, clearpasses_222165)(void);
N_NIMCALL(void, registerpass_222169)(tpass222015* p);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(void, carrypass_222184)(tpass222015* p, tsym171689* module, tpassdata222017 m, tpassdata222017* Result);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(void, carrypasses_222202)(tnode171659* nodes, tsym171689* module, tpass222015* passes, NI passesLen0);
N_NIMCALL(void, openpasses_222243)(tpasscontext222003** a, tsym171689* module);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NIMCALL(void, openpassescached_222271)(tpasscontext222003** a, tsym171689* module, trodreader211023* rd);
N_NIMCALL(void, closepasses_222312)(tpasscontext222003** a);
N_NIMCALL(NIM_BOOL, processtoplevelstmt_222341)(tnode171659* n, tpasscontext222003** a);
N_NIMCALL(void, processtoplevelstmtcached_222379)(tnode171659* n, tpasscontext222003** a);
N_NIMCALL(void, closepassescached_222408)(tpasscontext222003** a);
N_NIMCALL(void, processimplicits_222443)(TY9552* implicits, NU8 nodekind, tpasscontext222003** a);
N_NIMCALL(tnode171659*, newnodei_171940)(NU8 kind, tlineinfo136509 info);
N_NIMCALL(tnode171659*, newstrnode_171926)(NU8 kind, NimStringDesc* strval);
N_NIMCALL(void, addson_172048)(tnode171659* father, tnode171659* son);
N_NIMCALL(void, processmodule_222049)(tsym171689* module, tllstream161204* stream, trodreader211023* rd);
N_NIMCALL(void, objectInit)(void* dest, TNimType* typ);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(NimStringDesc*, tofullpath_137708)(NI32 fileidx);
N_NIMCALL(tllstream161204*, llstreamopen_161227)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(void, rawmessage_138191)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, openparsers_197034)(tparsers197026* p, NI32 fileidx, tllstream161204* inputstream);
N_NIMCALL(tnode171659*, parsetoplevelstmt_197051)(tparsers197026* p);
N_NIMCALL(void, closeparsers_197041)(tparsers197026* p);
N_NIMCALL(void, idsynchronizationpoint_170440)(NI idrange);
N_NIMCALL(tnode171659*, loadinitsection_211065)(trodreader211023* r);
static N_INLINE(NI, sonslen_172022)(tnode171659* n);
static NIM_CONST TY171865 TMP3131 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3132, "sons", 4);
extern TFrame* frameptr_12037;
TY222056 gimportmodule_222060;
TY222061 gincludefile_222065;
extern NI gerrorcounter_137071;
TY222158 gpasses_222160;
NI gpasseslen_222161;
extern tlineinfo136509 gcmdlineinfo_137008;
extern TNimType NTI197026; /* TParsers */
extern TY9552* implicitimports_114242;
extern TY9552* implicitincludes_114261;
extern TNimType NTI1009; /* TObject */
TNimType NTI222003; /* TPassContext */
extern TNimType NTI133; /* bool */

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12037;
	frameptr_12037 = s;
}
static N_INLINE(void, popFrame)(void) {
	frameptr_12037 = (*frameptr_12037).prev;
}
N_NIMCALL(tpass222015, makepass_222040)(tpassopen222007 open, tpassopencached222009 opencached, tpassprocess222013 process, tpassclose222011 close) {
	tpass222015 result;
	nimfr("makePass", "passes.nim")
	memset((void*)&result, 0, sizeof(result));
	nimln(44, "passes.nim");
	result.Field0 = open;
	nimln(45, "passes.nim");
	result.Field1 = opencached;
	nimln(46, "passes.nim");
	result.Field3 = close;
	nimln(47, "passes.nim");
	result.Field2 = process;
	popFrame();
	return result;
}
static N_INLINE(NIM_BOOL, skipcodegen_222074)(tnode171659* n) {
	NIM_BOOL result;
	nimfr("skipCodegen", "passes.nim")
	result = 0;
	nimln(66, "passes.nim");
	nimln(706, "system.nim");
	result = (0 < gerrorcounter_137071);
	popFrame();
	return result;
}
N_NIMCALL(NIM_BOOL, astneeded_222081)(tsym171689* s) {
	NIM_BOOL result;
	nimfr("astNeeded", "passes.nim")
	result = 0;
	nimln(73, "passes.nim");
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		NIM_BOOL LOC5;
		nimln(75, "passes.nim");
		LOC3 = 0;
		nimln(74, "passes.nim");
		LOC4 = 0;
		nimln(73, "passes.nim");
		LOC5 = 0;
		nimln(730, "system.nim");
		LOC5 = ((12288 &(1<<(((*s).Kind)&31)))!=0);
		if (!(LOC5)) goto LA6;
		nimln(74, "passes.nim");
		nimln(74, "passes.nim");
		LOC5 = ((8454144 & (*s).Flags) == 0);
		LA6: ;
		LOC4 = LOC5;
		if (!(LOC4)) goto LA7;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		LOC4 = !(((*(*s).Typ).Callconv == ((NU8) 5)));
		LA7: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA8;
		nimln(76, "passes.nim");
		if (((TMP3131[(*(*s).Ast).Kind/8] &(1<<((*(*s).Ast).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3132));
		if ((NU)(2) >= (NU)((*(*s).Ast).kindU.S6.Sons->Sup.len)) raiseIndexError();
		LOC3 = ((*(*(*s).Ast).kindU.S6.Sons->data[2]).Kind == ((NU8) 1));
		LA8: ;
		if (!LOC3) goto LA9;
		nimln(77, "passes.nim");
		result = needsglobalanalysis_221604();
	}	goto LA1;
	LA9: ;
	{
		nimln(79, "passes.nim");
		result = NIM_TRUE;
	}	LA1: ;
	popFrame();
	return result;
}
N_NIMCALL(void, clearpasses_222165)(void) {
	nimfr("clearPasses", "passes.nim")
	nimln(92, "passes.nim");
	gpasseslen_222161 = 0;
	popFrame();
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
N_NIMCALL(void, registerpass_222169)(tpass222015* p) {
	nimfr("registerPass", "passes.nim")
	nimln(95, "passes.nim");
	if ((NU)(gpasseslen_222161) > (NU)(9)) raiseIndexError();
	gpasses_222160[(gpasseslen_222161)- 0] = (*p);
	nimln(96, "passes.nim");
	gpasseslen_222161 = addInt(gpasseslen_222161, 1);
	popFrame();
}
N_NIMCALL(void, carrypass_222184)(tpass222015* p, tsym171689* module, tpassdata222017 m, tpassdata222017* Result) {
	tpasscontext222003* c;
	nimfr("carryPass", "passes.nim")
	nimln(99, "passes.nim");
	c = (*p).Field0(module);
	nimln(100, "passes.nim");
	unsureAsgnRef((void**) &(*Result).Field0, (*p).Field2(c, m.Field0));
	nimln(101, "passes.nim");
	nimln(101, "passes.nim");
	{
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!(((*p).Field3 == NIM_NIL))) goto LA3;
		nimln(101, "passes.nim");
		unsureAsgnRef((void**) &(*Result).Field1, (*p).Field3(c, m.Field1));
	}	goto LA1;
	LA3: ;
	{
		unsureAsgnRef((void**) &(*Result).Field1, m.Field1);
	}	LA1: ;
	popFrame();
}
N_NIMCALL(void, carrypasses_222202)(tnode171659* nodes, tsym171689* module, tpass222015* passes, NI passesLen0) {
	tpassdata222017 passdata;
	tpass222015 pass_222236;
	NI i_222239;
	nimfr("carryPasses", "passes.nim")
	memset((void*)&passdata, 0, sizeof(passdata));
	nimln(106, "passes.nim");
	passdata.Field0 = nodes;
	memset((void*)&pass_222236, 0, sizeof(pass_222236));
	nimln(1377, "system.nim");
	i_222239 = 0;
	nimln(1378, "system.nim");
	while (1) {
		tpassdata222017 LOC2;
		nimln(1378, "system.nim");
		nimln(1378, "system.nim");
		if (!(i_222239 < passesLen0)) goto LA1;
		nimln(1379, "system.nim");
		if ((NU)(i_222239) >= (NU)(passesLen0)) raiseIndexError();
		pass_222236 = passes[i_222239];
		nimln(108, "passes.nim");
		memset((void*)&LOC2, 0, sizeof(LOC2));
		carrypass_222184(&pass_222236, module, passdata, &LOC2);		passdata.Field0 = LOC2.Field0;
		passdata.Field1 = LOC2.Field1;
		nimln(1380, "system.nim");
		i_222239 = addInt(i_222239, 1);
	} LA1: ;
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
N_NIMCALL(void, openpasses_222243)(tpasscontext222003** a, tsym171689* module) {
	NI i_222257;
	NI HEX3Atmp_222264;
	NI TMP3133;
	NI res_222266;
	nimfr("openPasses", "passes.nim")
	i_222257 = 0;
	HEX3Atmp_222264 = 0;
	nimln(111, "passes.nim");
	nimln(111, "passes.nim");
	TMP3133 = subInt(gpasseslen_222161, 1);
	HEX3Atmp_222264 = (NI64)(TMP3133);
	nimln(1301, "system.nim");
	res_222266 = 0;
	nimln(1302, "system.nim");
	while (1) {
		nimln(1302, "system.nim");
		if (!(res_222266 <= HEX3Atmp_222264)) goto LA1;
		nimln(1301, "system.nim");
		i_222257 = res_222266;
		nimln(112, "passes.nim");
		{
			nimln(112, "passes.nim");
			nimln(112, "passes.nim");
			if ((NU)(i_222257) > (NU)(9)) raiseIndexError();
			if (!!(gpasses_222160[(i_222257)- 0].Field0 == 0)) goto LA4;
			nimln(113, "passes.nim");
			if ((NU)(i_222257) > (NU)(9)) raiseIndexError();
			if ((NU)(i_222257) > (NU)(9)) raiseIndexError();
			unsureAsgnRef((void**) &a[(i_222257)- 0], gpasses_222160[(i_222257)- 0].Field0(module));
		}		goto LA2;
		LA4: ;
		{
			nimln(114, "passes.nim");
			if ((NU)(i_222257) > (NU)(9)) raiseIndexError();
			unsureAsgnRef((void**) &a[(i_222257)- 0], NIM_NIL);
		}		LA2: ;
		nimln(1304, "system.nim");
		res_222266 = addInt(res_222266, 1);
	} LA1: ;
	popFrame();
}
N_NIMCALL(void, openpassescached_222271)(tpasscontext222003** a, tsym171689* module, trodreader211023* rd) {
	NI i_222286;
	NI HEX3Atmp_222305;
	NI TMP3134;
	NI res_222307;
	nimfr("openPassesCached", "passes.nim")
	i_222286 = 0;
	HEX3Atmp_222305 = 0;
	nimln(117, "passes.nim");
	nimln(117, "passes.nim");
	TMP3134 = subInt(gpasseslen_222161, 1);
	HEX3Atmp_222305 = (NI64)(TMP3134);
	nimln(1301, "system.nim");
	res_222307 = 0;
	nimln(1302, "system.nim");
	while (1) {
		nimln(1302, "system.nim");
		if (!(res_222307 <= HEX3Atmp_222305)) goto LA1;
		nimln(1301, "system.nim");
		i_222286 = res_222307;
		nimln(118, "passes.nim");
		{
			nimln(118, "passes.nim");
			nimln(118, "passes.nim");
			if ((NU)(i_222286) > (NU)(9)) raiseIndexError();
			if (!!(gpasses_222160[(i_222286)- 0].Field1 == 0)) goto LA4;
			nimln(119, "passes.nim");
			if ((NU)(i_222286) > (NU)(9)) raiseIndexError();
			if ((NU)(i_222286) > (NU)(9)) raiseIndexError();
			unsureAsgnRef((void**) &a[(i_222286)- 0], gpasses_222160[(i_222286)- 0].Field1(module, rd));
			nimln(120, "passes.nim");
			{
				nimln(698, "system.nim");
				nimln(698, "system.nim");
				if ((NU)(i_222286) > (NU)(9)) raiseIndexError();
				if (!!((a[(i_222286)- 0] == NIM_NIL))) goto LA8;
				nimln(121, "passes.nim");
				if ((NU)(i_222286) > (NU)(9)) raiseIndexError();
				(*a[(i_222286)- 0]).Fromcache = NIM_TRUE;
			}			LA8: ;
		}		goto LA2;
		LA4: ;
		{
			nimln(123, "passes.nim");
			if ((NU)(i_222286) > (NU)(9)) raiseIndexError();
			unsureAsgnRef((void**) &a[(i_222286)- 0], NIM_NIL);
		}		LA2: ;
		nimln(1304, "system.nim");
		res_222307 = addInt(res_222307, 1);
	} LA1: ;
	popFrame();
}
N_NIMCALL(void, closepasses_222312)(tpasscontext222003** a) {
	tnode171659* m;
	NI i_222326;
	NI HEX3Atmp_222334;
	NI TMP3135;
	NI res_222336;
	nimfr("closePasses", "passes.nim")
	nimln(126, "passes.nim");
	m = NIM_NIL;
	i_222326 = 0;
	HEX3Atmp_222334 = 0;
	nimln(127, "passes.nim");
	nimln(127, "passes.nim");
	TMP3135 = subInt(gpasseslen_222161, 1);
	HEX3Atmp_222334 = (NI64)(TMP3135);
	nimln(1301, "system.nim");
	res_222336 = 0;
	nimln(1302, "system.nim");
	while (1) {
		nimln(1302, "system.nim");
		if (!(res_222336 <= HEX3Atmp_222334)) goto LA1;
		nimln(1301, "system.nim");
		i_222326 = res_222336;
		nimln(128, "passes.nim");
		{
			nimln(128, "passes.nim");
			nimln(128, "passes.nim");
			if ((NU)(i_222326) > (NU)(9)) raiseIndexError();
			if (!!(gpasses_222160[(i_222326)- 0].Field3 == 0)) goto LA4;
			nimln(128, "passes.nim");
			if ((NU)(i_222326) > (NU)(9)) raiseIndexError();
			if ((NU)(i_222326) > (NU)(9)) raiseIndexError();
			m = gpasses_222160[(i_222326)- 0].Field3(a[(i_222326)- 0], m);
		}		LA4: ;
		nimln(129, "passes.nim");
		if ((NU)(i_222326) > (NU)(9)) raiseIndexError();
		unsureAsgnRef((void**) &a[(i_222326)- 0], NIM_NIL);
		nimln(1304, "system.nim");
		res_222336 = addInt(res_222336, 1);
	} LA1: ;
	popFrame();
}
N_NIMCALL(NIM_BOOL, processtoplevelstmt_222341)(tnode171659* n, tpasscontext222003** a) {
	NIM_BOOL result;
	tnode171659* m;
	NI i_222357;
	NI HEX3Atmp_222372;
	NI TMP3136;
	NI res_222374;
	nimfr("processTopLevelStmt", "passes.nim")
	result = 0;
	nimln(133, "passes.nim");
	m = n;
	i_222357 = 0;
	HEX3Atmp_222372 = 0;
	nimln(134, "passes.nim");
	nimln(134, "passes.nim");
	TMP3136 = subInt(gpasseslen_222161, 1);
	HEX3Atmp_222372 = (NI64)(TMP3136);
	nimln(1301, "system.nim");
	res_222374 = 0;
	nimln(1302, "system.nim");
	while (1) {
		nimln(1302, "system.nim");
		if (!(res_222374 <= HEX3Atmp_222372)) goto LA1;
		nimln(1301, "system.nim");
		i_222357 = res_222374;
		nimln(135, "passes.nim");
		{
			nimln(135, "passes.nim");
			nimln(135, "passes.nim");
			if ((NU)(i_222357) > (NU)(9)) raiseIndexError();
			if (!!(gpasses_222160[(i_222357)- 0].Field2 == 0)) goto LA4;
			nimln(136, "passes.nim");
			if ((NU)(i_222357) > (NU)(9)) raiseIndexError();
			if ((NU)(i_222357) > (NU)(9)) raiseIndexError();
			m = gpasses_222160[(i_222357)- 0].Field2(a[(i_222357)- 0], m);
			nimln(137, "passes.nim");
			{
				nimln(137, "passes.nim");
				if (!m == 0) goto LA8;
				nimln(137, "passes.nim");
				nimln(137, "passes.nim");
				result = NIM_FALSE;
				goto BeforeRet;
			}			LA8: ;
		}		LA4: ;
		nimln(1304, "system.nim");
		res_222374 = addInt(res_222374, 1);
	} LA1: ;
	nimln(138, "passes.nim");
	result = NIM_TRUE;
	BeforeRet: ;	popFrame();
	return result;
}
N_NIMCALL(void, processtoplevelstmtcached_222379)(tnode171659* n, tpasscontext222003** a) {
	tnode171659* m;
	NI i_222394;
	NI HEX3Atmp_222401;
	NI TMP3137;
	NI res_222403;
	nimfr("processTopLevelStmtCached", "passes.nim")
	nimln(142, "passes.nim");
	m = n;
	i_222394 = 0;
	HEX3Atmp_222401 = 0;
	nimln(143, "passes.nim");
	nimln(143, "passes.nim");
	TMP3137 = subInt(gpasseslen_222161, 1);
	HEX3Atmp_222401 = (NI64)(TMP3137);
	nimln(1301, "system.nim");
	res_222403 = 0;
	nimln(1302, "system.nim");
	while (1) {
		nimln(1302, "system.nim");
		if (!(res_222403 <= HEX3Atmp_222401)) goto LA1;
		nimln(1301, "system.nim");
		i_222394 = res_222403;
		nimln(144, "passes.nim");
		{
			nimln(144, "passes.nim");
			nimln(144, "passes.nim");
			if ((NU)(i_222394) > (NU)(9)) raiseIndexError();
			if (!!(gpasses_222160[(i_222394)- 0].Field1 == 0)) goto LA4;
			nimln(144, "passes.nim");
			if ((NU)(i_222394) > (NU)(9)) raiseIndexError();
			if ((NU)(i_222394) > (NU)(9)) raiseIndexError();
			m = gpasses_222160[(i_222394)- 0].Field2(a[(i_222394)- 0], m);
		}		LA4: ;
		nimln(1304, "system.nim");
		res_222403 = addInt(res_222403, 1);
	} LA1: ;
	popFrame();
}
N_NIMCALL(void, closepassescached_222408)(tpasscontext222003** a) {
	tnode171659* m;
	NI i_222422;
	NI HEX3Atmp_222436;
	NI TMP3138;
	NI res_222438;
	nimfr("closePassesCached", "passes.nim")
	nimln(147, "passes.nim");
	m = NIM_NIL;
	i_222422 = 0;
	HEX3Atmp_222436 = 0;
	nimln(148, "passes.nim");
	nimln(148, "passes.nim");
	TMP3138 = subInt(gpasseslen_222161, 1);
	HEX3Atmp_222436 = (NI64)(TMP3138);
	nimln(1301, "system.nim");
	res_222438 = 0;
	nimln(1302, "system.nim");
	while (1) {
		nimln(1302, "system.nim");
		if (!(res_222438 <= HEX3Atmp_222436)) goto LA1;
		nimln(1301, "system.nim");
		i_222422 = res_222438;
		nimln(149, "passes.nim");
		{
			NIM_BOOL LOC4;
			nimln(149, "passes.nim");
			LOC4 = 0;
			nimln(149, "passes.nim");
			nimln(149, "passes.nim");
			if ((NU)(i_222422) > (NU)(9)) raiseIndexError();
			LOC4 = !(gpasses_222160[(i_222422)- 0].Field1 == 0);
			if (!(LOC4)) goto LA5;
			nimln(149, "passes.nim");
			nimln(149, "passes.nim");
			if ((NU)(i_222422) > (NU)(9)) raiseIndexError();
			LOC4 = !(gpasses_222160[(i_222422)- 0].Field3 == 0);
			LA5: ;
			if (!LOC4) goto LA6;
			nimln(150, "passes.nim");
			if ((NU)(i_222422) > (NU)(9)) raiseIndexError();
			if ((NU)(i_222422) > (NU)(9)) raiseIndexError();
			m = gpasses_222160[(i_222422)- 0].Field3(a[(i_222422)- 0], m);
		}		LA6: ;
		nimln(151, "passes.nim");
		if ((NU)(i_222422) > (NU)(9)) raiseIndexError();
		unsureAsgnRef((void**) &a[(i_222422)- 0], NIM_NIL);
		nimln(1304, "system.nim");
		res_222438 = addInt(res_222438, 1);
	} LA1: ;
	popFrame();
}
N_NIMCALL(void, processimplicits_222443)(TY9552* implicits, NU8 nodekind, tpasscontext222003** a) {
	NimStringDesc* module_222459;
	NI i_222463;
	nimfr("processImplicits", "passes.nim")
	module_222459 = 0;
	nimln(1393, "system.nim");
	i_222463 = 0;
	nimln(1394, "system.nim");
	while (1) {
		tnode171659* importstmt;
		tnode171659* str;
		nimln(1394, "system.nim");
		nimln(1394, "system.nim");
		if (!(i_222463 < implicits->Sup.len)) goto LA1;
		nimln(1395, "system.nim");
		if ((NU)(i_222463) >= (NU)(implicits->Sup.len)) raiseIndexError();
		module_222459 = implicits->data[i_222463];
		nimln(156, "passes.nim");
		importstmt = newnodei_171940(nodekind, gcmdlineinfo_137008);
		nimln(157, "passes.nim");
		str = newstrnode_171926(((NU8) 20), module_222459);
		nimln(158, "passes.nim");
		(*str).Info = gcmdlineinfo_137008;
		nimln(159, "passes.nim");
		addson_172048(importstmt, str);		nimln(160, "passes.nim");
		{
			NIM_BOOL LOC4;
			nimln(160, "passes.nim");
			nimln(160, "passes.nim");
			LOC4 = 0;
			LOC4 = processtoplevelstmt_222341(importstmt, a);
			if (!!(LOC4)) goto LA5;
			nimln(160, "passes.nim");
			goto LA1;
		}		LA5: ;
		nimln(1396, "system.nim");
		i_222463 = addInt(i_222463, 1);
	} LA1: ;
	popFrame();
}
static N_INLINE(NI, chckRange)(NI i, NI a, NI b) {
	NI result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (a <= i);
		if (!(LOC3)) goto LA4;
		LOC3 = (i <= b);
		LA4: ;
		if (!LOC3) goto LA5;
		result = i;
		goto BeforeRet;
	}	goto LA1;
	LA5: ;
	{
		raiseRangeError(((NI64) (i)));	}	LA1: ;
	BeforeRet: ;	return result;
}
static N_INLINE(NI, sonslen_172022)(tnode171659* n) {
	NI result;
	nimfr("sonsLen", "ast.nim")
	result = 0;
	nimln(1209, "ast.nim");
	{
		nimln(1209, "ast.nim");
		if (((TMP3131[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3132));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(1209, "ast.nim");
		result = 0;
	}	goto LA1;
	LA3: ;
	{
		nimln(1210, "ast.nim");
		nimln(1210, "ast.nim");
		if (((TMP3131[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3132));
		result = (*n).kindU.S6.Sons->Sup.len;
	}	LA1: ;
	popFrame();
	return result;
}
N_NIMCALL(void, processmodule_222049)(tsym171689* module, tllstream161204* stream, trodreader211023* rd) {
	tparsers197026 p;
	tpasscontextarray222155 a;
	tllstream161204* s;
	NI32 fileidx;
	nimfr("processModule", "passes.nim")
	memset((void*)&p, 0, sizeof(p));
	objectInit(&p, (&NTI197026));
	memset((void*)a, 0, sizeof(a));
	s = 0;
	nimln(167, "passes.nim");
	fileidx = ((NI32)chckRange((*module).Position, ((NI32) (-2147483647 -1)), ((NI32) 2147483647)));
	nimln(168, "passes.nim");
	{
		nimln(168, "passes.nim");
		if (!(rd == NIM_NIL)) goto LA3;
		nimln(169, "passes.nim");
		openpasses_222243(a, module);		nimln(170, "passes.nim");
		{
			NimStringDesc* filename;
			nimln(170, "passes.nim");
			if (!(stream == NIM_NIL)) goto LA7;
			nimln(171, "passes.nim");
			filename = tofullpath_137708(fileidx);
			nimln(172, "passes.nim");
			s = llstreamopen_161227(filename, ((NU8) 0));
			nimln(173, "passes.nim");
			{
				nimln(173, "passes.nim");
				if (!(s == NIM_NIL)) goto LA11;
				nimln(174, "passes.nim");
				rawmessage_138191(((NU16) 3), filename);				nimln(175, "passes.nim");
				goto BeforeRet;
			}			LA11: ;
		}		goto LA5;
		LA7: ;
		{
			nimln(177, "passes.nim");
			s = stream;
		}		LA5: ;
		nimln(178, "passes.nim");
		while (1) {
			nimln(179, "passes.nim");
			openparsers_197034(&p, fileidx, s);			nimln(181, "passes.nim");
			{
				nimln(731, "system.nim");
				nimln(731, "system.nim");
				if (!!((((*module).Flags &(1<<((((NU8) 13))&31)))!=0))) goto LA17;
				nimln(186, "passes.nim");
				processimplicits_222443(implicitimports_114242, ((NU8) 115), a);				nimln(187, "passes.nim");
				processimplicits_222443(implicitincludes_114261, ((NU8) 120), a);			}			LA17: ;
			nimln(189, "passes.nim");
			while (1) {
				tnode171659* n;
				nimln(190, "passes.nim");
				n = parsetoplevelstmt_197051(&p);
				nimln(191, "passes.nim");
				{
					nimln(191, "passes.nim");
					if (!((*n).Kind == ((NU8) 1))) goto LA22;
					nimln(191, "passes.nim");
					goto LA19;
				}				LA22: ;
				nimln(192, "passes.nim");
				{
					NIM_BOOL LOC26;
					nimln(192, "passes.nim");
					nimln(192, "passes.nim");
					LOC26 = 0;
					LOC26 = processtoplevelstmt_222341(n, a);
					if (!!(LOC26)) goto LA27;
					nimln(192, "passes.nim");
					goto LA19;
				}				LA27: ;
			} LA19: ;
			nimln(194, "passes.nim");
			closeparsers_197041(&p);			nimln(195, "passes.nim");
			{
				nimln(698, "system.nim");
				nimln(698, "system.nim");
				if (!!(((*s).Kind == ((NU8) 3)))) goto LA31;
				nimln(195, "passes.nim");
				goto LA14;
			}			LA31: ;
		} LA14: ;
		nimln(196, "passes.nim");
		closepasses_222312(a);		nimln(198, "passes.nim");
		idsynchronizationpoint_170440(1000);	}	goto LA1;
	LA3: ;
	{
		tnode171659* n;
		NI i_222560;
		NI HEX3Atmp_222577;
		NI LOC34;
		NI TMP3139;
		NI res_222579;
		nimln(200, "passes.nim");
		openpassescached_222271(a, module, rd);		nimln(201, "passes.nim");
		n = loadinitsection_211065(rd);
		i_222560 = 0;
		HEX3Atmp_222577 = 0;
		nimln(202, "passes.nim");
		nimln(202, "passes.nim");
		nimln(202, "passes.nim");
		LOC34 = 0;
		LOC34 = sonslen_172022(n);
		TMP3139 = subInt(LOC34, 1);
		HEX3Atmp_222577 = (NI64)(TMP3139);
		nimln(1301, "system.nim");
		res_222579 = 0;
		nimln(1302, "system.nim");
		while (1) {
			nimln(1302, "system.nim");
			if (!(res_222579 <= HEX3Atmp_222577)) goto LA35;
			nimln(1301, "system.nim");
			i_222560 = res_222579;
			nimln(202, "passes.nim");
			if (((TMP3131[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3132));
			if ((NU)(i_222560) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			processtoplevelstmtcached_222379((*n).kindU.S6.Sons->data[i_222560], a);			nimln(1304, "system.nim");
			res_222579 = addInt(res_222579, 1);
		} LA35: ;
		nimln(203, "passes.nim");
		closepassescached_222408(a);	}	LA1: ;
	BeforeRet: ;	popFrame();
}N_NOINLINE(void, compilerpassesInit)(void) {
	nimfr("passes", "passes.nim")
	popFrame();
}

N_NOINLINE(void, compilerpassesDatInit)(void) {
static TNimNode TMP3019[1];
NTI222003.size = sizeof(tpasscontext222003);
NTI222003.kind = 17;
NTI222003.base = (&NTI1009);
NTI222003.flags = 3;
TMP3019[0].kind = 1;
TMP3019[0].offset = offsetof(tpasscontext222003, Fromcache);
TMP3019[0].typ = (&NTI133);
TMP3019[0].name = "fromCache";
NTI222003.node = &TMP3019[0];
}

