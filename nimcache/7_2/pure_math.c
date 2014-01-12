/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <math.h>

#include <stdlib.h>

#include <time.h>
typedef struct trunningstat116223 trunningstat116223;
struct trunningstat116223 {
NI N;
NF Sum;
NF Min;
NF Max;
NF Mean;
NF Oldm;
NF Olds;
NF News;
};
N_NIMCALL(NU8, classify_115220)(NF x);
N_NIMCALL(NI, binom_115230)(NI n, NI k);
N_NIMCALL(NI, fac_115252)(NI n);
N_NIMCALL(NIM_BOOL, ispoweroftwo_115272)(NI x);
N_NIMCALL(NI, nextpoweroftwo_115278)(NI x);
N_NIMCALL(NI, countbits32_115413)(NI32 n);
N_NIMCALL(NF, sum_115470)(NF* x, NI xLen0);
N_NIMCALL(NF, mean_115463)(NF* x, NI xLen0);
N_NIMCALL(NF, variance_115518)(NF* x, NI xLen0);
N_NIMCALL(NF, log2_115618)(NF x);
N_NIMCALL(NF, random_115553)(NF max);
N_NIMCALL(void, randomize_115602)(void);
N_NIMCALL(void, randomize_115605)(NI seed);
N_NIMCALL(NI, random_115549)(NI max);
N_NIMCALL(NF, mod_116202)(NF x, NF y);
N_NIMCALL(void, push_116233)(trunningstat116223* s, NF x);
N_NIMCALL(void, push_116251)(trunningstat116223* s, NI x);
N_NIMCALL(NF, variance_116258)(trunningstat116223* s);
N_NIMCALL(NF, standarddeviation_116265)(trunningstat116223* s);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
extern TFrame* frameptr_12037;

N_NIMCALL(NU8, classify_115220)(NF x) {
	NU8 result;
	result = 0;
	{
		if (!(x == 0.0)) goto LA3;
		{
			if (!(((NF)(1.0000000000000000e+00) / (NF)(x)) == INF)) goto LA7;
			result = ((NU8) 2);
			goto BeforeRet;
		}		goto LA5;
		LA7: ;
		{
			result = ((NU8) 3);
			goto BeforeRet;
		}		LA5: ;
	}	LA3: ;
	{
		if (!(((NF)(x) * (NF)(5.0000000000000000e-01)) == x)) goto LA12;
		{
			if (!(0.0 < x)) goto LA16;
			result = ((NU8) 5);
			goto BeforeRet;
		}		goto LA14;
		LA16: ;
		{
			result = ((NU8) 6);
			goto BeforeRet;
		}		LA14: ;
	}	LA12: ;
	{
		if (!!((x == x))) goto LA21;
		result = ((NU8) 4);
		goto BeforeRet;
	}	LA21: ;
	result = ((NU8) 0);
	goto BeforeRet;
	BeforeRet: ;	return result;
}
N_NIMCALL(NI, binom_115230)(NI n, NI k) {
	NI result;
	NI i_115245;
	NI res_115247;
	result = 0;
	{
		if (!(k <= 0)) goto LA3;
		result = 1;
		goto BeforeRet;
	}	LA3: ;
	{
		if (!(n < (NI64)(2 * k))) goto LA7;
		result = binom_115230(n, (NI64)(n - k));
		goto BeforeRet;
	}	LA7: ;
	result = n;
	i_115245 = 0;
	res_115247 = 2;
	while (1) {
		if (!(res_115247 <= k)) goto LA9;
		i_115245 = res_115247;
		result = (NI64)((NI64)(result * (NI64)((NI64)(n + 1) - i_115245)) / i_115245);
		res_115247 += 1;
	} LA9: ;
	BeforeRet: ;	return result;
}
N_NIMCALL(NI, fac_115252)(NI n) {
	NI result;
	NI i_115265;
	NI res_115267;
	result = 0;
	result = 1;
	i_115265 = 0;
	res_115267 = 2;
	while (1) {
		if (!(res_115267 <= n)) goto LA1;
		i_115265 = res_115267;
		result = (NI64)(result * i_115265);
		res_115267 += 1;
	} LA1: ;
	return result;
}
N_NIMCALL(NIM_BOOL, ispoweroftwo_115272)(NI x) {
	NIM_BOOL result;
	result = 0;
	result = ((NI)(x & ((NI64)-(x))) == x);
	goto BeforeRet;
	BeforeRet: ;	return result;
}
N_NIMCALL(NI, nextpoweroftwo_115278)(NI x) {
	NI result;
	result = 0;
	result = (NI64)(x - 1);
	result = (NI)(result | (NI)((NU64)(result) >> (NU64)(32)));
	result = (NI)(result | (NI)((NU64)(result) >> (NU64)(16)));
	result = (NI)(result | (NI)((NU64)(result) >> (NU64)(8)));
	result = (NI)(result | (NI)((NU64)(result) >> (NU64)(4)));
	result = (NI)(result | (NI)((NU64)(result) >> (NU64)(2)));
	result = (NI)(result | (NI)((NU64)(result) >> (NU64)(1)));
	result += 1;
	return result;
}
N_NIMCALL(NI, countbits32_115413)(NI32 n) {
	NI result;
	NI32 v;
	result = 0;
	v = n;
	v = (NI32)((NU32)(v) - (NU32)((NI32)((NI32)((NU32)(v) >> (NU32)(((NI32) 1))) & ((NI32) 1431655765))));
	v = (NI32)((NU32)((NI32)(v & ((NI32) 858993459))) + (NU32)((NI32)((NI32)((NU32)(v) >> (NU32)(((NI32) 2))) & ((NI32) 858993459))));
	result = ((NI) ((NI32)((NU32)((NI32)((NU32)((NI32)((NI32)((NU32)(v) + (NU32)((NI32)((NU32)(v) >> (NU32)(((NI32) 4))))) & ((NI32) 252645135))) * (NU32)(((NI32) 16843009)))) >> (NU32)(((NI32) 24)))));
	return result;
}
N_NIMCALL(NF, sum_115470)(NF* x, NI xLen0) {
	NF result;
	NF i_115505;
	NI i_115507;
	result = 0;
	i_115505 = 0;
	i_115507 = 0;
	while (1) {
		if (!(i_115507 < xLen0)) goto LA1;
		i_115505 = x[i_115507];
		result = ((NF)(result) + (NF)(i_115505));
		i_115507 += 1;
	} LA1: ;
	return result;
}
N_NIMCALL(NF, mean_115463)(NF* x, NI xLen0) {
	NF result;
	NF LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = sum_115470(x, xLen0);
	result = ((NF)(LOC1) / (NF)(((double) (xLen0))));
	return result;
}
N_NIMCALL(NF, variance_115518)(NF* x, NI xLen0) {
	NF result;
	NF m;
	NI i_115534;
	NI HEX3Atmp_115542;
	NI res_115544;
	result = 0;
	result = 0.0;
	m = mean_115463(x, xLen0);
	i_115534 = 0;
	HEX3Atmp_115542 = 0;
	HEX3Atmp_115542 = (xLen0-1);
	res_115544 = 0;
	while (1) {
		NF diff;
		if (!(res_115544 <= HEX3Atmp_115542)) goto LA1;
		i_115534 = res_115544;
		diff = ((NF)(x[i_115534]) - (NF)(m));
		result = ((NF)(result) + (NF)(((NF)(diff) * (NF)(diff))));
		res_115544 += 1;
	} LA1: ;
	result = ((NF)(result) / (NF)(((double) (xLen0))));
	return result;
}
N_NIMCALL(NF, log2_115618)(NF x) {
	NF result;
	NF LOC1;
	NF LOC2;
	result = 0;
	LOC1 = 0;
	LOC1 = log(x);
	LOC2 = 0;
	LOC2 = log(2.0000000000000000e+00);
	result = ((NF)(LOC1) / (NF)(LOC2));
	goto BeforeRet;
	BeforeRet: ;	return result;
}
N_NIMCALL(NF, random_115553)(NF max) {
	NF result;
	NF LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = drand48();
	result = ((NF)(LOC1) * (NF)(max));
	return result;
}
N_NIMCALL(void, randomize_115605)(NI seed) {
	srand(((int) (seed)));	srand48(seed);}
N_NIMCALL(void, randomize_115602)(void) {
	int LOC1;
	LOC1 = 0;
	LOC1 = time(NIM_NIL);
	randomize_115605(((NI) (LOC1)));}
N_NIMCALL(NI, random_115549)(NI max) {
	NI result;
	int LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = rand();
	result = (NI64)(((NI) (LOC1)) % max);
	return result;
}
N_NIMCALL(NF, mod_116202)(NF x, NF y) {
	NF result;
	result = 0;
	{
		if (!(y == 0.0)) goto LA3;
		result = x;
	}	goto LA1;
	LA3: ;
	{
		NF LOC6;
		LOC6 = 0;
		LOC6 = floor(((NF)(x) / (NF)(y)));
		result = ((NF)(x) - (NF)(((NF)(y) * (NF)(LOC6))));
	}	LA1: ;
	return result;
}
N_NIMCALL(void, push_116233)(trunningstat116223* s, NF x) {
	(*s).N += 1;
	{
		if (!((*s).N == 1)) goto LA3;
		(*s).Min = x;
		(*s).Max = x;
		(*s).Oldm = x;
		(*s).Mean = x;
		(*s).Olds = 0.0;
	}	goto LA1;
	LA3: ;
	{
		{
			if (!(x < (*s).Min)) goto LA8;
			(*s).Min = x;
		}		LA8: ;
		{
			if (!((*s).Max < x)) goto LA12;
			(*s).Max = x;
		}		LA12: ;
		(*s).Mean = ((NF)((*s).Oldm) + (NF)(((NF)(((NF)(x) - (NF)((*s).Oldm))) / (NF)(((double) ((*s).N))))));
		(*s).News = ((NF)((*s).Olds) + (NF)(((NF)(((NF)(x) - (NF)((*s).Oldm))) * (NF)(((NF)(x) - (NF)((*s).Mean))))));
		(*s).Oldm = (*s).Mean;
		(*s).Olds = (*s).News;
	}	LA1: ;
	(*s).Sum = ((NF)((*s).Sum) + (NF)(x));
}
N_NIMCALL(void, push_116251)(trunningstat116223* s, NI x) {
	push_116233(s, ((double) (x)));}
N_NIMCALL(NF, variance_116258)(trunningstat116223* s) {
	NF result;
	result = 0;
	{
		if (!(1 < (*s).N)) goto LA3;
		result = ((NF)((*s).News) / (NF)(((double) ((NI64)((*s).N - 1)))));
	}	LA3: ;
	return result;
}
N_NIMCALL(NF, standarddeviation_116265)(trunningstat116223* s) {
	NF result;
	NF LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = variance_116258(s);
	result = sqrt(LOC1);
	return result;
}
static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12037;
	frameptr_12037 = s;
}
static N_INLINE(void, popFrame)(void) {
	frameptr_12037 = (*frameptr_12037).prev;
}N_NOINLINE(void, puremathInit)(void) {
	nimfr("math", "math.nim")
	popFrame();
}

N_NOINLINE(void, puremathDatInit)(void) {
}

