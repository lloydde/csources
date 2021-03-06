/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct TY205171 TY205171;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tcell45346 tcell45346;
typedef struct tcellseq45362 tcellseq45362;
typedef struct tgcheap47616 tgcheap47616;
typedef struct tcellset45358 tcellset45358;
typedef struct tpagedesc45354 tpagedesc45354;
typedef struct tmemregion27610 tmemregion27610;
typedef struct tsmallchunk26840 tsmallchunk26840;
typedef struct tllchunk27604 tllchunk27604;
typedef struct tbigchunk26842 tbigchunk26842;
typedef struct tintset26817 tintset26817;
typedef struct ttrunk26813 ttrunk26813;
typedef struct tavlnode27608 tavlnode27608;
typedef struct tgcstat47614 tgcstat47614;
typedef struct NimStringDesc NimStringDesc;
typedef struct tlexer200190 tlexer200190;
typedef struct tbaselexer198024 tbaselexer198024;
typedef struct TNimObject TNimObject;
typedef struct tllstream197204 tllstream197204;
typedef struct tlineinfo182340 tlineinfo182340;
typedef struct ttoken200186 ttoken200186;
typedef struct tident186021 tident186021;
typedef struct tidobj186015 tidobj186015;
typedef struct stringtableobj134012 stringtableobj134012;
typedef struct tbasechunk26838 tbasechunk26838;
typedef struct tfreecell26830 tfreecell26830;
typedef struct keyvaluepairseq134010 keyvaluepairseq134010;
typedef struct keyvaluepair134008 keyvaluepair134008;
struct  TGenericSeq  {
NI len;
NI reserved;
};
typedef N_NIMCALL_PTR(void, TY3289) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3294) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3289 marker;
TY3294 deepcopy;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tcell45346  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq45362  {
NI Len;
NI Cap;
tcell45346** D;
};
struct  tcellset45358  {
NI Counter;
NI Max;
tpagedesc45354* Head;
tpagedesc45354** Data;
};
typedef tsmallchunk26840* TY27622[512];
typedef ttrunk26813* ttrunkbuckets26815[256];
struct  tintset26817  {
ttrunkbuckets26815 Data;
};
struct  tmemregion27610  {
NI Minlargeobj;
NI Maxlargeobj;
TY27622 Freesmallchunks;
tllchunk27604* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk26842* Freechunkslist;
tintset26817 Chunkstarts;
tavlnode27608* Root;
tavlnode27608* Deleted;
tavlnode27608* Last;
tavlnode27608* Freeavlnodes;
};
struct  tgcstat47614  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap47616  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq45362 Zct;
tcellseq45362 Decstack;
tcellset45358 Cycleroots;
tcellseq45362 Tempstack;
NI Recgclock;
tmemregion27610 Region;
tgcstat47614 Stat;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  TNimObject  {
TNimType* m_type;
};
struct  tbaselexer198024  {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
tllstream197204* Stream;
NI Linenumber;
NI Sentinel;
NI Linestart;
};
struct  tlineinfo182340  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (tlineinfo182340 info, NU16 msg, NimStringDesc* arg, void* ClEnv);
void* ClEnv;
} terrorhandler200188;
struct  tlexer200190  {
  tbaselexer198024 Sup;
NI32 Fileidx;
NI Indentahead;
NI Currlineindent;
NIM_BOOL Strongspaces;
terrorhandler200188 Errorhandler;
};
struct  ttoken200186  {
NU8 Toktype;
NI Indent;
tident186021* Ident;
NI64 Inumber;
NF Fnumber;
NU8 Base;
NI8 Strongspacea;
NI8 Strongspaceb;
NimStringDesc* Literal;
NI Line;
NI Col;
};
struct  tidobj186015  {
  TNimObject Sup;
NI Id;
};
struct  tident186021  {
  tidobj186015 Sup;
NimStringDesc* S;
tident186021* Next;
NI H;
};
typedef NimStringDesc* TY194063[3];
typedef NI TY26820[16];
struct  tpagedesc45354  {
tpagedesc45354* Next;
NI Key;
TY26820 Bits;
};
struct  tbasechunk26838  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk26840  {
  tbasechunk26838 Sup;
tsmallchunk26840* Next;
tsmallchunk26840* Prev;
tfreecell26830* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk27604  {
NI Size;
NI Acc;
tllchunk27604* Next;
};
struct  tbigchunk26842  {
  tbasechunk26838 Sup;
tbigchunk26842* Next;
tbigchunk26842* Prev;
NI Align;
NF Data;
};
struct  ttrunk26813  {
ttrunk26813* Next;
NI Key;
TY26820 Bits;
};
typedef tavlnode27608* TY27614[2];
struct  tavlnode27608  {
TY27614 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  tllstream197204  {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
};
struct keyvaluepair134008 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  stringtableobj134012  {
  TNimObject Sup;
NI Counter;
keyvaluepairseq134010* Data;
NU8 Mode;
};
struct  tfreecell26830  {
tfreecell26830* Next;
NI Zerofield;
};
struct TY205171 {
  TGenericSeq Sup;
  NIM_BOOL data[SEQ_DECL_SIZE];
};
struct keyvaluepairseq134010 {
  TGenericSeq Sup;
  keyvaluepair134008 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, TMP719)(void* p, NI op);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell45346*, usrtocell_49246)(void* usr);
static N_INLINE(void, rtladdzct_50804)(tcell45346* c);
N_NOINLINE(void, addzct_49217)(tcellseq45362* s, tcell45346* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(NimStringDesc*, getprefixdir_171384)(void);
N_NIMCALL(NimStringDesc*, nosjoinPath)(NimStringDesc* head, NimStringDesc* tail);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, readconfigfile_205576)(NimStringDesc* filename);
N_NIMCALL(tllstream197204*, llstreamopen_197273)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(void, inittoken_200482)(ttoken200186* l);
N_NIMCALL(void, openlexer_200277)(tlexer200190* lex, NimStringDesc* filename, tllstream197204* inputstream);
N_NIMCALL(void, conftok_205413)(tlexer200190* l, ttoken200186* tok);
N_NIMCALL(void, ppgettok_205009)(tlexer200190* l, ttoken200186* tok);
N_NIMCALL(void, rawgettok_200238)(tlexer200190* l, ttoken200186* tok);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(void, parsedirective_205369)(tlexer200190* l, ttoken200186* tok);
N_NIMCALL(NU8, whichkeyword_190382)(tident186021* id);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
N_NIMCALL(NIM_BOOL, evalppif_205149)(tlexer200190* l, ttoken200186* tok);
N_NIMCALL(NIM_BOOL, parseexpr_205042)(tlexer200190* l, ttoken200186* tok);
N_NIMCALL(NIM_BOOL, parseandexpr_205091)(tlexer200190* l, ttoken200186* tok);
N_NIMCALL(NIM_BOOL, parseatom_205051)(tlexer200190* l, ttoken200186* tok);
N_NIMCALL(void, lexmessage_200289)(tlexer200190* l, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NIM_BOOL, isdefined_187046)(tident186021* symbol);
N_NIMCALL(void, jumptodirective_205233)(tlexer200190* l, ttoken200186* tok, NU8 dest);
N_NIMCALL(void, doelse_205243)(tlexer200190* l, ttoken200186* tok);
N_NIMCALL(void, doelif_205265)(tlexer200190* l, ttoken200186* tok);
N_NIMCALL(void, doend_205197)(tlexer200190* l, ttoken200186* tok);
N_NIMCALL(void, msgwriteln_183947)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, nstFormat)(NimStringDesc* f, stringtableobj134012* t, NU8 flags);
N_NIMCALL(NimStringDesc*, toktostr_200271)(ttoken200186* tok);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* s);
N_NIMCALL(void, putenv_122466)(NimStringDesc* key, NimStringDesc* val);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, getenv_122441)(NimStringDesc* key);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, parseassignment_205486)(tlexer200190* l, ttoken200186* tok);
N_NIMCALL(tident186021*, getident_186472)(NimStringDesc* identifier);
static N_INLINE(tlineinfo182340, getlineinfo_200247)(tlexer200190* l, ttoken200186* tok);
N_NIMCALL(tlineinfo182340, newlineinfo_182944)(NI32 fileinfoidx, NI line, NI col);
N_NIMCALL(void, checksymbol_205449)(tlexer200190* l, ttoken200186* tok);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(void, processswitch_194040)(NimStringDesc* switch_194042, NimStringDesc* arg, NU8 pass, tlineinfo182340 info);
N_NIMCALL(void, closelexer_200258)(tlexer200190* lex);
N_NIMCALL(void, rawmessage_184415)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, getsystemconfigpath_205655)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, nosjoinPathOpenArray)(NimStringDesc** parts, NI partsLen0);
N_NIMCALL(NimStringDesc*, getuserconfigpath_205643)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, nosgetConfigDir)(void);
N_NIMCALL(NimStringDesc*, nosgetCurrentDir)(void);
N_NIMCALL(NimStringDesc*, HEX2F_117499)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(NIM_BOOL, nosisRootDir)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, nosparentDir)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_75628, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, noschangeFileExt)(NimStringDesc* filename, NimStringDesc* ext);
static N_INLINE(NIM_BOOL, fileexists_115808)(NimStringDesc* filename);
N_NIMCALL(NIM_BOOL, nosexistsFile)(NimStringDesc* filename);
STRING_LITERAL(TMP1907, "lib", 3);
STRING_LITERAL(TMP1908, "@", 1);
STRING_LITERAL(TMP1909, "\')\'", 3);
STRING_LITERAL(TMP1910, "\':\'", 3);
STRING_LITERAL(TMP1911, "@if", 3);
STRING_LITERAL(TMP1912, "@end", 4);
STRING_LITERAL(TMP1914, "putenv", 6);
STRING_LITERAL(TMP1915, "prependenv", 10);
STRING_LITERAL(TMP1916, "appendenv", 9);
STRING_LITERAL(TMP1917, "-", 1);
STRING_LITERAL(TMP1918, "--", 2);
STRING_LITERAL(TMP1919, "", 0);
STRING_LITERAL(TMP1920, "\']\'", 3);
STRING_LITERAL(TMP1921, "%=", 2);
STRING_LITERAL(TMP1922, "&", 1);
STRING_LITERAL(TMP1923, "config", 6);
STRING_LITERAL(TMP1925, "nimcfg", 6);
STRING_LITERAL(TMP1926, "nim.cfg", 7);
STRING_LITERAL(TMP1927, "nimrod.cfg", 10);
TY205171* condstack_205192;
extern TNimType NTI138; /* bool */
TNimType NTI205171; /* seq[bool] */
extern tgcheap47616 gch_47644;
extern NimStringDesc* libpath_171236;
extern NU32 gglobaloptions_171128;
extern TNimType NTI200190; /* TLexer */
extern stringtableobj134012* gconfigvars_171234;
extern NI gverbosity_171137;
extern NimStringDesc* gprojectpath_171238;
extern NimStringDesc* gprojectname_171237;
extern NimStringDesc* gprojectfull_171239;
N_NIMCALL(void, TMP719)(void* p, NI op) {
	TY205171* a;
	NI LOC1;
	a = (TY205171*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}

static N_INLINE(tcell45346*, usrtocell_49246)(void* usr) {
	tcell45346* result;
	result = 0;
	result = ((tcell45346*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell45346))))));
	return result;
}

static N_INLINE(void, rtladdzct_50804)(tcell45346* c) {
	addzct_49217((&gch_47644.Zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell45346* c;
	c = usrtocell_49246(p);
	{
		(*c).Refcount -= 8;
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
		rtladdzct_50804(c);
	}
	LA3: ;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tcell45346* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_49246(src);
		(*c).Refcount += 8;
	}
	LA3: ;
	{
		tcell45346* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_49246((*dest));
		{
			(*c).Refcount -= 8;
			if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA11;
			rtladdzct_50804(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(void, ppgettok_205009)(tlexer200190* l, ttoken200186* tok) {
	rawgettok_200238(l, tok);
	{
		while (1) {
			if (!((*tok).Toktype == ((NU8) 112))) goto LA2;
			rawgettok_200238(l, tok);
		} LA2: ;
	}
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL LOC11;
	int LOC13;
{	result = 0;
	{
		if (!(a == b)) goto LA3;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA3: ;
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
	}
	LA9: ;
	LOC11 = 0;
	LOC11 = ((*a).Sup.len == (*b).Sup.len);
	if (!(LOC11)) goto LA12;
	LOC13 = 0;
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (NI32)((*a).Sup.len * 1));
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, parseatom_205051)(tlexer200190* l, ttoken200186* tok) {
	NIM_BOOL result;
	result = 0;
	{
		if (!((*tok).Toktype == ((NU8) 92))) goto LA3;
		ppgettok_205009(l, tok);
		result = parseexpr_205042(l, tok);
		{
			if (!((*tok).Toktype == ((NU8) 93))) goto LA7;
			ppgettok_205009(l, tok);
		}
		goto LA5;
		LA7: ;
		{
			lexmessage_200289((&(*l)), ((NU16) 23), ((NimStringDesc*) &TMP1909));
		}
		LA5: ;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC13;
		if (!((*(*tok).Ident).Sup.Id == 44)) goto LA11;
		ppgettok_205009(l, tok);
		LOC13 = 0;
		LOC13 = parseatom_205051(l, tok);
		result = !(LOC13);
	}
	goto LA1;
	LA11: ;
	{
		result = isdefined_187046((*tok).Ident);
		ppgettok_205009(l, tok);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NIM_BOOL, parseandexpr_205091)(tlexer200190* l, ttoken200186* tok) {
	NIM_BOOL result;
	result = 0;
	result = parseatom_205051(l, tok);
	{
		while (1) {
			NIM_BOOL b;
			NIM_BOOL LOC3;
			if (!((*(*tok).Ident).Sup.Id == 2)) goto LA2;
			ppgettok_205009(l, tok);
			b = parseatom_205051(l, tok);
			LOC3 = 0;
			LOC3 = result;
			if (!(LOC3)) goto LA4;
			LOC3 = b;
			LA4: ;
			result = LOC3;
		} LA2: ;
	}
	return result;
}

N_NIMCALL(NIM_BOOL, parseexpr_205042)(tlexer200190* l, ttoken200186* tok) {
	NIM_BOOL result;
	result = 0;
	result = parseandexpr_205091(l, tok);
	{
		while (1) {
			NIM_BOOL b;
			NIM_BOOL LOC3;
			if (!((*(*tok).Ident).Sup.Id == 48)) goto LA2;
			ppgettok_205009(l, tok);
			b = parseandexpr_205091(l, tok);
			LOC3 = 0;
			LOC3 = result;
			if (LOC3) goto LA4;
			LOC3 = b;
			LA4: ;
			result = LOC3;
		} LA2: ;
	}
	return result;
}

N_NIMCALL(NIM_BOOL, evalppif_205149)(tlexer200190* l, ttoken200186* tok) {
	NIM_BOOL result;
	result = 0;
	ppgettok_205009(l, tok);
	result = parseexpr_205042(l, tok);
	{
		if (!((*tok).Toktype == ((NU8) 106))) goto LA3;
		ppgettok_205009(l, tok);
	}
	goto LA1;
	LA3: ;
	{
		lexmessage_200289((&(*l)), ((NU16) 23), ((NimStringDesc*) &TMP1910));
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, doelse_205243)(tlexer200190* l, ttoken200186* tok) {
	{
		if (!((condstack_205192->Sup.len-1) < 0)) goto LA3;
		lexmessage_200289((&(*l)), ((NU16) 23), ((NimStringDesc*) &TMP1911));
	}
	LA3: ;
	ppgettok_205009(l, tok);
	{
		if (!((*tok).Toktype == ((NU8) 106))) goto LA7;
		ppgettok_205009(l, tok);
	}
	LA7: ;
	{
		if (!condstack_205192->data[(condstack_205192->Sup.len-1)]) goto LA11;
		jumptodirective_205233(l, tok, ((NU8) 0));
	}
	LA11: ;
}

N_NIMCALL(void, doelif_205265)(tlexer200190* l, ttoken200186* tok) {
	NIM_BOOL res;
	{
		if (!((condstack_205192->Sup.len-1) < 0)) goto LA3;
		lexmessage_200289((&(*l)), ((NU16) 23), ((NimStringDesc*) &TMP1911));
	}
	LA3: ;
	res = evalppif_205149(l, tok);
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = condstack_205192->data[(condstack_205192->Sup.len-1)];
		if (LOC7) goto LA8;
		LOC7 = !(res);
		LA8: ;
		if (!LOC7) goto LA9;
		jumptodirective_205233(l, tok, ((NU8) 1));
	}
	goto LA5;
	LA9: ;
	{
		condstack_205192->data[(condstack_205192->Sup.len-1)] = NIM_TRUE;
	}
	LA5: ;
}

N_NIMCALL(void, doend_205197)(tlexer200190* l, ttoken200186* tok) {
	{
		if (!((condstack_205192->Sup.len-1) < 0)) goto LA3;
		lexmessage_200289((&(*l)), ((NU16) 23), ((NimStringDesc*) &TMP1911));
	}
	LA3: ;
	ppgettok_205009(l, tok);
	condstack_205192 = (TY205171*) setLengthSeq(&(condstack_205192)->Sup, sizeof(NIM_BOOL), (condstack_205192->Sup.len-1));
}

N_NIMCALL(void, jumptodirective_205233)(tlexer200190* l, ttoken200186* tok, NU8 dest) {
	NI nestedifs;
	nestedifs = 0;
	{
		while (1) {
			{
				NIM_BOOL LOC5;
				NU8 LOC9;
				LOC5 = 0;
				LOC5 = !(((*tok).Ident == NIM_NIL));
				if (!(LOC5)) goto LA6;
				LOC5 = eqStrings((*(*tok).Ident).S, ((NimStringDesc*) &TMP1908));
				LA6: ;
				if (!LOC5) goto LA7;
				ppgettok_205009(l, tok);
				LOC9 = 0;
				LOC9 = whichkeyword_190382((*tok).Ident);
				switch (LOC9) {
				case ((NU8) 30):
				{
					nestedifs += 1;
				}
				break;
				case ((NU8) 20):
				{
					{
						NIM_BOOL LOC14;
						LOC14 = 0;
						LOC14 = (dest == ((NU8) 1));
						if (!(LOC14)) goto LA15;
						LOC14 = (nestedifs == 0);
						LA15: ;
						if (!LOC14) goto LA16;
						doelse_205243(l, tok);
						goto LA1;
					}
					LA16: ;
				}
				break;
				case ((NU8) 19):
				{
					{
						NIM_BOOL LOC21;
						LOC21 = 0;
						LOC21 = (dest == ((NU8) 1));
						if (!(LOC21)) goto LA22;
						LOC21 = (nestedifs == 0);
						LA22: ;
						if (!LOC21) goto LA23;
						doelif_205265(l, tok);
						goto LA1;
					}
					LA23: ;
				}
				break;
				case ((NU8) 21):
				{
					{
						if (!(nestedifs == 0)) goto LA28;
						doend_205197(l, tok);
						goto LA1;
					}
					LA28: ;
					{
						if (!(0 < nestedifs)) goto LA32;
						nestedifs -= 1;
					}
					LA32: ;
				}
				break;
				default:
				{
				}
				break;
				}
				ppgettok_205009(l, tok);
			}
			goto LA3;
			LA7: ;
			{
				if (!((*tok).Toktype == ((NU8) 1))) goto LA36;
				lexmessage_200289((&(*l)), ((NU16) 23), ((NimStringDesc*) &TMP1912));
			}
			goto LA3;
			LA36: ;
			{
				ppgettok_205009(l, tok);
			}
			LA3: ;
		}
	} LA1: ;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(void, parsedirective_205369)(tlexer200190* l, ttoken200186* tok) {
	NU8 LOC1;
	ppgettok_205009(l, tok);
	LOC1 = 0;
	LOC1 = whichkeyword_190382((*tok).Ident);
	switch (LOC1) {
	case ((NU8) 30):
	{
		NIM_BOOL res;
		condstack_205192 = (TY205171*) setLengthSeq(&(condstack_205192)->Sup, sizeof(NIM_BOOL), (NI32)(condstack_205192->Sup.len + 1));
		res = evalppif_205149(l, tok);
		condstack_205192->data[(condstack_205192->Sup.len-1)] = res;
		{
			if (!!(res)) goto LA5;
			jumptodirective_205233(l, tok, ((NU8) 1));
		}
		LA5: ;
	}
	break;
	case ((NU8) 19):
	{
		doelif_205265(l, tok);
	}
	break;
	case ((NU8) 20):
	{
		doelse_205243(l, tok);
	}
	break;
	case ((NU8) 21):
	{
		doend_205197(l, tok);
	}
	break;
	case ((NU8) 178):
	{
		NimStringDesc* LOC11;
		NimStringDesc* LOC12;
		ppgettok_205009(l, tok);
		LOC11 = 0;
		LOC11 = toktostr_200271((&(*tok)));
		LOC12 = 0;
		LOC12 = nstFormat(LOC11, gconfigvars_171234, 5);
		msgwriteln_183947(LOC12);
		ppgettok_205009(l, tok);
	}
	break;
	default:
	{
		NimStringDesc* LOC14;
		LOC14 = 0;
		LOC14 = nsuNormalize((*(*tok).Ident).S);
		if (eqStrings(LOC14, ((NimStringDesc*) &TMP1914))) goto LA15;
		if (eqStrings(LOC14, ((NimStringDesc*) &TMP1915))) goto LA16;
		if (eqStrings(LOC14, ((NimStringDesc*) &TMP1916))) goto LA17;
		goto LA18;
		LA15: ;
		{
			NimStringDesc* key;
			NimStringDesc* LOC21;
			ppgettok_205009(l, tok);
			key = toktostr_200271((&(*tok)));
			ppgettok_205009(l, tok);
			LOC21 = 0;
			LOC21 = toktostr_200271((&(*tok)));
			putenv_122466(key, LOC21);
			ppgettok_205009(l, tok);
		}
		goto LA19;
		LA16: ;
		{
			NimStringDesc* key;
			NimStringDesc* LOC23;
			NimStringDesc* LOC24;
			NimStringDesc* LOC25;
			ppgettok_205009(l, tok);
			key = toktostr_200271((&(*tok)));
			ppgettok_205009(l, tok);
			LOC23 = 0;
			LOC24 = 0;
			LOC24 = toktostr_200271((&(*tok)));
			LOC25 = 0;
			LOC25 = getenv_122441(key);
			LOC23 = rawNewString(LOC24->Sup.len + LOC25->Sup.len + 0);
appendString(LOC23, LOC24);
appendString(LOC23, LOC25);
			putenv_122466(key, LOC23);
			ppgettok_205009(l, tok);
		}
		goto LA19;
		LA17: ;
		{
			NimStringDesc* key;
			NimStringDesc* LOC27;
			NimStringDesc* LOC28;
			NimStringDesc* LOC29;
			ppgettok_205009(l, tok);
			key = toktostr_200271((&(*tok)));
			ppgettok_205009(l, tok);
			LOC27 = 0;
			LOC28 = 0;
			LOC28 = getenv_122441(key);
			LOC29 = 0;
			LOC29 = toktostr_200271((&(*tok)));
			LOC27 = rawNewString(LOC28->Sup.len + LOC29->Sup.len + 0);
appendString(LOC27, LOC28);
appendString(LOC27, LOC29);
			putenv_122466(key, LOC27);
			ppgettok_205009(l, tok);
		}
		goto LA19;
		LA18: ;
		{
			NimStringDesc* LOC31;
			LOC31 = 0;
			LOC31 = toktostr_200271((&(*tok)));
			lexmessage_200289((&(*l)), ((NU16) 30), LOC31);
		}
		LA19: ;
	}
	break;
	}
}

N_NIMCALL(void, conftok_205413)(tlexer200190* l, ttoken200186* tok) {
	ppgettok_205009(l, tok);
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = !(((*tok).Ident == NIM_NIL));
			if (!(LOC3)) goto LA4;
			LOC3 = eqStrings((*(*tok).Ident).S, ((NimStringDesc*) &TMP1908));
			LA4: ;
			if (!LOC3) goto LA2;
			parsedirective_205369(l, tok);
		} LA2: ;
	}
}

static N_INLINE(tlineinfo182340, getlineinfo_200247)(tlexer200190* l, ttoken200186* tok) {
	tlineinfo182340 result;
	memset((void*)(&result), 0, sizeof(result));
	result = newlineinfo_182944((*l).Fileidx, (*tok).Line, (*tok).Col);
	return result;
}

N_NIMCALL(void, checksymbol_205449)(tlexer200190* l, ttoken200186* tok) {
	{
		NimStringDesc* LOC5;
		if (!!(((*tok).Toktype >= ((NU8) 2) && (*tok).Toktype <= ((NU8) 71) || (*tok).Toktype >= ((NU8) 86) && (*tok).Toktype <= ((NU8) 88)))) goto LA3;
		LOC5 = 0;
		LOC5 = toktostr_200271(tok);
		lexmessage_200289(l, ((NU16) 19), LOC5);
	}
	LA3: ;
}

N_NIMCALL(void, parseassignment_205486)(tlexer200190* l, ttoken200186* tok) {
	tlineinfo182340 info;
	NimStringDesc* s;
	NimStringDesc* val;
	NIM_BOOL percent;
	tident186021* LOC22;
	{
		NIM_BOOL LOC3;
		tident186021* LOC4;
		tident186021* LOC6;
		LOC3 = 0;
		LOC4 = 0;
		LOC4 = getident_186472(((NimStringDesc*) &TMP1917));
		LOC3 = ((*(*tok).Ident).Sup.Id == (*LOC4).Sup.Id);
		if (LOC3) goto LA5;
		LOC6 = 0;
		LOC6 = getident_186472(((NimStringDesc*) &TMP1918));
		LOC3 = ((*(*tok).Ident).Sup.Id == (*LOC6).Sup.Id);
		LA5: ;
		if (!LOC3) goto LA7;
		conftok_205413(l, tok);
	}
	LA7: ;
	info = getlineinfo_200247((&(*l)), (&(*tok)));
	checksymbol_205449((&(*l)), (&(*tok)));
	s = toktostr_200271((&(*tok)));
	conftok_205413(l, tok);
	val = copyString(((NimStringDesc*) &TMP1919));
	{
		while (1) {
			NimStringDesc* LOC11;
			if (!((*tok).Toktype == ((NU8) 109))) goto LA10;
			s = addChar(s, 46);
			conftok_205413(l, tok);
			checksymbol_205449((&(*l)), (&(*tok)));
			LOC11 = 0;
			LOC11 = toktostr_200271((&(*tok)));
			s = resizeString(s, LOC11->Sup.len + 0);
appendString(s, LOC11);
			conftok_205413(l, tok);
		} LA10: ;
	}
	{
		NimStringDesc* LOC16;
		if (!((*tok).Toktype == ((NU8) 94))) goto LA14;
		conftok_205413(l, tok);
		checksymbol_205449((&(*l)), (&(*tok)));
		LOC16 = 0;
		LOC16 = toktostr_200271((&(*tok)));
		val = resizeString(val, LOC16->Sup.len + 0);
appendString(val, LOC16);
		conftok_205413(l, tok);
		{
			if (!((*tok).Toktype == ((NU8) 95))) goto LA19;
			conftok_205413(l, tok);
		}
		goto LA17;
		LA19: ;
		{
			lexmessage_200289((&(*l)), ((NU16) 23), ((NimStringDesc*) &TMP1920));
		}
		LA17: ;
		val = addChar(val, 93);
	}
	LA14: ;
	LOC22 = 0;
	LOC22 = getident_186472(((NimStringDesc*) &TMP1921));
	percent = ((*(*tok).Ident).Sup.Id == (*LOC22).Sup.Id);
	{
		NIM_BOOL LOC25;
		NimStringDesc* LOC33;
		LOC25 = 0;
		LOC25 = ((*tok).Toktype == ((NU8) 106) || (*tok).Toktype == ((NU8) 108));
		if (LOC25) goto LA26;
		LOC25 = percent;
		LA26: ;
		if (!LOC25) goto LA27;
		{
			if (!(0 < val->Sup.len)) goto LA31;
			val = addChar(val, 58);
		}
		LA31: ;
		conftok_205413(l, tok);
		checksymbol_205449((&(*l)), (&(*tok)));
		LOC33 = 0;
		LOC33 = toktostr_200271((&(*tok)));
		val = resizeString(val, LOC33->Sup.len + 0);
appendString(val, LOC33);
		conftok_205413(l, tok);
		{
			while (1) {
				NIM_BOOL LOC36;
				tident186021* LOC38;
				NimStringDesc* LOC39;
				LOC36 = 0;
				LOC36 = !(((*tok).Ident == NIM_NIL));
				if (!(LOC36)) goto LA37;
				LOC38 = 0;
				LOC38 = getident_186472(((NimStringDesc*) &TMP1922));
				LOC36 = ((*(*tok).Ident).Sup.Id == (*LOC38).Sup.Id);
				LA37: ;
				if (!LOC36) goto LA35;
				conftok_205413(l, tok);
				checksymbol_205449((&(*l)), (&(*tok)));
				LOC39 = 0;
				LOC39 = toktostr_200271((&(*tok)));
				val = resizeString(val, LOC39->Sup.len + 0);
appendString(val, LOC39);
				conftok_205413(l, tok);
			} LA35: ;
		}
	}
	LA27: ;
	{
		NimStringDesc* LOC44;
		if (!percent) goto LA42;
		LOC44 = 0;
		LOC44 = nstFormat(val, gconfigvars_171234, 3);
		processswitch_194040(s, LOC44, ((NU8) 2), info);
	}
	goto LA40;
	LA42: ;
	{
		processswitch_194040(s, val, ((NU8) 2), info);
	}
	LA40: ;
}

N_NIMCALL(void, readconfigfile_205576)(NimStringDesc* filename) {
	tlexer200190 l;
	ttoken200186 tok;
	tllstream197204* stream;
	memset((void*)(&l), 0, sizeof(l));
	l.Sup.Sup.m_type = (&NTI200190);
	memset((void*)(&tok), 0, sizeof(tok));
	stream = 0;
	stream = llstreamopen_197273(filename, ((NU8) 0));
	{
		if (!!((stream == NIM_NIL))) goto LA3;
		inittoken_200482((&tok));
		openlexer_200277((&l), filename, stream);
		tok.Toktype = ((NU8) 1);
		conftok_205413((&l), (&tok));
		{
			while (1) {
				if (!!((tok.Toktype == ((NU8) 1)))) goto LA6;
				parseassignment_205486((&l), (&tok));
			} LA6: ;
		}
		{
			if (!(0 < condstack_205192->Sup.len)) goto LA9;
			lexmessage_200289((&l), ((NU16) 23), ((NimStringDesc*) &TMP1912));
		}
		LA9: ;
		closelexer_200258((&l));
		{
			if (!(1 <= gverbosity_171137)) goto LA13;
			rawmessage_184415(((NU16) 271), filename);
		}
		LA13: ;
	}
	LA3: ;
}

N_NIMCALL(NimStringDesc*, getsystemconfigpath_205655)(NimStringDesc* filename) {
	NimStringDesc* result;
	NimStringDesc* p;
	TY194063 LOC1;
	result = 0;
	p = getprefixdir_171384();
	memset((void*)LOC1, 0, sizeof(LOC1));
	LOC1[0] = copyString(p);
	LOC1[1] = copyString(((NimStringDesc*) &TMP1923));
	LOC1[2] = copyString(filename);
	result = nosjoinPathOpenArray(LOC1, 3);
	return result;
}

N_NIMCALL(NimStringDesc*, getuserconfigpath_205643)(NimStringDesc* filename) {
	NimStringDesc* result;
	NimStringDesc* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = nosgetConfigDir();
	result = nosjoinPath(LOC1, filename);
	return result;
}

static N_INLINE(NIM_BOOL, fileexists_115808)(NimStringDesc* filename) {
	NIM_BOOL result;
	result = 0;
	result = nosexistsFile(filename);
	return result;
}

N_NIMCALL(void, loadconfigs_205807)(NimStringDesc* cfg) {
	NimStringDesc* pd;
	{
		NimStringDesc* prefix;
		if (!((libpath_171236) && (libpath_171236)->Sup.len == 0)) goto LA3;
		prefix = getprefixdir_171384();
		asgnRefNoCycle((void**) (&libpath_171236), nosjoinPath(prefix, ((NimStringDesc*) &TMP1907)));
	}
	LA3: ;
	{
		NimStringDesc* LOC9;
		if (!!(((gglobaloptions_171128 &(1<<((((NU8) 16))&31)))!=0))) goto LA7;
		LOC9 = 0;
		LOC9 = getsystemconfigpath_205655(cfg);
		readconfigfile_205576(LOC9);
	}
	LA7: ;
	{
		NimStringDesc* LOC14;
		if (!!(((gglobaloptions_171128 &(1<<((((NU8) 18))&31)))!=0))) goto LA12;
		LOC14 = 0;
		LOC14 = getuserconfigpath_205643(cfg);
		readconfigfile_205576(LOC14);
	}
	LA12: ;
	{
		if (!(0 < gprojectpath_171238->Sup.len)) goto LA17;
		pd = copyString(gprojectpath_171238);
	}
	goto LA15;
	LA17: ;
	{
		pd = nosgetCurrentDir();
	}
	LA15: ;
	{
		if (!!(((gglobaloptions_171128 &(1<<((((NU8) 19))&31)))!=0))) goto LA22;
		{
			NimStringDesc* dir_206044;
			dir_206044 = 0;
			{
				NimStringDesc* current_206064;
				if (!NIM_FALSE) goto LA27;
				current_206064 = copyString(pd);
				{
					NimStringDesc* LOC33;
					if (!NIM_FALSE) goto LA31;
					dir_206044 = pd;
					LOC33 = 0;
					LOC33 = HEX2F_117499(dir_206044, cfg);
					readconfigfile_205576(LOC33);
				}
				LA31: ;
				{
					while (1) {
						NimStringDesc* LOC41;
						{
							NIM_BOOL LOC38;
							LOC38 = 0;
							LOC38 = nosisRootDir(current_206064);
							if (!LOC38) goto LA39;
							goto LA34;
						}
						LA39: ;
						current_206064 = nosparentDir(current_206064);
						dir_206044 = current_206064;
						LOC41 = 0;
						LOC41 = HEX2F_117499(dir_206044, cfg);
						readconfigfile_205576(LOC41);
					}
				} LA34: ;
			}
			goto LA25;
			LA27: ;
			{
				{
					NI i_206066;
					NI HEX3Atmp_206068;
					NI res_206070;
					i_206066 = 0;
					HEX3Atmp_206068 = 0;
					HEX3Atmp_206068 = (NI32)(pd->Sup.len - 2);
					res_206070 = 0;
					{
						while (1) {
							if (!(res_206070 <= HEX3Atmp_206068)) goto LA45;
							i_206066 = res_206070;
							{
								NIM_BOOL LOC48;
								NIM_BOOL LOC50;
								NimStringDesc* LOC54;
								LOC48 = 0;
								LOC48 = (((NU8)(pd->data[i_206066])) == ((NU8)(92)) || ((NU8)(pd->data[i_206066])) == ((NU8)(47)));
								if (!(LOC48)) goto LA49;
								LOC50 = 0;
								LOC50 = (i_206066 == 0);
								if (LOC50) goto LA51;
								LOC50 = !((((NU8)(pd->data[(NI32)(i_206066 - 1)])) == ((NU8)(92)) || ((NU8)(pd->data[(NI32)(i_206066 - 1)])) == ((NU8)(47))));
								LA51: ;
								LOC48 = LOC50;
								LA49: ;
								if (!LOC48) goto LA52;
								dir_206044 = copyStrLast(pd, 0, i_206066);
								LOC54 = 0;
								LOC54 = HEX2F_117499(dir_206044, cfg);
								readconfigfile_205576(LOC54);
							}
							LA52: ;
							res_206070 += 1;
						} LA45: ;
					}
				}
				{
					NimStringDesc* LOC59;
					if (!NIM_FALSE) goto LA57;
					dir_206044 = pd;
					LOC59 = 0;
					LOC59 = HEX2F_117499(dir_206044, cfg);
					readconfigfile_205576(LOC59);
				}
				LA57: ;
			}
			LA25: ;
		}
	}
	LA22: ;
	{
		NimStringDesc* LOC64;
		if (!!(((gglobaloptions_171128 &(1<<((((NU8) 17))&31)))!=0))) goto LA62;
		LOC64 = 0;
		LOC64 = HEX2F_117499(pd, cfg);
		readconfigfile_205576(LOC64);
		{
			NimStringDesc* projectconfig;
			if (!!((gprojectname_171237->Sup.len == 0))) goto LA67;
			projectconfig = noschangeFileExt(gprojectfull_171239, ((NimStringDesc*) &TMP1925));
			{
				NIM_BOOL LOC71;
				LOC71 = 0;
				LOC71 = fileexists_115808(projectconfig);
				if (!!(LOC71)) goto LA72;
				projectconfig = noschangeFileExt(gprojectfull_171239, ((NimStringDesc*) &TMP1926));
			}
			LA72: ;
			{
				NIM_BOOL LOC76;
				LOC76 = 0;
				LOC76 = fileexists_115808(projectconfig);
				if (!!(LOC76)) goto LA77;
				projectconfig = noschangeFileExt(gprojectfull_171239, ((NimStringDesc*) &TMP1927));
				{
					NIM_BOOL LOC81;
					LOC81 = 0;
					LOC81 = fileexists_115808(projectconfig);
					if (!LOC81) goto LA82;
					rawmessage_184415(((NU16) 234), projectconfig);
				}
				LA82: ;
			}
			LA77: ;
			readconfigfile_205576(projectconfig);
		}
		LA67: ;
	}
	LA62: ;
}
NIM_EXTERNC N_NOINLINE(void, compiler_nimconfInit)(void) {
	if (condstack_205192) nimGCunrefNoCycle(condstack_205192);
	condstack_205192 = (TY205171*) newSeqRC1((&NTI205171), 0);
}

NIM_EXTERNC N_NOINLINE(void, compiler_nimconfDatInit)(void) {
NTI205171.size = sizeof(TY205171*);
NTI205171.kind = 24;
NTI205171.base = (&NTI138);
NTI205171.flags = 2;
NTI205171.marker = TMP719;
}

