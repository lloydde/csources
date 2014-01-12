/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tident139017 tident139017;
typedef struct tidobj139011 tidobj139011;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef NU8 TY148314[31];
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
};
typedef NimStringDesc* TY148316[248];
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
struct tidobj139011 {
  TNimObject Sup;
NI Id;
};
struct tident139017 {
  tidobj139011 Sup;
NimStringDesc* S;
tident139017* Next;
NI H;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
N_NIMCALL(NI, findstr_148323)(NimStringDesc** a, NI aLen0, NimStringDesc* s);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NU8, whichkeyword_148346)(tident139017* id);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(NU8, whichkeyword_148353)(NimStringDesc* id);
N_NIMCALL(tident139017*, getident_139443)(NimStringDesc* identifier);
N_NIMCALL(void, initspecials_148359)(void);
N_NIMCALL(tident139017*, getident_139449)(NimStringDesc* identifier, NI h);
N_NIMCALL(NI, hashignorestyle_109856)(NimStringDesc* x);
NIM_CONST TY148314 cppnimsharedkeywords_148313 = {
0x10, 0x1B, 0xAA, 0x12, 0x00, 0x02, 0x40, 0x1C,
0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP1152, "", 0);
STRING_LITERAL(TMP1153, "addr", 4);
STRING_LITERAL(TMP1154, "and", 3);
STRING_LITERAL(TMP1155, "as", 2);
STRING_LITERAL(TMP1156, "asm", 3);
STRING_LITERAL(TMP1157, "atomic", 6);
STRING_LITERAL(TMP1158, "bind", 4);
STRING_LITERAL(TMP1159, "block", 5);
STRING_LITERAL(TMP1160, "break", 5);
STRING_LITERAL(TMP1161, "case", 4);
STRING_LITERAL(TMP1162, "cast", 4);
STRING_LITERAL(TMP1163, "const", 5);
STRING_LITERAL(TMP1164, "continue", 8);
STRING_LITERAL(TMP1165, "converter", 9);
STRING_LITERAL(TMP1166, "discard", 7);
STRING_LITERAL(TMP1167, "distinct", 8);
STRING_LITERAL(TMP1168, "div", 3);
STRING_LITERAL(TMP1169, "do", 2);
STRING_LITERAL(TMP1170, "elif", 4);
STRING_LITERAL(TMP1171, "else", 4);
STRING_LITERAL(TMP1172, "end", 3);
STRING_LITERAL(TMP1173, "enum", 4);
STRING_LITERAL(TMP1174, "except", 6);
STRING_LITERAL(TMP1175, "export", 6);
STRING_LITERAL(TMP1176, "finally", 7);
STRING_LITERAL(TMP1177, "for", 3);
STRING_LITERAL(TMP1178, "from", 4);
STRING_LITERAL(TMP1179, "generic", 7);
STRING_LITERAL(TMP1180, "if", 2);
STRING_LITERAL(TMP1181, "import", 6);
STRING_LITERAL(TMP1182, "in", 2);
STRING_LITERAL(TMP1183, "include", 7);
STRING_LITERAL(TMP1184, "interface", 9);
STRING_LITERAL(TMP1185, "is", 2);
STRING_LITERAL(TMP1186, "isnot", 5);
STRING_LITERAL(TMP1187, "iterator", 8);
STRING_LITERAL(TMP1188, "lambda", 6);
STRING_LITERAL(TMP1189, "let", 3);
STRING_LITERAL(TMP1190, "macro", 5);
STRING_LITERAL(TMP1191, "method", 6);
STRING_LITERAL(TMP1192, "mixin", 5);
STRING_LITERAL(TMP1193, "using", 5);
STRING_LITERAL(TMP1194, "mod", 3);
STRING_LITERAL(TMP1195, "nil", 3);
STRING_LITERAL(TMP1196, "not", 3);
STRING_LITERAL(TMP1197, "notin", 5);
STRING_LITERAL(TMP1198, "object", 6);
STRING_LITERAL(TMP1199, "of", 2);
STRING_LITERAL(TMP1200, "or", 2);
STRING_LITERAL(TMP1201, "out", 3);
STRING_LITERAL(TMP1202, "proc", 4);
STRING_LITERAL(TMP1203, "ptr", 3);
STRING_LITERAL(TMP1204, "raise", 5);
STRING_LITERAL(TMP1205, "ref", 3);
STRING_LITERAL(TMP1206, "return", 6);
STRING_LITERAL(TMP1207, "shared", 6);
STRING_LITERAL(TMP1208, "shl", 3);
STRING_LITERAL(TMP1209, "shr", 3);
STRING_LITERAL(TMP1210, "static", 6);
STRING_LITERAL(TMP1211, "template", 8);
STRING_LITERAL(TMP1212, "try", 3);
STRING_LITERAL(TMP1213, "tuple", 5);
STRING_LITERAL(TMP1214, "type", 4);
STRING_LITERAL(TMP1215, "var", 3);
STRING_LITERAL(TMP1216, "when", 4);
STRING_LITERAL(TMP1217, "while", 5);
STRING_LITERAL(TMP1218, "with", 4);
STRING_LITERAL(TMP1219, "without", 7);
STRING_LITERAL(TMP1220, "xor", 3);
STRING_LITERAL(TMP1221, "yield", 5);
STRING_LITERAL(TMP1222, ":", 1);
STRING_LITERAL(TMP1223, "::", 2);
STRING_LITERAL(TMP1224, "=", 1);
STRING_LITERAL(TMP1225, ".", 1);
STRING_LITERAL(TMP1226, "..", 2);
STRING_LITERAL(TMP1227, "*", 1);
STRING_LITERAL(TMP1228, "-", 1);
STRING_LITERAL(TMP1229, "magic", 5);
STRING_LITERAL(TMP1230, "thread", 6);
STRING_LITERAL(TMP1231, "final", 5);
STRING_LITERAL(TMP1232, "profiler", 8);
STRING_LITERAL(TMP1233, "objchecks", 9);
STRING_LITERAL(TMP1234, "destroy", 7);
STRING_LITERAL(TMP1235, "immediate", 9);
STRING_LITERAL(TMP1236, "destructor", 10);
STRING_LITERAL(TMP1237, "delegator", 9);
STRING_LITERAL(TMP1238, "importcpp", 9);
STRING_LITERAL(TMP1239, "importobjc", 10);
STRING_LITERAL(TMP1240, "importcompilerproc", 18);
STRING_LITERAL(TMP1241, "importc", 7);
STRING_LITERAL(TMP1242, "exportc", 7);
STRING_LITERAL(TMP1243, "incompletestruct", 16);
STRING_LITERAL(TMP1244, "requiresinit", 12);
STRING_LITERAL(TMP1245, "align", 5);
STRING_LITERAL(TMP1246, "nodecl", 6);
STRING_LITERAL(TMP1247, "pure", 4);
STRING_LITERAL(TMP1248, "sideeffect", 10);
STRING_LITERAL(TMP1249, "header", 6);
STRING_LITERAL(TMP1250, "nosideeffect", 12);
STRING_LITERAL(TMP1251, "noreturn", 8);
STRING_LITERAL(TMP1252, "merge", 5);
STRING_LITERAL(TMP1253, "lib", 3);
STRING_LITERAL(TMP1254, "dynlib", 6);
STRING_LITERAL(TMP1255, "compilerproc", 12);
STRING_LITERAL(TMP1256, "procvar", 7);
STRING_LITERAL(TMP1257, "fatal", 5);
STRING_LITERAL(TMP1258, "error", 5);
STRING_LITERAL(TMP1259, "warning", 7);
STRING_LITERAL(TMP1260, "hint", 4);
STRING_LITERAL(TMP1261, "line", 4);
STRING_LITERAL(TMP1262, "push", 4);
STRING_LITERAL(TMP1263, "pop", 3);
STRING_LITERAL(TMP1264, "define", 6);
STRING_LITERAL(TMP1265, "undef", 5);
STRING_LITERAL(TMP1266, "linedir", 7);
STRING_LITERAL(TMP1267, "stacktrace", 10);
STRING_LITERAL(TMP1268, "linetrace", 9);
STRING_LITERAL(TMP1269, "link", 4);
STRING_LITERAL(TMP1270, "compile", 7);
STRING_LITERAL(TMP1271, "linksys", 7);
STRING_LITERAL(TMP1272, "deprecated", 10);
STRING_LITERAL(TMP1273, "varargs", 7);
STRING_LITERAL(TMP1274, "callconv", 8);
STRING_LITERAL(TMP1275, "breakpoint", 10);
STRING_LITERAL(TMP1276, "debugger", 8);
STRING_LITERAL(TMP1277, "nimcall", 7);
STRING_LITERAL(TMP1278, "stdcall", 7);
STRING_LITERAL(TMP1279, "cdecl", 5);
STRING_LITERAL(TMP1280, "safecall", 8);
STRING_LITERAL(TMP1281, "syscall", 7);
STRING_LITERAL(TMP1282, "inline", 6);
STRING_LITERAL(TMP1283, "noinline", 8);
STRING_LITERAL(TMP1284, "fastcall", 8);
STRING_LITERAL(TMP1285, "closure", 7);
STRING_LITERAL(TMP1286, "noconv", 6);
STRING_LITERAL(TMP1287, "on", 2);
STRING_LITERAL(TMP1288, "off", 3);
STRING_LITERAL(TMP1289, "checks", 6);
STRING_LITERAL(TMP1290, "rangechecks", 11);
STRING_LITERAL(TMP1291, "boundchecks", 11);
STRING_LITERAL(TMP1292, "overflowchecks", 14);
STRING_LITERAL(TMP1293, "nilchecks", 9);
STRING_LITERAL(TMP1294, "floatchecks", 11);
STRING_LITERAL(TMP1295, "nanchecks", 9);
STRING_LITERAL(TMP1296, "infchecks", 9);
STRING_LITERAL(TMP1297, "assertions", 10);
STRING_LITERAL(TMP1298, "patterns", 8);
STRING_LITERAL(TMP1299, "warnings", 8);
STRING_LITERAL(TMP1300, "hints", 5);
STRING_LITERAL(TMP1301, "optimization", 12);
STRING_LITERAL(TMP1302, "raises", 6);
STRING_LITERAL(TMP1303, "writes", 6);
STRING_LITERAL(TMP1304, "reads", 5);
STRING_LITERAL(TMP1305, "size", 4);
STRING_LITERAL(TMP1306, "effects", 7);
STRING_LITERAL(TMP1307, "tags", 4);
STRING_LITERAL(TMP1308, "deadcodeelim", 12);
STRING_LITERAL(TMP1309, "safecode", 8);
STRING_LITERAL(TMP1310, "noforward", 9);
STRING_LITERAL(TMP1311, "pragma", 6);
STRING_LITERAL(TMP1312, "compiletime", 11);
STRING_LITERAL(TMP1313, "noinit", 6);
STRING_LITERAL(TMP1314, "passc", 5);
STRING_LITERAL(TMP1315, "passl", 5);
STRING_LITERAL(TMP1316, "borrow", 6);
STRING_LITERAL(TMP1317, "discardable", 11);
STRING_LITERAL(TMP1318, "fieldchecks", 11);
STRING_LITERAL(TMP1319, "watchpoint", 10);
STRING_LITERAL(TMP1320, "subschar", 8);
STRING_LITERAL(TMP1321, "acyclic", 7);
STRING_LITERAL(TMP1322, "shallow", 7);
STRING_LITERAL(TMP1323, "unroll", 6);
STRING_LITERAL(TMP1324, "linearscanend", 13);
STRING_LITERAL(TMP1325, "computedgoto", 12);
STRING_LITERAL(TMP1326, "injectstmt", 10);
STRING_LITERAL(TMP1327, "write", 5);
STRING_LITERAL(TMP1328, "gensym", 6);
STRING_LITERAL(TMP1329, "inject", 6);
STRING_LITERAL(TMP1330, "dirty", 5);
STRING_LITERAL(TMP1331, "inheritable", 11);
STRING_LITERAL(TMP1332, "threadvar", 9);
STRING_LITERAL(TMP1333, "emit", 4);
STRING_LITERAL(TMP1334, "nostackframe", 12);
STRING_LITERAL(TMP1335, "implicitstatic", 14);
STRING_LITERAL(TMP1336, "global", 6);
STRING_LITERAL(TMP1337, "codegendecl", 11);
STRING_LITERAL(TMP1338, "auto", 4);
STRING_LITERAL(TMP1339, "bool", 4);
STRING_LITERAL(TMP1340, "catch", 5);
STRING_LITERAL(TMP1341, "char", 4);
STRING_LITERAL(TMP1342, "class", 5);
STRING_LITERAL(TMP1343, "const_cast", 10);
STRING_LITERAL(TMP1344, "default", 7);
STRING_LITERAL(TMP1345, "delete", 6);
STRING_LITERAL(TMP1346, "double", 6);
STRING_LITERAL(TMP1347, "dynamic_cast", 12);
STRING_LITERAL(TMP1348, "explicit", 8);
STRING_LITERAL(TMP1349, "extern", 6);
STRING_LITERAL(TMP1350, "false", 5);
STRING_LITERAL(TMP1351, "float", 5);
STRING_LITERAL(TMP1352, "friend", 6);
STRING_LITERAL(TMP1353, "goto", 4);
STRING_LITERAL(TMP1354, "int", 3);
STRING_LITERAL(TMP1355, "long", 4);
STRING_LITERAL(TMP1356, "mutable", 7);
STRING_LITERAL(TMP1357, "namespace", 9);
STRING_LITERAL(TMP1358, "new", 3);
STRING_LITERAL(TMP1359, "operator", 8);
STRING_LITERAL(TMP1360, "private", 7);
STRING_LITERAL(TMP1361, "protected", 9);
STRING_LITERAL(TMP1362, "public", 6);
STRING_LITERAL(TMP1363, "register", 8);
STRING_LITERAL(TMP1364, "reinterpret_cast", 16);
STRING_LITERAL(TMP1365, "short", 5);
STRING_LITERAL(TMP1366, "signed", 6);
STRING_LITERAL(TMP1367, "sizeof", 6);
STRING_LITERAL(TMP1368, "static_cast", 11);
STRING_LITERAL(TMP1369, "struct", 6);
STRING_LITERAL(TMP1370, "switch", 6);
STRING_LITERAL(TMP1371, "this", 4);
STRING_LITERAL(TMP1372, "throw", 5);
STRING_LITERAL(TMP1373, "true", 4);
STRING_LITERAL(TMP1374, "typedef", 7);
STRING_LITERAL(TMP1375, "typeid", 6);
STRING_LITERAL(TMP1376, "typename", 8);
STRING_LITERAL(TMP1377, "union", 5);
STRING_LITERAL(TMP1378, "unsigned", 8);
STRING_LITERAL(TMP1379, "virtual", 7);
STRING_LITERAL(TMP1380, "void", 4);
STRING_LITERAL(TMP1381, "volatile", 8);
STRING_LITERAL(TMP1382, "wchar_t", 7);
STRING_LITERAL(TMP1383, "alignas", 7);
STRING_LITERAL(TMP1384, "alignof", 7);
STRING_LITERAL(TMP1385, "constexpr", 9);
STRING_LITERAL(TMP1386, "decltype", 8);
STRING_LITERAL(TMP1387, "nullptr", 7);
STRING_LITERAL(TMP1388, "noexcept", 8);
STRING_LITERAL(TMP1389, "thread_local", 12);
STRING_LITERAL(TMP1390, "static_assert", 13);
STRING_LITERAL(TMP1391, "char16_t", 8);
STRING_LITERAL(TMP1392, "char32_t", 8);
STRING_LITERAL(TMP1393, "stdin", 5);
STRING_LITERAL(TMP1394, "stdout", 6);
STRING_LITERAL(TMP1395, "stderr", 6);
STRING_LITERAL(TMP1396, "inout", 5);
STRING_LITERAL(TMP1397, "bycopy", 6);
STRING_LITERAL(TMP1398, "byref", 5);
STRING_LITERAL(TMP1399, "oneway", 6);
NIM_CONST TY148316 specialwords_148315 = {((NimStringDesc*) &TMP1152),
((NimStringDesc*) &TMP1153),
((NimStringDesc*) &TMP1154),
((NimStringDesc*) &TMP1155),
((NimStringDesc*) &TMP1156),
((NimStringDesc*) &TMP1157),
((NimStringDesc*) &TMP1158),
((NimStringDesc*) &TMP1159),
((NimStringDesc*) &TMP1160),
((NimStringDesc*) &TMP1161),
((NimStringDesc*) &TMP1162),
((NimStringDesc*) &TMP1163),
((NimStringDesc*) &TMP1164),
((NimStringDesc*) &TMP1165),
((NimStringDesc*) &TMP1166),
((NimStringDesc*) &TMP1167),
((NimStringDesc*) &TMP1168),
((NimStringDesc*) &TMP1169),
((NimStringDesc*) &TMP1170),
((NimStringDesc*) &TMP1171),
((NimStringDesc*) &TMP1172),
((NimStringDesc*) &TMP1173),
((NimStringDesc*) &TMP1174),
((NimStringDesc*) &TMP1175),
((NimStringDesc*) &TMP1176),
((NimStringDesc*) &TMP1177),
((NimStringDesc*) &TMP1178),
((NimStringDesc*) &TMP1179),
((NimStringDesc*) &TMP1180),
((NimStringDesc*) &TMP1181),
((NimStringDesc*) &TMP1182),
((NimStringDesc*) &TMP1183),
((NimStringDesc*) &TMP1184),
((NimStringDesc*) &TMP1185),
((NimStringDesc*) &TMP1186),
((NimStringDesc*) &TMP1187),
((NimStringDesc*) &TMP1188),
((NimStringDesc*) &TMP1189),
((NimStringDesc*) &TMP1190),
((NimStringDesc*) &TMP1191),
((NimStringDesc*) &TMP1192),
((NimStringDesc*) &TMP1193),
((NimStringDesc*) &TMP1194),
((NimStringDesc*) &TMP1195),
((NimStringDesc*) &TMP1196),
((NimStringDesc*) &TMP1197),
((NimStringDesc*) &TMP1198),
((NimStringDesc*) &TMP1199),
((NimStringDesc*) &TMP1200),
((NimStringDesc*) &TMP1201),
((NimStringDesc*) &TMP1202),
((NimStringDesc*) &TMP1203),
((NimStringDesc*) &TMP1204),
((NimStringDesc*) &TMP1205),
((NimStringDesc*) &TMP1206),
((NimStringDesc*) &TMP1207),
((NimStringDesc*) &TMP1208),
((NimStringDesc*) &TMP1209),
((NimStringDesc*) &TMP1210),
((NimStringDesc*) &TMP1211),
((NimStringDesc*) &TMP1212),
((NimStringDesc*) &TMP1213),
((NimStringDesc*) &TMP1214),
((NimStringDesc*) &TMP1215),
((NimStringDesc*) &TMP1216),
((NimStringDesc*) &TMP1217),
((NimStringDesc*) &TMP1218),
((NimStringDesc*) &TMP1219),
((NimStringDesc*) &TMP1220),
((NimStringDesc*) &TMP1221),
((NimStringDesc*) &TMP1222),
((NimStringDesc*) &TMP1223),
((NimStringDesc*) &TMP1224),
((NimStringDesc*) &TMP1225),
((NimStringDesc*) &TMP1226),
((NimStringDesc*) &TMP1227),
((NimStringDesc*) &TMP1228),
((NimStringDesc*) &TMP1229),
((NimStringDesc*) &TMP1230),
((NimStringDesc*) &TMP1231),
((NimStringDesc*) &TMP1232),
((NimStringDesc*) &TMP1233),
((NimStringDesc*) &TMP1234),
((NimStringDesc*) &TMP1235),
((NimStringDesc*) &TMP1236),
((NimStringDesc*) &TMP1237),
((NimStringDesc*) &TMP1238),
((NimStringDesc*) &TMP1239),
((NimStringDesc*) &TMP1240),
((NimStringDesc*) &TMP1241),
((NimStringDesc*) &TMP1242),
((NimStringDesc*) &TMP1243),
((NimStringDesc*) &TMP1244),
((NimStringDesc*) &TMP1245),
((NimStringDesc*) &TMP1246),
((NimStringDesc*) &TMP1247),
((NimStringDesc*) &TMP1248),
((NimStringDesc*) &TMP1249),
((NimStringDesc*) &TMP1250),
((NimStringDesc*) &TMP1251),
((NimStringDesc*) &TMP1252),
((NimStringDesc*) &TMP1253),
((NimStringDesc*) &TMP1254),
((NimStringDesc*) &TMP1255),
((NimStringDesc*) &TMP1256),
((NimStringDesc*) &TMP1257),
((NimStringDesc*) &TMP1258),
((NimStringDesc*) &TMP1259),
((NimStringDesc*) &TMP1260),
((NimStringDesc*) &TMP1261),
((NimStringDesc*) &TMP1262),
((NimStringDesc*) &TMP1263),
((NimStringDesc*) &TMP1264),
((NimStringDesc*) &TMP1265),
((NimStringDesc*) &TMP1266),
((NimStringDesc*) &TMP1267),
((NimStringDesc*) &TMP1268),
((NimStringDesc*) &TMP1269),
((NimStringDesc*) &TMP1270),
((NimStringDesc*) &TMP1271),
((NimStringDesc*) &TMP1272),
((NimStringDesc*) &TMP1273),
((NimStringDesc*) &TMP1274),
((NimStringDesc*) &TMP1275),
((NimStringDesc*) &TMP1276),
((NimStringDesc*) &TMP1277),
((NimStringDesc*) &TMP1278),
((NimStringDesc*) &TMP1279),
((NimStringDesc*) &TMP1280),
((NimStringDesc*) &TMP1281),
((NimStringDesc*) &TMP1282),
((NimStringDesc*) &TMP1283),
((NimStringDesc*) &TMP1284),
((NimStringDesc*) &TMP1285),
((NimStringDesc*) &TMP1286),
((NimStringDesc*) &TMP1287),
((NimStringDesc*) &TMP1288),
((NimStringDesc*) &TMP1289),
((NimStringDesc*) &TMP1290),
((NimStringDesc*) &TMP1291),
((NimStringDesc*) &TMP1292),
((NimStringDesc*) &TMP1293),
((NimStringDesc*) &TMP1294),
((NimStringDesc*) &TMP1295),
((NimStringDesc*) &TMP1296),
((NimStringDesc*) &TMP1297),
((NimStringDesc*) &TMP1298),
((NimStringDesc*) &TMP1299),
((NimStringDesc*) &TMP1300),
((NimStringDesc*) &TMP1301),
((NimStringDesc*) &TMP1302),
((NimStringDesc*) &TMP1303),
((NimStringDesc*) &TMP1304),
((NimStringDesc*) &TMP1305),
((NimStringDesc*) &TMP1306),
((NimStringDesc*) &TMP1307),
((NimStringDesc*) &TMP1308),
((NimStringDesc*) &TMP1309),
((NimStringDesc*) &TMP1310),
((NimStringDesc*) &TMP1311),
((NimStringDesc*) &TMP1312),
((NimStringDesc*) &TMP1313),
((NimStringDesc*) &TMP1314),
((NimStringDesc*) &TMP1315),
((NimStringDesc*) &TMP1316),
((NimStringDesc*) &TMP1317),
((NimStringDesc*) &TMP1318),
((NimStringDesc*) &TMP1319),
((NimStringDesc*) &TMP1320),
((NimStringDesc*) &TMP1321),
((NimStringDesc*) &TMP1322),
((NimStringDesc*) &TMP1323),
((NimStringDesc*) &TMP1324),
((NimStringDesc*) &TMP1325),
((NimStringDesc*) &TMP1326),
((NimStringDesc*) &TMP1327),
((NimStringDesc*) &TMP1328),
((NimStringDesc*) &TMP1329),
((NimStringDesc*) &TMP1330),
((NimStringDesc*) &TMP1331),
((NimStringDesc*) &TMP1332),
((NimStringDesc*) &TMP1333),
((NimStringDesc*) &TMP1334),
((NimStringDesc*) &TMP1335),
((NimStringDesc*) &TMP1336),
((NimStringDesc*) &TMP1337),
((NimStringDesc*) &TMP1338),
((NimStringDesc*) &TMP1339),
((NimStringDesc*) &TMP1340),
((NimStringDesc*) &TMP1341),
((NimStringDesc*) &TMP1342),
((NimStringDesc*) &TMP1343),
((NimStringDesc*) &TMP1344),
((NimStringDesc*) &TMP1345),
((NimStringDesc*) &TMP1346),
((NimStringDesc*) &TMP1347),
((NimStringDesc*) &TMP1348),
((NimStringDesc*) &TMP1349),
((NimStringDesc*) &TMP1350),
((NimStringDesc*) &TMP1351),
((NimStringDesc*) &TMP1352),
((NimStringDesc*) &TMP1353),
((NimStringDesc*) &TMP1354),
((NimStringDesc*) &TMP1355),
((NimStringDesc*) &TMP1356),
((NimStringDesc*) &TMP1357),
((NimStringDesc*) &TMP1358),
((NimStringDesc*) &TMP1359),
((NimStringDesc*) &TMP1360),
((NimStringDesc*) &TMP1361),
((NimStringDesc*) &TMP1362),
((NimStringDesc*) &TMP1363),
((NimStringDesc*) &TMP1364),
((NimStringDesc*) &TMP1365),
((NimStringDesc*) &TMP1366),
((NimStringDesc*) &TMP1367),
((NimStringDesc*) &TMP1368),
((NimStringDesc*) &TMP1369),
((NimStringDesc*) &TMP1370),
((NimStringDesc*) &TMP1371),
((NimStringDesc*) &TMP1372),
((NimStringDesc*) &TMP1373),
((NimStringDesc*) &TMP1374),
((NimStringDesc*) &TMP1375),
((NimStringDesc*) &TMP1376),
((NimStringDesc*) &TMP1377),
((NimStringDesc*) &TMP1378),
((NimStringDesc*) &TMP1379),
((NimStringDesc*) &TMP1380),
((NimStringDesc*) &TMP1381),
((NimStringDesc*) &TMP1382),
((NimStringDesc*) &TMP1383),
((NimStringDesc*) &TMP1384),
((NimStringDesc*) &TMP1385),
((NimStringDesc*) &TMP1386),
((NimStringDesc*) &TMP1387),
((NimStringDesc*) &TMP1388),
((NimStringDesc*) &TMP1389),
((NimStringDesc*) &TMP1390),
((NimStringDesc*) &TMP1391),
((NimStringDesc*) &TMP1392),
((NimStringDesc*) &TMP1393),
((NimStringDesc*) &TMP1394),
((NimStringDesc*) &TMP1395),
((NimStringDesc*) &TMP1396),
((NimStringDesc*) &TMP1397),
((NimStringDesc*) &TMP1398),
((NimStringDesc*) &TMP1399)}
;
extern TFrame* frameptr_12037;

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
static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12037;
	frameptr_12037 = s;
}
static N_INLINE(void, popFrame)(void) {
	frameptr_12037 = (*frameptr_12037).prev;
}
N_NIMCALL(NI, findstr_148323)(NimStringDesc** a, NI aLen0, NimStringDesc* s) {
	NI result;
	NI i_148338;
	NI HEX3Atmp_148339;
	NI res_148341;
	nimfr("findStr", "wordrecg.nim")
	result = 0;
	i_148338 = 0;
	HEX3Atmp_148339 = 0;
	nimln(170, "wordrecg.nim");
	nimln(170, "wordrecg.nim");
	HEX3Atmp_148339 = (aLen0-1);
	nimln(1301, "system.nim");
	res_148341 = 0;
	nimln(1302, "system.nim");
	while (1) {
		nimln(1302, "system.nim");
		if (!(res_148341 <= HEX3Atmp_148339)) goto LA1;
		nimln(1301, "system.nim");
		i_148338 = res_148341;
		nimln(171, "wordrecg.nim");
		{
			NI LOC4;
			nimln(171, "wordrecg.nim");
			nimln(171, "wordrecg.nim");
			if ((NU)(i_148338) >= (NU)(aLen0)) raiseIndexError();
			LOC4 = 0;
			LOC4 = nsuCmpIgnoreStyle(a[i_148338], s);
			if (!(LOC4 == 0)) goto LA5;
			nimln(172, "wordrecg.nim");
			nimln(172, "wordrecg.nim");
			result = i_148338;
			goto BeforeRet;
		}		LA5: ;
		nimln(1304, "system.nim");
		res_148341 = addInt(res_148341, 1);
	} LA1: ;
	nimln(173, "wordrecg.nim");
	result = -1;
	BeforeRet: ;	popFrame();
	return result;
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
N_NIMCALL(NU8, whichkeyword_148346)(tident139017* id) {
	NU8 result;
	nimfr("whichKeyword", "wordrecg.nim")
	result = 0;
	nimln(176, "wordrecg.nim");
	{
		nimln(176, "wordrecg.nim");
		if (!((*id).Sup.Id < 0)) goto LA3;
		nimln(176, "wordrecg.nim");
		result = ((NU8) 0);
	}	goto LA1;
	LA3: ;
	{
		nimln(177, "wordrecg.nim");
		result = ((NU8)chckRange((*id).Sup.Id, ((NU8) 0), ((NU8) 247)));
	}	LA1: ;
	popFrame();
	return result;
}
N_NIMCALL(NU8, whichkeyword_148353)(NimStringDesc* id) {
	NU8 result;
	tident139017* LOC1;
	nimfr("whichKeyword", "wordrecg.nim")
	result = 0;
	nimln(180, "wordrecg.nim");
	nimln(180, "wordrecg.nim");
	LOC1 = 0;
	LOC1 = getident_139443(id);
	result = whichkeyword_148346(LOC1);
	popFrame();
	return result;
}
N_NIMCALL(void, initspecials_148359)(void) {
	NU8 s_148401;
	NU8 res_148410;
	nimfr("initSpecials", "wordrecg.nim")
	s_148401 = 0;
	nimln(1301, "system.nim");
	res_148410 = ((NU8) 1);
	nimln(1302, "system.nim");
	while (1) {
		NI LOC2;
		tident139017* LOC3;
		nimln(1302, "system.nim");
		if (!(res_148410 <= ((NU8) 247))) goto LA1;
		nimln(1301, "system.nim");
		s_148401 = res_148410;
		nimln(185, "wordrecg.nim");
		nimln(185, "wordrecg.nim");
		nimln(185, "wordrecg.nim");
		LOC2 = 0;
		LOC2 = hashignorestyle_109856(specialwords_148315[(s_148401)- 0]);
		LOC3 = 0;
		LOC3 = getident_139449(specialwords_148315[(s_148401)- 0], LOC2);
		nimln(185, "wordrecg.nim");
		(*LOC3).Sup.Id = ((NI) (s_148401));
		nimln(1304, "system.nim");
		res_148410 = addInt(res_148410, 1);
	} LA1: ;
	popFrame();
}N_NOINLINE(void, compilerwordrecgInit)(void) {
	nimfr("wordrecg", "wordrecg.nim")
	nimln(187, "wordrecg.nim");
	initspecials_148359();	popFrame();
}

N_NOINLINE(void, compilerwordrecgDatInit)(void) {
}

