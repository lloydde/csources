/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tbaselexer197024 tbaselexer197024;
typedef struct TNimObject TNimObject;
typedef struct tllstream196204 tllstream196204;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
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
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
N_NOCONV(void*, alloc_6001)(NI size);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(void, fillbuffer_197097)(tbaselexer197024* l);
N_NIMCALL(NI, llstreamread_196614)(tllstream196204* s, void* buf, NI buflen);
N_NOCONV(void*, realloc_6033)(void* p, NI newsize);
N_NIMCALL(void, skiputf8bom_198419)(tbaselexer197024* l);
N_NIMCALL(NI, fillbaselexer_197828)(tbaselexer197024* l, NI pos);
N_NOCONV(void, dealloc_6048)(void* p);
N_NIMCALL(void, llstreamclose_196351)(tllstream196204* s);
extern TNimType NTI3411; /* RootObj */
TNimType NTI197024; /* TBaseLexer */
extern TNimType NTI108; /* int */
extern TNimType NTI151; /* cstring */
extern TNimType NTI196206; /* PLLStream */

N_NIMCALL(void, fillbuffer_197097)(tbaselexer197024* l) {
	NI charsread;
	NI tocopy;
	NI s;
	NI oldbuflen;
	NI LOC5;
	charsread = 0;
	tocopy = 0;
	s = 0;
	oldbuflen = 0;
	tocopy = (NI64)((NI64)((*l).Buflen - (*l).Sentinel) - 1);
	{
		if (!(0 < tocopy)) goto LA3;
		memmove(((void*) ((*l).Buf)), ((void*) ((&(*l).Buf[(NI64)((*l).Sentinel + 1)]))), (NI64)(tocopy * 1));
	}
	LA3: ;
	LOC5 = 0;
	LOC5 = llstreamread_196614((*l).Stream, ((void*) ((&(*l).Buf[tocopy]))), (NI64)((NI64)((*l).Sentinel + 1) * 1));
	charsread = (NI64)(LOC5 / 1);
	s = (NI64)(tocopy + charsread);
	{
		if (!(charsread < (NI64)((*l).Sentinel + 1))) goto LA8;
		(*l).Buf[s] = 0;
		(*l).Sentinel = s;
	}
	goto LA6;
	LA8: ;
	{
		s -= 1;
		{
			while (1) {
				{
					while (1) {
						NIM_BOOL LOC15;
						LOC15 = 0;
						LOC15 = (0 <= s);
						if (!(LOC15)) goto LA16;
						LOC15 = !((((NU8)((*l).Buf[s])) == ((NU8)(13)) || ((NU8)((*l).Buf[s])) == ((NU8)(10))));
						LA16: ;
						if (!LOC15) goto LA14;
						s -= 1;
					} LA14: ;
				}
				{
					if (!(0 <= s)) goto LA19;
					(*l).Sentinel = s;
					goto LA11;
				}
				goto LA17;
				LA19: ;
				{
					void* LOC22;
					NI LOC23;
					oldbuflen = (*l).Buflen;
					(*l).Buflen = (NI64)((*l).Buflen * 2);
					LOC22 = 0;
					LOC22 = realloc_6033(((void*) ((*l).Buf)), (NI64)((*l).Buflen * 1));
					(*l).Buf = ((NCSTRING) (LOC22));
					LOC23 = 0;
					LOC23 = llstreamread_196614((*l).Stream, ((void*) ((&(*l).Buf[oldbuflen]))), (NI64)(oldbuflen * 1));
					charsread = (NI64)(LOC23 / 1);
					{
						if (!(charsread < oldbuflen)) goto LA26;
						(*l).Buf[(NI64)(oldbuflen + charsread)] = 0;
						(*l).Sentinel = (NI64)(oldbuflen + charsread);
						goto LA11;
					}
					LA26: ;
					s = (NI64)((*l).Buflen - 1);
				}
				LA17: ;
			}
		} LA11: ;
	}
	LA6: ;
}

N_NIMCALL(void, skiputf8bom_198419)(tbaselexer197024* l) {
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		LOC3 = 0;
		LOC4 = 0;
		LOC4 = ((NU8)((*l).Buf[0]) == (NU8)(239));
		if (!(LOC4)) goto LA5;
		LOC4 = ((NU8)((*l).Buf[1]) == (NU8)(187));
		LA5: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA6;
		LOC3 = ((NU8)((*l).Buf[2]) == (NU8)(191));
		LA6: ;
		if (!LOC3) goto LA7;
		(*l).Bufpos += 3;
		(*l).Linestart += 3;
	}
	LA7: ;
}

N_NIMCALL(void, openbaselexer_197035)(tbaselexer197024* l, tllstream196204* inputstream, NI buflen) {
	void* LOC1;
	(*l).Bufpos = 0;
	(*l).Buflen = buflen;
	LOC1 = 0;
	LOC1 = alloc_6001((NI64)(buflen * 1));
	(*l).Buf = ((NCSTRING) (LOC1));
	(*l).Sentinel = (NI64)(buflen - 1);
	(*l).Linestart = 0;
	(*l).Linenumber = 1;
	unsureAsgnRef((void**) (&(*l).Stream), inputstream);
	fillbuffer_197097(l);
	skiputf8bom_198419(l);
}

N_NIMCALL(NI, getcolnumber_197059)(tbaselexer197024* l, NI pos) {
	NI result;
	result = 0;
	result = ((NI64)(pos - (*l).Linestart) > 0? ((NI64)(pos - (*l).Linestart)) : -((NI64)(pos - (*l).Linestart)));
	return result;
}

N_NIMCALL(NI, fillbaselexer_197828)(tbaselexer197024* l, NI pos) {
	NI result;
	result = 0;
	{
		if (!(pos < (*l).Sentinel)) goto LA3;
		result = (NI64)(pos + 1);
	}
	goto LA1;
	LA3: ;
	{
		fillbuffer_197097(l);
		(*l).Bufpos = 0;
		result = 0;
	}
	LA1: ;
	(*l).Linestart = result;
	return result;
}

N_NIMCALL(NI, handlecr_197066)(tbaselexer197024* l, NI pos) {
	NI result;
	result = 0;
	(*l).Linenumber += 1;
	result = fillbaselexer_197828(l, pos);
	{
		if (!((NU8)((*l).Buf[result]) == (NU8)(10))) goto LA3;
		result = fillbaselexer_197828(l, result);
	}
	LA3: ;
	return result;
}

N_NIMCALL(NI, handlelf_197074)(tbaselexer197024* l, NI pos) {
	NI result;
	result = 0;
	(*l).Linenumber += 1;
	result = fillbaselexer_197828(l, pos);
	return result;
}

N_NIMCALL(void, closebaselexer_197045)(tbaselexer197024* l) {
	dealloc_6048(((void*) ((*l).Buf)));
	llstreamclose_196351((*l).Stream);
}
NIM_EXTERNC N_NOINLINE(void, compiler_nimlexbaseInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_nimlexbaseDatInit)(void) {
static TNimNode* TMP1008[7];
static TNimNode TMP710[8];
NTI197024.size = sizeof(tbaselexer197024);
NTI197024.kind = 17;
NTI197024.base = (&NTI3411);
TMP1008[0] = &TMP710[1];
TMP710[1].kind = 1;
TMP710[1].offset = offsetof(tbaselexer197024, Bufpos);
TMP710[1].typ = (&NTI108);
TMP710[1].name = "bufpos";
TMP1008[1] = &TMP710[2];
TMP710[2].kind = 1;
TMP710[2].offset = offsetof(tbaselexer197024, Buf);
TMP710[2].typ = (&NTI151);
TMP710[2].name = "buf";
TMP1008[2] = &TMP710[3];
TMP710[3].kind = 1;
TMP710[3].offset = offsetof(tbaselexer197024, Buflen);
TMP710[3].typ = (&NTI108);
TMP710[3].name = "bufLen";
TMP1008[3] = &TMP710[4];
TMP710[4].kind = 1;
TMP710[4].offset = offsetof(tbaselexer197024, Stream);
TMP710[4].typ = (&NTI196206);
TMP710[4].name = "stream";
TMP1008[4] = &TMP710[5];
TMP710[5].kind = 1;
TMP710[5].offset = offsetof(tbaselexer197024, Linenumber);
TMP710[5].typ = (&NTI108);
TMP710[5].name = "lineNumber";
TMP1008[5] = &TMP710[6];
TMP710[6].kind = 1;
TMP710[6].offset = offsetof(tbaselexer197024, Sentinel);
TMP710[6].typ = (&NTI108);
TMP710[6].name = "sentinel";
TMP1008[6] = &TMP710[7];
TMP710[7].kind = 1;
TMP710[7].offset = offsetof(tbaselexer197024, Linestart);
TMP710[7].typ = (&NTI108);
TMP710[7].name = "lineStart";
TMP710[0].len = 7; TMP710[0].kind = 2; TMP710[0].sons = &TMP1008[0];
NTI197024.node = &TMP710[0];
}

