/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct tinfoos118042 tinfoos118042;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tinfocpu118446 tinfocpu118446;
typedef struct tcell38848 tcell38848;
typedef struct TNimType TNimType;
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
typedef struct TNimNode TNimNode;
typedef struct tbasechunk21436 tbasechunk21436;
typedef struct tfreecell21428 tfreecell21428;
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
};
struct tinfoos118042 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
NimStringDesc* Field3;
NimStringDesc* Field4;
NimStringDesc* Field5;
NimStringDesc* Field6;
NimStringDesc* Field7;
NimStringDesc* Field8;
NimStringDesc* Field9;
NimStringDesc* Field10;
NimStringDesc* Field11;
NU8 Field12;
};
typedef tinfoos118042 TY118062[23];
typedef NimStringDesc* TY118456[2];
struct tinfocpu118446 {
NimStringDesc* Field0;
NI Field1;
NU8 Field2;
NI Field3;
NI Field4;
};
typedef tinfocpu118446 TY118461[14];
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
typedef NI TY21418[8];
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
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tfreecell21428 {
tfreecell21428* Next;
NI Zerofield;
};
N_NIMCALL(void, settarget_118586)(NU8 o, NU8 c);
N_NIMCALL(void, hiddenraiseassert_76017)(NimStringDesc* msg);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, divInt)(NI a, NI b);
N_NOINLINE(void, raiseDivByZero)(void);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell38848*, usrtocell_42239)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdzct_43802)(tcell38848* c);
N_NOINLINE(void, addzct_42215)(tcellseq38864* s, tcell38848* c);
N_NIMCALL(NU8, nametoos_118569)(NimStringDesc* name);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(NU8, nametocpu_118573)(NimStringDesc* name);
STRING_LITERAL(TMP387, "DOS", 3);
STRING_LITERAL(TMP388, "..", 2);
STRING_LITERAL(TMP389, "$1.dll", 6);
STRING_LITERAL(TMP390, "/", 1);
STRING_LITERAL(TMP391, ".obj", 4);
STRING_LITERAL(TMP392, "\015\012", 2);
STRING_LITERAL(TMP393, ";", 1);
STRING_LITERAL(TMP394, "\\", 1);
STRING_LITERAL(TMP395, ".bat", 4);
STRING_LITERAL(TMP396, ".", 1);
STRING_LITERAL(TMP397, ".exe", 4);
STRING_LITERAL(TMP398, "Windows", 7);
STRING_LITERAL(TMP399, "OS2", 3);
STRING_LITERAL(TMP400, "Linux", 5);
STRING_LITERAL(TMP401, "lib$1.so", 8);
STRING_LITERAL(TMP402, ".o", 2);
STRING_LITERAL(TMP403, "\012", 1);
STRING_LITERAL(TMP404, ":", 1);
STRING_LITERAL(TMP405, ".sh", 3);
STRING_LITERAL(TMP406, "", 0);
STRING_LITERAL(TMP407, "MorphOS", 7);
STRING_LITERAL(TMP408, "SkyOS", 5);
STRING_LITERAL(TMP409, "Solaris", 7);
STRING_LITERAL(TMP410, "Irix", 4);
STRING_LITERAL(TMP411, "NetBSD", 6);
STRING_LITERAL(TMP412, "FreeBSD", 7);
STRING_LITERAL(TMP413, "OpenBSD", 7);
STRING_LITERAL(TMP414, "AIX", 3);
STRING_LITERAL(TMP415, "PalmOS", 6);
STRING_LITERAL(TMP416, "QNX", 3);
STRING_LITERAL(TMP417, "Amiga", 5);
STRING_LITERAL(TMP418, "$1.library", 10);
STRING_LITERAL(TMP419, "Atari", 5);
STRING_LITERAL(TMP420, ".tpp", 4);
STRING_LITERAL(TMP421, "Netware", 7);
STRING_LITERAL(TMP422, "$1.nlm", 6);
STRING_LITERAL(TMP423, ".nlm", 4);
STRING_LITERAL(TMP424, "MacOS", 5);
STRING_LITERAL(TMP425, "::", 2);
STRING_LITERAL(TMP426, "$1Lib", 5);
STRING_LITERAL(TMP427, "\015", 1);
STRING_LITERAL(TMP428, ",", 1);
STRING_LITERAL(TMP429, "MacOSX", 6);
STRING_LITERAL(TMP430, "lib$1.dylib", 11);
STRING_LITERAL(TMP431, "Haiku", 5);
STRING_LITERAL(TMP432, "JS", 2);
STRING_LITERAL(TMP433, "NimrodVM", 8);
STRING_LITERAL(TMP434, "Standalone", 10);
NIM_CONST TY118062 os_118061 = {{((NimStringDesc*) &TMP387),
((NimStringDesc*) &TMP388),
((NimStringDesc*) &TMP389),
((NimStringDesc*) &TMP390),
((NimStringDesc*) &TMP391),
((NimStringDesc*) &TMP392),
((NimStringDesc*) &TMP393),
((NimStringDesc*) &TMP394),
((NimStringDesc*) &TMP395),
((NimStringDesc*) &TMP396),
((NimStringDesc*) &TMP397),
((NimStringDesc*) &TMP396),
2}
,
{((NimStringDesc*) &TMP398),
((NimStringDesc*) &TMP388),
((NimStringDesc*) &TMP389),
((NimStringDesc*) &TMP390),
((NimStringDesc*) &TMP391),
((NimStringDesc*) &TMP392),
((NimStringDesc*) &TMP393),
((NimStringDesc*) &TMP394),
((NimStringDesc*) &TMP395),
((NimStringDesc*) &TMP396),
((NimStringDesc*) &TMP397),
((NimStringDesc*) &TMP396),
2}
,
{((NimStringDesc*) &TMP399),
((NimStringDesc*) &TMP388),
((NimStringDesc*) &TMP389),
((NimStringDesc*) &TMP390),
((NimStringDesc*) &TMP391),
((NimStringDesc*) &TMP392),
((NimStringDesc*) &TMP393),
((NimStringDesc*) &TMP394),
((NimStringDesc*) &TMP395),
((NimStringDesc*) &TMP396),
((NimStringDesc*) &TMP397),
((NimStringDesc*) &TMP396),
2}
,
{((NimStringDesc*) &TMP400),
((NimStringDesc*) &TMP388),
((NimStringDesc*) &TMP401),
((NimStringDesc*) &TMP390),
((NimStringDesc*) &TMP402),
((NimStringDesc*) &TMP403),
((NimStringDesc*) &TMP404),
((NimStringDesc*) &TMP390),
((NimStringDesc*) &TMP405),
((NimStringDesc*) &TMP396),
((NimStringDesc*) &TMP406),
((NimStringDesc*) &TMP396),
5}
,
{((NimStringDesc*) &TMP407),
((NimStringDesc*) &TMP388),
((NimStringDesc*) &TMP401),
((NimStringDesc*) &TMP390),
((NimStringDesc*) &TMP402),
((NimStringDesc*) &TMP403),
((NimStringDesc*) &TMP404),
((NimStringDesc*) &TMP390),
((NimStringDesc*) &TMP405),
((NimStringDesc*) &TMP396),
((NimStringDesc*) &TMP406),
((NimStringDesc*) &TMP396),
5}
,
{((NimStringDesc*) &TMP408),
((NimStringDesc*) &TMP388),
((NimStringDesc*) &TMP401),
((NimStringDesc*) &TMP390),
((NimStringDesc*) &TMP402),
((NimStringDesc*) &TMP403),
((NimStringDesc*) &TMP404),
((NimStringDesc*) &TMP390),
((NimStringDesc*) &TMP405),
((NimStringDesc*) &TMP396),
((NimStringDesc*) &TMP406),
((NimStringDesc*) &TMP396),
5}
,
{((NimStringDesc*) &TMP409),
((NimStringDesc*) &TMP388),
((NimStringDesc*) &TMP401),
((NimStringDesc*) &TMP390),
((NimStringDesc*) &TMP402),
((NimStringDesc*) &TMP403),
((NimStringDesc*) &TMP404),
((NimStringDesc*) &TMP390),
((NimStringDesc*) &TMP405),
((NimStringDesc*) &TMP396),
((NimStringDesc*) &TMP406),
((NimStringDesc*) &TMP396),
5}
,
{((NimStringDesc*) &TMP410),
((NimStringDesc*) &TMP388),
((NimStringDesc*) &TMP401),
((NimStringDesc*) &TMP390),
((NimStringDesc*) &TMP402),
((NimStringDesc*) &TMP403),
((NimStringDesc*) &TMP404),
((NimStringDesc*) &TMP390),
((NimStringDesc*) &TMP405),
((NimStringDesc*) &TMP396),
((NimStringDesc*) &TMP406),
((NimStringDesc*) &TMP396),
5}
,
{((NimStringDesc*) &TMP411),
((NimStringDesc*) &TMP388),
((NimStringDesc*) &TMP401),
((NimStringDesc*) &TMP390),
((NimStringDesc*) &TMP402),
((NimStringDesc*) &TMP403),
((NimStringDesc*) &TMP404),
((NimStringDesc*) &TMP390),
((NimStringDesc*) &TMP405),
((NimStringDesc*) &TMP396),
((NimStringDesc*) &TMP406),
((NimStringDesc*) &TMP396),
5}
,
{((NimStringDesc*) &TMP412),
((NimStringDesc*) &TMP388),
((NimStringDesc*) &TMP401),
((NimStringDesc*) &TMP390),
((NimStringDesc*) &TMP402),
((NimStringDesc*) &TMP403),
((NimStringDesc*) &TMP404),
((NimStringDesc*) &TMP390),
((NimStringDesc*) &TMP405),
((NimStringDesc*) &TMP396),
((NimStringDesc*) &TMP406),
((NimStringDesc*) &TMP396),
5}
,
{((NimStringDesc*) &TMP413),
((NimStringDesc*) &TMP388),
((NimStringDesc*) &TMP401),
((NimStringDesc*) &TMP390),
((NimStringDesc*) &TMP402),
((NimStringDesc*) &TMP403),
((NimStringDesc*) &TMP404),
((NimStringDesc*) &TMP390),
((NimStringDesc*) &TMP405),
((NimStringDesc*) &TMP396),
((NimStringDesc*) &TMP406),
((NimStringDesc*) &TMP396),
5}
,
{((NimStringDesc*) &TMP414),
((NimStringDesc*) &TMP388),
((NimStringDesc*) &TMP401),
((NimStringDesc*) &TMP390),
((NimStringDesc*) &TMP402),
((NimStringDesc*) &TMP403),
((NimStringDesc*) &TMP404),
((NimStringDesc*) &TMP390),
((NimStringDesc*) &TMP405),
((NimStringDesc*) &TMP396),
((NimStringDesc*) &TMP406),
((NimStringDesc*) &TMP396),
5}
,
{((NimStringDesc*) &TMP415),
((NimStringDesc*) &TMP388),
((NimStringDesc*) &TMP401),
((NimStringDesc*) &TMP390),
((NimStringDesc*) &TMP402),
((NimStringDesc*) &TMP403),
((NimStringDesc*) &TMP404),
((NimStringDesc*) &TMP390),
((NimStringDesc*) &TMP405),
((NimStringDesc*) &TMP396),
((NimStringDesc*) &TMP406),
((NimStringDesc*) &TMP396),
1}
,
{((NimStringDesc*) &TMP416),
((NimStringDesc*) &TMP388),
((NimStringDesc*) &TMP401),
((NimStringDesc*) &TMP390),
((NimStringDesc*) &TMP402),
((NimStringDesc*) &TMP403),
((NimStringDesc*) &TMP404),
((NimStringDesc*) &TMP390),
((NimStringDesc*) &TMP405),
((NimStringDesc*) &TMP396),
((NimStringDesc*) &TMP406),
((NimStringDesc*) &TMP396),
5}
,
{((NimStringDesc*) &TMP417),
((NimStringDesc*) &TMP388),
((NimStringDesc*) &TMP418),
((NimStringDesc*) &TMP390),
((NimStringDesc*) &TMP402),
((NimStringDesc*) &TMP403),
((NimStringDesc*) &TMP404),
((NimStringDesc*) &TMP390),
((NimStringDesc*) &TMP405),
((NimStringDesc*) &TMP396),
((NimStringDesc*) &TMP406),
((NimStringDesc*) &TMP396),
1}
,
{((NimStringDesc*) &TMP419),
((NimStringDesc*) &TMP388),
((NimStringDesc*) &TMP389),
((NimStringDesc*) &TMP390),
((NimStringDesc*) &TMP402),
((NimStringDesc*) &TMP403),
((NimStringDesc*) &TMP404),
((NimStringDesc*) &TMP390),
((NimStringDesc*) &TMP406),
((NimStringDesc*) &TMP396),
((NimStringDesc*) &TMP420),
((NimStringDesc*) &TMP396),
1}
,
{((NimStringDesc*) &TMP421),
((NimStringDesc*) &TMP388),
((NimStringDesc*) &TMP422),
((NimStringDesc*) &TMP390),
((NimStringDesc*) &TMP406),
((NimStringDesc*) &TMP392),
((NimStringDesc*) &TMP404),
((NimStringDesc*) &TMP390),
((NimStringDesc*) &TMP405),
((NimStringDesc*) &TMP396),
((NimStringDesc*) &TMP423),
((NimStringDesc*) &TMP396),
2}
,
{((NimStringDesc*) &TMP424),
((NimStringDesc*) &TMP425),
((NimStringDesc*) &TMP426),
((NimStringDesc*) &TMP404),
((NimStringDesc*) &TMP402),
((NimStringDesc*) &TMP427),
((NimStringDesc*) &TMP428),
((NimStringDesc*) &TMP404),
((NimStringDesc*) &TMP406),
((NimStringDesc*) &TMP404),
((NimStringDesc*) &TMP406),
((NimStringDesc*) &TMP396),
2}
,
{((NimStringDesc*) &TMP429),
((NimStringDesc*) &TMP388),
((NimStringDesc*) &TMP430),
((NimStringDesc*) &TMP404),
((NimStringDesc*) &TMP402),
((NimStringDesc*) &TMP403),
((NimStringDesc*) &TMP404),
((NimStringDesc*) &TMP390),
((NimStringDesc*) &TMP405),
((NimStringDesc*) &TMP396),
((NimStringDesc*) &TMP406),
((NimStringDesc*) &TMP396),
13}
,
{((NimStringDesc*) &TMP431),
((NimStringDesc*) &TMP388),
((NimStringDesc*) &TMP401),
((NimStringDesc*) &TMP404),
((NimStringDesc*) &TMP402),
((NimStringDesc*) &TMP403),
((NimStringDesc*) &TMP404),
((NimStringDesc*) &TMP390),
((NimStringDesc*) &TMP405),
((NimStringDesc*) &TMP396),
((NimStringDesc*) &TMP406),
((NimStringDesc*) &TMP396),
13}
,
{((NimStringDesc*) &TMP432),
((NimStringDesc*) &TMP388),
((NimStringDesc*) &TMP401),
((NimStringDesc*) &TMP390),
((NimStringDesc*) &TMP402),
((NimStringDesc*) &TMP403),
((NimStringDesc*) &TMP404),
((NimStringDesc*) &TMP390),
((NimStringDesc*) &TMP405),
((NimStringDesc*) &TMP396),
((NimStringDesc*) &TMP406),
((NimStringDesc*) &TMP396),
0}
,
{((NimStringDesc*) &TMP433),
((NimStringDesc*) &TMP388),
((NimStringDesc*) &TMP401),
((NimStringDesc*) &TMP390),
((NimStringDesc*) &TMP402),
((NimStringDesc*) &TMP403),
((NimStringDesc*) &TMP404),
((NimStringDesc*) &TMP390),
((NimStringDesc*) &TMP405),
((NimStringDesc*) &TMP396),
((NimStringDesc*) &TMP406),
((NimStringDesc*) &TMP396),
0}
,
{((NimStringDesc*) &TMP434),
((NimStringDesc*) &TMP388),
((NimStringDesc*) &TMP401),
((NimStringDesc*) &TMP390),
((NimStringDesc*) &TMP402),
((NimStringDesc*) &TMP403),
((NimStringDesc*) &TMP404),
((NimStringDesc*) &TMP390),
((NimStringDesc*) &TMP405),
((NimStringDesc*) &TMP396),
((NimStringDesc*) &TMP406),
((NimStringDesc*) &TMP396),
0}
}
;
STRING_LITERAL(TMP435, "littleEndian", 12);
STRING_LITERAL(TMP436, "bigEndian", 9);
NIM_CONST TY118456 endiantostr_118455 = {((NimStringDesc*) &TMP435),
((NimStringDesc*) &TMP436)}
;
STRING_LITERAL(TMP437, "i386", 4);
STRING_LITERAL(TMP438, "m68k", 4);
STRING_LITERAL(TMP439, "alpha", 5);
STRING_LITERAL(TMP440, "powerpc", 7);
STRING_LITERAL(TMP441, "powerpc64", 9);
STRING_LITERAL(TMP442, "sparc", 5);
STRING_LITERAL(TMP443, "vm", 2);
STRING_LITERAL(TMP444, "ia64", 4);
STRING_LITERAL(TMP445, "amd64", 5);
STRING_LITERAL(TMP446, "mips", 4);
STRING_LITERAL(TMP447, "arm", 3);
STRING_LITERAL(TMP448, "js", 2);
STRING_LITERAL(TMP449, "nimrodvm", 8);
STRING_LITERAL(TMP450, "avr", 3);
NIM_CONST TY118461 cpu_118460 = {{((NimStringDesc*) &TMP437),
32,
((NU8) 0),
64,
32}
,
{((NimStringDesc*) &TMP438),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP439),
64,
((NU8) 0),
64,
64}
,
{((NimStringDesc*) &TMP440),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP441),
64,
((NU8) 1),
64,
64}
,
{((NimStringDesc*) &TMP442),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP443),
32,
((NU8) 0),
64,
32}
,
{((NimStringDesc*) &TMP444),
64,
((NU8) 0),
64,
64}
,
{((NimStringDesc*) &TMP445),
64,
((NU8) 0),
64,
64}
,
{((NimStringDesc*) &TMP446),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP447),
32,
((NU8) 0),
64,
32}
,
{((NimStringDesc*) &TMP448),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP449),
32,
((NU8) 1),
64,
32}
,
{((NimStringDesc*) &TMP450),
16,
((NU8) 0),
32,
16}
}
;
STRING_LITERAL(TMP451, "not (c == cpuNone) ", 19);
STRING_LITERAL(TMP452, "not (o == osNone) ", 18);
STRING_LITERAL(TMP456, "haiku", 5);
NU8 targetcpu_118560;
NU8 hostcpu_118561;
NU8 targetos_118562;
NU8 hostos_118563;
NI intsize_118577;
NI floatsize_118578;
NI ptrsize_118579;
NimStringDesc* tnl_118580;
extern TFrame* frameptr_12037;
extern tgcheap40816 gch_40844;

static N_INLINE(NI, divInt)(NI a, NI b) {
	NI result;
	result = 0;
	{
		if (!(b == 0)) goto LA3;
		raiseDivByZero();	}	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == (IL64(-9223372036854775807) - IL64(1)));
		if (!(LOC7)) goto LA8;
		LOC7 = (b == -1);
		LA8: ;
		if (!LOC7) goto LA9;
		raiseOverflow();	}	LA9: ;
	result = (NI64)(a / b);
	goto BeforeRet;
	BeforeRet: ;	return result;
}
static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12037;
	frameptr_12037 = s;
}
static N_INLINE(void, popFrame)(void) {
	frameptr_12037 = (*frameptr_12037).prev;
}
static N_INLINE(tcell38848*, usrtocell_42239)(void* usr) {
	tcell38848* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(116, "gc.nim");
	nimln(116, "gc.nim");
	nimln(116, "gc.nim");
	result = ((tcell38848*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell38848))))));
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
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		nimln(234, "gc.nim");
		rtladdzct_43802(c);	}	LA3: ;
	popFrame();
}
N_NIMCALL(void, settarget_118586)(NU8 o, NU8 c) {
	NI TMP453;
	NI TMP454;
	NI TMP455;
	NimStringDesc* LOC9;
	nimfr("setTarget", "platform.nim")
	nimln(198, "platform.nim");
	{
		nimln(198, "platform.nim");
		nimln(198, "platform.nim");
		nimln(198, "platform.nim");
		if (!!(!((c == ((NU8) 0))))) goto LA3;
		nimln(198, "platform.nim");
		hiddenraiseassert_76017(((NimStringDesc*) &TMP451));	}	LA3: ;
	nimln(199, "platform.nim");
	{
		nimln(199, "platform.nim");
		nimln(199, "platform.nim");
		nimln(199, "platform.nim");
		if (!!(!((o == ((NU8) 0))))) goto LA7;
		nimln(199, "platform.nim");
		hiddenraiseassert_76017(((NimStringDesc*) &TMP452));	}	LA7: ;
	nimln(201, "platform.nim");
	targetcpu_118560 = c;
	nimln(202, "platform.nim");
	targetos_118562 = o;
	nimln(203, "platform.nim");
	nimln(203, "platform.nim");
	if (c < 1 || c > 14) raiseIndexError();
	TMP453 = divInt(cpu_118460[(c)- 1].Field1, 8);
	intsize_118577 = (NI64)(TMP453);
	nimln(204, "platform.nim");
	nimln(204, "platform.nim");
	if (c < 1 || c > 14) raiseIndexError();
	TMP454 = divInt(cpu_118460[(c)- 1].Field3, 8);
	floatsize_118578 = (NI64)(TMP454);
	nimln(205, "platform.nim");
	nimln(205, "platform.nim");
	if (c < 1 || c > 14) raiseIndexError();
	TMP455 = divInt(cpu_118460[(c)- 1].Field4, 8);
	ptrsize_118579 = (NI64)(TMP455);
	nimln(206, "platform.nim");
	if (o < 1 || o > 23) raiseIndexError();
	LOC9 = 0;
	LOC9 = tnl_118580; tnl_118580 = copyStringRC1(os_118061[(o)- 1].Field5);
	if (LOC9) nimGCunrefNoCycle(LOC9);
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
N_NIMCALL(NU8, nametoos_118569)(NimStringDesc* name) {
	NU8 result;
	NU8 i_118848;
	NU8 res_118851;
	nimfr("NameToOS", "platform.nim")
	result = 0;
	i_118848 = 0;
	nimln(1301, "system.nim");
	res_118851 = ((NU8) 1);
	nimln(1302, "system.nim");
	while (1) {
		nimln(1302, "system.nim");
		if (!(res_118851 <= ((NU8) 23))) goto LA1;
		nimln(1301, "system.nim");
		i_118848 = res_118851;
		nimln(210, "platform.nim");
		{
			NI LOC4;
			nimln(210, "platform.nim");
			nimln(210, "platform.nim");
			if (i_118848 < 1 || i_118848 > 23) raiseIndexError();
			LOC4 = 0;
			LOC4 = nsuCmpIgnoreStyle(name, os_118061[(i_118848)- 1].Field0);
			if (!(LOC4 == 0)) goto LA5;
			nimln(211, "platform.nim");
			nimln(211, "platform.nim");
			result = i_118848;
			goto BeforeRet;
		}		LA5: ;
		nimln(1304, "system.nim");
		res_118851 = addInt(res_118851, 1);
	} LA1: ;
	nimln(212, "platform.nim");
	result = ((NU8) 0);
	BeforeRet: ;	popFrame();
	return result;
}
N_NIMCALL(NU8, nametocpu_118573)(NimStringDesc* name) {
	NU8 result;
	NU8 i_118901;
	NU8 res_118904;
	nimfr("NameToCPU", "platform.nim")
	result = 0;
	i_118901 = 0;
	nimln(1301, "system.nim");
	res_118904 = ((NU8) 1);
	nimln(1302, "system.nim");
	while (1) {
		nimln(1302, "system.nim");
		if (!(res_118904 <= ((NU8) 14))) goto LA1;
		nimln(1301, "system.nim");
		i_118901 = res_118904;
		nimln(216, "platform.nim");
		{
			NI LOC4;
			nimln(216, "platform.nim");
			nimln(216, "platform.nim");
			if (i_118901 < 1 || i_118901 > 14) raiseIndexError();
			LOC4 = 0;
			LOC4 = nsuCmpIgnoreStyle(name, cpu_118460[(i_118901)- 1].Field0);
			if (!(LOC4 == 0)) goto LA5;
			nimln(217, "platform.nim");
			nimln(217, "platform.nim");
			result = i_118901;
			goto BeforeRet;
		}		LA5: ;
		nimln(1304, "system.nim");
		res_118904 = addInt(res_118904, 1);
	} LA1: ;
	nimln(218, "platform.nim");
	result = ((NU8) 0);
	BeforeRet: ;	popFrame();
	return result;
}N_NOINLINE(void, compilerplatformInit)(void) {
	nimfr("platform", "platform.nim")
	nimln(220, "platform.nim");
	hostcpu_118561 = nametocpu_118573(((NimStringDesc*) &TMP445));
	nimln(221, "platform.nim");
	hostos_118563 = nametoos_118569(((NimStringDesc*) &TMP456));
	nimln(223, "platform.nim");
	settarget_118586(hostos_118563, hostcpu_118561);	popFrame();
}

N_NOINLINE(void, compilerplatformDatInit)(void) {
}

