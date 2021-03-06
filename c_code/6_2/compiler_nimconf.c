/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct TY204171 TY204171;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tcell45348 tcell45348;
typedef struct tcellseq45364 tcellseq45364;
typedef struct tgcheap47616 tgcheap47616;
typedef struct tcellset45360 tcellset45360;
typedef struct tpagedesc45356 tpagedesc45356;
typedef struct tmemregion27610 tmemregion27610;
typedef struct tsmallchunk26840 tsmallchunk26840;
typedef struct tllchunk27604 tllchunk27604;
typedef struct tbigchunk26842 tbigchunk26842;
typedef struct tintset26817 tintset26817;
typedef struct ttrunk26813 ttrunk26813;
typedef struct tavlnode27608 tavlnode27608;
typedef struct tgcstat47614 tgcstat47614;
typedef struct NimStringDesc NimStringDesc;
typedef struct tlexer199190 tlexer199190;
typedef struct tbaselexer197024 tbaselexer197024;
typedef struct TNimObject TNimObject;
typedef struct tllstream196204 tllstream196204;
typedef struct tlineinfo181340 tlineinfo181340;
typedef struct ttoken199186 ttoken199186;
typedef struct tident185021 tident185021;
typedef struct tidobj185015 tidobj185015;
typedef struct stringtableobj132012 stringtableobj132012;
typedef struct tbasechunk26838 tbasechunk26838;
typedef struct tfreecell26830 tfreecell26830;
typedef struct keyvaluepairseq132010 keyvaluepairseq132010;
typedef struct keyvaluepair132008 keyvaluepair132008;
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
struct  tcell45348  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq45364  {
NI Len;
NI Cap;
tcell45348** D;
};
struct  tcellset45360  {
NI Counter;
NI Max;
tpagedesc45356* Head;
tpagedesc45356** Data;
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
tcellseq45364 Zct;
tcellseq45364 Decstack;
tcellset45360 Cycleroots;
tcellseq45364 Tempstack;
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
struct  tbaselexer197024  {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
tllstream196204* Stream;
NI Linenumber;
NI Sentinel;
NI Linestart;
};
struct  tlineinfo181340  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (tlineinfo181340 info, NU16 msg, NimStringDesc* arg, void* ClEnv);
void* ClEnv;
} terrorhandler199188;
struct  tlexer199190  {
  tbaselexer197024 Sup;
NI32 Fileidx;
NI Indentahead;
NI Currlineindent;
NIM_BOOL Strongspaces;
terrorhandler199188 Errorhandler;
};
struct  ttoken199186  {
NU8 Toktype;
NI Indent;
tident185021* Ident;
NI64 Inumber;
NF Fnumber;
NU8 Base;
NI8 Strongspacea;
NI8 Strongspaceb;
NimStringDesc* Literal;
NI Line;
NI Col;
};
struct  tidobj185015  {
  TNimObject Sup;
NI Id;
};
struct  tident185021  {
  tidobj185015 Sup;
NimStringDesc* S;
tident185021* Next;
NI H;
};
typedef NimStringDesc* TY193063[3];
typedef NI TY26820[8];
struct  tpagedesc45356  {
tpagedesc45356* Next;
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
struct  tllstream196204  {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
};
struct keyvaluepair132008 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  stringtableobj132012  {
  TNimObject Sup;
NI Counter;
keyvaluepairseq132010* Data;
NU8 Mode;
};
struct  tfreecell26830  {
tfreecell26830* Next;
NI Zerofield;
};
struct TY204171 {
  TGenericSeq Sup;
  NIM_BOOL data[SEQ_DECL_SIZE];
};
struct keyvaluepairseq132010 {
  TGenericSeq Sup;
  keyvaluepair132008 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, TMP717)(void* p, NI op);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell45348*, usrtocell_49246)(void* usr);
static N_INLINE(void, rtladdzct_50804)(tcell45348* c);
N_NOINLINE(void, addzct_49217)(tcellseq45364* s, tcell45348* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(NimStringDesc*, getprefixdir_170384)(void);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, nosjoinPath)(NimStringDesc* head, NimStringDesc* tail);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(void, readconfigfile_204576)(NimStringDesc* filename);
N_NIMCALL(tllstream196204*, llstreamopen_196273)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(void, inittoken_199482)(ttoken199186* l);
N_NIMCALL(void, openlexer_199277)(tlexer199190* lex, NimStringDesc* filename, tllstream196204* inputstream);
N_NIMCALL(void, conftok_204413)(tlexer199190* l, ttoken199186* tok);
N_NIMCALL(void, ppgettok_204009)(tlexer199190* l, ttoken199186* tok);
N_NIMCALL(void, rawgettok_199238)(tlexer199190* l, ttoken199186* tok);
N_NIMCALL(void, parsedirective_204369)(tlexer199190* l, ttoken199186* tok);
N_NIMCALL(NU8, whichkeyword_189382)(tident185021* id);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
N_NIMCALL(NIM_BOOL, evalppif_204149)(tlexer199190* l, ttoken199186* tok);
N_NIMCALL(NIM_BOOL, parseexpr_204042)(tlexer199190* l, ttoken199186* tok);
N_NIMCALL(NIM_BOOL, parseandexpr_204091)(tlexer199190* l, ttoken199186* tok);
N_NIMCALL(NIM_BOOL, parseatom_204051)(tlexer199190* l, ttoken199186* tok);
N_NIMCALL(void, lexmessage_199289)(tlexer199190* l, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NIM_BOOL, isdefined_186046)(tident185021* symbol);
N_NIMCALL(void, jumptodirective_204233)(tlexer199190* l, ttoken199186* tok, NU8 dest);
N_NIMCALL(void, doelse_204243)(tlexer199190* l, ttoken199186* tok);
N_NIMCALL(void, doelif_204265)(tlexer199190* l, ttoken199186* tok);
N_NIMCALL(void, doend_204197)(tlexer199190* l, ttoken199186* tok);
N_NIMCALL(void, msgwriteln_182947)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, nstFormat)(NimStringDesc* f, stringtableobj132012* t, NU8 flags);
N_NIMCALL(NimStringDesc*, toktostr_199271)(ttoken199186* tok);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* s);
N_NIMCALL(void, putenv_121467)(NimStringDesc* key, NimStringDesc* val);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, getenv_121442)(NimStringDesc* key);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, parseassignment_204486)(tlexer199190* l, ttoken199186* tok);
N_NIMCALL(tident185021*, getident_185472)(NimStringDesc* identifier);
static N_INLINE(tlineinfo181340, getlineinfo_199247)(tlexer199190* l, ttoken199186* tok);
N_NIMCALL(tlineinfo181340, newlineinfo_181943)(NI32 fileinfoidx, NI line, NI col);
N_NIMCALL(void, checksymbol_204449)(tlexer199190* l, ttoken199186* tok);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(void, processswitch_193040)(NimStringDesc* switch_193042, NimStringDesc* arg, NU8 pass, tlineinfo181340 info);
N_NIMCALL(void, closelexer_199258)(tlexer199190* lex);
N_NIMCALL(void, rawmessage_183415)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, getsystemconfigpath_204655)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, nosjoinPathOpenArray)(NimStringDesc** parts, NI partsLen0);
N_NIMCALL(NIM_BOOL, nosexistsFile)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, getuserconfigpath_204643)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, nosgetConfigDir)(void);
N_NIMCALL(NimStringDesc*, nosgetCurrentDir)(void);
N_NIMCALL(NimStringDesc*, HEX2F_118299)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(NIM_BOOL, nosisRootDir)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, nosparentDir)(NimStringDesc* path);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_75628, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, noschangeFileExt)(NimStringDesc* filename, NimStringDesc* ext);
static N_INLINE(NIM_BOOL, fileexists_117010)(NimStringDesc* filename);
STRING_LITERAL(TMP1897, "/usr", 4);
STRING_LITERAL(TMP1898, "/usr/lib/nim", 12);
STRING_LITERAL(TMP1899, "/usr/local", 10);
STRING_LITERAL(TMP1900, "/usr/local/lib/nim", 18);
STRING_LITERAL(TMP1901, "lib", 3);
STRING_LITERAL(TMP1902, "@", 1);
STRING_LITERAL(TMP1903, "\')\'", 3);
STRING_LITERAL(TMP1904, "\':\'", 3);
STRING_LITERAL(TMP1905, "@if", 3);
STRING_LITERAL(TMP1906, "@end", 4);
STRING_LITERAL(TMP1908, "putenv", 6);
STRING_LITERAL(TMP1909, "prependenv", 10);
STRING_LITERAL(TMP1910, "appendenv", 9);
STRING_LITERAL(TMP1911, "-", 1);
STRING_LITERAL(TMP1912, "--", 2);
STRING_LITERAL(TMP1913, "", 0);
STRING_LITERAL(TMP1914, "\']\'", 3);
STRING_LITERAL(TMP1915, "%=", 2);
STRING_LITERAL(TMP1916, "&", 1);
STRING_LITERAL(TMP1917, "config", 6);
STRING_LITERAL(TMP1918, "etc", 3);
STRING_LITERAL(TMP1919, "/etc/", 5);
STRING_LITERAL(TMP1921, "nimcfg", 6);
STRING_LITERAL(TMP1922, "nim.cfg", 7);
STRING_LITERAL(TMP1923, "nimrod.cfg", 10);
TY204171* condstack_204192;
extern TNimType NTI138; /* bool */
TNimType NTI204171; /* seq[bool] */
extern tgcheap47616 gch_47644;
extern NimStringDesc* libpath_170236;
extern NU32 gglobaloptions_170128;
extern TNimType NTI199190; /* TLexer */
extern stringtableobj132012* gconfigvars_170234;
extern NI gverbosity_170137;
extern NimStringDesc* gprojectpath_170238;
extern NimStringDesc* gprojectname_170237;
extern NimStringDesc* gprojectfull_170239;
N_NIMCALL(void, TMP717)(void* p, NI op) {
	TY204171* a;
	NI LOC1;
	a = (TY204171*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}

static N_INLINE(tcell45348*, usrtocell_49246)(void* usr) {
	tcell45348* result;
	result = 0;
	result = ((tcell45348*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell45348))))));
	return result;
}

static N_INLINE(void, rtladdzct_50804)(tcell45348* c) {
	addzct_49217((&gch_47644.Zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell45348* c;
	c = usrtocell_49246(p);
	{
		(*c).Refcount -= 8;
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		rtladdzct_50804(c);
	}
	LA3: ;
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
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (NI64)((*a).Sup.len * 1));
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tcell45348* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_49246(src);
		(*c).Refcount += 8;
	}
	LA3: ;
	{
		tcell45348* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_49246((*dest));
		{
			(*c).Refcount -= 8;
			if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA11;
			rtladdzct_50804(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(void, ppgettok_204009)(tlexer199190* l, ttoken199186* tok) {
	rawgettok_199238(l, tok);
	{
		while (1) {
			if (!((*tok).Toktype == ((NU8) 112))) goto LA2;
			rawgettok_199238(l, tok);
		} LA2: ;
	}
}

N_NIMCALL(NIM_BOOL, parseatom_204051)(tlexer199190* l, ttoken199186* tok) {
	NIM_BOOL result;
	result = 0;
	{
		if (!((*tok).Toktype == ((NU8) 92))) goto LA3;
		ppgettok_204009(l, tok);
		result = parseexpr_204042(l, tok);
		{
			if (!((*tok).Toktype == ((NU8) 93))) goto LA7;
			ppgettok_204009(l, tok);
		}
		goto LA5;
		LA7: ;
		{
			lexmessage_199289((&(*l)), ((NU16) 23), ((NimStringDesc*) &TMP1903));
		}
		LA5: ;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC13;
		if (!((*(*tok).Ident).Sup.Id == 44)) goto LA11;
		ppgettok_204009(l, tok);
		LOC13 = 0;
		LOC13 = parseatom_204051(l, tok);
		result = !(LOC13);
	}
	goto LA1;
	LA11: ;
	{
		result = isdefined_186046((*tok).Ident);
		ppgettok_204009(l, tok);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NIM_BOOL, parseandexpr_204091)(tlexer199190* l, ttoken199186* tok) {
	NIM_BOOL result;
	result = 0;
	result = parseatom_204051(l, tok);
	{
		while (1) {
			NIM_BOOL b;
			NIM_BOOL LOC3;
			if (!((*(*tok).Ident).Sup.Id == 2)) goto LA2;
			ppgettok_204009(l, tok);
			b = parseatom_204051(l, tok);
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

N_NIMCALL(NIM_BOOL, parseexpr_204042)(tlexer199190* l, ttoken199186* tok) {
	NIM_BOOL result;
	result = 0;
	result = parseandexpr_204091(l, tok);
	{
		while (1) {
			NIM_BOOL b;
			NIM_BOOL LOC3;
			if (!((*(*tok).Ident).Sup.Id == 48)) goto LA2;
			ppgettok_204009(l, tok);
			b = parseandexpr_204091(l, tok);
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

N_NIMCALL(NIM_BOOL, evalppif_204149)(tlexer199190* l, ttoken199186* tok) {
	NIM_BOOL result;
	result = 0;
	ppgettok_204009(l, tok);
	result = parseexpr_204042(l, tok);
	{
		if (!((*tok).Toktype == ((NU8) 106))) goto LA3;
		ppgettok_204009(l, tok);
	}
	goto LA1;
	LA3: ;
	{
		lexmessage_199289((&(*l)), ((NU16) 23), ((NimStringDesc*) &TMP1904));
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, doelse_204243)(tlexer199190* l, ttoken199186* tok) {
	{
		if (!((condstack_204192->Sup.len-1) < 0)) goto LA3;
		lexmessage_199289((&(*l)), ((NU16) 23), ((NimStringDesc*) &TMP1905));
	}
	LA3: ;
	ppgettok_204009(l, tok);
	{
		if (!((*tok).Toktype == ((NU8) 106))) goto LA7;
		ppgettok_204009(l, tok);
	}
	LA7: ;
	{
		if (!condstack_204192->data[(condstack_204192->Sup.len-1)]) goto LA11;
		jumptodirective_204233(l, tok, ((NU8) 0));
	}
	LA11: ;
}

N_NIMCALL(void, doelif_204265)(tlexer199190* l, ttoken199186* tok) {
	NIM_BOOL res;
	{
		if (!((condstack_204192->Sup.len-1) < 0)) goto LA3;
		lexmessage_199289((&(*l)), ((NU16) 23), ((NimStringDesc*) &TMP1905));
	}
	LA3: ;
	res = evalppif_204149(l, tok);
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = condstack_204192->data[(condstack_204192->Sup.len-1)];
		if (LOC7) goto LA8;
		LOC7 = !(res);
		LA8: ;
		if (!LOC7) goto LA9;
		jumptodirective_204233(l, tok, ((NU8) 1));
	}
	goto LA5;
	LA9: ;
	{
		condstack_204192->data[(condstack_204192->Sup.len-1)] = NIM_TRUE;
	}
	LA5: ;
}

N_NIMCALL(void, doend_204197)(tlexer199190* l, ttoken199186* tok) {
	{
		if (!((condstack_204192->Sup.len-1) < 0)) goto LA3;
		lexmessage_199289((&(*l)), ((NU16) 23), ((NimStringDesc*) &TMP1905));
	}
	LA3: ;
	ppgettok_204009(l, tok);
	condstack_204192 = (TY204171*) setLengthSeq(&(condstack_204192)->Sup, sizeof(NIM_BOOL), (condstack_204192->Sup.len-1));
}

N_NIMCALL(void, jumptodirective_204233)(tlexer199190* l, ttoken199186* tok, NU8 dest) {
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
				LOC5 = eqStrings((*(*tok).Ident).S, ((NimStringDesc*) &TMP1902));
				LA6: ;
				if (!LOC5) goto LA7;
				ppgettok_204009(l, tok);
				LOC9 = 0;
				LOC9 = whichkeyword_189382((*tok).Ident);
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
						doelse_204243(l, tok);
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
						doelif_204265(l, tok);
						goto LA1;
					}
					LA23: ;
				}
				break;
				case ((NU8) 21):
				{
					{
						if (!(nestedifs == 0)) goto LA28;
						doend_204197(l, tok);
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
				ppgettok_204009(l, tok);
			}
			goto LA3;
			LA7: ;
			{
				if (!((*tok).Toktype == ((NU8) 1))) goto LA36;
				lexmessage_199289((&(*l)), ((NU16) 23), ((NimStringDesc*) &TMP1906));
			}
			goto LA3;
			LA36: ;
			{
				ppgettok_204009(l, tok);
			}
			LA3: ;
		}
	} LA1: ;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(void, parsedirective_204369)(tlexer199190* l, ttoken199186* tok) {
	NU8 LOC1;
	ppgettok_204009(l, tok);
	LOC1 = 0;
	LOC1 = whichkeyword_189382((*tok).Ident);
	switch (LOC1) {
	case ((NU8) 30):
	{
		NIM_BOOL res;
		condstack_204192 = (TY204171*) setLengthSeq(&(condstack_204192)->Sup, sizeof(NIM_BOOL), (NI64)(condstack_204192->Sup.len + 1));
		res = evalppif_204149(l, tok);
		condstack_204192->data[(condstack_204192->Sup.len-1)] = res;
		{
			if (!!(res)) goto LA5;
			jumptodirective_204233(l, tok, ((NU8) 1));
		}
		LA5: ;
	}
	break;
	case ((NU8) 19):
	{
		doelif_204265(l, tok);
	}
	break;
	case ((NU8) 20):
	{
		doelse_204243(l, tok);
	}
	break;
	case ((NU8) 21):
	{
		doend_204197(l, tok);
	}
	break;
	case ((NU8) 178):
	{
		NimStringDesc* LOC11;
		NimStringDesc* LOC12;
		ppgettok_204009(l, tok);
		LOC11 = 0;
		LOC11 = toktostr_199271((&(*tok)));
		LOC12 = 0;
		LOC12 = nstFormat(LOC11, gconfigvars_170234, 5);
		msgwriteln_182947(LOC12);
		ppgettok_204009(l, tok);
	}
	break;
	default:
	{
		NimStringDesc* LOC14;
		LOC14 = 0;
		LOC14 = nsuNormalize((*(*tok).Ident).S);
		if (eqStrings(LOC14, ((NimStringDesc*) &TMP1908))) goto LA15;
		if (eqStrings(LOC14, ((NimStringDesc*) &TMP1909))) goto LA16;
		if (eqStrings(LOC14, ((NimStringDesc*) &TMP1910))) goto LA17;
		goto LA18;
		LA15: ;
		{
			NimStringDesc* key;
			NimStringDesc* LOC21;
			ppgettok_204009(l, tok);
			key = toktostr_199271((&(*tok)));
			ppgettok_204009(l, tok);
			LOC21 = 0;
			LOC21 = toktostr_199271((&(*tok)));
			putenv_121467(key, LOC21);
			ppgettok_204009(l, tok);
		}
		goto LA19;
		LA16: ;
		{
			NimStringDesc* key;
			NimStringDesc* LOC23;
			NimStringDesc* LOC24;
			NimStringDesc* LOC25;
			ppgettok_204009(l, tok);
			key = toktostr_199271((&(*tok)));
			ppgettok_204009(l, tok);
			LOC23 = 0;
			LOC24 = 0;
			LOC24 = toktostr_199271((&(*tok)));
			LOC25 = 0;
			LOC25 = getenv_121442(key);
			LOC23 = rawNewString(LOC24->Sup.len + LOC25->Sup.len + 0);
appendString(LOC23, LOC24);
appendString(LOC23, LOC25);
			putenv_121467(key, LOC23);
			ppgettok_204009(l, tok);
		}
		goto LA19;
		LA17: ;
		{
			NimStringDesc* key;
			NimStringDesc* LOC27;
			NimStringDesc* LOC28;
			NimStringDesc* LOC29;
			ppgettok_204009(l, tok);
			key = toktostr_199271((&(*tok)));
			ppgettok_204009(l, tok);
			LOC27 = 0;
			LOC28 = 0;
			LOC28 = getenv_121442(key);
			LOC29 = 0;
			LOC29 = toktostr_199271((&(*tok)));
			LOC27 = rawNewString(LOC28->Sup.len + LOC29->Sup.len + 0);
appendString(LOC27, LOC28);
appendString(LOC27, LOC29);
			putenv_121467(key, LOC27);
			ppgettok_204009(l, tok);
		}
		goto LA19;
		LA18: ;
		{
			NimStringDesc* LOC31;
			LOC31 = 0;
			LOC31 = toktostr_199271((&(*tok)));
			lexmessage_199289((&(*l)), ((NU16) 30), LOC31);
		}
		LA19: ;
	}
	break;
	}
}

N_NIMCALL(void, conftok_204413)(tlexer199190* l, ttoken199186* tok) {
	ppgettok_204009(l, tok);
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = !(((*tok).Ident == NIM_NIL));
			if (!(LOC3)) goto LA4;
			LOC3 = eqStrings((*(*tok).Ident).S, ((NimStringDesc*) &TMP1902));
			LA4: ;
			if (!LOC3) goto LA2;
			parsedirective_204369(l, tok);
		} LA2: ;
	}
}

static N_INLINE(tlineinfo181340, getlineinfo_199247)(tlexer199190* l, ttoken199186* tok) {
	tlineinfo181340 result;
	memset((void*)(&result), 0, sizeof(result));
	result = newlineinfo_181943((*l).Fileidx, (*tok).Line, (*tok).Col);
	return result;
}

N_NIMCALL(void, checksymbol_204449)(tlexer199190* l, ttoken199186* tok) {
	{
		NimStringDesc* LOC5;
		if (!!(((*tok).Toktype >= ((NU8) 2) && (*tok).Toktype <= ((NU8) 71) || (*tok).Toktype >= ((NU8) 86) && (*tok).Toktype <= ((NU8) 88)))) goto LA3;
		LOC5 = 0;
		LOC5 = toktostr_199271(tok);
		lexmessage_199289(l, ((NU16) 19), LOC5);
	}
	LA3: ;
}

N_NIMCALL(void, parseassignment_204486)(tlexer199190* l, ttoken199186* tok) {
	tlineinfo181340 info;
	NimStringDesc* s;
	NimStringDesc* val;
	NIM_BOOL percent;
	tident185021* LOC22;
	{
		NIM_BOOL LOC3;
		tident185021* LOC4;
		tident185021* LOC6;
		LOC3 = 0;
		LOC4 = 0;
		LOC4 = getident_185472(((NimStringDesc*) &TMP1911));
		LOC3 = ((*(*tok).Ident).Sup.Id == (*LOC4).Sup.Id);
		if (LOC3) goto LA5;
		LOC6 = 0;
		LOC6 = getident_185472(((NimStringDesc*) &TMP1912));
		LOC3 = ((*(*tok).Ident).Sup.Id == (*LOC6).Sup.Id);
		LA5: ;
		if (!LOC3) goto LA7;
		conftok_204413(l, tok);
	}
	LA7: ;
	info = getlineinfo_199247((&(*l)), (&(*tok)));
	checksymbol_204449((&(*l)), (&(*tok)));
	s = toktostr_199271((&(*tok)));
	conftok_204413(l, tok);
	val = copyString(((NimStringDesc*) &TMP1913));
	{
		while (1) {
			NimStringDesc* LOC11;
			if (!((*tok).Toktype == ((NU8) 109))) goto LA10;
			s = addChar(s, 46);
			conftok_204413(l, tok);
			checksymbol_204449((&(*l)), (&(*tok)));
			LOC11 = 0;
			LOC11 = toktostr_199271((&(*tok)));
			s = resizeString(s, LOC11->Sup.len + 0);
appendString(s, LOC11);
			conftok_204413(l, tok);
		} LA10: ;
	}
	{
		NimStringDesc* LOC16;
		if (!((*tok).Toktype == ((NU8) 94))) goto LA14;
		conftok_204413(l, tok);
		checksymbol_204449((&(*l)), (&(*tok)));
		LOC16 = 0;
		LOC16 = toktostr_199271((&(*tok)));
		val = resizeString(val, LOC16->Sup.len + 0);
appendString(val, LOC16);
		conftok_204413(l, tok);
		{
			if (!((*tok).Toktype == ((NU8) 95))) goto LA19;
			conftok_204413(l, tok);
		}
		goto LA17;
		LA19: ;
		{
			lexmessage_199289((&(*l)), ((NU16) 23), ((NimStringDesc*) &TMP1914));
		}
		LA17: ;
		val = addChar(val, 93);
	}
	LA14: ;
	LOC22 = 0;
	LOC22 = getident_185472(((NimStringDesc*) &TMP1915));
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
		conftok_204413(l, tok);
		checksymbol_204449((&(*l)), (&(*tok)));
		LOC33 = 0;
		LOC33 = toktostr_199271((&(*tok)));
		val = resizeString(val, LOC33->Sup.len + 0);
appendString(val, LOC33);
		conftok_204413(l, tok);
		{
			while (1) {
				NIM_BOOL LOC36;
				tident185021* LOC38;
				NimStringDesc* LOC39;
				LOC36 = 0;
				LOC36 = !(((*tok).Ident == NIM_NIL));
				if (!(LOC36)) goto LA37;
				LOC38 = 0;
				LOC38 = getident_185472(((NimStringDesc*) &TMP1916));
				LOC36 = ((*(*tok).Ident).Sup.Id == (*LOC38).Sup.Id);
				LA37: ;
				if (!LOC36) goto LA35;
				conftok_204413(l, tok);
				checksymbol_204449((&(*l)), (&(*tok)));
				LOC39 = 0;
				LOC39 = toktostr_199271((&(*tok)));
				val = resizeString(val, LOC39->Sup.len + 0);
appendString(val, LOC39);
				conftok_204413(l, tok);
			} LA35: ;
		}
	}
	LA27: ;
	{
		NimStringDesc* LOC44;
		if (!percent) goto LA42;
		LOC44 = 0;
		LOC44 = nstFormat(val, gconfigvars_170234, 3);
		processswitch_193040(s, LOC44, ((NU8) 2), info);
	}
	goto LA40;
	LA42: ;
	{
		processswitch_193040(s, val, ((NU8) 2), info);
	}
	LA40: ;
}

N_NIMCALL(void, readconfigfile_204576)(NimStringDesc* filename) {
	tlexer199190 l;
	ttoken199186 tok;
	tllstream196204* stream;
	memset((void*)(&l), 0, sizeof(l));
	l.Sup.Sup.m_type = (&NTI199190);
	memset((void*)(&tok), 0, sizeof(tok));
	stream = 0;
	stream = llstreamopen_196273(filename, ((NU8) 0));
	{
		if (!!((stream == NIM_NIL))) goto LA3;
		inittoken_199482((&tok));
		openlexer_199277((&l), filename, stream);
		tok.Toktype = ((NU8) 1);
		conftok_204413((&l), (&tok));
		{
			while (1) {
				if (!!((tok.Toktype == ((NU8) 1)))) goto LA6;
				parseassignment_204486((&l), (&tok));
			} LA6: ;
		}
		{
			if (!(0 < condstack_204192->Sup.len)) goto LA9;
			lexmessage_199289((&l), ((NU16) 23), ((NimStringDesc*) &TMP1906));
		}
		LA9: ;
		closelexer_199258((&l));
		{
			if (!(1 <= gverbosity_170137)) goto LA13;
			rawmessage_183415(((NU16) 271), filename);
		}
		LA13: ;
	}
	LA3: ;
}

N_NIMCALL(NimStringDesc*, getsystemconfigpath_204655)(NimStringDesc* filename) {
	NimStringDesc* result;
	NimStringDesc* p;
	TY193063 LOC1;
	result = 0;
	p = getprefixdir_170384();
	memset((void*)LOC1, 0, sizeof(LOC1));
	LOC1[0] = copyString(p);
	LOC1[1] = copyString(((NimStringDesc*) &TMP1917));
	LOC1[2] = copyString(filename);
	result = nosjoinPathOpenArray(LOC1, 3);
	{
		NIM_BOOL LOC4;
		TY193063 LOC7;
		LOC4 = 0;
		LOC4 = nosexistsFile(result);
		if (!!(LOC4)) goto LA5;
		memset((void*)LOC7, 0, sizeof(LOC7));
		LOC7[0] = copyString(p);
		LOC7[1] = copyString(((NimStringDesc*) &TMP1918));
		LOC7[2] = copyString(filename);
		result = nosjoinPathOpenArray(LOC7, 3);
	}
	LA5: ;
	{
		NIM_BOOL LOC10;
		NimStringDesc* LOC13;
		LOC10 = 0;
		LOC10 = nosexistsFile(result);
		if (!!(LOC10)) goto LA11;
		LOC13 = 0;
		LOC13 = rawNewString(filename->Sup.len + 5);
appendString(LOC13, ((NimStringDesc*) &TMP1919));
appendString(LOC13, filename);
		result = LOC13;
	}
	LA11: ;
	return result;
}

N_NIMCALL(NimStringDesc*, getuserconfigpath_204643)(NimStringDesc* filename) {
	NimStringDesc* result;
	NimStringDesc* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = nosgetConfigDir();
	result = nosjoinPath(LOC1, filename);
	return result;
}

static N_INLINE(NIM_BOOL, fileexists_117010)(NimStringDesc* filename) {
	NIM_BOOL result;
	result = 0;
	result = nosexistsFile(filename);
	return result;
}

N_NIMCALL(void, loadconfigs_204811)(NimStringDesc* cfg) {
	NimStringDesc* pd;
	{
		NimStringDesc* prefix;
		if (!((libpath_170236) && (libpath_170236)->Sup.len == 0)) goto LA3;
		prefix = getprefixdir_170384();
		{
			NimStringDesc* LOC9;
			if (!eqStrings(prefix, ((NimStringDesc*) &TMP1897))) goto LA7;
			LOC9 = 0;
			LOC9 = libpath_170236; libpath_170236 = copyStringRC1(((NimStringDesc*) &TMP1898));
			if (LOC9) nimGCunrefNoCycle(LOC9);
		}
		goto LA5;
		LA7: ;
		{
			NimStringDesc* LOC13;
			if (!eqStrings(prefix, ((NimStringDesc*) &TMP1899))) goto LA11;
			LOC13 = 0;
			LOC13 = libpath_170236; libpath_170236 = copyStringRC1(((NimStringDesc*) &TMP1900));
			if (LOC13) nimGCunrefNoCycle(LOC13);
		}
		goto LA5;
		LA11: ;
		{
			asgnRefNoCycle((void**) (&libpath_170236), nosjoinPath(prefix, ((NimStringDesc*) &TMP1901)));
		}
		LA5: ;
	}
	LA3: ;
	{
		NimStringDesc* LOC19;
		if (!!(((gglobaloptions_170128 &(1<<((((NU8) 16))&31)))!=0))) goto LA17;
		LOC19 = 0;
		LOC19 = getsystemconfigpath_204655(cfg);
		readconfigfile_204576(LOC19);
	}
	LA17: ;
	{
		NimStringDesc* LOC24;
		if (!!(((gglobaloptions_170128 &(1<<((((NU8) 18))&31)))!=0))) goto LA22;
		LOC24 = 0;
		LOC24 = getuserconfigpath_204643(cfg);
		readconfigfile_204576(LOC24);
	}
	LA22: ;
	{
		if (!(0 < gprojectpath_170238->Sup.len)) goto LA27;
		pd = copyString(gprojectpath_170238);
	}
	goto LA25;
	LA27: ;
	{
		pd = nosgetCurrentDir();
	}
	LA25: ;
	{
		if (!!(((gglobaloptions_170128 &(1<<((((NU8) 19))&31)))!=0))) goto LA32;
		{
			NimStringDesc* dir_205044;
			dir_205044 = 0;
			{
				NimStringDesc* current_205064;
				if (!NIM_FALSE) goto LA37;
				current_205064 = copyString(pd);
				{
					NimStringDesc* LOC43;
					if (!NIM_FALSE) goto LA41;
					dir_205044 = pd;
					LOC43 = 0;
					LOC43 = HEX2F_118299(dir_205044, cfg);
					readconfigfile_204576(LOC43);
				}
				LA41: ;
				{
					while (1) {
						NimStringDesc* LOC51;
						{
							NIM_BOOL LOC48;
							LOC48 = 0;
							LOC48 = nosisRootDir(current_205064);
							if (!LOC48) goto LA49;
							goto LA44;
						}
						LA49: ;
						current_205064 = nosparentDir(current_205064);
						dir_205044 = current_205064;
						LOC51 = 0;
						LOC51 = HEX2F_118299(dir_205044, cfg);
						readconfigfile_204576(LOC51);
					}
				} LA44: ;
			}
			goto LA35;
			LA37: ;
			{
				{
					NI i_205066;
					NI HEX3Atmp_205068;
					NI res_205070;
					i_205066 = 0;
					HEX3Atmp_205068 = 0;
					HEX3Atmp_205068 = (NI64)(pd->Sup.len - 2);
					res_205070 = 0;
					{
						while (1) {
							if (!(res_205070 <= HEX3Atmp_205068)) goto LA55;
							i_205066 = res_205070;
							{
								NIM_BOOL LOC58;
								NIM_BOOL LOC60;
								NimStringDesc* LOC64;
								LOC58 = 0;
								LOC58 = (((NU8)(pd->data[i_205066])) == ((NU8)(47)) || ((NU8)(pd->data[i_205066])) == ((NU8)(47)));
								if (!(LOC58)) goto LA59;
								LOC60 = 0;
								LOC60 = (i_205066 == 0);
								if (LOC60) goto LA61;
								LOC60 = !((((NU8)(pd->data[(NI64)(i_205066 - 1)])) == ((NU8)(47)) || ((NU8)(pd->data[(NI64)(i_205066 - 1)])) == ((NU8)(47))));
								LA61: ;
								LOC58 = LOC60;
								LA59: ;
								if (!LOC58) goto LA62;
								dir_205044 = copyStrLast(pd, 0, i_205066);
								LOC64 = 0;
								LOC64 = HEX2F_118299(dir_205044, cfg);
								readconfigfile_204576(LOC64);
							}
							LA62: ;
							res_205070 += 1;
						} LA55: ;
					}
				}
				{
					NimStringDesc* LOC69;
					if (!NIM_FALSE) goto LA67;
					dir_205044 = pd;
					LOC69 = 0;
					LOC69 = HEX2F_118299(dir_205044, cfg);
					readconfigfile_204576(LOC69);
				}
				LA67: ;
			}
			LA35: ;
		}
	}
	LA32: ;
	{
		NimStringDesc* LOC74;
		if (!!(((gglobaloptions_170128 &(1<<((((NU8) 17))&31)))!=0))) goto LA72;
		LOC74 = 0;
		LOC74 = HEX2F_118299(pd, cfg);
		readconfigfile_204576(LOC74);
		{
			NimStringDesc* projectconfig;
			if (!!((gprojectname_170237->Sup.len == 0))) goto LA77;
			projectconfig = noschangeFileExt(gprojectfull_170239, ((NimStringDesc*) &TMP1921));
			{
				NIM_BOOL LOC81;
				LOC81 = 0;
				LOC81 = fileexists_117010(projectconfig);
				if (!!(LOC81)) goto LA82;
				projectconfig = noschangeFileExt(gprojectfull_170239, ((NimStringDesc*) &TMP1922));
			}
			LA82: ;
			{
				NIM_BOOL LOC86;
				LOC86 = 0;
				LOC86 = fileexists_117010(projectconfig);
				if (!!(LOC86)) goto LA87;
				projectconfig = noschangeFileExt(gprojectfull_170239, ((NimStringDesc*) &TMP1923));
				{
					NIM_BOOL LOC91;
					LOC91 = 0;
					LOC91 = fileexists_117010(projectconfig);
					if (!LOC91) goto LA92;
					rawmessage_183415(((NU16) 234), projectconfig);
				}
				LA92: ;
			}
			LA87: ;
			readconfigfile_204576(projectconfig);
		}
		LA77: ;
	}
	LA72: ;
}
NIM_EXTERNC N_NOINLINE(void, compiler_nimconfInit)(void) {
	if (condstack_204192) nimGCunrefNoCycle(condstack_204192);
	condstack_204192 = (TY204171*) newSeqRC1((&NTI204171), 0);
}

NIM_EXTERNC N_NOINLINE(void, compiler_nimconfDatInit)(void) {
NTI204171.size = sizeof(TY204171*);
NTI204171.kind = 24;
NTI204171.base = (&NTI138);
NTI204171.flags = 2;
NTI204171.marker = TMP717;
}

