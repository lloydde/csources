/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
N_NIMCALL(NI64, HEX7CHEX2BHEX7C_226013)(NI64 a, NI64 b);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NI64, HEX7CHEX2DHEX7C_226024)(NI64 a, NI64 b);
N_NIMCALL(NI64, HEX7CabsHEX7C_226032)(NI64 a);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(NI64, HEX7CdivHEX7C_226038)(NI64 a, NI64 b);
static N_INLINE(NI64, divInt64)(NI64 a, NI64 b);
N_NOINLINE(void, raiseDivByZero)(void);
N_NIMCALL(NI64, HEX7CmodHEX7C_226045)(NI64 a, NI64 b);
static N_INLINE(NI64, modInt64)(NI64 a, NI64 b);
N_NIMCALL(NI64, HEX7CHEX2AHEX7C_226052)(NI64 a, NI64 b);
extern TFrame* frameptr_12037;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12037;
	frameptr_12037 = s;
}
static N_INLINE(void, popFrame)(void) {
	frameptr_12037 = (*frameptr_12037).prev;
}
N_NIMCALL(NI64, HEX7CHEX2BHEX7C_226013)(NI64 a, NI64 b) {
	NI64 result;
	nimfr("|+|", "saturate.nim")
	result = 0;
	nimln(14, "saturate.nim");
	nimln(14, "saturate.nim");
	result = (NI64)((NU64)(a) + (NU64)(b));
	nimln(15, "saturate.nim");
	{
		NIM_BOOL LOC3;
		nimln(15, "saturate.nim");
		LOC3 = 0;
		nimln(702, "system.nim");
		nimln(15, "saturate.nim");
		LOC3 = (0 <= (NI64)(result ^ a));
		if (LOC3) goto LA4;
		nimln(702, "system.nim");
		nimln(15, "saturate.nim");
		LOC3 = (0 <= (NI64)(result ^ b));
		LA4: ;
		if (!LOC3) goto LA5;
		nimln(16, "saturate.nim");
		goto BeforeRet;
	}	LA5: ;
	nimln(17, "saturate.nim");
	{
		NIM_BOOL LOC9;
		nimln(17, "saturate.nim");
		LOC9 = 0;
		nimln(17, "saturate.nim");
		LOC9 = (a < 0);
		if (LOC9) goto LA10;
		nimln(17, "saturate.nim");
		LOC9 = (b < 0);
		LA10: ;
		if (!LOC9) goto LA11;
		nimln(18, "saturate.nim");
		result = (IL64(-9223372036854775807) - IL64(1));
	}	goto LA7;
	LA11: ;
	{
		nimln(20, "saturate.nim");
		result = IL64(9223372036854775807);
	}	LA7: ;
	BeforeRet: ;	popFrame();
	return result;
}
N_NIMCALL(NI64, HEX7CHEX2DHEX7C_226024)(NI64 a, NI64 b) {
	NI64 result;
	nimfr("|-|", "saturate.nim")
	result = 0;
	nimln(23, "saturate.nim");
	nimln(23, "saturate.nim");
	result = (NI64)((NU64)(a) - (NU64)(b));
	nimln(24, "saturate.nim");
	{
		NIM_BOOL LOC3;
		nimln(24, "saturate.nim");
		LOC3 = 0;
		nimln(702, "system.nim");
		nimln(24, "saturate.nim");
		LOC3 = (0 <= (NI64)(result ^ a));
		if (LOC3) goto LA4;
		nimln(702, "system.nim");
		nimln(24, "saturate.nim");
		nimln(24, "saturate.nim");
		LOC3 = (0 <= (NI64)(result ^ (NI64)((NU64) ~(b))));
		LA4: ;
		if (!LOC3) goto LA5;
		nimln(25, "saturate.nim");
		goto BeforeRet;
	}	LA5: ;
	nimln(26, "saturate.nim");
	{
		nimln(706, "system.nim");
		if (!(0 < b)) goto LA9;
		nimln(27, "saturate.nim");
		result = (IL64(-9223372036854775807) - IL64(1));
	}	goto LA7;
	LA9: ;
	{
		nimln(29, "saturate.nim");
		result = IL64(9223372036854775807);
	}	LA7: ;
	BeforeRet: ;	popFrame();
	return result;
}
N_NIMCALL(NI64, HEX7CabsHEX7C_226032)(NI64 a) {
	NI64 result;
	nimfr("|abs|", "saturate.nim")
	result = 0;
	nimln(32, "saturate.nim");
	{
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!((a == (IL64(-9223372036854775807) - IL64(1))))) goto LA3;
		nimln(33, "saturate.nim");
		{
			nimln(702, "system.nim");
			if (!(0 <= a)) goto LA7;
			nimln(33, "saturate.nim");
			result = a;
		}		goto LA5;
		LA7: ;
		{
			nimln(34, "saturate.nim");
			nimln(34, "saturate.nim");
			if (a == (IL64(-9223372036854775807) - IL64(1))) raiseOverflow();
			result = -(a);
		}		LA5: ;
	}	goto LA1;
	LA3: ;
	{
		nimln(36, "saturate.nim");
		result = (IL64(-9223372036854775807) - IL64(1));
	}	LA1: ;
	popFrame();
	return result;
}
static N_INLINE(NI64, divInt64)(NI64 a, NI64 b) {
	NI64 result;
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
N_NIMCALL(NI64, HEX7CdivHEX7C_226038)(NI64 a, NI64 b) {
	NI64 result;
	nimfr("|div|", "saturate.nim")
	result = 0;
	nimln(40, "saturate.nim");
	{
		nimln(40, "saturate.nim");
		if (!(b == 0)) goto LA3;
		nimln(42, "saturate.nim");
		result = a;
	}	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		nimln(43, "saturate.nim");
		LOC6 = 0;
		nimln(43, "saturate.nim");
		LOC6 = (a == (IL64(-9223372036854775807) - IL64(1)));
		if (!(LOC6)) goto LA7;
		nimln(43, "saturate.nim");
		LOC6 = (b == -1);
		LA7: ;
		if (!LOC6) goto LA8;
		nimln(44, "saturate.nim");
		result = IL64(9223372036854775807);
	}	goto LA1;
	LA8: ;
	{
		NI64 TMP3169;
		nimln(46, "saturate.nim");
		nimln(46, "saturate.nim");
		TMP3169 = divInt64(a, b);
		result = (NI64)(TMP3169);
	}	LA1: ;
	popFrame();
	return result;
}
static N_INLINE(NI64, modInt64)(NI64 a, NI64 b) {
	NI64 result;
	result = 0;
	{
		if (!(b == 0)) goto LA3;
		raiseDivByZero();	}	LA3: ;
	result = (NI64)(a % b);
	goto BeforeRet;
	BeforeRet: ;	return result;
}
N_NIMCALL(NI64, HEX7CmodHEX7C_226045)(NI64 a, NI64 b) {
	NI64 result;
	nimfr("|mod|", "saturate.nim")
	result = 0;
	nimln(49, "saturate.nim");
	{
		nimln(49, "saturate.nim");
		if (!(b == 0)) goto LA3;
		nimln(50, "saturate.nim");
		result = a;
	}	goto LA1;
	LA3: ;
	{
		NI64 TMP3170;
		nimln(52, "saturate.nim");
		nimln(52, "saturate.nim");
		TMP3170 = modInt64(a, b);
		result = (NI64)(TMP3170);
	}	LA1: ;
	popFrame();
	return result;
}
N_NIMCALL(NI64, HEX7CHEX2AHEX7C_226052)(NI64 a, NI64 b) {
	NI64 result;
	NF resasfloat;
	NF floatprod;
	nimfr("|*|", "saturate.nim")
	result = 0;
	resasfloat = 0;
	floatprod = 0;
	nimln(57, "saturate.nim");
	nimln(57, "saturate.nim");
	result = (NI64)((NU64)(a) * (NU64)(b));
	nimln(58, "saturate.nim");
	nimln(58, "saturate.nim");
	floatprod = ((double) (a));
	nimln(59, "saturate.nim");
	nimln(59, "saturate.nim");
	nimln(59, "saturate.nim");
	floatprod = ((NF)(floatprod) * (NF)(((double) (b))));
	nimln(60, "saturate.nim");
	nimln(60, "saturate.nim");
	resasfloat = ((double) (result));
	nimln(64, "saturate.nim");
	{
		nimln(64, "saturate.nim");
		if (!(resasfloat == floatprod)) goto LA3;
		nimln(64, "saturate.nim");
		goto BeforeRet;
	}	LA3: ;
	nimln(73, "saturate.nim");
	{
		nimln(73, "saturate.nim");
		nimln(73, "saturate.nim");
		nimln(73, "saturate.nim");
		nimln(73, "saturate.nim");
		nimln(73, "saturate.nim");
		if (!(((NF)(3.2000000000000000e+01) * (NF)((((NF)(resasfloat) - (NF)(floatprod)) > 0? (((NF)(resasfloat) - (NF)(floatprod))) : -(((NF)(resasfloat) - (NF)(floatprod)))))) <= (floatprod > 0? (floatprod) : -(floatprod)))) goto LA7;
		nimln(74, "saturate.nim");
		goto BeforeRet;
	}	LA7: ;
	nimln(76, "saturate.nim");
	{
		nimln(702, "system.nim");
		if (!(0.0 <= floatprod)) goto LA11;
		nimln(77, "saturate.nim");
		result = IL64(9223372036854775807);
	}	goto LA9;
	LA11: ;
	{
		nimln(79, "saturate.nim");
		result = (IL64(-9223372036854775807) - IL64(1));
	}	LA9: ;
	BeforeRet: ;	popFrame();
	return result;
}N_NOINLINE(void, compilersaturateInit)(void) {
	nimfr("saturate", "saturate.nim")
	popFrame();
}

N_NOINLINE(void, compilersaturateDatInit)(void) {
}

