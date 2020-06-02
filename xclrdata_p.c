

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for xclrdata\xclrdata.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if defined(_M_AMD64)


#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#include "ndr64types.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "xclrdata_h.h"

#define TYPE_FORMAT_STRING_SIZE   989                               
#define PROC_FORMAT_STRING_SIZE   11585                             
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _xclrdata_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } xclrdata_MIDL_TYPE_FORMAT_STRING;

typedef struct _xclrdata_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } xclrdata_MIDL_PROC_FORMAT_STRING;

typedef struct _xclrdata_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } xclrdata_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};

static const RPC_SYNTAX_IDENTIFIER  _NDR64_RpcTransferSyntax = 
{{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}};



extern const xclrdata_MIDL_TYPE_FORMAT_STRING xclrdata__MIDL_TypeFormatString;
extern const xclrdata_MIDL_PROC_FORMAT_STRING xclrdata__MIDL_ProcFormatString;
extern const xclrdata_MIDL_EXPR_FORMAT_STRING xclrdata__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IXCLRDataTarget3_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IXCLRDataTarget3_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IXCLRDataProcess_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IXCLRDataProcess_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IXCLRDataAppDomain_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IXCLRDataAppDomain_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IXCLRDataAssembly_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IXCLRDataAssembly_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IXCLRDataModule_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IXCLRDataModule_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IXCLRDataTypeDefinition_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IXCLRDataTypeDefinition_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IXCLRDataTypeInstance_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IXCLRDataTypeInstance_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IXCLRDataMethodDefinition_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IXCLRDataMethodDefinition_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IXCLRDataMethodInstance_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IXCLRDataMethodInstance_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IXCLRDataTask_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IXCLRDataTask_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IXCLRDataStackWalk_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IXCLRDataStackWalk_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IXCLRDataFrame_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IXCLRDataFrame_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IXCLRDataExceptionState_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IXCLRDataExceptionState_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IXCLRDataValue_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IXCLRDataValue_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IXCLRDataExceptionNotification_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IXCLRDataExceptionNotification_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IXCLRDataExceptionNotification2_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IXCLRDataExceptionNotification2_ProxyInfo;



#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

static const xclrdata_MIDL_PROC_FORMAT_STRING xclrdata__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure GetMetaData */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x10 ),	/* 16 */
/*  8 */	NdrFcShort( 0x58 ),	/* X64 Stack size/offset = 88 */
/* 10 */	NdrFcShort( 0x6c ),	/* 108 */
/* 12 */	NdrFcShort( 0x24 ),	/* 36 */
/* 14 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xa,		/* 10 */
/* 16 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 18 */	NdrFcShort( 0x1 ),	/* 1 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter imagePath */

/* 26 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 28 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 30 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter imageTimestamp */

/* 32 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 34 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 36 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter imageSize */

/* 38 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 40 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 42 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter mvid */

/* 44 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 46 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 48 */	NdrFcShort( 0x10 ),	/* Type Offset=16 */

	/* Parameter mdRva */

/* 50 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 52 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 54 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter flags */

/* 56 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 58 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 60 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bufferSize */

/* 62 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 64 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 66 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter buffer */

/* 68 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 70 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 72 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Parameter dataSize */

/* 74 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 76 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 78 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 80 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 82 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 84 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Flush */

/* 86 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 88 */	NdrFcLong( 0x0 ),	/* 0 */
/* 92 */	NdrFcShort( 0x3 ),	/* 3 */
/* 94 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 96 */	NdrFcShort( 0x0 ),	/* 0 */
/* 98 */	NdrFcShort( 0x8 ),	/* 8 */
/* 100 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 102 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 110 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 112 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 114 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 116 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetAddress */


	/* Procedure StartEnumMethodDefinitions */


	/* Procedure StartEnumTasks */

/* 118 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 120 */	NdrFcLong( 0x0 ),	/* 0 */
/* 124 */	NdrFcShort( 0x4 ),	/* 4 */
/* 126 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 130 */	NdrFcShort( 0x2c ),	/* 44 */
/* 132 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 134 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 142 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter address */


	/* Parameter handle */


	/* Parameter handle */

/* 144 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 146 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 148 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 150 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 152 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 154 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumTask */

/* 156 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 158 */	NdrFcLong( 0x0 ),	/* 0 */
/* 162 */	NdrFcShort( 0x5 ),	/* 5 */
/* 164 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 166 */	NdrFcShort( 0x24 ),	/* 36 */
/* 168 */	NdrFcShort( 0x2c ),	/* 44 */
/* 170 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 172 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 180 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 182 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 184 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 186 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter task */

/* 188 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 190 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 192 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */

	/* Return value */

/* 194 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 196 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 198 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EndEnumInstances */


	/* Procedure EndEnumMethodDefinitions */


	/* Procedure EndEnumTasks */

/* 200 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 202 */	NdrFcLong( 0x0 ),	/* 0 */
/* 206 */	NdrFcShort( 0x6 ),	/* 6 */
/* 208 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 210 */	NdrFcShort( 0x10 ),	/* 16 */
/* 212 */	NdrFcShort( 0x8 ),	/* 8 */
/* 214 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 216 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 224 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */


	/* Parameter handle */


	/* Parameter handle */

/* 226 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 228 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 230 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 232 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 234 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 236 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTaskByOSThreadID */

/* 238 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 240 */	NdrFcLong( 0x0 ),	/* 0 */
/* 244 */	NdrFcShort( 0x7 ),	/* 7 */
/* 246 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 248 */	NdrFcShort( 0x8 ),	/* 8 */
/* 250 */	NdrFcShort( 0x8 ),	/* 8 */
/* 252 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 254 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 262 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter osThreadID */

/* 264 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 266 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 268 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter task */

/* 270 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 272 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 274 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */

	/* Return value */

/* 276 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 278 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 280 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTaskByUniqueID */

/* 282 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 284 */	NdrFcLong( 0x0 ),	/* 0 */
/* 288 */	NdrFcShort( 0x8 ),	/* 8 */
/* 290 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 292 */	NdrFcShort( 0x10 ),	/* 16 */
/* 294 */	NdrFcShort( 0x8 ),	/* 8 */
/* 296 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 298 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 306 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter taskID */

/* 308 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 310 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 312 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter task */

/* 314 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 316 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 318 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */

	/* Return value */

/* 320 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 322 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 324 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetNumFields */


	/* Procedure GetDesiredExecutionState */


	/* Procedure GetEnCVersion */


	/* Procedure GetFlags */


	/* Procedure GetNumStaticFields */


	/* Procedure GetFlags */

/* 326 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 328 */	NdrFcLong( 0x0 ),	/* 0 */
/* 332 */	NdrFcShort( 0x9 ),	/* 9 */
/* 334 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 338 */	NdrFcShort( 0x24 ),	/* 36 */
/* 340 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 342 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 350 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter numFields */


	/* Parameter state */


	/* Parameter version */


	/* Parameter flags */


	/* Parameter numFields */


	/* Parameter flags */

/* 352 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 354 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 356 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 358 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 360 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 362 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsSameObject */

/* 364 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 366 */	NdrFcLong( 0x0 ),	/* 0 */
/* 370 */	NdrFcShort( 0xa ),	/* 10 */
/* 372 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 376 */	NdrFcShort( 0x8 ),	/* 8 */
/* 378 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 380 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 388 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter process */

/* 390 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 392 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 394 */	NdrFcShort( 0x54 ),	/* Type Offset=84 */

	/* Return value */

/* 396 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 398 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 400 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetManagedObject */

/* 402 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 404 */	NdrFcLong( 0x0 ),	/* 0 */
/* 408 */	NdrFcShort( 0xb ),	/* 11 */
/* 410 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 414 */	NdrFcShort( 0x8 ),	/* 8 */
/* 416 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 418 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 426 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 428 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 430 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 432 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */

	/* Return value */

/* 434 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 436 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 438 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetOSThreadID */


	/* Procedure GetDesiredExecutionState */

/* 440 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 442 */	NdrFcLong( 0x0 ),	/* 0 */
/* 446 */	NdrFcShort( 0xc ),	/* 12 */
/* 448 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 452 */	NdrFcShort( 0x24 ),	/* 36 */
/* 454 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 456 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 464 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter id */


	/* Parameter state */

/* 466 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 468 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 470 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 472 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 474 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 476 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetDesiredExecutionState */

/* 478 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 480 */	NdrFcLong( 0x0 ),	/* 0 */
/* 484 */	NdrFcShort( 0xd ),	/* 13 */
/* 486 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 488 */	NdrFcShort( 0x8 ),	/* 8 */
/* 490 */	NdrFcShort( 0x8 ),	/* 8 */
/* 492 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 494 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 502 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter state */

/* 504 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 506 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 508 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 510 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 512 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 514 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetAddressType */

/* 516 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 518 */	NdrFcLong( 0x0 ),	/* 0 */
/* 522 */	NdrFcShort( 0xe ),	/* 14 */
/* 524 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 526 */	NdrFcShort( 0x10 ),	/* 16 */
/* 528 */	NdrFcShort( 0x22 ),	/* 34 */
/* 530 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 532 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 540 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter address */

/* 542 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 544 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 546 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter type */

/* 548 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 550 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 552 */	NdrFcShort( 0x7c ),	/* Type Offset=124 */

	/* Return value */

/* 554 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 556 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 558 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetRuntimeNameByAddress */

/* 560 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 562 */	NdrFcLong( 0x0 ),	/* 0 */
/* 566 */	NdrFcShort( 0xf ),	/* 15 */
/* 568 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 570 */	NdrFcShort( 0x20 ),	/* 32 */
/* 572 */	NdrFcShort( 0x48 ),	/* 72 */
/* 574 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x7,		/* 7 */
/* 576 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 578 */	NdrFcShort( 0x1 ),	/* 1 */
/* 580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 584 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter address */

/* 586 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 588 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 590 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter flags */

/* 592 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 594 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 596 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bufLen */

/* 598 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 600 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 602 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameLen */

/* 604 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 606 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 608 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameBuf */

/* 610 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 612 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 614 */	NdrFcShort( 0x80 ),	/* Type Offset=128 */

	/* Parameter displacement */

/* 616 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 618 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 620 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 622 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 624 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 626 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartEnumAppDomains */

/* 628 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 630 */	NdrFcLong( 0x0 ),	/* 0 */
/* 634 */	NdrFcShort( 0x10 ),	/* 16 */
/* 636 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 640 */	NdrFcShort( 0x2c ),	/* 44 */
/* 642 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 644 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 652 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 654 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 656 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 658 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 660 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 662 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 664 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumAppDomain */

/* 666 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 668 */	NdrFcLong( 0x0 ),	/* 0 */
/* 672 */	NdrFcShort( 0x11 ),	/* 17 */
/* 674 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 676 */	NdrFcShort( 0x24 ),	/* 36 */
/* 678 */	NdrFcShort( 0x2c ),	/* 44 */
/* 680 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 682 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 690 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 692 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 694 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 696 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter appDomain */

/* 698 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 700 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 702 */	NdrFcShort( 0x8c ),	/* Type Offset=140 */

	/* Return value */

/* 704 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 706 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 708 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EndEnumFieldsByName */


	/* Procedure EndEnumAppDomains */

/* 710 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 712 */	NdrFcLong( 0x0 ),	/* 0 */
/* 716 */	NdrFcShort( 0x12 ),	/* 18 */
/* 718 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 720 */	NdrFcShort( 0x10 ),	/* 16 */
/* 722 */	NdrFcShort( 0x8 ),	/* 8 */
/* 724 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 726 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 734 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */


	/* Parameter handle */

/* 736 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 738 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 740 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 742 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 744 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 746 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetAppDomainByUniqueID */

/* 748 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 750 */	NdrFcLong( 0x0 ),	/* 0 */
/* 754 */	NdrFcShort( 0x13 ),	/* 19 */
/* 756 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 758 */	NdrFcShort( 0x10 ),	/* 16 */
/* 760 */	NdrFcShort( 0x8 ),	/* 8 */
/* 762 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 764 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 772 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter id */

/* 774 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 776 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 778 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter appDomain */

/* 780 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 782 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 784 */	NdrFcShort( 0x8c ),	/* Type Offset=140 */

	/* Return value */

/* 786 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 788 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 790 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartEnumAssemblies */

/* 792 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 794 */	NdrFcLong( 0x0 ),	/* 0 */
/* 798 */	NdrFcShort( 0x14 ),	/* 20 */
/* 800 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 802 */	NdrFcShort( 0x0 ),	/* 0 */
/* 804 */	NdrFcShort( 0x2c ),	/* 44 */
/* 806 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 808 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 816 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 818 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 820 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 822 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 824 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 826 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 828 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumAssembly */

/* 830 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 832 */	NdrFcLong( 0x0 ),	/* 0 */
/* 836 */	NdrFcShort( 0x15 ),	/* 21 */
/* 838 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 840 */	NdrFcShort( 0x24 ),	/* 36 */
/* 842 */	NdrFcShort( 0x2c ),	/* 44 */
/* 844 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 846 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 854 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 856 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 858 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 860 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter assembly */

/* 862 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 864 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 866 */	NdrFcShort( 0xa2 ),	/* Type Offset=162 */

	/* Return value */

/* 868 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 870 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 872 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EndEnumAssemblies */

/* 874 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 876 */	NdrFcLong( 0x0 ),	/* 0 */
/* 880 */	NdrFcShort( 0x16 ),	/* 22 */
/* 882 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 884 */	NdrFcShort( 0x10 ),	/* 16 */
/* 886 */	NdrFcShort( 0x8 ),	/* 8 */
/* 888 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 890 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 898 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 900 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 902 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 904 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 906 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 908 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 910 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartEnumModules */

/* 912 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 914 */	NdrFcLong( 0x0 ),	/* 0 */
/* 918 */	NdrFcShort( 0x17 ),	/* 23 */
/* 920 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 924 */	NdrFcShort( 0x2c ),	/* 44 */
/* 926 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 928 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 932 */	NdrFcShort( 0x0 ),	/* 0 */
/* 934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 936 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 938 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 940 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 942 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 944 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 946 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 948 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumModule */

/* 950 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 952 */	NdrFcLong( 0x0 ),	/* 0 */
/* 956 */	NdrFcShort( 0x18 ),	/* 24 */
/* 958 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 960 */	NdrFcShort( 0x24 ),	/* 36 */
/* 962 */	NdrFcShort( 0x2c ),	/* 44 */
/* 964 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 966 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 972 */	NdrFcShort( 0x0 ),	/* 0 */
/* 974 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 976 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 978 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 980 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter mod */

/* 982 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 984 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 986 */	NdrFcShort( 0xb8 ),	/* Type Offset=184 */

	/* Return value */

/* 988 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 990 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 992 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EndEnumStaticFields */


	/* Procedure EndEnumFields */


	/* Procedure EndEnumModules */

/* 994 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 996 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1000 */	NdrFcShort( 0x19 ),	/* 25 */
/* 1002 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1004 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1006 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1008 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1010 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1012 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1016 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1018 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */


	/* Parameter handle */


	/* Parameter handle */

/* 1020 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1022 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1024 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 1026 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1028 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1030 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetModuleByAddress */

/* 1032 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1034 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1038 */	NdrFcShort( 0x1a ),	/* 26 */
/* 1040 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1042 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1044 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1046 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 1048 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1056 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter address */

/* 1058 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1060 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1062 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter mod */

/* 1064 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1066 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1068 */	NdrFcShort( 0xb8 ),	/* Type Offset=184 */

	/* Return value */

/* 1070 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1072 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1074 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartEnumMethodInstancesByAddress */

/* 1076 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1078 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1082 */	NdrFcShort( 0x1b ),	/* 27 */
/* 1084 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1086 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1088 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1090 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1092 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1098 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1100 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter address */

/* 1102 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1104 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1106 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter appDomain */

/* 1108 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1110 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1112 */	NdrFcShort( 0x90 ),	/* Type Offset=144 */

	/* Parameter handle */

/* 1114 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1116 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1118 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 1120 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1122 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1124 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumMethodInstanceByAddress */

/* 1126 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1128 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1132 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1134 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1136 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1138 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1140 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 1142 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1150 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 1152 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 1154 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1156 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter method */

/* 1158 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1160 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1162 */	NdrFcShort( 0xce ),	/* Type Offset=206 */

	/* Return value */

/* 1164 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1166 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1168 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EndEnumMethodInstancesByAddress */

/* 1170 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1172 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1176 */	NdrFcShort( 0x1d ),	/* 29 */
/* 1178 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1180 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1182 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1184 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1186 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1194 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 1196 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1198 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1200 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 1202 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1204 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1206 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetDataByAddress */

/* 1208 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1210 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1214 */	NdrFcShort( 0x1e ),	/* 30 */
/* 1216 */	NdrFcShort( 0x58 ),	/* X64 Stack size/offset = 88 */
/* 1218 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1220 */	NdrFcShort( 0x48 ),	/* 72 */
/* 1222 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xa,		/* 10 */
/* 1224 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1226 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1232 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter address */

/* 1234 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1236 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1238 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter flags */

/* 1240 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1242 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1244 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter appDomain */

/* 1246 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1248 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1250 */	NdrFcShort( 0x90 ),	/* Type Offset=144 */

	/* Parameter tlsTask */

/* 1252 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1254 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1256 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */

	/* Parameter bufLen */

/* 1258 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1260 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1262 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameLen */

/* 1264 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1266 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1268 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameBuf */

/* 1270 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1272 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1274 */	NdrFcShort( 0xe4 ),	/* Type Offset=228 */

	/* Parameter value */

/* 1276 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1278 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 1280 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */

	/* Parameter displacement */

/* 1282 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1284 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 1286 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 1288 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1290 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 1292 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetExceptionStateByExceptionRecord */

/* 1294 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1296 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1300 */	NdrFcShort( 0x1f ),	/* 31 */
/* 1302 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1304 */	NdrFcShort( 0xcc ),	/* 204 */
/* 1306 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1308 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 1310 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1318 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter record */

/* 1320 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 1322 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1324 */	NdrFcShort( 0xfa ),	/* Type Offset=250 */

	/* Parameter exState */

/* 1326 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1328 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1330 */	NdrFcShort( 0x10a ),	/* Type Offset=266 */

	/* Return value */

/* 1332 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1334 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1336 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TranslateExceptionRecordToNotification */

/* 1338 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1340 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1344 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1346 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1348 */	NdrFcShort( 0xcc ),	/* 204 */
/* 1350 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1352 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1354 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1362 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter record */

/* 1364 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 1366 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1368 */	NdrFcShort( 0xfa ),	/* Type Offset=250 */

	/* Parameter notify */

/* 1370 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1372 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1374 */	NdrFcShort( 0x120 ),	/* Type Offset=288 */

	/* Return value */

/* 1376 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1378 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1380 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Request */

/* 1382 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1384 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1388 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1390 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1392 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1394 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1396 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1398 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1400 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1402 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1406 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter reqCode */

/* 1408 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1410 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1412 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter inBufferSize */

/* 1414 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1416 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1418 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter inBuffer */

/* 1420 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1422 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1424 */	NdrFcShort( 0x136 ),	/* Type Offset=310 */

	/* Parameter outBufferSize */

/* 1426 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1428 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1430 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter outBuffer */

/* 1432 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 1434 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1436 */	NdrFcShort( 0x146 ),	/* Type Offset=326 */

	/* Return value */

/* 1438 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1440 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1442 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateMemoryValue */

/* 1444 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1446 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1450 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1452 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1454 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1456 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1458 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1460 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1468 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter appDomain */

/* 1470 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1472 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1474 */	NdrFcShort( 0x90 ),	/* Type Offset=144 */

	/* Parameter tlsTask */

/* 1476 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1478 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1480 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */

	/* Parameter type */

/* 1482 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1484 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1486 */	NdrFcShort( 0x152 ),	/* Type Offset=338 */

	/* Parameter addr */

/* 1488 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1490 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1492 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter value */

/* 1494 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1496 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1498 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */

	/* Return value */

/* 1500 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1502 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1504 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetAllTypeNotifications */

/* 1506 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1508 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1512 */	NdrFcShort( 0x23 ),	/* 35 */
/* 1514 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1516 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1518 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1520 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1522 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1530 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter mod */

/* 1532 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1534 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1536 */	NdrFcShort( 0xbc ),	/* Type Offset=188 */

	/* Parameter flags */

/* 1538 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1540 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1542 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1544 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1546 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1548 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetAllCodeNotifications */

/* 1550 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1552 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1556 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1558 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1560 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1562 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1564 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1566 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1574 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter mod */

/* 1576 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1578 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1580 */	NdrFcShort( 0xbc ),	/* Type Offset=188 */

	/* Parameter flags */

/* 1582 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1584 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1586 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1588 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1590 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1592 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTypeNotifications */

/* 1594 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1596 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1600 */	NdrFcShort( 0x25 ),	/* 37 */
/* 1602 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1604 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1606 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1608 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1610 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1612 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1614 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1618 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter numTokens */

/* 1620 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1622 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1624 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter mods */

/* 1626 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1628 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1630 */	NdrFcShort( 0x164 ),	/* Type Offset=356 */

	/* Parameter singleMod */

/* 1632 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1634 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1636 */	NdrFcShort( 0xbc ),	/* Type Offset=188 */

	/* Parameter tokens */

/* 1638 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1640 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1642 */	NdrFcShort( 0x17a ),	/* Type Offset=378 */

	/* Parameter flags */

/* 1644 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1646 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1648 */	NdrFcShort( 0x17a ),	/* Type Offset=378 */

	/* Return value */

/* 1650 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1652 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1654 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetTypeNotifications */

/* 1656 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1658 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1662 */	NdrFcShort( 0x26 ),	/* 38 */
/* 1664 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 1666 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1668 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1670 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 1672 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1676 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1680 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter numTokens */

/* 1682 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1684 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1686 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter mods */

/* 1688 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1690 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1692 */	NdrFcShort( 0x164 ),	/* Type Offset=356 */

	/* Parameter singleMod */

/* 1694 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1696 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1698 */	NdrFcShort( 0xbc ),	/* Type Offset=188 */

	/* Parameter tokens */

/* 1700 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1702 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1704 */	NdrFcShort( 0x17a ),	/* Type Offset=378 */

	/* Parameter flags */

/* 1706 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1708 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1710 */	NdrFcShort( 0x17a ),	/* Type Offset=378 */

	/* Parameter singleFlags */

/* 1712 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1714 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1716 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1718 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1720 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1722 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCodeNotifications */

/* 1724 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1726 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1730 */	NdrFcShort( 0x27 ),	/* 39 */
/* 1732 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1734 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1736 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1738 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1740 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1742 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1744 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1748 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter numTokens */

/* 1750 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1752 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1754 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter mods */

/* 1756 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1758 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1760 */	NdrFcShort( 0x164 ),	/* Type Offset=356 */

	/* Parameter singleMod */

/* 1762 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1764 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1766 */	NdrFcShort( 0xbc ),	/* Type Offset=188 */

	/* Parameter tokens */

/* 1768 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1770 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1772 */	NdrFcShort( 0x17a ),	/* Type Offset=378 */

	/* Parameter flags */

/* 1774 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1776 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1778 */	NdrFcShort( 0x17a ),	/* Type Offset=378 */

	/* Return value */

/* 1780 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1782 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1784 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetCodeNotifications */

/* 1786 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1788 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1792 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1794 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 1796 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1798 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1800 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 1802 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1806 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1810 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter numTokens */

/* 1812 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1814 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1816 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter mods */

/* 1818 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1820 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1822 */	NdrFcShort( 0x164 ),	/* Type Offset=356 */

	/* Parameter singleMod */

/* 1824 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1826 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1828 */	NdrFcShort( 0xbc ),	/* Type Offset=188 */

	/* Parameter tokens */

/* 1830 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1832 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1834 */	NdrFcShort( 0x17a ),	/* Type Offset=378 */

	/* Parameter flags */

/* 1836 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1838 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1840 */	NdrFcShort( 0x17a ),	/* Type Offset=378 */

	/* Parameter singleFlags */

/* 1842 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1844 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1846 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1848 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1850 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1852 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetOtherNotificationFlags */

/* 1854 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1856 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1860 */	NdrFcShort( 0x29 ),	/* 41 */
/* 1862 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1864 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1866 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1868 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1870 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1874 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1878 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter flags */

/* 1880 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1882 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1884 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1886 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1888 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1890 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetOtherNotificationFlags */

/* 1892 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1894 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1898 */	NdrFcShort( 0x2a ),	/* 42 */
/* 1900 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1902 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1904 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1906 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1908 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1910 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1916 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter flags */

/* 1918 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1920 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1922 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1924 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1926 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1928 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartEnumMethodDefinitionsByAddress */

/* 1930 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1932 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1936 */	NdrFcShort( 0x2b ),	/* 43 */
/* 1938 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1940 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1942 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1944 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1946 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1948 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1950 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1952 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1954 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter address */

/* 1956 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1958 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1960 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter handle */

/* 1962 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1964 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1966 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 1968 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1970 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1972 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumMethodDefinitionByAddress */

/* 1974 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1976 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1980 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1982 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1984 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1986 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1988 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 1990 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1998 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 2000 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 2002 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2004 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter method */

/* 2006 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2008 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2010 */	NdrFcShort( 0x186 ),	/* Type Offset=390 */

	/* Return value */

/* 2012 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2014 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2016 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EndEnumMethodDefinitionsByAddress */

/* 2018 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2020 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2024 */	NdrFcShort( 0x2d ),	/* 45 */
/* 2026 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2028 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2030 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2032 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2034 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2042 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 2044 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2046 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2048 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 2050 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2052 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2054 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FollowStub */

/* 2056 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2058 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2062 */	NdrFcShort( 0x2e ),	/* 46 */
/* 2064 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 2066 */	NdrFcShort( 0x8c ),	/* 140 */
/* 2068 */	NdrFcShort( 0xbc ),	/* 188 */
/* 2070 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x7,		/* 7 */
/* 2072 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2076 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2078 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2080 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter inFlags */

/* 2082 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2084 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2086 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter inAddr */

/* 2088 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2090 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2092 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter inBuffer */

/* 2094 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 2096 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2098 */	NdrFcShort( 0x1a6 ),	/* Type Offset=422 */

	/* Parameter outAddr */

/* 2100 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2102 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2104 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter outBuffer */

/* 2106 */	NdrFcShort( 0x112 ),	/* Flags:  must free, out, simple ref, */
/* 2108 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2110 */	NdrFcShort( 0x1a6 ),	/* Type Offset=422 */

	/* Parameter outFlags */

/* 2112 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2114 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2116 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2118 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2120 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 2122 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FollowStub2 */

/* 2124 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2126 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2130 */	NdrFcShort( 0x2f ),	/* 47 */
/* 2132 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 2134 */	NdrFcShort( 0x8c ),	/* 140 */
/* 2136 */	NdrFcShort( 0xbc ),	/* 188 */
/* 2138 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 2140 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2148 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter task */

/* 2150 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2152 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2154 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */

	/* Parameter inFlags */

/* 2156 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2158 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2160 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter inAddr */

/* 2162 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2164 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2166 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter inBuffer */

/* 2168 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 2170 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2172 */	NdrFcShort( 0x1a6 ),	/* Type Offset=422 */

	/* Parameter outAddr */

/* 2174 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2176 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2178 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter outBuffer */

/* 2180 */	NdrFcShort( 0x112 ),	/* Flags:  must free, out, simple ref, */
/* 2182 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2184 */	NdrFcShort( 0x1a6 ),	/* Type Offset=422 */

	/* Parameter outFlags */

/* 2186 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2188 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 2190 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2192 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2194 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 2196 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetProcess */

/* 2198 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2200 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2204 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2206 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2210 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2212 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2214 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2222 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter process */

/* 2224 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2226 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2228 */	NdrFcShort( 0x1b0 ),	/* Type Offset=432 */

	/* Return value */

/* 2230 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2232 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2234 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetName */

/* 2236 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2238 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2242 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2244 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2246 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2248 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2250 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 2252 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2254 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2260 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bufLen */

/* 2262 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2264 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2266 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameLen */

/* 2268 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2270 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2272 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter name */

/* 2274 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2276 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2278 */	NdrFcShort( 0x1b4 ),	/* Type Offset=436 */

	/* Return value */

/* 2280 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2282 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2284 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetSize */


	/* Procedure GetUniqueID */


	/* Procedure GetUniqueID */

/* 2286 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2288 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2292 */	NdrFcShort( 0x5 ),	/* 5 */
/* 2294 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2298 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2300 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2302 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2310 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter size */


	/* Parameter id */


	/* Parameter id */

/* 2312 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2314 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2316 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 2318 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2320 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2322 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetNumArguments */


	/* Procedure GetFlags */


	/* Procedure GetFlags */

/* 2324 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2326 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2330 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2332 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2336 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2338 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2340 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2348 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter numArgs */


	/* Parameter flags */


	/* Parameter flags */

/* 2350 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2352 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2354 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 2356 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2358 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2360 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsSameObject */

/* 2362 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2364 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2368 */	NdrFcShort( 0x7 ),	/* 7 */
/* 2370 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2374 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2376 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2378 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2386 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter appDomain */

/* 2388 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2390 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2392 */	NdrFcShort( 0x90 ),	/* Type Offset=144 */

	/* Return value */

/* 2394 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2396 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2398 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetManagedObject */

/* 2400 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2402 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2406 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2408 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2412 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2414 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2416 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2424 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 2426 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2428 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2430 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */

	/* Return value */

/* 2432 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2434 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2436 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Request */


	/* Procedure Request */


	/* Procedure Request */

/* 2438 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2440 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2444 */	NdrFcShort( 0x9 ),	/* 9 */
/* 2446 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 2448 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2450 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2452 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 2454 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2456 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2458 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2462 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter reqCode */


	/* Parameter reqCode */


	/* Parameter reqCode */

/* 2464 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2466 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2468 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter inBufferSize */


	/* Parameter inBufferSize */


	/* Parameter inBufferSize */

/* 2470 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2472 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2474 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter inBuffer */


	/* Parameter inBuffer */


	/* Parameter inBuffer */

/* 2476 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2478 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2480 */	NdrFcShort( 0x136 ),	/* Type Offset=310 */

	/* Parameter outBufferSize */


	/* Parameter outBufferSize */


	/* Parameter outBufferSize */

/* 2482 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2484 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2486 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter outBuffer */


	/* Parameter outBuffer */


	/* Parameter outBuffer */

/* 2488 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 2490 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2492 */	NdrFcShort( 0x146 ),	/* Type Offset=326 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 2494 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2496 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2498 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartEnumMethodInstances */


	/* Procedure StartEnumAssemblies */


	/* Procedure StartEnumModules */

/* 2500 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2502 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2506 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2508 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2512 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2514 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2516 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2524 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */


	/* Parameter handle */


	/* Parameter handle */

/* 2526 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2528 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2530 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 2532 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2534 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2536 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumModule */

/* 2538 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2540 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2544 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2546 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2548 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2550 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2552 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 2554 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2560 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2562 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 2564 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 2566 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2568 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter mod */

/* 2570 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2572 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2574 */	NdrFcShort( 0xb8 ),	/* Type Offset=184 */

	/* Return value */

/* 2576 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2578 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2580 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EndEnumMethodInstances */


	/* Procedure EndEnumAssemblies */


	/* Procedure EndEnumModules */

/* 2582 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2584 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2588 */	NdrFcShort( 0x5 ),	/* 5 */
/* 2590 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2592 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2594 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2596 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2598 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2606 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */


	/* Parameter handle */


	/* Parameter handle */

/* 2608 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2610 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2612 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 2614 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2616 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2618 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetName */

/* 2620 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2622 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2626 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2628 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2630 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2632 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2634 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 2636 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2638 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2644 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bufLen */

/* 2646 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2648 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2650 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameLen */

/* 2652 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2654 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2656 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter name */

/* 2658 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2660 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2662 */	NdrFcShort( 0x1b4 ),	/* Type Offset=436 */

	/* Return value */

/* 2664 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2666 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2668 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFileName */

/* 2670 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2672 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2676 */	NdrFcShort( 0x7 ),	/* 7 */
/* 2678 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2680 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2682 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2684 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 2686 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2688 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2694 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bufLen */

/* 2696 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2698 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2700 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameLen */

/* 2702 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2704 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2706 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter name */

/* 2708 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2710 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2712 */	NdrFcShort( 0x1b4 ),	/* Type Offset=436 */

	/* Return value */

/* 2714 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2716 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2718 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetNumLocalVariables */


	/* Procedure GetFlags */

/* 2720 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2722 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2726 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2728 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2732 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2734 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2736 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2744 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter numLocals */


	/* Parameter flags */

/* 2746 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2748 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2750 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 2752 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2754 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2756 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsSameObject */

/* 2758 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2760 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2764 */	NdrFcShort( 0x9 ),	/* 9 */
/* 2766 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2770 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2772 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2774 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2782 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter assembly */

/* 2784 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2786 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2788 */	NdrFcShort( 0xa6 ),	/* Type Offset=166 */

	/* Return value */

/* 2790 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2792 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2794 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Request */

/* 2796 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2798 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2802 */	NdrFcShort( 0xa ),	/* 10 */
/* 2804 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 2806 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2808 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2810 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 2812 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2814 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2816 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2818 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2820 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter reqCode */

/* 2822 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2824 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter inBufferSize */

/* 2828 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2830 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2832 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter inBuffer */

/* 2834 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2836 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2838 */	NdrFcShort( 0x136 ),	/* Type Offset=310 */

	/* Parameter outBufferSize */

/* 2840 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2842 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2844 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter outBuffer */

/* 2846 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 2848 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2850 */	NdrFcShort( 0x146 ),	/* Type Offset=326 */

	/* Return value */

/* 2852 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2854 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2856 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartEnumAppDomains */

/* 2858 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2860 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2864 */	NdrFcShort( 0xb ),	/* 11 */
/* 2866 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2868 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2870 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2872 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2874 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2882 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 2884 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2886 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2888 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 2890 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2892 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2894 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumAppDomain */

/* 2896 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2898 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2902 */	NdrFcShort( 0xc ),	/* 12 */
/* 2904 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2906 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2908 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2910 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 2912 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2916 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2920 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 2922 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 2924 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2926 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter appDomain */

/* 2928 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2930 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2932 */	NdrFcShort( 0x8c ),	/* Type Offset=140 */

	/* Return value */

/* 2934 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2936 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2938 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EndEnumStaticFieldsByName */


	/* Procedure EndEnumInstances */


	/* Procedure EndEnumAppDomains */

/* 2940 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2942 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2946 */	NdrFcShort( 0xd ),	/* 13 */
/* 2948 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2950 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2952 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2954 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2956 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2964 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */


	/* Parameter handle */


	/* Parameter handle */

/* 2966 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2968 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2970 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 2972 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2974 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2976 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetDisplayName */

/* 2978 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2980 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2984 */	NdrFcShort( 0xe ),	/* 14 */
/* 2986 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2988 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2990 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2992 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 2994 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2996 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3000 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3002 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bufLen */

/* 3004 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3006 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3008 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameLen */

/* 3010 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3012 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3014 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter name */

/* 3016 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3018 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3020 */	NdrFcShort( 0x1b4 ),	/* Type Offset=436 */

	/* Return value */

/* 3022 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3024 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3026 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumAssembly */

/* 3028 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3030 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3034 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3036 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3038 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3040 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3042 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3044 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3052 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 3054 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 3056 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3058 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter assembly */

/* 3060 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3062 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3064 */	NdrFcShort( 0xa2 ),	/* Type Offset=162 */

	/* Return value */

/* 3066 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3068 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3070 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetStackSizeSkipped */


	/* Procedure StartEnumTypeDefinitions */

/* 3072 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3074 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3078 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3080 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3084 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3086 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3088 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3096 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter stackSizeSkipped */


	/* Parameter handle */

/* 3098 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3100 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3102 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 3104 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3106 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3108 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumTypeDefinition */

/* 3110 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3112 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3116 */	NdrFcShort( 0x7 ),	/* 7 */
/* 3118 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3120 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3122 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3124 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3126 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3134 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 3136 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 3138 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3140 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter typeDefinition */

/* 3142 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3144 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3146 */	NdrFcShort( 0x1c0 ),	/* Type Offset=448 */

	/* Return value */

/* 3148 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3150 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3152 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EndEnumMethodInstancesByName */


	/* Procedure EndEnumTypeDefinitions */

/* 3154 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3156 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3160 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3162 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3164 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3166 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3168 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3170 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3178 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */


	/* Parameter handle */

/* 3180 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3182 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3184 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 3186 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3188 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3190 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartEnumTypeInstances */

/* 3192 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3194 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3198 */	NdrFcShort( 0x9 ),	/* 9 */
/* 3200 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3204 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3206 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3208 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3216 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter appDomain */

/* 3218 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3220 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3222 */	NdrFcShort( 0x90 ),	/* Type Offset=144 */

	/* Parameter handle */

/* 3224 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3226 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3228 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 3230 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3232 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3234 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumTypeInstance */

/* 3236 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3238 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3242 */	NdrFcShort( 0xa ),	/* 10 */
/* 3244 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3246 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3248 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3250 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3252 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3260 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 3262 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 3264 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3266 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter typeInstance */

/* 3268 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3270 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3272 */	NdrFcShort( 0x1d6 ),	/* Type Offset=470 */

	/* Return value */

/* 3274 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3276 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3278 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EndEnumTypeInstances */

/* 3280 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3282 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3286 */	NdrFcShort( 0xb ),	/* 11 */
/* 3288 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3290 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3292 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3294 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3296 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3304 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 3306 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3308 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3310 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 3312 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3314 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3316 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartEnumTypeDefinitionsByName */

/* 3318 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3320 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3324 */	NdrFcShort( 0xc ),	/* 12 */
/* 3326 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3328 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3330 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3332 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3334 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3342 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 3344 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3346 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3348 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter flags */

/* 3350 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3352 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3354 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter handle */

/* 3356 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3358 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3360 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 3362 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3364 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3366 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumTypeDefinitionByName */

/* 3368 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3370 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3374 */	NdrFcShort( 0xd ),	/* 13 */
/* 3376 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3378 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3380 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3382 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3384 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3388 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3392 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 3394 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 3396 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3398 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter type */

/* 3400 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3402 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3404 */	NdrFcShort( 0x1c0 ),	/* Type Offset=448 */

	/* Return value */

/* 3406 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3408 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3410 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EndEnumExtents */


	/* Procedure EndEnumTypeDefinitionsByName */

/* 3412 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3414 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3418 */	NdrFcShort( 0xe ),	/* 14 */
/* 3420 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3422 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3424 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3426 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3428 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3436 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */


	/* Parameter handle */

/* 3438 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3440 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3442 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 3444 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3446 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3448 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartEnumTypeInstancesByName */

/* 3450 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3452 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3456 */	NdrFcShort( 0xf ),	/* 15 */
/* 3458 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 3460 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3462 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3464 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 3466 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3474 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 3476 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3478 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3480 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter flags */

/* 3482 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3484 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3486 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter appDomain */

/* 3488 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3490 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3492 */	NdrFcShort( 0x90 ),	/* Type Offset=144 */

	/* Parameter handle */

/* 3494 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3496 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3498 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 3500 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3502 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3504 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumTypeInstanceByName */

/* 3506 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3508 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3512 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3514 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3516 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3518 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3520 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3522 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3530 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 3532 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 3534 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3536 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter type */

/* 3538 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3540 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3542 */	NdrFcShort( 0x1d6 ),	/* Type Offset=470 */

	/* Return value */

/* 3544 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3546 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3548 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EndEnumExtents */


	/* Procedure EndEnumTypeInstancesByName */

/* 3550 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3552 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3556 */	NdrFcShort( 0x11 ),	/* 17 */
/* 3558 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3560 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3562 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3564 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3566 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3574 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */


	/* Parameter handle */

/* 3576 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3578 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3580 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 3582 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3584 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3586 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTypeDefinitionByToken */

/* 3588 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3590 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3594 */	NdrFcShort( 0x12 ),	/* 18 */
/* 3596 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3598 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3600 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3602 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3604 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3612 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter token */

/* 3614 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3616 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3618 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter typeDefinition */

/* 3620 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3622 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3624 */	NdrFcShort( 0x1c0 ),	/* Type Offset=448 */

	/* Return value */

/* 3626 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3628 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3630 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartEnumMethodDefinitionsByName */

/* 3632 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3634 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3638 */	NdrFcShort( 0x13 ),	/* 19 */
/* 3640 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3642 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3644 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3646 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3648 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3656 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 3658 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3660 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3662 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter flags */

/* 3664 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3666 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3668 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter handle */

/* 3670 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3672 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3674 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 3676 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3678 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3680 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumMethodDefinitionByName */

/* 3682 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3684 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3688 */	NdrFcShort( 0x14 ),	/* 20 */
/* 3690 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3692 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3694 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3696 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3698 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3700 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3704 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3706 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 3708 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 3710 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3712 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter method */

/* 3714 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3716 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3718 */	NdrFcShort( 0x186 ),	/* Type Offset=390 */

	/* Return value */

/* 3720 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3722 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3724 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EndEnumMethodDefinitionsByName */

/* 3726 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3728 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3732 */	NdrFcShort( 0x15 ),	/* 21 */
/* 3734 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3736 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3738 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3740 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3742 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3750 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 3752 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3754 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3756 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 3758 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3760 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3762 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartEnumMethodInstancesByName */

/* 3764 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3766 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3770 */	NdrFcShort( 0x16 ),	/* 22 */
/* 3772 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 3774 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3776 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3778 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 3780 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3784 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3788 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 3790 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3792 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3794 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter flags */

/* 3796 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3798 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3800 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter appDomain */

/* 3802 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3804 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3806 */	NdrFcShort( 0x90 ),	/* Type Offset=144 */

	/* Parameter handle */

/* 3808 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3810 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3812 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 3814 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3816 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3818 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumMethodInstanceByName */

/* 3820 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3822 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3826 */	NdrFcShort( 0x17 ),	/* 23 */
/* 3828 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3830 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3832 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3834 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3836 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3844 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 3846 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 3848 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3850 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter method */

/* 3852 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3854 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3856 */	NdrFcShort( 0xce ),	/* Type Offset=206 */

	/* Return value */

/* 3858 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3860 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3862 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EndEnumMethodInstancesByName */

/* 3864 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3866 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3870 */	NdrFcShort( 0x18 ),	/* 24 */
/* 3872 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3874 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3876 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3878 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3880 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3888 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 3890 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3892 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3894 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 3896 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3898 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3900 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetMethodDefinitionByToken */

/* 3902 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3904 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3908 */	NdrFcShort( 0x19 ),	/* 25 */
/* 3910 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3912 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3914 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3916 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3918 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3926 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter token */

/* 3928 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3930 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3932 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter methodDefinition */

/* 3934 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3936 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3938 */	NdrFcShort( 0x186 ),	/* Type Offset=390 */

	/* Return value */

/* 3940 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3942 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3944 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartEnumDataByName */

/* 3946 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3948 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3952 */	NdrFcShort( 0x1a ),	/* 26 */
/* 3954 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 3956 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3958 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3960 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 3962 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3970 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 3972 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3974 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3976 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter flags */

/* 3978 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3980 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3982 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter appDomain */

/* 3984 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3986 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3988 */	NdrFcShort( 0x90 ),	/* Type Offset=144 */

	/* Parameter tlsTask */

/* 3990 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3992 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3994 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */

	/* Parameter handle */

/* 3996 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3998 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 4000 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 4002 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4004 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 4006 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumDataByName */

/* 4008 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4010 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4014 */	NdrFcShort( 0x1b ),	/* 27 */
/* 4016 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4018 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4020 */	NdrFcShort( 0x2c ),	/* 44 */
/* 4022 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 4024 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4028 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4030 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4032 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 4034 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 4036 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4038 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter value */

/* 4040 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4042 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4044 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */

	/* Return value */

/* 4046 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4048 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4050 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EndEnumStaticFieldsByName2 */


	/* Procedure EndEnumFieldsByName */


	/* Procedure EndEnumDataByName */

/* 4052 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4054 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4058 */	NdrFcShort( 0x1c ),	/* 28 */
/* 4060 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4062 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4064 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4066 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4068 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4076 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */


	/* Parameter handle */


	/* Parameter handle */

/* 4078 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4080 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4082 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 4084 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4086 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4088 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetName */

/* 4090 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4092 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4096 */	NdrFcShort( 0x1d ),	/* 29 */
/* 4098 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 4100 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4102 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4104 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 4106 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4108 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4114 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bufLen */

/* 4116 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4118 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4120 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameLen */

/* 4122 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4124 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4126 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter name */

/* 4128 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4130 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4132 */	NdrFcShort( 0x1b4 ),	/* Type Offset=436 */

	/* Return value */

/* 4134 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4136 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4138 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFileName */

/* 4140 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4142 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4146 */	NdrFcShort( 0x1e ),	/* 30 */
/* 4148 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 4150 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4152 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4154 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 4156 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4158 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4164 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bufLen */

/* 4166 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4168 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4170 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameLen */

/* 4172 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4174 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4176 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter name */

/* 4178 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4180 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4182 */	NdrFcShort( 0x1b4 ),	/* Type Offset=436 */

	/* Return value */

/* 4184 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4186 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4188 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFlags */

/* 4190 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4192 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4196 */	NdrFcShort( 0x1f ),	/* 31 */
/* 4198 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4202 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4204 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4206 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4214 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter flags */

/* 4216 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4218 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4220 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4222 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4224 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4226 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsSameObject */

/* 4228 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4230 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4234 */	NdrFcShort( 0x20 ),	/* 32 */
/* 4236 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4240 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4242 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 4244 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4252 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter mod */

/* 4254 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4256 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4258 */	NdrFcShort( 0xbc ),	/* Type Offset=188 */

	/* Return value */

/* 4260 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4262 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4264 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartEnumExtents */

/* 4266 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4268 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4272 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4274 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4278 */	NdrFcShort( 0x2c ),	/* 44 */
/* 4280 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4282 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4290 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 4292 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4294 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4296 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 4298 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4300 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4302 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumExtent */

/* 4304 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4306 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4310 */	NdrFcShort( 0x22 ),	/* 34 */
/* 4312 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4314 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4316 */	NdrFcShort( 0x2c ),	/* 44 */
/* 4318 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 4320 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4328 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 4330 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 4332 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4334 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter extent */

/* 4336 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 4338 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4340 */	NdrFcShort( 0x1de ),	/* Type Offset=478 */

	/* Return value */

/* 4342 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4344 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4346 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EndEnumExtents */

/* 4348 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4350 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4354 */	NdrFcShort( 0x23 ),	/* 35 */
/* 4356 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4358 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4360 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4362 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4364 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4372 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 4374 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4376 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4378 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 4380 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4382 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4384 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Request */

/* 4386 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4388 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4392 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4394 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 4396 */	NdrFcShort( 0x18 ),	/* 24 */
/* 4398 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4400 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 4402 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 4404 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4406 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4410 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter reqCode */

/* 4412 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4414 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4416 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter inBufferSize */

/* 4418 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4420 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4422 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter inBuffer */

/* 4424 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4426 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4428 */	NdrFcShort( 0x136 ),	/* Type Offset=310 */

	/* Parameter outBufferSize */

/* 4430 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4432 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4434 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter outBuffer */

/* 4436 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 4438 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 4440 */	NdrFcShort( 0x146 ),	/* Type Offset=326 */

	/* Return value */

/* 4442 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4444 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 4446 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartEnumAppDomains */

/* 4448 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4450 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4454 */	NdrFcShort( 0x25 ),	/* 37 */
/* 4456 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4460 */	NdrFcShort( 0x2c ),	/* 44 */
/* 4462 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4464 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4472 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 4474 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4476 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4478 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 4480 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4482 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4484 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumAppDomain */

/* 4486 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4488 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4492 */	NdrFcShort( 0x26 ),	/* 38 */
/* 4494 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4496 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4498 */	NdrFcShort( 0x2c ),	/* 44 */
/* 4500 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 4502 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4510 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 4512 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 4514 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4516 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter appDomain */

/* 4518 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4520 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4522 */	NdrFcShort( 0x8c ),	/* Type Offset=140 */

	/* Return value */

/* 4524 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4526 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4528 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EndEnumAppDomains */

/* 4530 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4532 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4536 */	NdrFcShort( 0x27 ),	/* 39 */
/* 4538 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4540 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4542 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4544 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4546 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4554 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 4556 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4558 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4560 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 4562 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4564 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4566 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetVersionId */

/* 4568 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4570 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4574 */	NdrFcShort( 0x28 ),	/* 40 */
/* 4576 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4580 */	NdrFcShort( 0x4c ),	/* 76 */
/* 4582 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4584 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4592 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter vid */

/* 4594 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 4596 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4598 */	NdrFcShort( 0x10 ),	/* Type Offset=16 */

	/* Return value */

/* 4600 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4602 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetModule */

/* 4606 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4608 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4612 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4614 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4618 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4620 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4622 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4630 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter mod */

/* 4632 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4634 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4636 */	NdrFcShort( 0xb8 ),	/* Type Offset=184 */

	/* Return value */

/* 4638 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4640 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4642 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumMethodDefinition */

/* 4644 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4646 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4650 */	NdrFcShort( 0x5 ),	/* 5 */
/* 4652 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4654 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4656 */	NdrFcShort( 0x2c ),	/* 44 */
/* 4658 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 4660 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4668 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 4670 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 4672 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4674 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter methodDefinition */

/* 4676 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4678 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4680 */	NdrFcShort( 0x186 ),	/* Type Offset=390 */

	/* Return value */

/* 4682 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4684 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4686 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartEnumMethodDefinitionsByName */

/* 4688 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4690 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4694 */	NdrFcShort( 0x7 ),	/* 7 */
/* 4696 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 4698 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4700 */	NdrFcShort( 0x2c ),	/* 44 */
/* 4702 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4704 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4712 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 4714 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4716 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4718 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter flags */

/* 4720 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4722 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4724 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter handle */

/* 4726 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4728 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4730 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 4732 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4734 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4736 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumMethodDefinitionByName */

/* 4738 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4740 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4744 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4746 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4748 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4750 */	NdrFcShort( 0x2c ),	/* 44 */
/* 4752 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 4754 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4762 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 4764 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 4766 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4768 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter method */

/* 4770 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4772 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4774 */	NdrFcShort( 0x186 ),	/* Type Offset=390 */

	/* Return value */

/* 4776 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4778 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4780 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EndEnumMethodDefinitionsByName */

/* 4782 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4784 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4788 */	NdrFcShort( 0x9 ),	/* 9 */
/* 4790 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4792 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4794 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4796 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4798 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4802 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4806 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 4808 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4810 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4812 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 4814 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4816 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4818 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetMethodDefinitionByToken */

/* 4820 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4822 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4826 */	NdrFcShort( 0xa ),	/* 10 */
/* 4828 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4830 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4832 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4834 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 4836 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4844 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter token */

/* 4846 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4848 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4850 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter methodDefinition */

/* 4852 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4854 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4856 */	NdrFcShort( 0x186 ),	/* Type Offset=390 */

	/* Return value */

/* 4858 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4860 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4862 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartEnumInstances */

/* 4864 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4866 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4870 */	NdrFcShort( 0xb ),	/* 11 */
/* 4872 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4874 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4876 */	NdrFcShort( 0x2c ),	/* 44 */
/* 4878 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4880 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4888 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter appDomain */

/* 4890 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4892 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4894 */	NdrFcShort( 0x90 ),	/* Type Offset=144 */

	/* Parameter handle */

/* 4896 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4898 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4900 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 4902 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4904 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4906 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumInstance */

/* 4908 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4910 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4914 */	NdrFcShort( 0xc ),	/* 12 */
/* 4916 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4918 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4920 */	NdrFcShort( 0x2c ),	/* 44 */
/* 4922 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 4924 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4928 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4932 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 4934 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 4936 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4938 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter instance */

/* 4940 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4942 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4944 */	NdrFcShort( 0x1d6 ),	/* Type Offset=470 */

	/* Return value */

/* 4946 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4948 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4950 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetName */

/* 4952 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4954 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4958 */	NdrFcShort( 0xe ),	/* 14 */
/* 4960 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 4962 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4964 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4966 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 4968 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4970 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4972 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4974 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4976 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter flags */

/* 4978 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4980 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4982 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bufLen */

/* 4984 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4986 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4988 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameLen */

/* 4990 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4992 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4994 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameBuf */

/* 4996 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4998 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5000 */	NdrFcShort( 0x1ee ),	/* Type Offset=494 */

	/* Return value */

/* 5002 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5004 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5006 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTokenAndScope */

/* 5008 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5010 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5014 */	NdrFcShort( 0xf ),	/* 15 */
/* 5016 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5018 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5020 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5022 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 5024 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5028 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5030 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5032 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter token */

/* 5034 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5036 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5038 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter mod */

/* 5040 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5042 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5044 */	NdrFcShort( 0xb8 ),	/* Type Offset=184 */

	/* Return value */

/* 5046 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5048 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5050 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCorElementType */

/* 5052 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5054 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5058 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5060 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5062 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5064 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5066 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5068 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5076 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter type */

/* 5078 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5080 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5082 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5084 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5086 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5088 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFlags */

/* 5090 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5092 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5096 */	NdrFcShort( 0x11 ),	/* 17 */
/* 5098 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5102 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5104 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5106 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5114 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter flags */

/* 5116 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5118 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5120 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5122 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5124 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5126 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsSameObject */

/* 5128 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5130 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5134 */	NdrFcShort( 0x12 ),	/* 18 */
/* 5136 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5140 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5142 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 5144 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5152 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter type */

/* 5154 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5156 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5158 */	NdrFcShort( 0x1c4 ),	/* Type Offset=452 */

	/* Return value */

/* 5160 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5162 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5164 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Request */

/* 5166 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5168 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5172 */	NdrFcShort( 0x13 ),	/* 19 */
/* 5174 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 5176 */	NdrFcShort( 0x18 ),	/* 24 */
/* 5178 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5180 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 5182 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 5184 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5186 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5190 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter reqCode */

/* 5192 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5194 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5196 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter inBufferSize */

/* 5198 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5200 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5202 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter inBuffer */

/* 5204 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5206 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5208 */	NdrFcShort( 0x136 ),	/* Type Offset=310 */

	/* Parameter outBufferSize */

/* 5210 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5212 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5214 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter outBuffer */

/* 5216 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 5218 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5220 */	NdrFcShort( 0x146 ),	/* Type Offset=326 */

	/* Return value */

/* 5222 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5224 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 5226 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetArrayRank */

/* 5228 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5230 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5234 */	NdrFcShort( 0x14 ),	/* 20 */
/* 5236 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5240 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5242 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5244 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5252 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter rank */

/* 5254 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5256 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5258 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5260 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5262 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5264 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetBase */

/* 5266 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5268 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5272 */	NdrFcShort( 0x15 ),	/* 21 */
/* 5274 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5278 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5280 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5282 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5290 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter base */

/* 5292 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5294 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5296 */	NdrFcShort( 0x1c0 ),	/* Type Offset=448 */

	/* Return value */

/* 5298 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5300 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5302 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetNumStaticFields2 */


	/* Procedure GetNumFields */

/* 5304 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5306 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5310 */	NdrFcShort( 0x16 ),	/* 22 */
/* 5312 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5314 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5316 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5318 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 5320 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5328 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter flags */


	/* Parameter flags */

/* 5330 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5332 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5334 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter numFields */


	/* Parameter numFields */

/* 5336 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5338 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5340 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 5342 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5344 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5346 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartEnumFields */

/* 5348 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5350 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5354 */	NdrFcShort( 0x17 ),	/* 23 */
/* 5356 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5358 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5360 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5362 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 5364 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5372 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter flags */

/* 5374 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5376 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5378 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter handle */

/* 5380 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5382 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5384 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 5386 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5388 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5390 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumField */

/* 5392 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5394 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5398 */	NdrFcShort( 0x18 ),	/* 24 */
/* 5400 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 5402 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5404 */	NdrFcShort( 0x80 ),	/* 128 */
/* 5406 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x8,		/* 8 */
/* 5408 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 5410 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5416 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 5418 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 5420 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5422 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter nameBufLen */

/* 5424 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5426 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5428 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameLen */

/* 5430 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5432 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5434 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameBuf */

/* 5436 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5438 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5440 */	NdrFcShort( 0x1ee ),	/* Type Offset=494 */

	/* Parameter type */

/* 5442 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5444 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5446 */	NdrFcShort( 0x1c0 ),	/* Type Offset=448 */

	/* Parameter flags */

/* 5448 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5450 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 5452 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter token */

/* 5454 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5456 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 5458 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5460 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5462 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 5464 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartEnumFieldsByName */

/* 5466 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5468 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5472 */	NdrFcShort( 0x1a ),	/* 26 */
/* 5474 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 5476 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5478 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5480 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 5482 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5490 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 5492 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5494 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5496 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter nameFlags */

/* 5498 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5500 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5502 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fieldFlags */

/* 5504 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5506 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5508 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter handle */

/* 5510 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5512 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5514 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 5516 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5518 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5520 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumFieldByName */

/* 5522 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5524 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5528 */	NdrFcShort( 0x1b ),	/* 27 */
/* 5530 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 5532 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5534 */	NdrFcShort( 0x64 ),	/* 100 */
/* 5536 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 5538 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5546 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 5548 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 5550 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5552 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter type */

/* 5554 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5556 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5558 */	NdrFcShort( 0x1c0 ),	/* Type Offset=448 */

	/* Parameter flags */

/* 5560 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5562 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5564 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter token */

/* 5566 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5568 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5570 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5572 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5574 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5576 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFieldByToken */

/* 5578 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5580 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5584 */	NdrFcShort( 0x1d ),	/* 29 */
/* 5586 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 5588 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5590 */	NdrFcShort( 0x40 ),	/* 64 */
/* 5592 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x7,		/* 7 */
/* 5594 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 5596 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5598 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5602 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter token */

/* 5604 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5606 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5608 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameBufLen */

/* 5610 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5612 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5614 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameLen */

/* 5616 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5618 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5620 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameBuf */

/* 5622 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5624 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5626 */	NdrFcShort( 0x1ee ),	/* Type Offset=494 */

	/* Parameter type */

/* 5628 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5630 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5632 */	NdrFcShort( 0x1c0 ),	/* Type Offset=448 */

	/* Parameter flags */

/* 5634 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5636 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 5638 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5640 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5642 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 5644 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTypeNotification */

/* 5646 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5648 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5652 */	NdrFcShort( 0x1e ),	/* 30 */
/* 5654 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5658 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5660 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5662 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5670 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter flags */

/* 5672 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5674 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5676 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5678 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5680 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5682 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetTypeNotification */

/* 5684 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5686 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5690 */	NdrFcShort( 0x1f ),	/* 31 */
/* 5692 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5694 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5696 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5698 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5700 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5704 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5708 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter flags */

/* 5710 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5712 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5714 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5716 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5718 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5720 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumField2 */

/* 5722 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5724 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5728 */	NdrFcShort( 0x20 ),	/* 32 */
/* 5730 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 5732 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5734 */	NdrFcShort( 0x80 ),	/* 128 */
/* 5736 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x9,		/* 9 */
/* 5738 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 5740 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5746 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 5748 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 5750 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5752 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter nameBufLen */

/* 5754 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5756 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5758 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameLen */

/* 5760 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5762 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5764 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameBuf */

/* 5766 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5768 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5770 */	NdrFcShort( 0x1ee ),	/* Type Offset=494 */

	/* Parameter type */

/* 5772 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5774 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5776 */	NdrFcShort( 0x1c0 ),	/* Type Offset=448 */

	/* Parameter flags */

/* 5778 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5780 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 5782 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter tokenScope */

/* 5784 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5786 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 5788 */	NdrFcShort( 0xb8 ),	/* Type Offset=184 */

	/* Parameter token */

/* 5790 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5792 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 5794 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5796 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5798 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 5800 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumFieldByName2 */

/* 5802 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5804 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5808 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5810 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 5812 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5814 */	NdrFcShort( 0x64 ),	/* 100 */
/* 5816 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x6,		/* 6 */
/* 5818 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5820 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5826 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 5828 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 5830 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5832 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter type */

/* 5834 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5836 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5838 */	NdrFcShort( 0x1c0 ),	/* Type Offset=448 */

	/* Parameter flags */

/* 5840 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5842 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5844 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter tokenScope */

/* 5846 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5848 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5850 */	NdrFcShort( 0xb8 ),	/* Type Offset=184 */

	/* Parameter token */

/* 5852 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5854 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5856 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5858 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5860 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 5862 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFieldByToken2 */

/* 5864 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5866 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5870 */	NdrFcShort( 0x22 ),	/* 34 */
/* 5872 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 5874 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5876 */	NdrFcShort( 0x40 ),	/* 64 */
/* 5878 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 5880 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 5882 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5888 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter tokenScope */

/* 5890 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5892 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5894 */	NdrFcShort( 0xbc ),	/* Type Offset=188 */

	/* Parameter token */

/* 5896 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5898 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5900 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameBufLen */

/* 5902 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5904 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5906 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameLen */

/* 5908 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5910 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5912 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameBuf */

/* 5914 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5916 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5918 */	NdrFcShort( 0x80 ),	/* Type Offset=128 */

	/* Parameter type */

/* 5920 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5922 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 5924 */	NdrFcShort( 0x1c0 ),	/* Type Offset=448 */

	/* Parameter flags */

/* 5926 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5928 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 5930 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5932 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5934 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 5936 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumMethodInstance */

/* 5938 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5940 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5944 */	NdrFcShort( 0x4 ),	/* 4 */
/* 5946 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5948 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5950 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5952 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 5954 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5962 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 5964 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 5966 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5968 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter methodInstance */

/* 5970 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5972 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5974 */	NdrFcShort( 0x1fa ),	/* Type Offset=506 */

	/* Return value */

/* 5976 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5978 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5980 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartEnumMethodInstancesByName */

/* 5982 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5984 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5988 */	NdrFcShort( 0x6 ),	/* 6 */
/* 5990 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5992 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5994 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5996 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5998 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6000 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6006 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 6008 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 6010 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6012 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter flags */

/* 6014 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6016 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6018 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter handle */

/* 6020 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6022 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6024 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 6026 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6028 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 6030 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumMethodInstanceByName */

/* 6032 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6034 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6038 */	NdrFcShort( 0x7 ),	/* 7 */
/* 6040 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 6042 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6044 */	NdrFcShort( 0x2c ),	/* 44 */
/* 6046 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 6048 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6056 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 6058 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 6060 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6062 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter method */

/* 6064 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6066 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6068 */	NdrFcShort( 0x1fa ),	/* Type Offset=506 */

	/* Return value */

/* 6070 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6072 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6074 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetStaticFieldByIndex */

/* 6076 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6078 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6082 */	NdrFcShort( 0xa ),	/* 10 */
/* 6084 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 6086 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6088 */	NdrFcShort( 0x40 ),	/* 64 */
/* 6090 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 6092 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 6094 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6098 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6100 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 6102 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6104 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6106 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter tlsTask */

/* 6108 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6110 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6112 */	NdrFcShort( 0x210 ),	/* Type Offset=528 */

	/* Parameter field */

/* 6114 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6116 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6118 */	NdrFcShort( 0x222 ),	/* Type Offset=546 */

	/* Parameter bufLen */

/* 6120 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6122 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 6124 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameLen */

/* 6126 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6128 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 6130 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameBuf */

/* 6132 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6134 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 6136 */	NdrFcShort( 0x238 ),	/* Type Offset=568 */

	/* Parameter token */

/* 6138 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6140 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 6142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6144 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6146 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 6148 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartEnumStaticFieldsByName */

/* 6150 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6152 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6156 */	NdrFcShort( 0xb ),	/* 11 */
/* 6158 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 6160 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6162 */	NdrFcShort( 0x2c ),	/* 44 */
/* 6164 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 6166 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6174 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 6176 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 6178 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6180 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter flags */

/* 6182 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6184 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6186 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter tlsTask */

/* 6188 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6190 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6192 */	NdrFcShort( 0x210 ),	/* Type Offset=528 */

	/* Parameter handle */

/* 6194 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6196 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 6198 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 6200 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6202 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 6204 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumStaticFieldByName */

/* 6206 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6208 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6212 */	NdrFcShort( 0xc ),	/* 12 */
/* 6214 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 6216 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6218 */	NdrFcShort( 0x2c ),	/* 44 */
/* 6220 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 6222 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6230 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 6232 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 6234 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6236 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter value */

/* 6238 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6240 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6242 */	NdrFcShort( 0x222 ),	/* Type Offset=546 */

	/* Return value */

/* 6244 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6246 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6248 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetNumTypeArguments */

/* 6250 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6252 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6256 */	NdrFcShort( 0xe ),	/* 14 */
/* 6258 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6262 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6264 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6266 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6274 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter numTypeArgs */

/* 6276 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6278 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6280 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6282 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6284 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6286 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTypeArgumentByIndex */

/* 6288 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6290 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6294 */	NdrFcShort( 0xf ),	/* 15 */
/* 6296 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 6298 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6300 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6302 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 6304 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6312 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 6314 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6316 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6318 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter typeArg */

/* 6320 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6322 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6324 */	NdrFcShort( 0x244 ),	/* Type Offset=580 */

	/* Return value */

/* 6326 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6328 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6330 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetName */

/* 6332 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6334 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6338 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6340 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 6342 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6344 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6346 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 6348 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 6350 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6356 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter flags */

/* 6358 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6360 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6362 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bufLen */

/* 6364 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6366 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6368 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameLen */

/* 6370 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6372 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6374 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameBuf */

/* 6376 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6378 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 6380 */	NdrFcShort( 0x1ee ),	/* Type Offset=494 */

	/* Return value */

/* 6382 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6384 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 6386 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetModule */

/* 6388 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6390 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6394 */	NdrFcShort( 0x11 ),	/* 17 */
/* 6396 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6400 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6402 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6404 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6412 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter mod */

/* 6414 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6416 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6418 */	NdrFcShort( 0x25a ),	/* Type Offset=602 */

	/* Return value */

/* 6420 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6422 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6424 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetDefinition */

/* 6426 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6428 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6432 */	NdrFcShort( 0x12 ),	/* 18 */
/* 6434 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6438 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6440 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6442 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6446 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6450 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter typeDefinition */

/* 6452 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6454 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6456 */	NdrFcShort( 0x270 ),	/* Type Offset=624 */

	/* Return value */

/* 6458 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6460 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6462 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure HasClassOrMethodInstantiation */


	/* Procedure GetFlags */

/* 6464 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6466 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6470 */	NdrFcShort( 0x13 ),	/* 19 */
/* 6472 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6476 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6478 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6480 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6488 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bGeneric */


	/* Parameter flags */

/* 6490 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6492 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6494 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 6496 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6498 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6500 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsSameObject */

/* 6502 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6504 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6508 */	NdrFcShort( 0x14 ),	/* 20 */
/* 6510 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6514 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6516 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 6518 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6526 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter type */

/* 6528 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6530 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6532 */	NdrFcShort( 0x248 ),	/* Type Offset=584 */

	/* Return value */

/* 6534 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6536 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6538 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Request */

/* 6540 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6542 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6546 */	NdrFcShort( 0x15 ),	/* 21 */
/* 6548 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 6550 */	NdrFcShort( 0x18 ),	/* 24 */
/* 6552 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6554 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 6556 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 6558 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6560 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6564 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter reqCode */

/* 6566 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6568 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6570 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter inBufferSize */

/* 6572 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6574 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6576 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter inBuffer */

/* 6578 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 6580 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6582 */	NdrFcShort( 0x136 ),	/* Type Offset=310 */

	/* Parameter outBufferSize */

/* 6584 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6586 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 6588 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter outBuffer */

/* 6590 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 6592 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 6594 */	NdrFcShort( 0x146 ),	/* Type Offset=326 */

	/* Return value */

/* 6596 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6598 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 6600 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartEnumStaticFields */

/* 6602 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6604 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6608 */	NdrFcShort( 0x17 ),	/* 23 */
/* 6610 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 6612 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6614 */	NdrFcShort( 0x2c ),	/* 44 */
/* 6616 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 6618 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6626 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter flags */

/* 6628 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6630 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6632 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter tlsTask */

/* 6634 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6636 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6638 */	NdrFcShort( 0x210 ),	/* Type Offset=528 */

	/* Parameter handle */

/* 6640 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6642 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6644 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 6646 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6648 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 6650 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumStaticField */

/* 6652 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6654 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6658 */	NdrFcShort( 0x18 ),	/* 24 */
/* 6660 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 6662 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6664 */	NdrFcShort( 0x2c ),	/* 44 */
/* 6666 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 6668 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6676 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 6678 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 6680 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6682 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter value */

/* 6684 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6686 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6688 */	NdrFcShort( 0x222 ),	/* Type Offset=546 */

	/* Return value */

/* 6690 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6692 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6694 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartEnumStaticFieldsByName2 */

/* 6696 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6698 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6702 */	NdrFcShort( 0x1a ),	/* 26 */
/* 6704 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 6706 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6708 */	NdrFcShort( 0x2c ),	/* 44 */
/* 6710 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 6712 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6720 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 6722 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 6724 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6726 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter nameFlags */

/* 6728 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6730 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6732 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fieldFlags */

/* 6734 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6736 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6738 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter tlsTask */

/* 6740 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6742 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 6744 */	NdrFcShort( 0x210 ),	/* Type Offset=528 */

	/* Parameter handle */

/* 6746 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6748 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 6750 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 6752 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6754 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 6756 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumStaticFieldByName2 */

/* 6758 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6760 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6764 */	NdrFcShort( 0x1b ),	/* 27 */
/* 6766 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 6768 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6770 */	NdrFcShort( 0x2c ),	/* 44 */
/* 6772 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 6774 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6782 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 6784 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 6786 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6788 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter value */

/* 6790 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6792 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6794 */	NdrFcShort( 0x222 ),	/* Type Offset=546 */

	/* Return value */

/* 6796 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6798 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6800 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetStaticFieldByToken */

/* 6802 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6804 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6808 */	NdrFcShort( 0x1d ),	/* 29 */
/* 6810 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 6812 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6814 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6816 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 6818 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 6820 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6826 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter token */

/* 6828 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6830 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6832 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter tlsTask */

/* 6834 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6836 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6838 */	NdrFcShort( 0x210 ),	/* Type Offset=528 */

	/* Parameter field */

/* 6840 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6842 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6844 */	NdrFcShort( 0x222 ),	/* Type Offset=546 */

	/* Parameter bufLen */

/* 6846 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6848 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 6850 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameLen */

/* 6852 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6854 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 6856 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameBuf */

/* 6858 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6860 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 6862 */	NdrFcShort( 0x238 ),	/* Type Offset=568 */

	/* Return value */

/* 6864 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6866 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 6868 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetBase */

/* 6870 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6872 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6876 */	NdrFcShort( 0x1e ),	/* 30 */
/* 6878 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6882 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6884 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6886 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6894 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter base */

/* 6896 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6898 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6900 */	NdrFcShort( 0x244 ),	/* Type Offset=580 */

	/* Return value */

/* 6902 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6904 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6906 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumStaticField2 */

/* 6908 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6910 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6914 */	NdrFcShort( 0x1f ),	/* 31 */
/* 6916 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 6918 */	NdrFcShort( 0x2c ),	/* 44 */
/* 6920 */	NdrFcShort( 0x64 ),	/* 100 */
/* 6922 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x8,		/* 8 */
/* 6924 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 6926 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6928 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6932 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 6934 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 6936 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6938 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter value */

/* 6940 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6942 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6944 */	NdrFcShort( 0x222 ),	/* Type Offset=546 */

	/* Parameter bufLen */

/* 6946 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6948 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6950 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameLen */

/* 6952 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6954 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 6956 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameBuf */

/* 6958 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6960 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 6962 */	NdrFcShort( 0x80 ),	/* Type Offset=128 */

	/* Parameter tokenScope */

/* 6964 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6966 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 6968 */	NdrFcShort( 0x25a ),	/* Type Offset=602 */

	/* Parameter token */

/* 6970 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6972 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 6974 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6976 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6978 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 6980 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumStaticFieldByName3 */

/* 6982 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6984 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6988 */	NdrFcShort( 0x20 ),	/* 32 */
/* 6990 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 6992 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6994 */	NdrFcShort( 0x48 ),	/* 72 */
/* 6996 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 6998 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7000 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7006 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 7008 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 7010 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7012 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter value */

/* 7014 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7016 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7018 */	NdrFcShort( 0x222 ),	/* Type Offset=546 */

	/* Parameter tokenScope */

/* 7020 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7022 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7024 */	NdrFcShort( 0x25a ),	/* Type Offset=602 */

	/* Parameter token */

/* 7026 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7028 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 7030 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7032 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7034 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 7036 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetStaticFieldByToken2 */

/* 7038 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7040 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7044 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7046 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 7048 */	NdrFcShort( 0x10 ),	/* 16 */
/* 7050 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7052 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 7054 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 7056 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7060 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7062 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter tokenScope */

/* 7064 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7066 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7068 */	NdrFcShort( 0x25e ),	/* Type Offset=606 */

	/* Parameter token */

/* 7070 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7072 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7074 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter tlsTask */

/* 7076 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7078 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7080 */	NdrFcShort( 0x210 ),	/* Type Offset=528 */

	/* Parameter field */

/* 7082 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7084 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 7086 */	NdrFcShort( 0x222 ),	/* Type Offset=546 */

	/* Parameter bufLen */

/* 7088 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7090 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 7092 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameLen */

/* 7094 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7096 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 7098 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameBuf */

/* 7100 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7102 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 7104 */	NdrFcShort( 0xe4 ),	/* Type Offset=228 */

	/* Return value */

/* 7106 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7108 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 7110 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTypeDefinition */

/* 7112 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7114 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7118 */	NdrFcShort( 0x3 ),	/* 3 */
/* 7120 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7124 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7126 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 7128 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7136 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter typeDefinition */

/* 7138 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7140 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7142 */	NdrFcShort( 0x270 ),	/* Type Offset=624 */

	/* Return value */

/* 7144 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7146 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7148 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartEnumInstances */

/* 7150 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7152 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7156 */	NdrFcShort( 0x4 ),	/* 4 */
/* 7158 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 7160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7162 */	NdrFcShort( 0x2c ),	/* 44 */
/* 7164 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7166 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7174 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter appDomain */

/* 7176 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7178 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7180 */	NdrFcShort( 0x286 ),	/* Type Offset=646 */

	/* Parameter handle */

/* 7182 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7184 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7186 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 7188 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7190 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7192 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumInstance */

/* 7194 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7196 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7200 */	NdrFcShort( 0x5 ),	/* 5 */
/* 7202 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 7204 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7206 */	NdrFcShort( 0x2c ),	/* 44 */
/* 7208 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 7210 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7218 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 7220 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 7222 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7224 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter instance */

/* 7226 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7228 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7230 */	NdrFcShort( 0x298 ),	/* Type Offset=664 */

	/* Return value */

/* 7232 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7234 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7236 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetName */

/* 7238 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7240 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7244 */	NdrFcShort( 0x7 ),	/* 7 */
/* 7246 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 7248 */	NdrFcShort( 0x10 ),	/* 16 */
/* 7250 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7252 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 7254 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 7256 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7262 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter flags */

/* 7264 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7266 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7268 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bufLen */

/* 7270 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7272 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7274 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameLen */

/* 7276 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7278 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7280 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter name */

/* 7282 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7284 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 7286 */	NdrFcShort( 0x1ee ),	/* Type Offset=494 */

	/* Return value */

/* 7288 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7290 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 7292 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTokenAndScope */

/* 7294 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7296 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7300 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7302 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 7304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7306 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7308 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 7310 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7318 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter token */

/* 7320 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7322 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7324 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter mod */

/* 7326 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7328 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7330 */	NdrFcShort( 0x2ae ),	/* Type Offset=686 */

	/* Return value */

/* 7332 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7334 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7336 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsSameObject */

/* 7338 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7340 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7344 */	NdrFcShort( 0xa ),	/* 10 */
/* 7346 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7350 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7352 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 7354 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7362 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter method */

/* 7364 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7366 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7368 */	NdrFcShort( 0x2c4 ),	/* Type Offset=708 */

	/* Return value */

/* 7370 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7372 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7374 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetLatestEnCVersion */

/* 7376 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7378 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7382 */	NdrFcShort( 0xb ),	/* 11 */
/* 7384 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7388 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7390 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7392 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7400 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter version */

/* 7402 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7404 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7406 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7408 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7410 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7412 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartEnumExtents */

/* 7414 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7416 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7420 */	NdrFcShort( 0xc ),	/* 12 */
/* 7422 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7426 */	NdrFcShort( 0x2c ),	/* 44 */
/* 7428 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7430 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7438 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 7440 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7442 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7444 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 7446 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7448 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7450 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumExtent */

/* 7452 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7454 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7458 */	NdrFcShort( 0xd ),	/* 13 */
/* 7460 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 7462 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7464 */	NdrFcShort( 0x2c ),	/* 44 */
/* 7466 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 7468 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7476 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 7478 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 7480 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7482 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter extent */

/* 7484 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 7486 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7488 */	NdrFcShort( 0x2da ),	/* Type Offset=730 */

	/* Return value */

/* 7490 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7492 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7494 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCodeNotification */

/* 7496 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7498 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7502 */	NdrFcShort( 0xf ),	/* 15 */
/* 7504 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7508 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7510 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7512 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7520 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter flags */

/* 7522 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7524 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7528 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7530 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7532 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetCodeNotification */

/* 7534 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7536 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7540 */	NdrFcShort( 0x10 ),	/* 16 */
/* 7542 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7544 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7546 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7548 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7550 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7558 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter flags */

/* 7560 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7562 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7564 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7566 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7568 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7570 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Request */

/* 7572 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7574 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7578 */	NdrFcShort( 0x11 ),	/* 17 */
/* 7580 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 7582 */	NdrFcShort( 0x18 ),	/* 24 */
/* 7584 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7586 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 7588 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 7590 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7592 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7596 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter reqCode */

/* 7598 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7600 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7602 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter inBufferSize */

/* 7604 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7606 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7608 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter inBuffer */

/* 7610 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 7612 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7614 */	NdrFcShort( 0x136 ),	/* Type Offset=310 */

	/* Parameter outBufferSize */

/* 7616 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7618 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 7620 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter outBuffer */

/* 7622 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 7624 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 7626 */	NdrFcShort( 0x146 ),	/* Type Offset=326 */

	/* Return value */

/* 7628 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7630 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 7632 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetRepresentativeEntryAddress */

/* 7634 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7636 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7640 */	NdrFcShort( 0x12 ),	/* 18 */
/* 7642 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7646 */	NdrFcShort( 0x2c ),	/* 44 */
/* 7648 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7650 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7658 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter addr */

/* 7660 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7662 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7664 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 7666 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7668 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7670 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTypeInstance */

/* 7672 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7674 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7678 */	NdrFcShort( 0x3 ),	/* 3 */
/* 7680 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7684 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7686 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 7688 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7696 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter typeInstance */

/* 7698 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7700 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7702 */	NdrFcShort( 0x2e8 ),	/* Type Offset=744 */

	/* Return value */

/* 7704 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7706 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7708 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetDefinition */

/* 7710 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7712 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7716 */	NdrFcShort( 0x4 ),	/* 4 */
/* 7718 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7722 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7724 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 7726 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7734 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter methodDefinition */

/* 7736 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7738 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7740 */	NdrFcShort( 0x2fe ),	/* Type Offset=766 */

	/* Return value */

/* 7742 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7744 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7746 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTokenAndScope */

/* 7748 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7750 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7754 */	NdrFcShort( 0x5 ),	/* 5 */
/* 7756 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 7758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7760 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7762 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 7764 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7772 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter token */

/* 7774 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7776 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7778 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter mod */

/* 7780 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7782 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7784 */	NdrFcShort( 0x2ae ),	/* Type Offset=686 */

	/* Return value */

/* 7786 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7788 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7790 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetName */

/* 7792 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7794 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7798 */	NdrFcShort( 0x6 ),	/* 6 */
/* 7800 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 7802 */	NdrFcShort( 0x10 ),	/* 16 */
/* 7804 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7806 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 7808 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 7810 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7816 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter flags */

/* 7818 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7820 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7822 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bufLen */

/* 7824 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7826 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7828 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameLen */

/* 7830 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7832 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7834 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameBuf */

/* 7836 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7838 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 7840 */	NdrFcShort( 0x1ee ),	/* Type Offset=494 */

	/* Return value */

/* 7842 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7844 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 7846 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCode */


	/* Procedure GetFlags */

/* 7848 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7850 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7854 */	NdrFcShort( 0x7 ),	/* 7 */
/* 7856 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7860 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7862 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7864 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7866 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7868 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7870 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7872 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter code */


	/* Parameter flags */

/* 7874 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7876 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7878 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 7880 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7882 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7884 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsSameObject */

/* 7886 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7888 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7892 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7894 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7898 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7900 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 7902 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7904 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7908 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7910 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter method */

/* 7912 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7914 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7916 */	NdrFcShort( 0x29c ),	/* Type Offset=668 */

	/* Return value */

/* 7918 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7920 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7922 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetNumTypeArguments */

/* 7924 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7926 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7930 */	NdrFcShort( 0xa ),	/* 10 */
/* 7932 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7936 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7938 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7940 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7942 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7944 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7946 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7948 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter numTypeArgs */

/* 7950 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7952 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7954 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7956 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7958 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7960 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTypeArgumentByIndex */

/* 7962 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7964 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7968 */	NdrFcShort( 0xb ),	/* 11 */
/* 7970 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 7972 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7974 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7976 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 7978 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7980 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7982 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7984 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7986 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 7988 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7990 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7992 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter typeArg */

/* 7994 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7996 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7998 */	NdrFcShort( 0x244 ),	/* Type Offset=580 */

	/* Return value */

/* 8000 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8002 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8004 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetILOffsetsByAddress */

/* 8006 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8008 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8012 */	NdrFcShort( 0xc ),	/* 12 */
/* 8014 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 8016 */	NdrFcShort( 0x18 ),	/* 24 */
/* 8018 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8020 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 8022 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 8024 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8028 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8030 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter address */

/* 8032 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8034 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8036 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter offsetsLen */

/* 8038 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8040 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8042 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter offsetsNeeded */

/* 8044 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8046 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8048 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ilOffsets */

/* 8050 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8052 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 8054 */	NdrFcShort( 0x302 ),	/* Type Offset=770 */

	/* Return value */

/* 8056 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8058 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 8060 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetAddressRangesByILOffset */

/* 8062 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8064 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8068 */	NdrFcShort( 0xd ),	/* 13 */
/* 8070 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 8072 */	NdrFcShort( 0x10 ),	/* 16 */
/* 8074 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8076 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 8078 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 8080 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8084 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8086 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ilOffset */

/* 8088 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8090 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8092 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rangesLen */

/* 8094 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8096 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8098 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rangesNeeded */

/* 8100 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8102 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8104 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter addressRanges */

/* 8106 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8108 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 8110 */	NdrFcShort( 0x316 ),	/* Type Offset=790 */

	/* Return value */

/* 8112 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8114 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 8116 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetILAddressMap */

/* 8118 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8120 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8124 */	NdrFcShort( 0xe ),	/* 14 */
/* 8126 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 8128 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8130 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8132 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 8134 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 8136 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8142 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter mapLen */

/* 8144 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8146 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8148 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter mapNeeded */

/* 8150 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8152 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8154 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter maps */

/* 8156 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8158 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8160 */	NdrFcShort( 0x336 ),	/* Type Offset=822 */

	/* Return value */

/* 8162 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8164 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 8166 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartEnumExtents */

/* 8168 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8170 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8174 */	NdrFcShort( 0xf ),	/* 15 */
/* 8176 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8180 */	NdrFcShort( 0x2c ),	/* 44 */
/* 8182 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8184 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8192 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 8194 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8196 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8198 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 8200 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8202 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8204 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumExtent */

/* 8206 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8208 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8212 */	NdrFcShort( 0x10 ),	/* 16 */
/* 8214 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 8216 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8218 */	NdrFcShort( 0x60 ),	/* 96 */
/* 8220 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 8222 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8230 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 8232 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 8234 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8236 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter extent */

/* 8238 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 8240 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8242 */	NdrFcShort( 0x30e ),	/* Type Offset=782 */

	/* Return value */

/* 8244 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8246 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8248 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Request */

/* 8250 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8252 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8256 */	NdrFcShort( 0x12 ),	/* 18 */
/* 8258 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 8260 */	NdrFcShort( 0x18 ),	/* 24 */
/* 8262 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8264 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 8266 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 8268 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8270 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8274 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter reqCode */

/* 8276 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8278 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8280 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter inBufferSize */

/* 8282 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8284 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8286 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter inBuffer */

/* 8288 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 8290 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8292 */	NdrFcShort( 0x136 ),	/* Type Offset=310 */

	/* Parameter outBufferSize */

/* 8294 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8296 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 8298 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter outBuffer */

/* 8300 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 8302 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 8304 */	NdrFcShort( 0x146 ),	/* Type Offset=326 */

	/* Return value */

/* 8306 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8308 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 8310 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetRepresentativeEntryAddress */

/* 8312 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8314 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8318 */	NdrFcShort( 0x13 ),	/* 19 */
/* 8320 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8324 */	NdrFcShort( 0x2c ),	/* 44 */
/* 8326 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8328 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8336 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter addr */

/* 8338 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8340 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8342 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 8344 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8346 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8348 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetProcess */

/* 8350 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8352 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8356 */	NdrFcShort( 0x3 ),	/* 3 */
/* 8358 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8362 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8364 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8366 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8374 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter process */

/* 8376 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8378 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8380 */	NdrFcShort( 0x350 ),	/* Type Offset=848 */

	/* Return value */

/* 8382 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8384 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8386 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCurrentAppDomain */

/* 8388 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8390 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8394 */	NdrFcShort( 0x4 ),	/* 4 */
/* 8396 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8400 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8402 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8404 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8412 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter appDomain */

/* 8414 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8416 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8418 */	NdrFcShort( 0x366 ),	/* Type Offset=870 */

	/* Return value */

/* 8420 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8422 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8424 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsSameObject */

/* 8426 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8428 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8432 */	NdrFcShort( 0x7 ),	/* 7 */
/* 8434 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8438 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8440 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 8442 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8446 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8450 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter task */

/* 8452 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8454 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8456 */	NdrFcShort( 0x210 ),	/* Type Offset=528 */

	/* Return value */

/* 8458 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8460 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8462 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetManagedObject */

/* 8464 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8466 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8470 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8472 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8476 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8478 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8480 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8488 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 8490 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8492 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8494 */	NdrFcShort( 0x222 ),	/* Type Offset=546 */

	/* Return value */

/* 8496 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8498 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8500 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetDesiredExecutionState */

/* 8502 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8504 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8508 */	NdrFcShort( 0xa ),	/* 10 */
/* 8510 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8512 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8514 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8516 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8518 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8526 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter state */

/* 8528 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8530 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8532 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8534 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8536 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8538 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateStackWalk */

/* 8540 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8542 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8546 */	NdrFcShort( 0xb ),	/* 11 */
/* 8548 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 8550 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8552 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8554 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 8556 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8560 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8564 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter flags */

/* 8566 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8568 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8570 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter stackWalk */

/* 8572 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8574 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8576 */	NdrFcShort( 0x36a ),	/* Type Offset=874 */

	/* Return value */

/* 8578 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8580 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8582 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetContext */

/* 8584 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8586 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8590 */	NdrFcShort( 0xd ),	/* 13 */
/* 8592 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 8594 */	NdrFcShort( 0x10 ),	/* 16 */
/* 8596 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8598 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 8600 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 8602 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8608 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter contextFlags */

/* 8610 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8612 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8614 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter contextBufSize */

/* 8616 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8618 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8620 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter contextSize */

/* 8622 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8624 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8626 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter contextBuf */

/* 8628 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8630 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 8632 */	NdrFcShort( 0x136 ),	/* Type Offset=310 */

	/* Return value */

/* 8634 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8636 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 8638 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetContext */

/* 8640 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8642 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8646 */	NdrFcShort( 0xe ),	/* 14 */
/* 8648 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 8650 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8652 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8654 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8656 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8660 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8664 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter contextSize */

/* 8666 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8668 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8670 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter context */

/* 8672 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8674 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8676 */	NdrFcShort( 0x380 ),	/* Type Offset=896 */

	/* Return value */

/* 8678 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8680 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8682 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCurrentExceptionState */

/* 8684 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8686 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8690 */	NdrFcShort( 0xf ),	/* 15 */
/* 8692 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8696 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8698 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8700 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8704 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8708 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter exception */

/* 8710 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8712 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8714 */	NdrFcShort( 0x38c ),	/* Type Offset=908 */

	/* Return value */

/* 8716 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8718 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8720 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Request */

/* 8722 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8724 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8728 */	NdrFcShort( 0x10 ),	/* 16 */
/* 8730 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 8732 */	NdrFcShort( 0x18 ),	/* 24 */
/* 8734 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8736 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 8738 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 8740 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8742 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8746 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter reqCode */

/* 8748 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8750 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8752 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter inBufferSize */

/* 8754 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8756 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8758 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter inBuffer */

/* 8760 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 8762 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8764 */	NdrFcShort( 0x136 ),	/* Type Offset=310 */

	/* Parameter outBufferSize */

/* 8766 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8768 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 8770 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter outBuffer */

/* 8772 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 8774 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 8776 */	NdrFcShort( 0x146 ),	/* Type Offset=326 */

	/* Return value */

/* 8778 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8780 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 8782 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetName */

/* 8784 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8786 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8790 */	NdrFcShort( 0x11 ),	/* 17 */
/* 8792 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 8794 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8796 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8798 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 8800 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 8802 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8808 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bufLen */

/* 8810 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8812 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8814 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameLen */

/* 8816 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8818 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8820 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter name */

/* 8822 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8824 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8826 */	NdrFcShort( 0x1b4 ),	/* Type Offset=436 */

	/* Return value */

/* 8828 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8830 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 8832 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetLastExceptionState */

/* 8834 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8836 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8840 */	NdrFcShort( 0x12 ),	/* 18 */
/* 8842 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8844 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8846 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8848 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8850 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8858 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter exception */

/* 8860 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8862 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8864 */	NdrFcShort( 0x38c ),	/* Type Offset=908 */

	/* Return value */

/* 8866 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8868 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8870 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetContext */

/* 8872 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8874 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8878 */	NdrFcShort( 0x3 ),	/* 3 */
/* 8880 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 8882 */	NdrFcShort( 0x10 ),	/* 16 */
/* 8884 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8886 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 8888 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 8890 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8896 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter contextFlags */

/* 8898 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8900 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8902 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter contextBufSize */

/* 8904 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8906 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8908 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter contextSize */

/* 8910 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8912 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8914 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter contextBuf */

/* 8916 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8918 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 8920 */	NdrFcShort( 0x136 ),	/* Type Offset=310 */

	/* Return value */

/* 8922 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8924 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 8926 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetContext */

/* 8928 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8930 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8934 */	NdrFcShort( 0x4 ),	/* 4 */
/* 8936 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 8938 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8940 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8942 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8944 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8946 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8948 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8950 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8952 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter contextSize */

/* 8954 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8956 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8958 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter context */

/* 8960 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8962 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8964 */	NdrFcShort( 0x380 ),	/* Type Offset=896 */

	/* Return value */

/* 8966 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8968 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8970 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Next */

/* 8972 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8974 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8978 */	NdrFcShort( 0x5 ),	/* 5 */
/* 8980 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8982 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8984 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8986 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 8988 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8996 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 8998 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9000 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9002 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFrameType */

/* 9004 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9006 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9010 */	NdrFcShort( 0x7 ),	/* 7 */
/* 9012 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 9014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9016 */	NdrFcShort( 0x3c ),	/* 60 */
/* 9018 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 9020 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9022 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9024 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9028 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter simpleType */

/* 9030 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 9032 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9034 */	NdrFcShort( 0x7c ),	/* Type Offset=124 */

	/* Parameter detailedType */

/* 9036 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 9038 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9040 */	NdrFcShort( 0x7c ),	/* Type Offset=124 */

	/* Return value */

/* 9042 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9044 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9046 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFrame */

/* 9048 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9050 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9054 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9056 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9060 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9062 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9064 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9066 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9068 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9072 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter frame */

/* 9074 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9076 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9078 */	NdrFcShort( 0x3a2 ),	/* Type Offset=930 */

	/* Return value */

/* 9080 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9082 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9084 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetContext2 */

/* 9086 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9088 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9092 */	NdrFcShort( 0xa ),	/* 10 */
/* 9094 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 9096 */	NdrFcShort( 0x10 ),	/* 16 */
/* 9098 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9100 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 9102 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 9104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9106 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9110 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter flags */

/* 9112 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9114 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9116 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter contextSize */

/* 9118 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9120 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9122 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter context */

/* 9124 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9126 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9128 */	NdrFcShort( 0x136 ),	/* Type Offset=310 */

	/* Return value */

/* 9130 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9132 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 9134 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFrameType */

/* 9136 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9138 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9142 */	NdrFcShort( 0x3 ),	/* 3 */
/* 9144 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 9146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9148 */	NdrFcShort( 0x3c ),	/* 60 */
/* 9150 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 9152 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9160 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter simpleType */

/* 9162 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 9164 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9166 */	NdrFcShort( 0x7c ),	/* Type Offset=124 */

	/* Parameter detailedType */

/* 9168 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 9170 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9172 */	NdrFcShort( 0x7c ),	/* Type Offset=124 */

	/* Return value */

/* 9174 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9176 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetContext */

/* 9180 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9182 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9186 */	NdrFcShort( 0x4 ),	/* 4 */
/* 9188 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 9190 */	NdrFcShort( 0x10 ),	/* 16 */
/* 9192 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9194 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 9196 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 9198 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9204 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter contextFlags */

/* 9206 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9208 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9210 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter contextBufSize */

/* 9212 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9214 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9216 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter contextSize */

/* 9218 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9220 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9222 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter contextBuf */

/* 9224 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9226 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 9228 */	NdrFcShort( 0x136 ),	/* Type Offset=310 */

	/* Return value */

/* 9230 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9232 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 9234 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetAppDomain */

/* 9236 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9238 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9242 */	NdrFcShort( 0x5 ),	/* 5 */
/* 9244 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9248 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9250 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9252 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9260 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter appDomain */

/* 9262 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9264 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9266 */	NdrFcShort( 0x366 ),	/* Type Offset=870 */

	/* Return value */

/* 9268 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9270 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9272 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetArgumentByIndex */

/* 9274 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9276 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9280 */	NdrFcShort( 0x7 ),	/* 7 */
/* 9282 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 9284 */	NdrFcShort( 0x10 ),	/* 16 */
/* 9286 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9288 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x6,		/* 6 */
/* 9290 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 9292 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9298 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 9300 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9302 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9304 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg */

/* 9306 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9308 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9310 */	NdrFcShort( 0x222 ),	/* Type Offset=546 */

	/* Parameter bufLen */

/* 9312 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9314 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9316 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameLen */

/* 9318 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9320 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 9322 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter name */

/* 9324 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9326 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 9328 */	NdrFcShort( 0x80 ),	/* Type Offset=128 */

	/* Return value */

/* 9330 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9332 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 9334 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetLocalVariableByIndex */

/* 9336 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9338 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9342 */	NdrFcShort( 0x9 ),	/* 9 */
/* 9344 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 9346 */	NdrFcShort( 0x10 ),	/* 16 */
/* 9348 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9350 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x6,		/* 6 */
/* 9352 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 9354 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9360 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 9362 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9364 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9366 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter localVariable */

/* 9368 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9370 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9372 */	NdrFcShort( 0x222 ),	/* Type Offset=546 */

	/* Parameter bufLen */

/* 9374 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9376 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9378 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameLen */

/* 9380 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9382 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 9384 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter name */

/* 9386 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9388 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 9390 */	NdrFcShort( 0x80 ),	/* Type Offset=128 */

	/* Return value */

/* 9392 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9394 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 9396 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCodeName */

/* 9398 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9400 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9404 */	NdrFcShort( 0xa ),	/* 10 */
/* 9406 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 9408 */	NdrFcShort( 0x10 ),	/* 16 */
/* 9410 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9412 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 9414 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 9416 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9422 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter flags */

/* 9424 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9426 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9428 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bufLen */

/* 9430 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9432 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9434 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameLen */

/* 9436 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9438 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9440 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameBuf */

/* 9442 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9444 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 9446 */	NdrFcShort( 0x1ee ),	/* Type Offset=494 */

	/* Return value */

/* 9448 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9450 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 9452 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetMethodInstance */

/* 9454 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9456 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9460 */	NdrFcShort( 0xb ),	/* 11 */
/* 9462 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9466 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9468 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9470 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9478 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter method */

/* 9480 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9482 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9484 */	NdrFcShort( 0x1fa ),	/* Type Offset=506 */

	/* Return value */

/* 9486 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9488 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9490 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Request */

/* 9492 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9494 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9498 */	NdrFcShort( 0xc ),	/* 12 */
/* 9500 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 9502 */	NdrFcShort( 0x18 ),	/* 24 */
/* 9504 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9506 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 9508 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 9510 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9512 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9516 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter reqCode */

/* 9518 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9520 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9522 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter inBufferSize */

/* 9524 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9526 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9528 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter inBuffer */

/* 9530 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 9532 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9534 */	NdrFcShort( 0x136 ),	/* Type Offset=310 */

	/* Parameter outBufferSize */

/* 9536 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9538 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 9540 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter outBuffer */

/* 9542 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 9544 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 9546 */	NdrFcShort( 0x146 ),	/* Type Offset=326 */

	/* Return value */

/* 9548 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9550 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 9552 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetNumTypeArguments */

/* 9554 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9556 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9560 */	NdrFcShort( 0xd ),	/* 13 */
/* 9562 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9566 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9568 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9570 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9578 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter numTypeArgs */

/* 9580 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9582 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9584 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9586 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9588 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9590 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTypeArgumentByIndex */

/* 9592 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9594 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9598 */	NdrFcShort( 0xe ),	/* 14 */
/* 9600 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 9602 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9604 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9606 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 9608 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9616 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 9618 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9620 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9622 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter typeArg */

/* 9624 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9626 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9628 */	NdrFcShort( 0x1d6 ),	/* Type Offset=470 */

	/* Return value */

/* 9630 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9632 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9634 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFlags */


	/* Procedure GetFlags */

/* 9636 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9638 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9642 */	NdrFcShort( 0x3 ),	/* 3 */
/* 9644 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9648 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9650 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9652 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9660 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter flags */


	/* Parameter flags */

/* 9662 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9664 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9666 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 9668 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9670 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9672 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetPrevious */

/* 9674 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9676 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9680 */	NdrFcShort( 0x4 ),	/* 4 */
/* 9682 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9686 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9688 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9690 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9698 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter exState */

/* 9700 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9702 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9704 */	NdrFcShort( 0x10a ),	/* Type Offset=266 */

	/* Return value */

/* 9706 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9708 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9710 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetManagedObject */

/* 9712 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9714 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9718 */	NdrFcShort( 0x5 ),	/* 5 */
/* 9720 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9724 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9726 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9728 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9734 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9736 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 9738 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9740 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9742 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */

	/* Return value */

/* 9744 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9746 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9748 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetBaseType */

/* 9750 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9752 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9756 */	NdrFcShort( 0x6 ),	/* 6 */
/* 9758 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9762 */	NdrFcShort( 0x22 ),	/* 34 */
/* 9764 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9766 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9772 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9774 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter type */

/* 9776 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 9778 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9780 */	NdrFcShort( 0x7c ),	/* Type Offset=124 */

	/* Return value */

/* 9782 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9784 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9786 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetString */

/* 9788 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9790 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9794 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9796 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 9798 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9800 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9802 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 9804 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 9806 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9812 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bufLen */

/* 9814 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9816 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9818 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter strLen */

/* 9820 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9822 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9824 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter str */

/* 9826 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9828 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9830 */	NdrFcShort( 0x1b4 ),	/* Type Offset=436 */

	/* Return value */

/* 9832 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9834 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 9836 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsSameState */

/* 9838 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9840 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9844 */	NdrFcShort( 0xa ),	/* 10 */
/* 9846 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 9848 */	NdrFcShort( 0xd4 ),	/* 212 */
/* 9850 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9852 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 9854 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 9856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9858 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9862 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter exRecord */

/* 9864 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 9866 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9868 */	NdrFcShort( 0xfa ),	/* Type Offset=250 */

	/* Parameter contextSize */

/* 9870 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9872 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9874 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cxRecord */

/* 9876 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9878 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9880 */	NdrFcShort( 0x136 ),	/* Type Offset=310 */

	/* Return value */

/* 9882 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9884 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 9886 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsSameState2 */

/* 9888 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9890 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9894 */	NdrFcShort( 0xb ),	/* 11 */
/* 9896 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 9898 */	NdrFcShort( 0xdc ),	/* 220 */
/* 9900 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9902 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 9904 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 9906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9908 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9910 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9912 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter flags */

/* 9914 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9916 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9918 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter exRecord */

/* 9920 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 9922 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9924 */	NdrFcShort( 0xfa ),	/* Type Offset=250 */

	/* Parameter contextSize */

/* 9926 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9928 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9930 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cxRecord */

/* 9932 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9934 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 9936 */	NdrFcShort( 0x3b8 ),	/* Type Offset=952 */

	/* Return value */

/* 9938 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9940 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 9942 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTask */

/* 9944 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9946 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9950 */	NdrFcShort( 0xc ),	/* 12 */
/* 9952 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9954 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9956 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9958 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9960 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9968 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter task */

/* 9970 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9972 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9974 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */

	/* Return value */

/* 9976 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9978 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9980 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetBytes */

/* 9982 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9984 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9988 */	NdrFcShort( 0x6 ),	/* 6 */
/* 9990 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 9992 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9994 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9996 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 9998 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 10000 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10006 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bufLen */

/* 10008 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10010 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10012 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dataSize */

/* 10014 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10016 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10018 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter buffer */

/* 10020 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10022 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10024 */	NdrFcShort( 0x380 ),	/* Type Offset=896 */

	/* Return value */

/* 10026 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10028 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 10030 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetBytes */

/* 10032 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10034 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10038 */	NdrFcShort( 0x7 ),	/* 7 */
/* 10040 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 10042 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10044 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10046 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 10048 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10052 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10056 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bufLen */

/* 10058 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10060 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10062 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dataSize */

/* 10064 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10066 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10068 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter buffer */

/* 10070 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10072 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10074 */	NdrFcShort( 0x380 ),	/* Type Offset=896 */

	/* Return value */

/* 10076 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10078 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 10080 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetType */

/* 10082 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10084 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10088 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10090 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10094 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10096 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10098 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10106 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter typeInstance */

/* 10108 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10110 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10112 */	NdrFcShort( 0x1d6 ),	/* Type Offset=470 */

	/* Return value */

/* 10114 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10116 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10118 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFieldByIndex */

/* 10120 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10122 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10126 */	NdrFcShort( 0xa ),	/* 10 */
/* 10128 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 10130 */	NdrFcShort( 0x10 ),	/* 16 */
/* 10132 */	NdrFcShort( 0x40 ),	/* 64 */
/* 10134 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x7,		/* 7 */
/* 10136 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 10138 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10144 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 10146 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10148 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10150 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter field */

/* 10152 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10154 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10156 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */

	/* Parameter bufLen */

/* 10158 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10160 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10162 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameLen */

/* 10164 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10166 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 10168 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameBuf */

/* 10170 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10172 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 10174 */	NdrFcShort( 0x80 ),	/* Type Offset=128 */

	/* Parameter token */

/* 10176 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10178 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 10180 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10182 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10184 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 10186 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Request */

/* 10188 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10190 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10194 */	NdrFcShort( 0xb ),	/* 11 */
/* 10196 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 10198 */	NdrFcShort( 0x18 ),	/* 24 */
/* 10200 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10202 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 10204 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 10206 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10208 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10212 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter reqCode */

/* 10214 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10216 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10218 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter inBufferSize */

/* 10220 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10222 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10224 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter inBuffer */

/* 10226 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 10228 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10230 */	NdrFcShort( 0x136 ),	/* Type Offset=310 */

	/* Parameter outBufferSize */

/* 10232 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10234 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 10236 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter outBuffer */

/* 10238 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 10240 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 10242 */	NdrFcShort( 0x146 ),	/* Type Offset=326 */

	/* Return value */

/* 10244 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10246 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 10248 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetNumFields2 */

/* 10250 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10252 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10256 */	NdrFcShort( 0xc ),	/* 12 */
/* 10258 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 10260 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10262 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10264 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 10266 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10274 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter flags */

/* 10276 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10278 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10280 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fromType */

/* 10282 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10284 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10286 */	NdrFcShort( 0x152 ),	/* Type Offset=338 */

	/* Parameter numFields */

/* 10288 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10290 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10292 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10294 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10296 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 10298 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartEnumFields */

/* 10300 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10302 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10306 */	NdrFcShort( 0xd ),	/* 13 */
/* 10308 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 10310 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10312 */	NdrFcShort( 0x2c ),	/* 44 */
/* 10314 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 10316 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10324 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter flags */

/* 10326 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10328 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10330 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fromType */

/* 10332 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10334 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10336 */	NdrFcShort( 0x152 ),	/* Type Offset=338 */

	/* Parameter handle */

/* 10338 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10340 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10342 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 10344 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10346 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 10348 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumField */

/* 10350 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10352 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10356 */	NdrFcShort( 0xe ),	/* 14 */
/* 10358 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 10360 */	NdrFcShort( 0x2c ),	/* 44 */
/* 10362 */	NdrFcShort( 0x64 ),	/* 100 */
/* 10364 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x7,		/* 7 */
/* 10366 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 10368 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10374 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 10376 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 10378 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10380 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter field */

/* 10382 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10384 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10386 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */

	/* Parameter nameBufLen */

/* 10388 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10390 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10392 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameLen */

/* 10394 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10396 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 10398 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameBuf */

/* 10400 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10402 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 10404 */	NdrFcShort( 0x80 ),	/* Type Offset=128 */

	/* Parameter token */

/* 10406 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10408 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 10410 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10412 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10414 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 10416 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EndEnumFields */

/* 10418 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10420 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10424 */	NdrFcShort( 0xf ),	/* 15 */
/* 10426 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10428 */	NdrFcShort( 0x10 ),	/* 16 */
/* 10430 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10432 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10434 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10442 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 10444 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10446 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10448 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 10450 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10452 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10454 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartEnumFieldsByName */

/* 10456 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10458 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10462 */	NdrFcShort( 0x10 ),	/* 16 */
/* 10464 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 10466 */	NdrFcShort( 0x10 ),	/* 16 */
/* 10468 */	NdrFcShort( 0x2c ),	/* 44 */
/* 10470 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 10472 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10480 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 10482 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 10484 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10486 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter nameFlags */

/* 10488 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10490 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10492 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fieldFlags */

/* 10494 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10496 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10498 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fromType */

/* 10500 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10502 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 10504 */	NdrFcShort( 0x152 ),	/* Type Offset=338 */

	/* Parameter handle */

/* 10506 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10508 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 10510 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 10512 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10514 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 10516 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumFieldByName */

/* 10518 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10520 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10524 */	NdrFcShort( 0x11 ),	/* 17 */
/* 10526 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 10528 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10530 */	NdrFcShort( 0x48 ),	/* 72 */
/* 10532 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 10534 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10542 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 10544 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 10546 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10548 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter field */

/* 10550 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10552 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10554 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */

	/* Parameter token */

/* 10556 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10558 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10560 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10562 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10564 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 10566 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFieldByToken */

/* 10568 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10570 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10574 */	NdrFcShort( 0x13 ),	/* 19 */
/* 10576 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 10578 */	NdrFcShort( 0x10 ),	/* 16 */
/* 10580 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10582 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x6,		/* 6 */
/* 10584 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 10586 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10592 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter token */

/* 10594 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10596 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10598 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter field */

/* 10600 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10602 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10604 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */

	/* Parameter bufLen */

/* 10606 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10608 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10610 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameLen */

/* 10612 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10614 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 10616 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameBuf */

/* 10618 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10620 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 10622 */	NdrFcShort( 0x80 ),	/* Type Offset=128 */

	/* Return value */

/* 10624 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10626 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 10628 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetAssociatedValue */

/* 10630 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10632 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10636 */	NdrFcShort( 0x14 ),	/* 20 */
/* 10638 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10642 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10644 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10646 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10654 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter assocValue */

/* 10656 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10658 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10660 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */

	/* Return value */

/* 10662 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10664 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10666 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetAssociatedType */

/* 10668 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10670 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10674 */	NdrFcShort( 0x15 ),	/* 21 */
/* 10676 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10680 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10682 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10684 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10692 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter assocType */

/* 10694 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10696 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10698 */	NdrFcShort( 0x1d6 ),	/* Type Offset=470 */

	/* Return value */

/* 10700 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10702 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10704 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetString */

/* 10706 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10708 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10712 */	NdrFcShort( 0x16 ),	/* 22 */
/* 10714 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 10716 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10718 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10720 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 10722 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 10724 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10730 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bufLen */

/* 10732 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10734 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10736 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter strLen */

/* 10738 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10740 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10742 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter str */

/* 10744 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10746 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10748 */	NdrFcShort( 0x1b4 ),	/* Type Offset=436 */

	/* Return value */

/* 10750 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10752 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 10754 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetArrayProperties */

/* 10756 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10758 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10762 */	NdrFcShort( 0x17 ),	/* 23 */
/* 10764 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 10766 */	NdrFcShort( 0x10 ),	/* 16 */
/* 10768 */	NdrFcShort( 0x40 ),	/* 64 */
/* 10770 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x7,		/* 7 */
/* 10772 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 10774 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10780 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter rank */

/* 10782 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10784 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10786 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter totalElements */

/* 10788 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10790 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10792 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter numDim */

/* 10794 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10796 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10798 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dims */

/* 10800 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10802 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 10804 */	NdrFcShort( 0x3c4 ),	/* Type Offset=964 */

	/* Parameter numBases */

/* 10806 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10808 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 10810 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bases */

/* 10812 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10814 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 10816 */	NdrFcShort( 0x3d0 ),	/* Type Offset=976 */

	/* Return value */

/* 10818 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10820 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 10822 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetArrayElement */

/* 10824 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10826 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10830 */	NdrFcShort( 0x18 ),	/* 24 */
/* 10832 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 10834 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10836 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10838 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 10840 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10844 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10848 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter numInd */

/* 10850 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10852 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10854 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter indices */

/* 10856 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10858 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10860 */	NdrFcShort( 0x17a ),	/* Type Offset=378 */

	/* Parameter value */

/* 10862 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10864 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10866 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */

	/* Return value */

/* 10868 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10870 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 10872 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumField2 */

/* 10874 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10876 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10880 */	NdrFcShort( 0x19 ),	/* 25 */
/* 10882 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 10884 */	NdrFcShort( 0x2c ),	/* 44 */
/* 10886 */	NdrFcShort( 0x64 ),	/* 100 */
/* 10888 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x8,		/* 8 */
/* 10890 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 10892 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10898 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 10900 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 10902 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10904 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter field */

/* 10906 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10908 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10910 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */

	/* Parameter nameBufLen */

/* 10912 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10914 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10916 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameLen */

/* 10918 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10920 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 10922 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameBuf */

/* 10924 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10926 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 10928 */	NdrFcShort( 0x80 ),	/* Type Offset=128 */

	/* Parameter tokenScope */

/* 10930 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10932 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 10934 */	NdrFcShort( 0xb8 ),	/* Type Offset=184 */

	/* Parameter token */

/* 10936 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10938 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 10940 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10942 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10944 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 10946 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumFieldByName2 */

/* 10948 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10950 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10954 */	NdrFcShort( 0x1a ),	/* 26 */
/* 10956 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 10958 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10960 */	NdrFcShort( 0x48 ),	/* 72 */
/* 10962 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 10964 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10972 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 10974 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 10976 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10978 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter field */

/* 10980 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10982 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10984 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */

	/* Parameter tokenScope */

/* 10986 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10988 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10990 */	NdrFcShort( 0xb8 ),	/* Type Offset=184 */

	/* Parameter token */

/* 10992 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10994 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 10996 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10998 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11000 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 11002 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFieldByToken2 */

/* 11004 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11006 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11010 */	NdrFcShort( 0x1b ),	/* 27 */
/* 11012 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 11014 */	NdrFcShort( 0x10 ),	/* 16 */
/* 11016 */	NdrFcShort( 0x24 ),	/* 36 */
/* 11018 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 11020 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 11022 */	NdrFcShort( 0x1 ),	/* 1 */
/* 11024 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11028 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter tokenScope */

/* 11030 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11032 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 11034 */	NdrFcShort( 0xbc ),	/* Type Offset=188 */

	/* Parameter token */

/* 11036 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11038 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 11040 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter field */

/* 11042 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11044 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 11046 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */

	/* Parameter bufLen */

/* 11048 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11050 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 11052 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameLen */

/* 11054 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11056 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 11058 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameBuf */

/* 11060 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11062 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 11064 */	NdrFcShort( 0x238 ),	/* Type Offset=568 */

	/* Return value */

/* 11066 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11068 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 11070 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetNumLocations */

/* 11072 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11074 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11078 */	NdrFcShort( 0x1c ),	/* 28 */
/* 11080 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 11082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11084 */	NdrFcShort( 0x24 ),	/* 36 */
/* 11086 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11088 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11096 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter numLocs */

/* 11098 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11100 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 11102 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 11104 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11106 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 11108 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetLocationByIndex */

/* 11110 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11112 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11116 */	NdrFcShort( 0x1d ),	/* 29 */
/* 11118 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 11120 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11122 */	NdrFcShort( 0x48 ),	/* 72 */
/* 11124 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 11126 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11134 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter loc */

/* 11136 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11138 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 11140 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter flags */

/* 11142 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11144 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 11146 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg */

/* 11148 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11150 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 11152 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 11154 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11156 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 11158 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnCodeGenerated */

/* 11160 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11162 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11166 */	NdrFcShort( 0x3 ),	/* 3 */
/* 11168 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 11170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11172 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11174 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 11176 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11184 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter method */

/* 11186 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11188 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 11190 */	NdrFcShort( 0xd2 ),	/* Type Offset=210 */

	/* Return value */

/* 11192 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11194 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 11196 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnCodeDiscarded */

/* 11198 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11200 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11204 */	NdrFcShort( 0x4 ),	/* 4 */
/* 11206 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 11208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11210 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11212 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 11214 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11222 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter method */

/* 11224 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11226 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 11228 */	NdrFcShort( 0xd2 ),	/* Type Offset=210 */

	/* Return value */

/* 11230 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11232 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 11234 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnProcessExecution */

/* 11236 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11238 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11242 */	NdrFcShort( 0x5 ),	/* 5 */
/* 11244 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 11246 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11248 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11250 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11252 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11260 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter state */

/* 11262 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11264 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 11266 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 11268 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11270 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 11272 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnTaskExecution */

/* 11274 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11276 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11280 */	NdrFcShort( 0x6 ),	/* 6 */
/* 11282 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 11284 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11286 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11288 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 11290 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11298 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter task */

/* 11300 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11302 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 11304 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */

	/* Parameter state */

/* 11306 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11308 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 11310 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 11312 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11314 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 11316 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnModuleLoaded */

/* 11318 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11320 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11324 */	NdrFcShort( 0x7 ),	/* 7 */
/* 11326 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 11328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11330 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11332 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 11334 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11342 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter mod */

/* 11344 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11346 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 11348 */	NdrFcShort( 0xbc ),	/* Type Offset=188 */

	/* Return value */

/* 11350 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11352 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 11354 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnModuleUnloaded */

/* 11356 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11358 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11362 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11364 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 11366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11368 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11370 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 11372 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11378 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11380 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter mod */

/* 11382 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11384 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 11386 */	NdrFcShort( 0xbc ),	/* Type Offset=188 */

	/* Return value */

/* 11388 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11390 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 11392 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnTypeLoaded */

/* 11394 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11396 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11400 */	NdrFcShort( 0x9 ),	/* 9 */
/* 11402 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 11404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11406 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11408 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 11410 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11418 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter typeInst */

/* 11420 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11422 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 11424 */	NdrFcShort( 0x152 ),	/* Type Offset=338 */

	/* Return value */

/* 11426 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11428 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 11430 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnTypeUnloaded */

/* 11432 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11434 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11438 */	NdrFcShort( 0xa ),	/* 10 */
/* 11440 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 11442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11444 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11446 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 11448 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11456 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter typeInst */

/* 11458 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11460 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 11462 */	NdrFcShort( 0x152 ),	/* Type Offset=338 */

	/* Return value */

/* 11464 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11466 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 11468 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnAppDomainLoaded */

/* 11470 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11472 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11476 */	NdrFcShort( 0xb ),	/* 11 */
/* 11478 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 11480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11482 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11484 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 11486 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11490 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11494 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter domain */

/* 11496 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11498 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 11500 */	NdrFcShort( 0x90 ),	/* Type Offset=144 */

	/* Return value */

/* 11502 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11504 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 11506 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnAppDomainUnloaded */

/* 11508 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11510 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11514 */	NdrFcShort( 0xc ),	/* 12 */
/* 11516 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 11518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11520 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11522 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 11524 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11532 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter domain */

/* 11534 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11536 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 11538 */	NdrFcShort( 0x90 ),	/* Type Offset=144 */

	/* Return value */

/* 11540 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11542 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 11544 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnException */

/* 11546 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11548 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11552 */	NdrFcShort( 0xd ),	/* 13 */
/* 11554 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 11556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11558 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11560 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 11562 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11570 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter exception */

/* 11572 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11574 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 11576 */	NdrFcShort( 0x10e ),	/* Type Offset=270 */

	/* Return value */

/* 11578 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11580 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 11582 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const xclrdata_MIDL_TYPE_FORMAT_STRING xclrdata__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/*  4 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/*  6 */	
			0x11, 0x0,	/* FC_RP */
/*  8 */	NdrFcShort( 0x8 ),	/* Offset= 8 (16) */
/* 10 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 16 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 18 */	NdrFcShort( 0x10 ),	/* 16 */
/* 20 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 22 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 24 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (10) */
			0x5b,		/* FC_END */
/* 28 */	
			0x11, 0x0,	/* FC_RP */
/* 30 */	NdrFcShort( 0x2 ),	/* Offset= 2 (32) */
/* 32 */	
			0x1c,		/* FC_CVARRAY */
			0x0,		/* 0 */
/* 34 */	NdrFcShort( 0x1 ),	/* 1 */
/* 36 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 38 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 40 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 42 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 44 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 46 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 48 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 50 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 52 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 54 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 56 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 58 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 60 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 62 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 64 */	NdrFcShort( 0x2 ),	/* Offset= 2 (66) */
/* 66 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 68 */	NdrFcLong( 0xa5b0beea ),	/* -1515143446 */
/* 72 */	NdrFcShort( 0xec62 ),	/* -5022 */
/* 74 */	NdrFcShort( 0x4618 ),	/* 17944 */
/* 76 */	0x80,		/* 128 */
			0x12,		/* 18 */
/* 78 */	0xa2,		/* 162 */
			0x4f,		/* 79 */
/* 80 */	0xfc,		/* 252 */
			0x23,		/* 35 */
/* 82 */	0x93,		/* 147 */
			0x4c,		/* 76 */
/* 84 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 86 */	NdrFcLong( 0x5c552ab6 ),	/* 1549085366 */
/* 90 */	NdrFcShort( 0xfc09 ),	/* -1015 */
/* 92 */	NdrFcShort( 0x4cb3 ),	/* 19635 */
/* 94 */	0x8e,		/* 142 */
			0x36,		/* 54 */
/* 96 */	0x22,		/* 34 */
			0xfa,		/* 250 */
/* 98 */	0x3,		/* 3 */
			0xc7,		/* 199 */
/* 100 */	0x98,		/* 152 */
			0xb7,		/* 183 */
/* 102 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 104 */	NdrFcShort( 0x2 ),	/* Offset= 2 (106) */
/* 106 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 108 */	NdrFcLong( 0x96ec93c7 ),	/* -1762880569 */
/* 112 */	NdrFcShort( 0x1000 ),	/* 4096 */
/* 114 */	NdrFcShort( 0x4e93 ),	/* 20115 */
/* 116 */	0x89,		/* 137 */
			0x91,		/* 145 */
/* 118 */	0x98,		/* 152 */
			0xd8,		/* 216 */
/* 120 */	0x76,		/* 118 */
			0x6e,		/* 110 */
/* 122 */	0x66,		/* 102 */
			0x66,		/* 102 */
/* 124 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 126 */	0xd,		/* FC_ENUM16 */
			0x5c,		/* FC_PAD */
/* 128 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 130 */	NdrFcShort( 0x2 ),	/* 2 */
/* 132 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 134 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 136 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 138 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 140 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 142 */	NdrFcShort( 0x2 ),	/* Offset= 2 (144) */
/* 144 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 146 */	NdrFcLong( 0x7ca04601 ),	/* 2090878465 */
/* 150 */	NdrFcShort( 0xc702 ),	/* -14590 */
/* 152 */	NdrFcShort( 0x4670 ),	/* 18032 */
/* 154 */	0xa6,		/* 166 */
			0x3c,		/* 60 */
/* 156 */	0xfa,		/* 250 */
			0x44,		/* 68 */
/* 158 */	0xf7,		/* 247 */
			0xda,		/* 218 */
/* 160 */	0x7b,		/* 123 */
			0xd5,		/* 213 */
/* 162 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 164 */	NdrFcShort( 0x2 ),	/* Offset= 2 (166) */
/* 166 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 168 */	NdrFcLong( 0x2fa17588 ),	/* 799110536 */
/* 172 */	NdrFcShort( 0x43c2 ),	/* 17346 */
/* 174 */	NdrFcShort( 0x46ab ),	/* 18091 */
/* 176 */	0x9b,		/* 155 */
			0x51,		/* 81 */
/* 178 */	0xc8,		/* 200 */
			0xf0,		/* 240 */
/* 180 */	0x1e,		/* 30 */
			0x39,		/* 57 */
/* 182 */	0xc9,		/* 201 */
			0xac,		/* 172 */
/* 184 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 186 */	NdrFcShort( 0x2 ),	/* Offset= 2 (188) */
/* 188 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 190 */	NdrFcLong( 0x88e32849 ),	/* -1998378935 */
/* 194 */	NdrFcShort( 0xa0a ),	/* 2570 */
/* 196 */	NdrFcShort( 0x4cb0 ),	/* 19632 */
/* 198 */	0x90,		/* 144 */
			0x22,		/* 34 */
/* 200 */	0x7c,		/* 124 */
			0xd2,		/* 210 */
/* 202 */	0xe9,		/* 233 */
			0xe1,		/* 225 */
/* 204 */	0x39,		/* 57 */
			0xe2,		/* 226 */
/* 206 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 208 */	NdrFcShort( 0x2 ),	/* Offset= 2 (210) */
/* 210 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 212 */	NdrFcLong( 0xecd73800 ),	/* -321439744 */
/* 216 */	NdrFcShort( 0x22ca ),	/* 8906 */
/* 218 */	NdrFcShort( 0x4b0d ),	/* 19213 */
/* 220 */	0xab,		/* 171 */
			0x55,		/* 85 */
/* 222 */	0xe9,		/* 233 */
			0xba,		/* 186 */
/* 224 */	0x7e,		/* 126 */
			0x63,		/* 99 */
/* 226 */	0x18,		/* 24 */
			0xa5,		/* 165 */
/* 228 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 230 */	NdrFcShort( 0x2 ),	/* 2 */
/* 232 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 234 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 236 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 238 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 240 */	
			0x11, 0x0,	/* FC_RP */
/* 242 */	NdrFcShort( 0x8 ),	/* Offset= 8 (250) */
/* 244 */	
			0x1d,		/* FC_SMFARRAY */
			0x7,		/* 7 */
/* 246 */	NdrFcShort( 0x78 ),	/* 120 */
/* 248 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 250 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 252 */	NdrFcShort( 0x98 ),	/* 152 */
/* 254 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 256 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 258 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 260 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 262 */	NdrFcShort( 0xffee ),	/* Offset= -18 (244) */
/* 264 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 266 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 268 */	NdrFcShort( 0x2 ),	/* Offset= 2 (270) */
/* 270 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 272 */	NdrFcLong( 0x75da9e4c ),	/* 1977261644 */
/* 276 */	NdrFcShort( 0xbd33 ),	/* -17101 */
/* 278 */	NdrFcShort( 0x43c8 ),	/* 17352 */
/* 280 */	0x8f,		/* 143 */
			0x5c,		/* 92 */
/* 282 */	0x96,		/* 150 */
			0xe8,		/* 232 */
/* 284 */	0xa5,		/* 165 */
			0x24,		/* 36 */
/* 286 */	0x1f,		/* 31 */
			0x57,		/* 87 */
/* 288 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 290 */	NdrFcLong( 0x2d95a079 ),	/* 764780665 */
/* 294 */	NdrFcShort( 0x42a1 ),	/* 17057 */
/* 296 */	NdrFcShort( 0x4837 ),	/* 18487 */
/* 298 */	0x81,		/* 129 */
			0x8f,		/* 143 */
/* 300 */	0xb,		/* 11 */
			0x97,		/* 151 */
/* 302 */	0xd7,		/* 215 */
			0x4,		/* 4 */
/* 304 */	0x8e,		/* 142 */
			0xe,		/* 14 */
/* 306 */	
			0x11, 0x0,	/* FC_RP */
/* 308 */	NdrFcShort( 0x2 ),	/* Offset= 2 (310) */
/* 310 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 312 */	NdrFcShort( 0x1 ),	/* 1 */
/* 314 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 316 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 318 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 320 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 322 */	
			0x11, 0x0,	/* FC_RP */
/* 324 */	NdrFcShort( 0x2 ),	/* Offset= 2 (326) */
/* 326 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 328 */	NdrFcShort( 0x1 ),	/* 1 */
/* 330 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 332 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 334 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 336 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 338 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 340 */	NdrFcLong( 0x4d078d91 ),	/* 1292340625 */
/* 344 */	NdrFcShort( 0x9cb3 ),	/* -25421 */
/* 346 */	NdrFcShort( 0x4b0d ),	/* 19213 */
/* 348 */	0x97,		/* 151 */
			0xac,		/* 172 */
/* 350 */	0x28,		/* 40 */
			0xc8,		/* 200 */
/* 352 */	0xa5,		/* 165 */
			0xa8,		/* 168 */
/* 354 */	0x25,		/* 37 */
			0x97,		/* 151 */
/* 356 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 360 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 362 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 364 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 366 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 370 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 372 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 374 */	NdrFcShort( 0xff46 ),	/* Offset= -186 (188) */
/* 376 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 378 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 380 */	NdrFcShort( 0x4 ),	/* 4 */
/* 382 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 384 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 386 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 388 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 390 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 392 */	NdrFcShort( 0x2 ),	/* Offset= 2 (394) */
/* 394 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 396 */	NdrFcLong( 0xaaf60008 ),	/* -1426718712 */
/* 400 */	NdrFcShort( 0xfb2c ),	/* -1236 */
/* 402 */	NdrFcShort( 0x420b ),	/* 16907 */
/* 404 */	0x8f,		/* 143 */
			0xb1,		/* 177 */
/* 406 */	0x42,		/* 66 */
			0xd2,		/* 210 */
/* 408 */	0x44,		/* 68 */
			0xa5,		/* 165 */
/* 410 */	0x4a,		/* 74 */
			0x97,		/* 151 */
/* 412 */	
			0x11, 0x0,	/* FC_RP */
/* 414 */	NdrFcShort( 0x8 ),	/* Offset= 8 (422) */
/* 416 */	
			0x1d,		/* FC_SMFARRAY */
			0x7,		/* 7 */
/* 418 */	NdrFcShort( 0x40 ),	/* 64 */
/* 420 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 422 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 424 */	NdrFcShort( 0x40 ),	/* 64 */
/* 426 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 428 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (416) */
/* 430 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 432 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 434 */	NdrFcShort( 0xfea2 ),	/* Offset= -350 (84) */
/* 436 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 438 */	NdrFcShort( 0x2 ),	/* 2 */
/* 440 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 442 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 444 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 446 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 448 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 450 */	NdrFcShort( 0x2 ),	/* Offset= 2 (452) */
/* 452 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 454 */	NdrFcLong( 0x4675666c ),	/* 1182099052 */
/* 458 */	NdrFcShort( 0xc275 ),	/* -15755 */
/* 460 */	NdrFcShort( 0x45b8 ),	/* 17848 */
/* 462 */	0x9f,		/* 159 */
			0x6c,		/* 108 */
/* 464 */	0xab,		/* 171 */
			0x16,		/* 22 */
/* 466 */	0x5d,		/* 93 */
			0x5c,		/* 92 */
/* 468 */	0x1e,		/* 30 */
			0x9,		/* 9 */
/* 470 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 472 */	NdrFcShort( 0xff7a ),	/* Offset= -134 (338) */
/* 474 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 476 */	NdrFcShort( 0x2 ),	/* Offset= 2 (478) */
/* 478 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 480 */	NdrFcShort( 0x10 ),	/* 16 */
/* 482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 484 */	NdrFcShort( 0x0 ),	/* Offset= 0 (484) */
/* 486 */	0xb,		/* FC_HYPER */
			0x8,		/* FC_LONG */
/* 488 */	0xd,		/* FC_ENUM16 */
			0x5b,		/* FC_END */
/* 490 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 492 */	NdrFcShort( 0xfe24 ),	/* Offset= -476 (16) */
/* 494 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 496 */	NdrFcShort( 0x2 ),	/* 2 */
/* 498 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 500 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 502 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 504 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 506 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 508 */	NdrFcShort( 0x2 ),	/* Offset= 2 (510) */
/* 510 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 512 */	NdrFcLong( 0xecd73800 ),	/* -321439744 */
/* 516 */	NdrFcShort( 0x22ca ),	/* 8906 */
/* 518 */	NdrFcShort( 0x4b0d ),	/* 19213 */
/* 520 */	0xab,		/* 171 */
			0x55,		/* 85 */
/* 522 */	0xe9,		/* 233 */
			0xba,		/* 186 */
/* 524 */	0x7e,		/* 126 */
			0x63,		/* 99 */
/* 526 */	0x18,		/* 24 */
			0xa5,		/* 165 */
/* 528 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 530 */	NdrFcLong( 0xa5b0beea ),	/* -1515143446 */
/* 534 */	NdrFcShort( 0xec62 ),	/* -5022 */
/* 536 */	NdrFcShort( 0x4618 ),	/* 17944 */
/* 538 */	0x80,		/* 128 */
			0x12,		/* 18 */
/* 540 */	0xa2,		/* 162 */
			0x4f,		/* 79 */
/* 542 */	0xfc,		/* 252 */
			0x23,		/* 35 */
/* 544 */	0x93,		/* 147 */
			0x4c,		/* 76 */
/* 546 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 548 */	NdrFcShort( 0x2 ),	/* Offset= 2 (550) */
/* 550 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 552 */	NdrFcLong( 0x96ec93c7 ),	/* -1762880569 */
/* 556 */	NdrFcShort( 0x1000 ),	/* 4096 */
/* 558 */	NdrFcShort( 0x4e93 ),	/* 20115 */
/* 560 */	0x89,		/* 137 */
			0x91,		/* 145 */
/* 562 */	0x98,		/* 152 */
			0xd8,		/* 216 */
/* 564 */	0x76,		/* 118 */
			0x6e,		/* 110 */
/* 566 */	0x66,		/* 102 */
			0x66,		/* 102 */
/* 568 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 570 */	NdrFcShort( 0x2 ),	/* 2 */
/* 572 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 574 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 576 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 578 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 580 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 582 */	NdrFcShort( 0x2 ),	/* Offset= 2 (584) */
/* 584 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 586 */	NdrFcLong( 0x4d078d91 ),	/* 1292340625 */
/* 590 */	NdrFcShort( 0x9cb3 ),	/* -25421 */
/* 592 */	NdrFcShort( 0x4b0d ),	/* 19213 */
/* 594 */	0x97,		/* 151 */
			0xac,		/* 172 */
/* 596 */	0x28,		/* 40 */
			0xc8,		/* 200 */
/* 598 */	0xa5,		/* 165 */
			0xa8,		/* 168 */
/* 600 */	0x25,		/* 37 */
			0x97,		/* 151 */
/* 602 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 604 */	NdrFcShort( 0x2 ),	/* Offset= 2 (606) */
/* 606 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 608 */	NdrFcLong( 0x88e32849 ),	/* -1998378935 */
/* 612 */	NdrFcShort( 0xa0a ),	/* 2570 */
/* 614 */	NdrFcShort( 0x4cb0 ),	/* 19632 */
/* 616 */	0x90,		/* 144 */
			0x22,		/* 34 */
/* 618 */	0x7c,		/* 124 */
			0xd2,		/* 210 */
/* 620 */	0xe9,		/* 233 */
			0xe1,		/* 225 */
/* 622 */	0x39,		/* 57 */
			0xe2,		/* 226 */
/* 624 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 626 */	NdrFcShort( 0x2 ),	/* Offset= 2 (628) */
/* 628 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 630 */	NdrFcLong( 0x4675666c ),	/* 1182099052 */
/* 634 */	NdrFcShort( 0xc275 ),	/* -15755 */
/* 636 */	NdrFcShort( 0x45b8 ),	/* 17848 */
/* 638 */	0x9f,		/* 159 */
			0x6c,		/* 108 */
/* 640 */	0xab,		/* 171 */
			0x16,		/* 22 */
/* 642 */	0x5d,		/* 93 */
			0x5c,		/* 92 */
/* 644 */	0x1e,		/* 30 */
			0x9,		/* 9 */
/* 646 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 648 */	NdrFcLong( 0x7ca04601 ),	/* 2090878465 */
/* 652 */	NdrFcShort( 0xc702 ),	/* -14590 */
/* 654 */	NdrFcShort( 0x4670 ),	/* 18032 */
/* 656 */	0xa6,		/* 166 */
			0x3c,		/* 60 */
/* 658 */	0xfa,		/* 250 */
			0x44,		/* 68 */
/* 660 */	0xf7,		/* 247 */
			0xda,		/* 218 */
/* 662 */	0x7b,		/* 123 */
			0xd5,		/* 213 */
/* 664 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 666 */	NdrFcShort( 0x2 ),	/* Offset= 2 (668) */
/* 668 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 670 */	NdrFcLong( 0xecd73800 ),	/* -321439744 */
/* 674 */	NdrFcShort( 0x22ca ),	/* 8906 */
/* 676 */	NdrFcShort( 0x4b0d ),	/* 19213 */
/* 678 */	0xab,		/* 171 */
			0x55,		/* 85 */
/* 680 */	0xe9,		/* 233 */
			0xba,		/* 186 */
/* 682 */	0x7e,		/* 126 */
			0x63,		/* 99 */
/* 684 */	0x18,		/* 24 */
			0xa5,		/* 165 */
/* 686 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 688 */	NdrFcShort( 0x2 ),	/* Offset= 2 (690) */
/* 690 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 692 */	NdrFcLong( 0x88e32849 ),	/* -1998378935 */
/* 696 */	NdrFcShort( 0xa0a ),	/* 2570 */
/* 698 */	NdrFcShort( 0x4cb0 ),	/* 19632 */
/* 700 */	0x90,		/* 144 */
			0x22,		/* 34 */
/* 702 */	0x7c,		/* 124 */
			0xd2,		/* 210 */
/* 704 */	0xe9,		/* 233 */
			0xe1,		/* 225 */
/* 706 */	0x39,		/* 57 */
			0xe2,		/* 226 */
/* 708 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 710 */	NdrFcLong( 0xaaf60008 ),	/* -1426718712 */
/* 714 */	NdrFcShort( 0xfb2c ),	/* -1236 */
/* 716 */	NdrFcShort( 0x420b ),	/* 16907 */
/* 718 */	0x8f,		/* 143 */
			0xb1,		/* 177 */
/* 720 */	0x42,		/* 66 */
			0xd2,		/* 210 */
/* 722 */	0x44,		/* 68 */
			0xa5,		/* 165 */
/* 724 */	0x4a,		/* 74 */
			0x97,		/* 151 */
/* 726 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 728 */	NdrFcShort( 0x2 ),	/* Offset= 2 (730) */
/* 730 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 732 */	NdrFcShort( 0x18 ),	/* 24 */
/* 734 */	NdrFcShort( 0x0 ),	/* 0 */
/* 736 */	NdrFcShort( 0x0 ),	/* Offset= 0 (736) */
/* 738 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 740 */	0x8,		/* FC_LONG */
			0xd,		/* FC_ENUM16 */
/* 742 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 744 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 746 */	NdrFcShort( 0x2 ),	/* Offset= 2 (748) */
/* 748 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 750 */	NdrFcLong( 0x4d078d91 ),	/* 1292340625 */
/* 754 */	NdrFcShort( 0x9cb3 ),	/* -25421 */
/* 756 */	NdrFcShort( 0x4b0d ),	/* 19213 */
/* 758 */	0x97,		/* 151 */
			0xac,		/* 172 */
/* 760 */	0x28,		/* 40 */
			0xc8,		/* 200 */
/* 762 */	0xa5,		/* 165 */
			0xa8,		/* 168 */
/* 764 */	0x25,		/* 37 */
			0x97,		/* 151 */
/* 766 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 768 */	NdrFcShort( 0xffc4 ),	/* Offset= -60 (708) */
/* 770 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 772 */	NdrFcShort( 0x4 ),	/* 4 */
/* 774 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 776 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 778 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 780 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 782 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 784 */	NdrFcShort( 0x10 ),	/* 16 */
/* 786 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 788 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 790 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 792 */	NdrFcShort( 0x10 ),	/* 16 */
/* 794 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 796 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 798 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 800 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 802 */	NdrFcShort( 0xffec ),	/* Offset= -20 (782) */
/* 804 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 806 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 808 */	NdrFcShort( 0x20 ),	/* 32 */
/* 810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 812 */	NdrFcShort( 0x0 ),	/* Offset= 0 (812) */
/* 814 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 816 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 818 */	0xd,		/* FC_ENUM16 */
			0x40,		/* FC_STRUCTPAD4 */
/* 820 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 822 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x7,		/* 7 */
/* 824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 826 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 828 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 830 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 832 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 836 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 838 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 840 */	NdrFcShort( 0xffde ),	/* Offset= -34 (806) */
/* 842 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 844 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 846 */	NdrFcShort( 0xffc0 ),	/* Offset= -64 (782) */
/* 848 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 850 */	NdrFcShort( 0x2 ),	/* Offset= 2 (852) */
/* 852 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 854 */	NdrFcLong( 0x5c552ab6 ),	/* 1549085366 */
/* 858 */	NdrFcShort( 0xfc09 ),	/* -1015 */
/* 860 */	NdrFcShort( 0x4cb3 ),	/* 19635 */
/* 862 */	0x8e,		/* 142 */
			0x36,		/* 54 */
/* 864 */	0x22,		/* 34 */
			0xfa,		/* 250 */
/* 866 */	0x3,		/* 3 */
			0xc7,		/* 199 */
/* 868 */	0x98,		/* 152 */
			0xb7,		/* 183 */
/* 870 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 872 */	NdrFcShort( 0xff1e ),	/* Offset= -226 (646) */
/* 874 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 876 */	NdrFcShort( 0x2 ),	/* Offset= 2 (878) */
/* 878 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 880 */	NdrFcLong( 0xe59d8d22 ),	/* -442659550 */
/* 884 */	NdrFcShort( 0xada7 ),	/* -21081 */
/* 886 */	NdrFcShort( 0x49a2 ),	/* 18850 */
/* 888 */	0x89,		/* 137 */
			0xb5,		/* 181 */
/* 890 */	0xa4,		/* 164 */
			0x15,		/* 21 */
/* 892 */	0xaf,		/* 175 */
			0xcf,		/* 207 */
/* 894 */	0xc9,		/* 201 */
			0x5f,		/* 95 */
/* 896 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 898 */	NdrFcShort( 0x1 ),	/* 1 */
/* 900 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 902 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 904 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 906 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 908 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 910 */	NdrFcShort( 0x2 ),	/* Offset= 2 (912) */
/* 912 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 914 */	NdrFcLong( 0x75da9e4c ),	/* 1977261644 */
/* 918 */	NdrFcShort( 0xbd33 ),	/* -17101 */
/* 920 */	NdrFcShort( 0x43c8 ),	/* 17352 */
/* 922 */	0x8f,		/* 143 */
			0x5c,		/* 92 */
/* 924 */	0x96,		/* 150 */
			0xe8,		/* 232 */
/* 926 */	0xa5,		/* 165 */
			0x24,		/* 36 */
/* 928 */	0x1f,		/* 31 */
			0x57,		/* 87 */
/* 930 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 932 */	NdrFcShort( 0x2 ),	/* Offset= 2 (934) */
/* 934 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 936 */	NdrFcLong( 0x271498c2 ),	/* 655661250 */
/* 940 */	NdrFcShort( 0x4085 ),	/* 16517 */
/* 942 */	NdrFcShort( 0x4766 ),	/* 18278 */
/* 944 */	0xbc,		/* 188 */
			0x3a,		/* 58 */
/* 946 */	0x7f,		/* 127 */
			0x8e,		/* 142 */
/* 948 */	0xd1,		/* 209 */
			0x88,		/* 136 */
/* 950 */	0xa1,		/* 161 */
			0x73,		/* 115 */
/* 952 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 954 */	NdrFcShort( 0x1 ),	/* 1 */
/* 956 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 958 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 960 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 962 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 964 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 966 */	NdrFcShort( 0x4 ),	/* 4 */
/* 968 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 970 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 972 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 974 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 976 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 978 */	NdrFcShort( 0x4 ),	/* 4 */
/* 980 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 982 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 984 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 986 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */

			0x0
        }
    };


/* Standard interface: __MIDL_itf_xclrdata_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: ICLRDataTarget, ver. 0.0,
   GUID={0x3E11CCEE,0xD08B,0x43e5,{0xAF,0x01,0x32,0x71,0x7A,0x64,0xDA,0x03}} */


/* Object interface: ICLRDataTarget2, ver. 0.0,
   GUID={0x6d05fae3,0x189c,0x4630,{0xa6,0xdc,0x1c,0x25,0x1e,0x1c,0x01,0xab}} */


/* Object interface: IXCLRDataTarget3, ver. 0.0,
   GUID={0x59d9b5e1,0x4a6f,0x4531,{0x84,0xc3,0x51,0xd1,0x2d,0xa2,0x2f,0xd4}} */

#pragma code_seg(".orpc")
static const unsigned short IXCLRDataTarget3_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };



/* Standard interface: __MIDL_itf_xclrdata_0000_0001, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IXCLRDataProcess, ver. 0.0,
   GUID={0x5c552ab6,0xfc09,0x4cb3,{0x8e,0x36,0x22,0xfa,0x03,0xc7,0x98,0xb7}} */

#pragma code_seg(".orpc")
static const unsigned short IXCLRDataProcess_FormatStringOffsetTable[] =
    {
    86,
    118,
    156,
    200,
    238,
    282,
    326,
    364,
    402,
    440,
    478,
    516,
    560,
    628,
    666,
    710,
    748,
    792,
    830,
    874,
    912,
    950,
    994,
    1032,
    1076,
    1126,
    1170,
    1208,
    1294,
    1338,
    1382,
    1444,
    1506,
    1550,
    1594,
    1656,
    1724,
    1786,
    1854,
    1892,
    1930,
    1974,
    2018,
    2056,
    2124
    };



/* Standard interface: __MIDL_itf_xclrdata_0000_0002, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IXCLRDataAppDomain, ver. 0.0,
   GUID={0x7CA04601,0xC702,0x4670,{0xA6,0x3C,0xFA,0x44,0xF7,0xDA,0x7B,0xD5}} */

#pragma code_seg(".orpc")
static const unsigned short IXCLRDataAppDomain_FormatStringOffsetTable[] =
    {
    2198,
    2236,
    2286,
    2324,
    2362,
    2400,
    2438
    };



/* Standard interface: __MIDL_itf_xclrdata_0000_0003, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IXCLRDataAssembly, ver. 0.0,
   GUID={0x2FA17588,0x43C2,0x46ab,{0x9B,0x51,0xC8,0xF0,0x1E,0x39,0xC9,0xAC}} */

#pragma code_seg(".orpc")
static const unsigned short IXCLRDataAssembly_FormatStringOffsetTable[] =
    {
    2500,
    2538,
    2582,
    2620,
    2670,
    2720,
    2758,
    2796,
    2858,
    2896,
    2940,
    2978
    };



/* Standard interface: __MIDL_itf_xclrdata_0000_0004, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IXCLRDataModule, ver. 0.0,
   GUID={0x88E32849,0x0A0A,0x4cb0,{0x90,0x22,0x7C,0xD2,0xE9,0xE1,0x39,0xE2}} */

#pragma code_seg(".orpc")
static const unsigned short IXCLRDataModule_FormatStringOffsetTable[] =
    {
    2500,
    3028,
    2582,
    3072,
    3110,
    3154,
    3192,
    3236,
    3280,
    3318,
    3368,
    3412,
    3450,
    3506,
    3550,
    3588,
    3632,
    3682,
    3726,
    3764,
    3820,
    3864,
    3902,
    3946,
    4008,
    4052,
    4090,
    4140,
    4190,
    4228,
    4266,
    4304,
    4348,
    4386,
    4448,
    4486,
    4530,
    4568
    };



/* Object interface: IXCLRDataTypeDefinition, ver. 0.0,
   GUID={0x4675666C,0xC275,0x45b8,{0x9F,0x6C,0xAB,0x16,0x5D,0x5C,0x1E,0x09}} */

#pragma code_seg(".orpc")
static const unsigned short IXCLRDataTypeDefinition_FormatStringOffsetTable[] =
    {
    4606,
    118,
    4644,
    200,
    4688,
    4738,
    4782,
    4820,
    4864,
    4908,
    2940,
    4952,
    5008,
    5052,
    5090,
    5128,
    5166,
    5228,
    5266,
    5304,
    5348,
    5392,
    994,
    5466,
    5522,
    4052,
    5578,
    5646,
    5684,
    5722,
    5802,
    5864
    };



/* Object interface: IXCLRDataTypeInstance, ver. 0.0,
   GUID={0x4D078D91,0x9CB3,0x4b0d,{0x97,0xAC,0x28,0xC8,0xA5,0xA8,0x25,0x97}} */

#pragma code_seg(".orpc")
static const unsigned short IXCLRDataTypeInstance_FormatStringOffsetTable[] =
    {
    2500,
    5938,
    2582,
    5982,
    6032,
    3154,
    326,
    6076,
    6150,
    6206,
    2940,
    6250,
    6288,
    6332,
    6388,
    6426,
    6464,
    6502,
    6540,
    5304,
    6602,
    6652,
    994,
    6696,
    6758,
    4052,
    6802,
    6870,
    6908,
    6982,
    7038
    };



/* Standard interface: __MIDL_itf_xclrdata_0000_0007, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IXCLRDataMethodDefinition, ver. 0.0,
   GUID={0xAAF60008,0xFB2C,0x420b,{0x8F,0xB1,0x42,0xD2,0x44,0xA5,0x4A,0x97}} */

#pragma code_seg(".orpc")
static const unsigned short IXCLRDataMethodDefinition_FormatStringOffsetTable[] =
    {
    7112,
    7150,
    7194,
    200,
    7238,
    7294,
    326,
    7338,
    7376,
    7414,
    7452,
    3412,
    7496,
    7534,
    7572,
    7634,
    6464
    };



/* Object interface: IXCLRDataMethodInstance, ver. 0.0,
   GUID={0xECD73800,0x22CA,0x4b0d,{0xAB,0x55,0xE9,0xBA,0x7E,0x63,0x18,0xA5}} */

#pragma code_seg(".orpc")
static const unsigned short IXCLRDataMethodInstance_FormatStringOffsetTable[] =
    {
    7672,
    7710,
    7748,
    7792,
    7848,
    7886,
    326,
    7924,
    7962,
    8006,
    8062,
    8118,
    8168,
    8206,
    3550,
    8250,
    8312
    };



/* Standard interface: __MIDL_itf_xclrdata_0000_0009, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IXCLRDataTask, ver. 0.0,
   GUID={0xA5B0BEEA,0xEC62,0x4618,{0x80,0x12,0xA2,0x4F,0xFC,0x23,0x93,0x4C}} */

#pragma code_seg(".orpc")
static const unsigned short IXCLRDataTask_FormatStringOffsetTable[] =
    {
    8350,
    8388,
    2286,
    2324,
    8426,
    8464,
    326,
    8502,
    8540,
    440,
    8584,
    8640,
    8684,
    8722,
    8784,
    8834
    };



/* Standard interface: __MIDL_itf_xclrdata_0000_0010, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IXCLRDataStackWalk, ver. 0.0,
   GUID={0xE59D8D22,0xADA7,0x49a2,{0x89,0xB5,0xA4,0x15,0xAF,0xCF,0xC9,0x5F}} */

#pragma code_seg(".orpc")
static const unsigned short IXCLRDataStackWalk_FormatStringOffsetTable[] =
    {
    8872,
    8928,
    8972,
    3072,
    9004,
    9048,
    2438,
    9086
    };



/* Object interface: IXCLRDataFrame, ver. 0.0,
   GUID={0x271498C2,0x4085,0x4766,{0xBC,0x3A,0x7F,0x8E,0xD1,0x88,0xA1,0x73}} */

#pragma code_seg(".orpc")
static const unsigned short IXCLRDataFrame_FormatStringOffsetTable[] =
    {
    9136,
    9180,
    9236,
    2324,
    9274,
    2720,
    9336,
    9398,
    9454,
    9492,
    9554,
    9592
    };



/* Standard interface: __MIDL_itf_xclrdata_0000_0012, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IXCLRDataExceptionState, ver. 0.0,
   GUID={0x75DA9E4C,0xBD33,0x43C8,{0x8F,0x5C,0x96,0xE8,0xA5,0x24,0x1F,0x57}} */

#pragma code_seg(".orpc")
static const unsigned short IXCLRDataExceptionState_FormatStringOffsetTable[] =
    {
    9636,
    9674,
    9712,
    9750,
    7848,
    9788,
    2438,
    9838,
    9888,
    9944
    };



/* Standard interface: __MIDL_itf_xclrdata_0000_0013, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IXCLRDataValue, ver. 0.0,
   GUID={0x96EC93C7,0x1000,0x4e93,{0x89,0x91,0x98,0xD8,0x76,0x6E,0x66,0x66}} */

#pragma code_seg(".orpc")
static const unsigned short IXCLRDataValue_FormatStringOffsetTable[] =
    {
    9636,
    118,
    2286,
    9982,
    10032,
    10082,
    326,
    10120,
    10188,
    10250,
    10300,
    10350,
    10418,
    10456,
    10518,
    710,
    10568,
    10630,
    10668,
    10706,
    10756,
    10824,
    10874,
    10948,
    11004,
    11072,
    11110
    };



/* Object interface: IXCLRDataExceptionNotification, ver. 0.0,
   GUID={0x2D95A079,0x42A1,0x4837,{0x81,0x8F,0x0B,0x97,0xD7,0x04,0x8E,0x0E}} */

#pragma code_seg(".orpc")
static const unsigned short IXCLRDataExceptionNotification_FormatStringOffsetTable[] =
    {
    11160,
    11198,
    11236,
    11274,
    11318,
    11356,
    11394,
    11432
    };



/* Object interface: IXCLRDataExceptionNotification2, ver. 0.0,
   GUID={0x31201a94,0x4337,0x49b7,{0xae,0xf7,0x0c,0x75,0x50,0x54,0x09,0x1f}} */

#pragma code_seg(".orpc")
static const unsigned short IXCLRDataExceptionNotification2_FormatStringOffsetTable[] =
    {
    11160,
    11198,
    11236,
    11274,
    11318,
    11356,
    11394,
    11432,
    11470,
    11508,
    11546
    };



#endif /* defined(_M_AMD64)*/



/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for xclrdata\xclrdata.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if defined(_M_AMD64)




#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif


#include "ndr64types.h"
#include "pshpack8.h"


typedef 
NDR64_FORMAT_CHAR
__midl_frag1879_t;
extern const __midl_frag1879_t __midl_frag1879;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag1878_t;
extern const __midl_frag1878_t __midl_frag1878;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1877_t;
extern const __midl_frag1877_t __midl_frag1877;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag1876_t;
extern const __midl_frag1876_t __midl_frag1876;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag1874_t;
extern const __midl_frag1874_t __midl_frag1874;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1873_t;
extern const __midl_frag1873_t __midl_frag1873;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag1872_t;
extern const __midl_frag1872_t __midl_frag1872;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag1866_t;
extern const __midl_frag1866_t __midl_frag1866;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1865_t;
extern const __midl_frag1865_t __midl_frag1865;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag1864_t;
extern const __midl_frag1864_t __midl_frag1864;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag1858_t;
extern const __midl_frag1858_t __midl_frag1858;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1857_t;
extern const __midl_frag1857_t __midl_frag1857;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag1856_t;
extern const __midl_frag1856_t __midl_frag1856;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag1849_t;
extern const __midl_frag1849_t __midl_frag1849;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1848_t;
extern const __midl_frag1848_t __midl_frag1848;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag1847_t;
extern const __midl_frag1847_t __midl_frag1847;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag1844_t;
extern const __midl_frag1844_t __midl_frag1844;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag1842_t;
extern const __midl_frag1842_t __midl_frag1842;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1841_t;
extern const __midl_frag1841_t __midl_frag1841;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag1840_t;
extern const __midl_frag1840_t __midl_frag1840;

typedef 
NDR64_FORMAT_CHAR
__midl_frag1834_t;
extern const __midl_frag1834_t __midl_frag1834;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1833_t;
extern const __midl_frag1833_t __midl_frag1833;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1831_t;
extern const __midl_frag1831_t __midl_frag1831;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag1829_t;
extern const __midl_frag1829_t __midl_frag1829;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag1825_t;
extern const __midl_frag1825_t __midl_frag1825;

typedef 
NDR64_FORMAT_CHAR
__midl_frag1823_t;
extern const __midl_frag1823_t __midl_frag1823;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag1822_t;
extern const __midl_frag1822_t __midl_frag1822;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag1821_t;
extern const __midl_frag1821_t __midl_frag1821;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag1817_t;
extern const __midl_frag1817_t __midl_frag1817;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1816_t;
extern const __midl_frag1816_t __midl_frag1816;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1815_t;
extern const __midl_frag1815_t __midl_frag1815;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
}
__midl_frag1811_t;
extern const __midl_frag1811_t __midl_frag1811;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1805_t;
extern const __midl_frag1805_t __midl_frag1805;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1800_t;
extern const __midl_frag1800_t __midl_frag1800;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag1799_t;
extern const __midl_frag1799_t __midl_frag1799;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag1791_t;
extern const __midl_frag1791_t __midl_frag1791;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag1790_t;
extern const __midl_frag1790_t __midl_frag1790;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
    struct _NDR64_PARAM_FORMAT frag9;
}
__midl_frag1781_t;
extern const __midl_frag1781_t __midl_frag1781;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag1775_t;
extern const __midl_frag1775_t __midl_frag1775;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag1774_t;
extern const __midl_frag1774_t __midl_frag1774;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag1772_t;
extern const __midl_frag1772_t __midl_frag1772;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag1769_t;
extern const __midl_frag1769_t __midl_frag1769;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag1768_t;
extern const __midl_frag1768_t __midl_frag1768;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag1764_t;
extern const __midl_frag1764_t __midl_frag1764;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
}
__midl_frag1758_t;
extern const __midl_frag1758_t __midl_frag1758;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag1754_t;
extern const __midl_frag1754_t __midl_frag1754;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag1750_t;
extern const __midl_frag1750_t __midl_frag1750;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1746_t;
extern const __midl_frag1746_t __midl_frag1746;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag1745_t;
extern const __midl_frag1745_t __midl_frag1745;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag1740_t;
extern const __midl_frag1740_t __midl_frag1740;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
}
__midl_frag1728_t;
extern const __midl_frag1728_t __midl_frag1728;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag1725_t;
extern const __midl_frag1725_t __midl_frag1725;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag1716_t;
extern const __midl_frag1716_t __midl_frag1716;

typedef 
struct _NDR64_CONFORMANT_STRING_FORMAT
__midl_frag1708_t;
extern const __midl_frag1708_t __midl_frag1708;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1707_t;
extern const __midl_frag1707_t __midl_frag1707;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
}
__midl_frag1706_t;
extern const __midl_frag1706_t __midl_frag1706;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
}
__midl_frag1688_t;
extern const __midl_frag1688_t __midl_frag1688;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag1681_t;
extern const __midl_frag1681_t __midl_frag1681;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag1674_t;
extern const __midl_frag1674_t __midl_frag1674;

typedef 
NDR64_FORMAT_CHAR
__midl_frag1672_t;
extern const __midl_frag1672_t __midl_frag1672;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag1670_t;
extern const __midl_frag1670_t __midl_frag1670;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1669_t;
extern const __midl_frag1669_t __midl_frag1669;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag1666_t;
extern const __midl_frag1666_t __midl_frag1666;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag1665_t;
extern const __midl_frag1665_t __midl_frag1665;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1664_t;
extern const __midl_frag1664_t __midl_frag1664;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
}
__midl_frag1661_t;
extern const __midl_frag1661_t __midl_frag1661;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
}
__midl_frag1647_t;
extern const __midl_frag1647_t __midl_frag1647;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag1634_t;
extern const __midl_frag1634_t __midl_frag1634;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag1630_t;
extern const __midl_frag1630_t __midl_frag1630;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag1622_t;
extern const __midl_frag1622_t __midl_frag1622;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag1618_t;
extern const __midl_frag1618_t __midl_frag1618;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1606_t;
extern const __midl_frag1606_t __midl_frag1606;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag1605_t;
extern const __midl_frag1605_t __midl_frag1605;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag1601_t;
extern const __midl_frag1601_t __midl_frag1601;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1599_t;
extern const __midl_frag1599_t __midl_frag1599;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag1597_t;
extern const __midl_frag1597_t __midl_frag1597;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag1590_t;
extern const __midl_frag1590_t __midl_frag1590;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1552_t;
extern const __midl_frag1552_t __midl_frag1552;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag1551_t;
extern const __midl_frag1551_t __midl_frag1551;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag1541_t;
extern const __midl_frag1541_t __midl_frag1541;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1520_t;
extern const __midl_frag1520_t __midl_frag1520;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag1519_t;
extern const __midl_frag1519_t __midl_frag1519;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag1515_t;
extern const __midl_frag1515_t __midl_frag1515;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag1510_t;
extern const __midl_frag1510_t __midl_frag1510;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1474_t;
extern const __midl_frag1474_t __midl_frag1474;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag1473_t;
extern const __midl_frag1473_t __midl_frag1473;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag1464_t;
extern const __midl_frag1464_t __midl_frag1464;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag1458_t;
extern const __midl_frag1458_t __midl_frag1458;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag1451_t;
extern const __midl_frag1451_t __midl_frag1451;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag1436_t;
extern const __midl_frag1436_t __midl_frag1436;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1435_t;
extern const __midl_frag1435_t __midl_frag1435;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1434_t;
extern const __midl_frag1434_t __midl_frag1434;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag1433_t;
extern const __midl_frag1433_t __midl_frag1433;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
}
__midl_frag1421_t;
extern const __midl_frag1421_t __midl_frag1421;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag1415_t;
extern const __midl_frag1415_t __midl_frag1415;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag1354_t;
extern const __midl_frag1354_t __midl_frag1354;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1353_t;
extern const __midl_frag1353_t __midl_frag1353;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1352_t;
extern const __midl_frag1352_t __midl_frag1352;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag1350_t;
extern const __midl_frag1350_t __midl_frag1350;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag1334_t;
extern const __midl_frag1334_t __midl_frag1334;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag1319_t;
extern const __midl_frag1319_t __midl_frag1319;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1318_t;
extern const __midl_frag1318_t __midl_frag1318;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1317_t;
extern const __midl_frag1317_t __midl_frag1317;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag1316_t;
extern const __midl_frag1316_t __midl_frag1316;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1294_t;
extern const __midl_frag1294_t __midl_frag1294;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag1291_t;
extern const __midl_frag1291_t __midl_frag1291;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_MEMPAD_FORMAT frag6;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
    } frag2;
}
__midl_frag1285_t;
extern const __midl_frag1285_t __midl_frag1285;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag1283_t;
extern const __midl_frag1283_t __midl_frag1283;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag1279_t;
extern const __midl_frag1279_t __midl_frag1279;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag1277_t;
extern const __midl_frag1277_t __midl_frag1277;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag1275_t;
extern const __midl_frag1275_t __midl_frag1275;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag1270_t;
extern const __midl_frag1270_t __midl_frag1270;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag1266_t;
extern const __midl_frag1266_t __midl_frag1266;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag1261_t;
extern const __midl_frag1261_t __midl_frag1261;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag1223_t;
extern const __midl_frag1223_t __midl_frag1223;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag1221_t;
extern const __midl_frag1221_t __midl_frag1221;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1220_t;
extern const __midl_frag1220_t __midl_frag1220;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1219_t;
extern const __midl_frag1219_t __midl_frag1219;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag1218_t;
extern const __midl_frag1218_t __midl_frag1218;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag1180_t;
extern const __midl_frag1180_t __midl_frag1180;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1179_t;
extern const __midl_frag1179_t __midl_frag1179;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag1176_t;
extern const __midl_frag1176_t __midl_frag1176;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag1164_t;
extern const __midl_frag1164_t __midl_frag1164;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag1134_t;
extern const __midl_frag1134_t __midl_frag1134;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag1128_t;
extern const __midl_frag1128_t __midl_frag1128;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag1126_t;
extern const __midl_frag1126_t __midl_frag1126;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1125_t;
extern const __midl_frag1125_t __midl_frag1125;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1124_t;
extern const __midl_frag1124_t __midl_frag1124;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag1123_t;
extern const __midl_frag1123_t __midl_frag1123;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag1119_t;
extern const __midl_frag1119_t __midl_frag1119;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
    struct _NDR64_PARAM_FORMAT frag9;
}
__midl_frag1107_t;
extern const __midl_frag1107_t __midl_frag1107;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
}
__midl_frag1058_t;
extern const __midl_frag1058_t __midl_frag1058;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag1048_t;
extern const __midl_frag1048_t __midl_frag1048;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
}
__midl_frag1038_t;
extern const __midl_frag1038_t __midl_frag1038;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag1021_t;
extern const __midl_frag1021_t __midl_frag1021;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag1016_t;
extern const __midl_frag1016_t __midl_frag1016;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag985_t;
extern const __midl_frag985_t __midl_frag985;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag947_t;
extern const __midl_frag947_t __midl_frag947;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
    struct _NDR64_PARAM_FORMAT frag9;
}
__midl_frag931_t;
extern const __midl_frag931_t __midl_frag931;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag910_t;
extern const __midl_frag910_t __midl_frag910;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
    struct _NDR64_PARAM_FORMAT frag9;
}
__midl_frag880_t;
extern const __midl_frag880_t __midl_frag880;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
}
__midl_frag866_t;
extern const __midl_frag866_t __midl_frag866;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
    struct _NDR64_PARAM_FORMAT frag9;
    struct _NDR64_PARAM_FORMAT frag10;
}
__midl_frag846_t;
extern const __midl_frag846_t __midl_frag846;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
}
__midl_frag825_t;
extern const __midl_frag825_t __midl_frag825;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag811_t;
extern const __midl_frag811_t __midl_frag811;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag803_t;
extern const __midl_frag803_t __midl_frag803;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
    struct _NDR64_PARAM_FORMAT frag9;
}
__midl_frag783_t;
extern const __midl_frag783_t __midl_frag783;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag778_t;
extern const __midl_frag778_t __midl_frag778;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag747_t;
extern const __midl_frag747_t __midl_frag747;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag713_t;
extern const __midl_frag713_t __midl_frag713;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag701_t;
extern const __midl_frag701_t __midl_frag701;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag691_t;
extern const __midl_frag691_t __midl_frag691;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag663_t;
extern const __midl_frag663_t __midl_frag663;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag662_t;
extern const __midl_frag662_t __midl_frag662;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag652_t;
extern const __midl_frag652_t __midl_frag652;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
}
__midl_frag577_t;
extern const __midl_frag577_t __midl_frag577;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag552_t;
extern const __midl_frag552_t __midl_frag552;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag529_t;
extern const __midl_frag529_t __midl_frag529;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag500_t;
extern const __midl_frag500_t __midl_frag500;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag458_t;
extern const __midl_frag458_t __midl_frag458;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag457_t;
extern const __midl_frag457_t __midl_frag457;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag456_t;
extern const __midl_frag456_t __midl_frag456;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag453_t;
extern const __midl_frag453_t __midl_frag453;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag410_t;
extern const __midl_frag410_t __midl_frag410;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag380_t;
extern const __midl_frag380_t __midl_frag380;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag329_t;
extern const __midl_frag329_t __midl_frag329;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
    struct _NDR64_PARAM_FORMAT frag9;
}
__midl_frag321_t;
extern const __midl_frag321_t __midl_frag321;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag314_t;
extern const __midl_frag314_t __midl_frag314;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
}
__midl_frag310_t;
extern const __midl_frag310_t __midl_frag310;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag300_t;
extern const __midl_frag300_t __midl_frag300;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag295_t;
extern const __midl_frag295_t __midl_frag295;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag273_t;
extern const __midl_frag273_t __midl_frag273;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
}
__midl_frag271_t;
extern const __midl_frag271_t __midl_frag271;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
}
__midl_frag255_t;
extern const __midl_frag255_t __midl_frag255;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag217_t;
extern const __midl_frag217_t __midl_frag217;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
}
__midl_frag200_t;
extern const __midl_frag200_t __midl_frag200;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag185_t;
extern const __midl_frag185_t __midl_frag185;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag184_t;
extern const __midl_frag184_t __midl_frag184;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag182_t;
extern const __midl_frag182_t __midl_frag182;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag177_t;
extern const __midl_frag177_t __midl_frag177;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag175_t;
extern const __midl_frag175_t __midl_frag175;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
    struct _NDR64_PARAM_FORMAT frag9;
    struct _NDR64_PARAM_FORMAT frag10;
    struct _NDR64_PARAM_FORMAT frag11;
}
__midl_frag156_t;
extern const __midl_frag156_t __midl_frag156;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag146_t;
extern const __midl_frag146_t __midl_frag146;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag139_t;
extern const __midl_frag139_t __midl_frag139;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag133_t;
extern const __midl_frag133_t __midl_frag133;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag99_t;
extern const __midl_frag99_t __midl_frag99;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
}
__midl_frag73_t;
extern const __midl_frag73_t __midl_frag73;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag68_t;
extern const __midl_frag68_t __midl_frag68;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag52_t;
extern const __midl_frag52_t __midl_frag52;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag42_t;
extern const __midl_frag42_t __midl_frag42;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag36_t;
extern const __midl_frag36_t __midl_frag36;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag26_t;
extern const __midl_frag26_t __midl_frag26;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_NOOP frag2;
    struct _NDR64_EXPR_CONST64 frag3;
}
__midl_frag16_t;
extern const __midl_frag16_t __midl_frag16;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_OPERATOR frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag15_t;
extern const __midl_frag15_t __midl_frag15;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag14_t;
extern const __midl_frag14_t __midl_frag14;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag13_t;
extern const __midl_frag13_t __midl_frag13;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag12_t;
extern const __midl_frag12_t __midl_frag12;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag8_t;
extern const __midl_frag8_t __midl_frag8;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag7_t;
extern const __midl_frag7_t __midl_frag7;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
    struct _NDR64_PARAM_FORMAT frag9;
    struct _NDR64_PARAM_FORMAT frag10;
    struct _NDR64_PARAM_FORMAT frag11;
}
__midl_frag2_t;
extern const __midl_frag2_t __midl_frag2;

typedef 
NDR64_FORMAT_UINT32
__midl_frag1_t;
extern const __midl_frag1_t __midl_frag1;

static const __midl_frag1879_t __midl_frag1879 =
0x5    /* FC64_INT32 */;

static const __midl_frag1878_t __midl_frag1878 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x75da9e4c,
        0xbd33,
        0x43c8,
        {0x8f, 0x5c, 0x96, 0xe8, 0xa5, 0x24, 0x1f, 0x57}
    }
};

static const __midl_frag1877_t __midl_frag1877 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1878
};

static const __midl_frag1876_t __midl_frag1876 =
{ 
/* OnException */
    { 
    /* OnException */      /* procedure OnException */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* exception */      /* parameter exception */
        &__midl_frag1877,
        { 
        /* exception */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag1874_t __midl_frag1874 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x7ca04601,
        0xc702,
        0x4670,
        {0xa6, 0x3c, 0xfa, 0x44, 0xf7, 0xda, 0x7b, 0xd5}
    }
};

static const __midl_frag1873_t __midl_frag1873 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1874
};

static const __midl_frag1872_t __midl_frag1872 =
{ 
/* OnAppDomainUnloaded */
    { 
    /* OnAppDomainUnloaded */      /* procedure OnAppDomainUnloaded */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* domain */      /* parameter domain */
        &__midl_frag1873,
        { 
        /* domain */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag1866_t __midl_frag1866 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x4d078d91,
        0x9cb3,
        0x4b0d,
        {0x97, 0xac, 0x28, 0xc8, 0xa5, 0xa8, 0x25, 0x97}
    }
};

static const __midl_frag1865_t __midl_frag1865 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1866
};

static const __midl_frag1864_t __midl_frag1864 =
{ 
/* OnTypeUnloaded */
    { 
    /* OnTypeUnloaded */      /* procedure OnTypeUnloaded */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* typeInst */      /* parameter typeInst */
        &__midl_frag1865,
        { 
        /* typeInst */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag1858_t __midl_frag1858 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x88e32849,
        0x0a0a,
        0x4cb0,
        {0x90, 0x22, 0x7c, 0xd2, 0xe9, 0xe1, 0x39, 0xe2}
    }
};

static const __midl_frag1857_t __midl_frag1857 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1858
};

static const __midl_frag1856_t __midl_frag1856 =
{ 
/* OnModuleUnloaded */
    { 
    /* OnModuleUnloaded */      /* procedure OnModuleUnloaded */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* mod */      /* parameter mod */
        &__midl_frag1857,
        { 
        /* mod */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag1849_t __midl_frag1849 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0xa5b0beea,
        0xec62,
        0x4618,
        {0x80, 0x12, 0xa2, 0x4f, 0xfc, 0x23, 0x93, 0x4c}
    }
};

static const __midl_frag1848_t __midl_frag1848 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1849
};

static const __midl_frag1847_t __midl_frag1847 =
{ 
/* OnTaskExecution */
    { 
    /* OnTaskExecution */      /* procedure OnTaskExecution */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* task */      /* parameter task */
        &__midl_frag1848,
        { 
        /* task */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* state */      /* parameter state */
        &__midl_frag1879,
        { 
        /* state */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag1844_t __midl_frag1844 =
{ 
/* OnProcessExecution */
    { 
    /* OnProcessExecution */      /* procedure OnProcessExecution */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* state */      /* parameter state */
        &__midl_frag1879,
        { 
        /* state */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag1842_t __midl_frag1842 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0xecd73800,
        0x22ca,
        0x4b0d,
        {0xab, 0x55, 0xe9, 0xba, 0x7e, 0x63, 0x18, 0xa5}
    }
};

static const __midl_frag1841_t __midl_frag1841 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1842
};

static const __midl_frag1840_t __midl_frag1840 =
{ 
/* OnCodeDiscarded */
    { 
    /* OnCodeDiscarded */      /* procedure OnCodeDiscarded */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* method */      /* parameter method */
        &__midl_frag1841,
        { 
        /* method */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag1834_t __midl_frag1834 =
0x7    /* FC64_INT64 */;

static const __midl_frag1833_t __midl_frag1833 =
{ 
/* *CLRDATA_ADDRESS */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1834
};

static const __midl_frag1831_t __midl_frag1831 =
{ 
/* *ULONG32 */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1879
};

static const __midl_frag1829_t __midl_frag1829 =
{ 
/* GetLocationByIndex */
    { 
    /* GetLocationByIndex */      /* procedure GetLocationByIndex */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 80 /* 0x50 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* loc */      /* parameter loc */
        &__midl_frag1879,
        { 
        /* loc */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* flags */      /* parameter flags */
        &__midl_frag1879,
        { 
        /* flags */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* arg */      /* parameter arg */
        &__midl_frag1834,
        { 
        /* arg */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag1825_t __midl_frag1825 =
{ 
/* GetNumLocations */
    { 
    /* GetNumLocations */      /* procedure GetNumLocations */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* numLocs */      /* parameter numLocs */
        &__midl_frag1879,
        { 
        /* numLocs */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag1823_t __midl_frag1823 =
0x11    /* FC64_WCHAR */;

static const __midl_frag1822_t __midl_frag1822 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */  /* Offset */
    }
};

static const __midl_frag1821_t __midl_frag1821 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 1 /* 0x1 */,
        { 
        /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag1822
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag1823
    }
};

static const __midl_frag1817_t __midl_frag1817 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x96ec93c7,
        0x1000,
        0x4e93,
        {0x89, 0x91, 0x98, 0xd8, 0x76, 0x6e, 0x66, 0x66}
    }
};

static const __midl_frag1816_t __midl_frag1816 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1817
};

static const __midl_frag1815_t __midl_frag1815 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1816
};

static const __midl_frag1811_t __midl_frag1811 =
{ 
/* GetFieldByToken2 */
    { 
    /* GetFieldByToken2 */      /* procedure GetFieldByToken2 */
        (NDR64_UINT32) 5112131 /* 0x4e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ClientCorrelation */
        (NDR64_UINT32) 64 /* 0x40 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* tokenScope */      /* parameter tokenScope */
        &__midl_frag1857,
        { 
        /* tokenScope */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* token */      /* parameter token */
        &__midl_frag1879,
        { 
        /* token */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* field */      /* parameter field */
        &__midl_frag1815,
        { 
        /* field */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* bufLen */      /* parameter bufLen */
        &__midl_frag1879,
        { 
        /* bufLen */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* nameLen */      /* parameter nameLen */
        &__midl_frag1879,
        { 
        /* nameLen */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* nameBuf */      /* parameter nameBuf */
        &__midl_frag1821,
        { 
        /* nameBuf */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    }
};

static const __midl_frag1805_t __midl_frag1805 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1857
};

static const __midl_frag1800_t __midl_frag1800 =
{ 
/* *CLRDATA_ENUM */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1834
};

static const __midl_frag1799_t __midl_frag1799 =
{ 
/* EnumFieldByName2 */
    { 
    /* EnumFieldByName2 */      /* procedure EnumFieldByName2 */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT32) 80 /* 0x50 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* handle */      /* parameter handle */
        &__midl_frag1834,
        { 
        /* handle */
            0,
            0,
            0,
            1,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], [out], Basetype, SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* field */      /* parameter field */
        &__midl_frag1815,
        { 
        /* field */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* tokenScope */      /* parameter tokenScope */
        &__midl_frag1805,
        { 
        /* tokenScope */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* token */      /* parameter token */
        &__midl_frag1879,
        { 
        /* token */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag1791_t __midl_frag1791 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */  /* Offset */
    }
};

static const __midl_frag1790_t __midl_frag1790 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 1 /* 0x1 */,
        { 
        /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag1791
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag1823
    }
};

static const __midl_frag1781_t __midl_frag1781 =
{ 
/* EnumField2 */
    { 
    /* EnumField2 */      /* procedure EnumField2 */
        (NDR64_UINT32) 4849987 /* 0x4a0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn, ClientCorrelation */
        (NDR64_UINT32) 72 /* 0x48 */ ,  /* Stack size */
        (NDR64_UINT32) 48 /* 0x30 */,
        (NDR64_UINT32) 112 /* 0x70 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* handle */      /* parameter handle */
        &__midl_frag1834,
        { 
        /* handle */
            0,
            0,
            0,
            1,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], [out], Basetype, SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* field */      /* parameter field */
        &__midl_frag1815,
        { 
        /* field */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* nameBufLen */      /* parameter nameBufLen */
        &__midl_frag1879,
        { 
        /* nameBufLen */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* nameLen */      /* parameter nameLen */
        &__midl_frag1879,
        { 
        /* nameLen */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* nameBuf */      /* parameter nameBuf */
        &__midl_frag1790,
        { 
        /* nameBuf */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* tokenScope */      /* parameter tokenScope */
        &__midl_frag1805,
        { 
        /* tokenScope */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* token */      /* parameter token */
        &__midl_frag1879,
        { 
        /* token */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        64 /* 0x40 */,   /* Stack offset */
    }
};

static const __midl_frag1775_t __midl_frag1775 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */  /* Offset */
    }
};

static const __midl_frag1774_t __midl_frag1774 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 4 /* 0x4 */,
        &__midl_frag1775
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 4 /* 0x4 */,
        &__midl_frag1879
    }
};

static const __midl_frag1772_t __midl_frag1772 =
{ 
/* GetArrayElement */
    { 
    /* GetArrayElement */      /* procedure GetArrayElement */
        (NDR64_UINT32) 3014979 /* 0x2e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* numInd */      /* parameter numInd */
        &__midl_frag1879,
        { 
        /* numInd */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* indices */      /* parameter indices */
        &__midl_frag1774,
        { 
        /* indices */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* value */      /* parameter value */
        &__midl_frag1815,
        { 
        /* value */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag1769_t __midl_frag1769 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 40 /* 0x28 */  /* Offset */
    }
};

static const __midl_frag1768_t __midl_frag1768 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 4 /* 0x4 */,
        &__midl_frag1769
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 4 /* 0x4 */,
        &__midl_frag1879
    }
};

static const __midl_frag1764_t __midl_frag1764 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 4 /* 0x4 */,
        &__midl_frag1791
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 4 /* 0x4 */,
        &__midl_frag1879
    }
};

static const __midl_frag1758_t __midl_frag1758 =
{ 
/* GetArrayProperties */
    { 
    /* GetArrayProperties */      /* procedure GetArrayProperties */
        (NDR64_UINT32) 4849987 /* 0x4a0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn, ClientCorrelation */
        (NDR64_UINT32) 64 /* 0x40 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 72 /* 0x48 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* rank */      /* parameter rank */
        &__midl_frag1879,
        { 
        /* rank */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* totalElements */      /* parameter totalElements */
        &__midl_frag1879,
        { 
        /* totalElements */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* numDim */      /* parameter numDim */
        &__midl_frag1879,
        { 
        /* numDim */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* dims */      /* parameter dims */
        &__midl_frag1764,
        { 
        /* dims */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* numBases */      /* parameter numBases */
        &__midl_frag1879,
        { 
        /* numBases */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* bases */      /* parameter bases */
        &__midl_frag1768,
        { 
        /* bases */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    }
};

static const __midl_frag1754_t __midl_frag1754 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 1 /* 0x1 */,
        { 
        /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag1775
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag1823
    }
};

static const __midl_frag1750_t __midl_frag1750 =
{ 
/* GetString */
    { 
    /* GetString */      /* procedure GetString */
        (NDR64_UINT32) 4849987 /* 0x4a0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn, ClientCorrelation */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* bufLen */      /* parameter bufLen */
        &__midl_frag1879,
        { 
        /* bufLen */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* strLen */      /* parameter strLen */
        &__midl_frag1879,
        { 
        /* strLen */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* str */      /* parameter str */
        &__midl_frag1754,
        { 
        /* str */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag1746_t __midl_frag1746 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1865
};

static const __midl_frag1745_t __midl_frag1745 =
{ 
/* GetAssociatedType */
    { 
    /* GetAssociatedType */      /* procedure GetAssociatedType */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* assocType */      /* parameter assocType */
        &__midl_frag1746,
        { 
        /* assocType */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag1740_t __midl_frag1740 =
{ 
/* GetAssociatedValue */
    { 
    /* GetAssociatedValue */      /* procedure GetAssociatedValue */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* assocValue */      /* parameter assocValue */
        &__midl_frag1815,
        { 
        /* assocValue */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag1728_t __midl_frag1728 =
{ 
/* GetFieldByToken */
    { 
    /* GetFieldByToken */      /* procedure GetFieldByToken */
        (NDR64_UINT32) 4849987 /* 0x4a0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn, ClientCorrelation */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* token */      /* parameter token */
        &__midl_frag1879,
        { 
        /* token */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* field */      /* parameter field */
        &__midl_frag1815,
        { 
        /* field */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* bufLen */      /* parameter bufLen */
        &__midl_frag1879,
        { 
        /* bufLen */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* nameLen */      /* parameter nameLen */
        &__midl_frag1879,
        { 
        /* nameLen */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* nameBuf */      /* parameter nameBuf */
        &__midl_frag1790,
        { 
        /* nameBuf */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    }
};

static const __midl_frag1725_t __midl_frag1725 =
{ 
/* EndEnumFieldsByName */
    { 
    /* EndEnumFieldsByName */      /* procedure EndEnumFieldsByName */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* handle */      /* parameter handle */
        &__midl_frag1834,
        { 
        /* handle */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag1716_t __midl_frag1716 =
{ 
/* EnumFieldByName */
    { 
    /* EnumFieldByName */      /* procedure EnumFieldByName */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT32) 80 /* 0x50 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* handle */      /* parameter handle */
        &__midl_frag1834,
        { 
        /* handle */
            0,
            0,
            0,
            1,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], [out], Basetype, SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* field */      /* parameter field */
        &__midl_frag1815,
        { 
        /* field */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* token */      /* parameter token */
        &__midl_frag1879,
        { 
        /* token */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag1708_t __midl_frag1708 =
{ 
/* *WCHAR */
    { 
    /* *WCHAR */
        0x64,    /* FC64_CONF_WCHAR_STRING */
        { 
        /* *WCHAR */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT16) 2 /* 0x2 */
    }
};

static const __midl_frag1707_t __midl_frag1707 =
{ 
/* *WCHAR */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1708
};

static const __midl_frag1706_t __midl_frag1706 =
{ 
/* StartEnumFieldsByName */
    { 
    /* StartEnumFieldsByName */      /* procedure StartEnumFieldsByName */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 48 /* 0x30 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* name */      /* parameter name */
        &__midl_frag1708,
        { 
        /* name */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* nameFlags */      /* parameter nameFlags */
        &__midl_frag1879,
        { 
        /* nameFlags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* fieldFlags */      /* parameter fieldFlags */
        &__midl_frag1879,
        { 
        /* fieldFlags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* fromType */      /* parameter fromType */
        &__midl_frag1865,
        { 
        /* fromType */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* handle */      /* parameter handle */
        &__midl_frag1834,
        { 
        /* handle */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    }
};

static const __midl_frag1688_t __midl_frag1688 =
{ 
/* EnumField */
    { 
    /* EnumField */      /* procedure EnumField */
        (NDR64_UINT32) 4849987 /* 0x4a0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn, ClientCorrelation */
        (NDR64_UINT32) 64 /* 0x40 */ ,  /* Stack size */
        (NDR64_UINT32) 48 /* 0x30 */,
        (NDR64_UINT32) 112 /* 0x70 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* handle */      /* parameter handle */
        &__midl_frag1834,
        { 
        /* handle */
            0,
            0,
            0,
            1,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], [out], Basetype, SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* field */      /* parameter field */
        &__midl_frag1815,
        { 
        /* field */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* nameBufLen */      /* parameter nameBufLen */
        &__midl_frag1879,
        { 
        /* nameBufLen */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* nameLen */      /* parameter nameLen */
        &__midl_frag1879,
        { 
        /* nameLen */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* nameBuf */      /* parameter nameBuf */
        &__midl_frag1790,
        { 
        /* nameBuf */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* token */      /* parameter token */
        &__midl_frag1879,
        { 
        /* token */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    }
};

static const __midl_frag1681_t __midl_frag1681 =
{ 
/* StartEnumFields */
    { 
    /* StartEnumFields */      /* procedure StartEnumFields */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 48 /* 0x30 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* flags */      /* parameter flags */
        &__midl_frag1879,
        { 
        /* flags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* fromType */      /* parameter fromType */
        &__midl_frag1865,
        { 
        /* fromType */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* handle */      /* parameter handle */
        &__midl_frag1834,
        { 
        /* handle */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag1674_t __midl_frag1674 =
{ 
/* GetNumFields2 */
    { 
    /* GetNumFields2 */      /* procedure GetNumFields2 */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* flags */      /* parameter flags */
        &__midl_frag1879,
        { 
        /* flags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* fromType */      /* parameter fromType */
        &__midl_frag1865,
        { 
        /* fromType */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* numFields */      /* parameter numFields */
        &__midl_frag1879,
        { 
        /* numFields */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag1672_t __midl_frag1672 =
0x2    /* FC64_INT8 */;

static const __midl_frag1670_t __midl_frag1670 =
{ 
/* *BYTE */
    { 
    /* *BYTE */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *BYTE */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag1822
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag1672
    }
};

static const __midl_frag1669_t __midl_frag1669 =
{ 
/* *BYTE */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1670
};

static const __midl_frag1666_t __midl_frag1666 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */  /* Offset */
    }
};

static const __midl_frag1665_t __midl_frag1665 =
{ 
/* *BYTE */
    { 
    /* *BYTE */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *BYTE */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag1666
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag1672
    }
};

static const __midl_frag1664_t __midl_frag1664 =
{ 
/* *BYTE */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1665
};

static const __midl_frag1661_t __midl_frag1661 =
{ 
/* Request */
    { 
    /* Request */      /* procedure Request */
        (NDR64_UINT32) 7209283 /* 0x6e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 24 /* 0x18 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* reqCode */      /* parameter reqCode */
        &__midl_frag1879,
        { 
        /* reqCode */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* inBufferSize */      /* parameter inBufferSize */
        &__midl_frag1879,
        { 
        /* inBufferSize */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* inBuffer */      /* parameter inBuffer */
        &__midl_frag1665,
        { 
        /* inBuffer */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* outBufferSize */      /* parameter outBufferSize */
        &__midl_frag1879,
        { 
        /* outBufferSize */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* outBuffer */      /* parameter outBuffer */
        &__midl_frag1670,
        { 
        /* outBuffer */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    }
};

static const __midl_frag1647_t __midl_frag1647 =
{ 
/* GetFieldByIndex */
    { 
    /* GetFieldByIndex */      /* procedure GetFieldByIndex */
        (NDR64_UINT32) 4849987 /* 0x4a0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn, ClientCorrelation */
        (NDR64_UINT32) 64 /* 0x40 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 72 /* 0x48 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* index */      /* parameter index */
        &__midl_frag1879,
        { 
        /* index */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* field */      /* parameter field */
        &__midl_frag1815,
        { 
        /* field */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* bufLen */      /* parameter bufLen */
        &__midl_frag1879,
        { 
        /* bufLen */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* nameLen */      /* parameter nameLen */
        &__midl_frag1879,
        { 
        /* nameLen */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* nameBuf */      /* parameter nameBuf */
        &__midl_frag1790,
        { 
        /* nameBuf */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* token */      /* parameter token */
        &__midl_frag1879,
        { 
        /* token */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    }
};

static const __midl_frag1634_t __midl_frag1634 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag1775
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag1672
    }
};

static const __midl_frag1630_t __midl_frag1630 =
{ 
/* SetBytes */
    { 
    /* SetBytes */      /* procedure SetBytes */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* bufLen */      /* parameter bufLen */
        &__midl_frag1879,
        { 
        /* bufLen */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* dataSize */      /* parameter dataSize */
        &__midl_frag1879,
        { 
        /* dataSize */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* buffer */      /* parameter buffer */
        &__midl_frag1634,
        { 
        /* buffer */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag1622_t __midl_frag1622 =
{ 
/* GetBytes */
    { 
    /* GetBytes */      /* procedure GetBytes */
        (NDR64_UINT32) 4849987 /* 0x4a0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn, ClientCorrelation */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* bufLen */      /* parameter bufLen */
        &__midl_frag1879,
        { 
        /* bufLen */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* dataSize */      /* parameter dataSize */
        &__midl_frag1879,
        { 
        /* dataSize */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* buffer */      /* parameter buffer */
        &__midl_frag1634,
        { 
        /* buffer */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag1618_t __midl_frag1618 =
{ 
/* GetSize */
    { 
    /* GetSize */      /* procedure GetSize */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 48 /* 0x30 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* size */      /* parameter size */
        &__midl_frag1834,
        { 
        /* size */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag1606_t __midl_frag1606 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1848
};

static const __midl_frag1605_t __midl_frag1605 =
{ 
/* GetTask */
    { 
    /* GetTask */      /* procedure GetTask */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* task */      /* parameter task */
        &__midl_frag1606,
        { 
        /* task */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag1601_t __midl_frag1601 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag1791
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag1672
    }
};

static const __midl_frag1599_t __midl_frag1599 =
{ 
/* *EXCEPTION_RECORD64 */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag177
};

static const __midl_frag1597_t __midl_frag1597 =
{ 
/* IsSameState2 */
    { 
    /* IsSameState2 */      /* procedure IsSameState2 */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 224 /* 0xe0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* flags */      /* parameter flags */
        &__midl_frag1879,
        { 
        /* flags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* exRecord */      /* parameter exRecord */
        &__midl_frag177,
        { 
        /* exRecord */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* contextSize */      /* parameter contextSize */
        &__midl_frag1879,
        { 
        /* contextSize */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* cxRecord */      /* parameter cxRecord */
        &__midl_frag1601,
        { 
        /* cxRecord */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag1590_t __midl_frag1590 =
{ 
/* IsSameState */
    { 
    /* IsSameState */      /* procedure IsSameState */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 216 /* 0xd8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* exRecord */      /* parameter exRecord */
        &__midl_frag177,
        { 
        /* exRecord */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* contextSize */      /* parameter contextSize */
        &__midl_frag1879,
        { 
        /* contextSize */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* cxRecord */      /* parameter cxRecord */
        &__midl_frag1665,
        { 
        /* cxRecord */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag1552_t __midl_frag1552 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1877
};

static const __midl_frag1551_t __midl_frag1551 =
{ 
/* GetPrevious */
    { 
    /* GetPrevious */      /* procedure GetPrevious */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* exState */      /* parameter exState */
        &__midl_frag1552,
        { 
        /* exState */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag1541_t __midl_frag1541 =
{ 
/* GetTypeArgumentByIndex */
    { 
    /* GetTypeArgumentByIndex */      /* procedure GetTypeArgumentByIndex */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* index */      /* parameter index */
        &__midl_frag1879,
        { 
        /* index */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* typeArg */      /* parameter typeArg */
        &__midl_frag1746,
        { 
        /* typeArg */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag1520_t __midl_frag1520 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1841
};

static const __midl_frag1519_t __midl_frag1519 =
{ 
/* GetMethodInstance */
    { 
    /* GetMethodInstance */      /* procedure GetMethodInstance */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* method */      /* parameter method */
        &__midl_frag1520,
        { 
        /* method */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag1515_t __midl_frag1515 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 1 /* 0x1 */,
        { 
        /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag1666
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag1823
    }
};

static const __midl_frag1510_t __midl_frag1510 =
{ 
/* GetCodeName */
    { 
    /* GetCodeName */      /* procedure GetCodeName */
        (NDR64_UINT32) 4849987 /* 0x4a0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn, ClientCorrelation */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* flags */      /* parameter flags */
        &__midl_frag1879,
        { 
        /* flags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* bufLen */      /* parameter bufLen */
        &__midl_frag1879,
        { 
        /* bufLen */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* nameLen */      /* parameter nameLen */
        &__midl_frag1879,
        { 
        /* nameLen */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* nameBuf */      /* parameter nameBuf */
        &__midl_frag1515,
        { 
        /* nameBuf */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag1474_t __midl_frag1474 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1873
};

static const __midl_frag1473_t __midl_frag1473 =
{ 
/* GetAppDomain */
    { 
    /* GetAppDomain */      /* procedure GetAppDomain */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* appDomain */      /* parameter appDomain */
        &__midl_frag1474,
        { 
        /* appDomain */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag1464_t __midl_frag1464 =
{ 
/* GetContext */
    { 
    /* GetContext */      /* procedure GetContext */
        (NDR64_UINT32) 4849987 /* 0x4a0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn, ClientCorrelation */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* contextFlags */      /* parameter contextFlags */
        &__midl_frag1879,
        { 
        /* contextFlags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* contextBufSize */      /* parameter contextBufSize */
        &__midl_frag1879,
        { 
        /* contextBufSize */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* contextSize */      /* parameter contextSize */
        &__midl_frag1879,
        { 
        /* contextSize */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* contextBuf */      /* parameter contextBuf */
        &__midl_frag1665,
        { 
        /* contextBuf */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag1458_t __midl_frag1458 =
{ 
/* GetFrameType */
    { 
    /* GetFrameType */      /* procedure GetFrameType */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 72 /* 0x48 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* simpleType */      /* parameter simpleType */
        &__midl_frag1879,
        { 
        /* simpleType */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* detailedType */      /* parameter detailedType */
        &__midl_frag1879,
        { 
        /* detailedType */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag1451_t __midl_frag1451 =
{ 
/* SetContext2 */
    { 
    /* SetContext2 */      /* procedure SetContext2 */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* flags */      /* parameter flags */
        &__midl_frag1879,
        { 
        /* flags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* contextSize */      /* parameter contextSize */
        &__midl_frag1879,
        { 
        /* contextSize */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* context */      /* parameter context */
        &__midl_frag1665,
        { 
        /* context */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag1436_t __midl_frag1436 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x271498c2,
        0x4085,
        0x4766,
        {0xbc, 0x3a, 0x7f, 0x8e, 0xd1, 0x88, 0xa1, 0x73}
    }
};

static const __midl_frag1435_t __midl_frag1435 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1436
};

static const __midl_frag1434_t __midl_frag1434 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1435
};

static const __midl_frag1433_t __midl_frag1433 =
{ 
/* GetFrame */
    { 
    /* GetFrame */      /* procedure GetFrame */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* frame */      /* parameter frame */
        &__midl_frag1434,
        { 
        /* frame */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag1421_t __midl_frag1421 =
{ 
/* Next */
    { 
    /* Next */      /* procedure Next */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 16 /* 0x10 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 1 /* 0x1 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    }
};

static const __midl_frag1415_t __midl_frag1415 =
{ 
/* SetContext */
    { 
    /* SetContext */      /* procedure SetContext */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* contextSize */      /* parameter contextSize */
        &__midl_frag1879,
        { 
        /* contextSize */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* context */      /* parameter context */
        &__midl_frag1634,
        { 
        /* context */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag1354_t __midl_frag1354 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0xe59d8d22,
        0xada7,
        0x49a2,
        {0x89, 0xb5, 0xa4, 0x15, 0xaf, 0xcf, 0xc9, 0x5f}
    }
};

static const __midl_frag1353_t __midl_frag1353 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1354
};

static const __midl_frag1352_t __midl_frag1352 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1353
};

static const __midl_frag1350_t __midl_frag1350 =
{ 
/* CreateStackWalk */
    { 
    /* CreateStackWalk */      /* procedure CreateStackWalk */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* flags */      /* parameter flags */
        &__midl_frag1879,
        { 
        /* flags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* stackWalk */      /* parameter stackWalk */
        &__midl_frag1352,
        { 
        /* stackWalk */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag1334_t __midl_frag1334 =
{ 
/* IsSameObject */
    { 
    /* IsSameObject */      /* procedure IsSameObject */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* task */      /* parameter task */
        &__midl_frag1848,
        { 
        /* task */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag1319_t __midl_frag1319 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x5c552ab6,
        0xfc09,
        0x4cb3,
        {0x8e, 0x36, 0x22, 0xfa, 0x03, 0xc7, 0x98, 0xb7}
    }
};

static const __midl_frag1318_t __midl_frag1318 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1319
};

static const __midl_frag1317_t __midl_frag1317 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1318
};

static const __midl_frag1316_t __midl_frag1316 =
{ 
/* GetProcess */
    { 
    /* GetProcess */      /* procedure GetProcess */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* process */      /* parameter process */
        &__midl_frag1317,
        { 
        /* process */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag1294_t __midl_frag1294 =
{ 
/* *CLRDATA_ADDRESS_RANGE */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1277
};

static const __midl_frag1291_t __midl_frag1291 =
{ 
/* EnumExtent */
    { 
    /* EnumExtent */      /* procedure EnumExtent */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT32) 104 /* 0x68 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* handle */      /* parameter handle */
        &__midl_frag1834,
        { 
        /* handle */
            0,
            0,
            0,
            1,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], [out], Basetype, SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* extent */      /* parameter extent */
        &__midl_frag1277,
        { 
        /* extent */
            0,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag1285_t __midl_frag1285 =
{ 
/* CLRDATA_IL_ADDRESS_MAP */
    { 
    /* CLRDATA_IL_ADDRESS_MAP */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* CLRDATA_IL_ADDRESS_MAP */
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */,
        0,
        0,
        0,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* CLRDATA_IL_ADDRESS_MAP */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag1283_t __midl_frag1283 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT */
        { 
        /* struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT */
            0x46,    /* FC64_FORCED_BOGUS_ARRAY */
            (NDR64_UINT8) 7 /* 0x7 */,
            { 
            /* struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT */
                0,
                1,
                0,
                0,
                0,
                0,
                0,
                0
            },
            (NDR64_UINT8) 1 /* 0x1 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            &__midl_frag1285
        },
        &__midl_frag1775,
        0,
        0
    }
};

static const __midl_frag1279_t __midl_frag1279 =
{ 
/* GetILAddressMap */
    { 
    /* GetILAddressMap */      /* procedure GetILAddressMap */
        (NDR64_UINT32) 4849987 /* 0x4a0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn, ClientCorrelation */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* mapLen */      /* parameter mapLen */
        &__midl_frag1879,
        { 
        /* mapLen */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* mapNeeded */      /* parameter mapNeeded */
        &__midl_frag1879,
        { 
        /* mapNeeded */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* maps */      /* parameter maps */
        &__midl_frag1283,
        { 
        /* maps */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag1277_t __midl_frag1277 =
{ 
/* CLRDATA_ADDRESS_RANGE */
    { 
    /* CLRDATA_ADDRESS_RANGE */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* CLRDATA_ADDRESS_RANGE */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */
    }
};

static const __midl_frag1275_t __midl_frag1275 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        &__midl_frag1666
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 16 /* 0x10 */,
        &__midl_frag1277
    }
};

static const __midl_frag1270_t __midl_frag1270 =
{ 
/* GetAddressRangesByILOffset */
    { 
    /* GetAddressRangesByILOffset */      /* procedure GetAddressRangesByILOffset */
        (NDR64_UINT32) 4849987 /* 0x4a0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn, ClientCorrelation */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* ilOffset */      /* parameter ilOffset */
        &__midl_frag1879,
        { 
        /* ilOffset */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* rangesLen */      /* parameter rangesLen */
        &__midl_frag1879,
        { 
        /* rangesLen */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* rangesNeeded */      /* parameter rangesNeeded */
        &__midl_frag1879,
        { 
        /* rangesNeeded */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* addressRanges */      /* parameter addressRanges */
        &__midl_frag1275,
        { 
        /* addressRanges */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag1266_t __midl_frag1266 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 4 /* 0x4 */,
        &__midl_frag1666
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 4 /* 0x4 */,
        &__midl_frag1879
    }
};

static const __midl_frag1261_t __midl_frag1261 =
{ 
/* GetILOffsetsByAddress */
    { 
    /* GetILOffsetsByAddress */      /* procedure GetILOffsetsByAddress */
        (NDR64_UINT32) 4849987 /* 0x4a0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn, ClientCorrelation */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 24 /* 0x18 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* address */      /* parameter address */
        &__midl_frag1834,
        { 
        /* address */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* offsetsLen */      /* parameter offsetsLen */
        &__midl_frag1879,
        { 
        /* offsetsLen */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* offsetsNeeded */      /* parameter offsetsNeeded */
        &__midl_frag1879,
        { 
        /* offsetsNeeded */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* ilOffsets */      /* parameter ilOffsets */
        &__midl_frag1266,
        { 
        /* ilOffsets */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag1223_t __midl_frag1223 =
{ 
/* GetTokenAndScope */
    { 
    /* GetTokenAndScope */      /* procedure GetTokenAndScope */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* token */      /* parameter token */
        &__midl_frag1879,
        { 
        /* token */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* mod */      /* parameter mod */
        &__midl_frag1805,
        { 
        /* mod */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag1221_t __midl_frag1221 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0xaaf60008,
        0xfb2c,
        0x420b,
        {0x8f, 0xb1, 0x42, 0xd2, 0x44, 0xa5, 0x4a, 0x97}
    }
};

static const __midl_frag1220_t __midl_frag1220 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1221
};

static const __midl_frag1219_t __midl_frag1219 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1220
};

static const __midl_frag1218_t __midl_frag1218 =
{ 
/* GetDefinition */
    { 
    /* GetDefinition */      /* procedure GetDefinition */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* methodDefinition */      /* parameter methodDefinition */
        &__midl_frag1219,
        { 
        /* methodDefinition */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag1180_t __midl_frag1180 =
{ 
/* CLRDATA_METHDEF_EXTENT */
    { 
    /* CLRDATA_METHDEF_EXTENT */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* CLRDATA_METHDEF_EXTENT */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */
    }
};

static const __midl_frag1179_t __midl_frag1179 =
{ 
/* *CLRDATA_METHDEF_EXTENT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1180
};

static const __midl_frag1176_t __midl_frag1176 =
{ 
/* EnumExtent */
    { 
    /* EnumExtent */      /* procedure EnumExtent */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT32) 112 /* 0x70 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* handle */      /* parameter handle */
        &__midl_frag1834,
        { 
        /* handle */
            0,
            0,
            0,
            1,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], [out], Basetype, SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* extent */      /* parameter extent */
        &__midl_frag1180,
        { 
        /* extent */
            0,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag1164_t __midl_frag1164 =
{ 
/* IsSameObject */
    { 
    /* IsSameObject */      /* procedure IsSameObject */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* method */      /* parameter method */
        &__midl_frag1220,
        { 
        /* method */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag1134_t __midl_frag1134 =
{ 
/* EnumInstance */
    { 
    /* EnumInstance */      /* procedure EnumInstance */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT32) 48 /* 0x30 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* handle */      /* parameter handle */
        &__midl_frag1834,
        { 
        /* handle */
            0,
            0,
            0,
            1,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], [out], Basetype, SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* instance */      /* parameter instance */
        &__midl_frag1520,
        { 
        /* instance */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag1128_t __midl_frag1128 =
{ 
/* StartEnumInstances */
    { 
    /* StartEnumInstances */      /* procedure StartEnumInstances */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 48 /* 0x30 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* appDomain */      /* parameter appDomain */
        &__midl_frag1873,
        { 
        /* appDomain */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* handle */      /* parameter handle */
        &__midl_frag1834,
        { 
        /* handle */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag1126_t __midl_frag1126 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x4675666c,
        0xc275,
        0x45b8,
        {0x9f, 0x6c, 0xab, 0x16, 0x5d, 0x5c, 0x1e, 0x09}
    }
};

static const __midl_frag1125_t __midl_frag1125 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1126
};

static const __midl_frag1124_t __midl_frag1124 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1125
};

static const __midl_frag1123_t __midl_frag1123 =
{ 
/* GetTypeDefinition */
    { 
    /* GetTypeDefinition */      /* procedure GetTypeDefinition */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* typeDefinition */      /* parameter typeDefinition */
        &__midl_frag1124,
        { 
        /* typeDefinition */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag1119_t __midl_frag1119 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 1 /* 0x1 */,
        { 
        /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag1769
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag1823
    }
};

static const __midl_frag1107_t __midl_frag1107 =
{ 
/* GetStaticFieldByToken2 */
    { 
    /* GetStaticFieldByToken2 */      /* procedure GetStaticFieldByToken2 */
        (NDR64_UINT32) 5112131 /* 0x4e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ClientCorrelation */
        (NDR64_UINT32) 72 /* 0x48 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* tokenScope */      /* parameter tokenScope */
        &__midl_frag1857,
        { 
        /* tokenScope */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* token */      /* parameter token */
        &__midl_frag1879,
        { 
        /* token */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* tlsTask */      /* parameter tlsTask */
        &__midl_frag1848,
        { 
        /* tlsTask */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* field */      /* parameter field */
        &__midl_frag1815,
        { 
        /* field */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* bufLen */      /* parameter bufLen */
        &__midl_frag1879,
        { 
        /* bufLen */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* nameLen */      /* parameter nameLen */
        &__midl_frag1879,
        { 
        /* nameLen */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* nameBuf */      /* parameter nameBuf */
        &__midl_frag1119,
        { 
        /* nameBuf */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        64 /* 0x40 */,   /* Stack offset */
    }
};

static const __midl_frag1058_t __midl_frag1058 =
{ 
/* GetStaticFieldByToken */
    { 
    /* GetStaticFieldByToken */      /* procedure GetStaticFieldByToken */
        (NDR64_UINT32) 5112131 /* 0x4e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ClientCorrelation */
        (NDR64_UINT32) 64 /* 0x40 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* token */      /* parameter token */
        &__midl_frag1879,
        { 
        /* token */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* tlsTask */      /* parameter tlsTask */
        &__midl_frag1848,
        { 
        /* tlsTask */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* field */      /* parameter field */
        &__midl_frag1815,
        { 
        /* field */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* bufLen */      /* parameter bufLen */
        &__midl_frag1879,
        { 
        /* bufLen */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* nameLen */      /* parameter nameLen */
        &__midl_frag1879,
        { 
        /* nameLen */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* nameBuf */      /* parameter nameBuf */
        &__midl_frag1821,
        { 
        /* nameBuf */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    }
};

static const __midl_frag1048_t __midl_frag1048 =
{ 
/* EnumStaticFieldByName2 */
    { 
    /* EnumStaticFieldByName2 */      /* procedure EnumStaticFieldByName2 */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT32) 48 /* 0x30 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* handle */      /* parameter handle */
        &__midl_frag1834,
        { 
        /* handle */
            0,
            0,
            0,
            1,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], [out], Basetype, SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* value */      /* parameter value */
        &__midl_frag1815,
        { 
        /* value */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag1038_t __midl_frag1038 =
{ 
/* StartEnumStaticFieldsByName2 */
    { 
    /* StartEnumStaticFieldsByName2 */      /* procedure StartEnumStaticFieldsByName2 */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 48 /* 0x30 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* name */      /* parameter name */
        &__midl_frag1708,
        { 
        /* name */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* nameFlags */      /* parameter nameFlags */
        &__midl_frag1879,
        { 
        /* nameFlags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* fieldFlags */      /* parameter fieldFlags */
        &__midl_frag1879,
        { 
        /* fieldFlags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* tlsTask */      /* parameter tlsTask */
        &__midl_frag1848,
        { 
        /* tlsTask */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* handle */      /* parameter handle */
        &__midl_frag1834,
        { 
        /* handle */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    }
};

static const __midl_frag1021_t __midl_frag1021 =
{ 
/* StartEnumStaticFields */
    { 
    /* StartEnumStaticFields */      /* procedure StartEnumStaticFields */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 48 /* 0x30 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* flags */      /* parameter flags */
        &__midl_frag1879,
        { 
        /* flags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* tlsTask */      /* parameter tlsTask */
        &__midl_frag1848,
        { 
        /* tlsTask */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* handle */      /* parameter handle */
        &__midl_frag1834,
        { 
        /* handle */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag1016_t __midl_frag1016 =
{ 
/* GetNumStaticFields2 */
    { 
    /* GetNumStaticFields2 */      /* procedure GetNumStaticFields2 */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* flags */      /* parameter flags */
        &__midl_frag1879,
        { 
        /* flags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* numFields */      /* parameter numFields */
        &__midl_frag1879,
        { 
        /* numFields */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag985_t __midl_frag985 =
{ 
/* GetModule */
    { 
    /* GetModule */      /* procedure GetModule */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* mod */      /* parameter mod */
        &__midl_frag1805,
        { 
        /* mod */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag947_t __midl_frag947 =
{ 
/* StartEnumStaticFieldsByName */
    { 
    /* StartEnumStaticFieldsByName */      /* procedure StartEnumStaticFieldsByName */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 48 /* 0x30 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* name */      /* parameter name */
        &__midl_frag1708,
        { 
        /* name */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* flags */      /* parameter flags */
        &__midl_frag1879,
        { 
        /* flags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* tlsTask */      /* parameter tlsTask */
        &__midl_frag1848,
        { 
        /* tlsTask */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* handle */      /* parameter handle */
        &__midl_frag1834,
        { 
        /* handle */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag931_t __midl_frag931 =
{ 
/* GetStaticFieldByIndex */
    { 
    /* GetStaticFieldByIndex */      /* procedure GetStaticFieldByIndex */
        (NDR64_UINT32) 5112131 /* 0x4e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ClientCorrelation */
        (NDR64_UINT32) 72 /* 0x48 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 72 /* 0x48 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* index */      /* parameter index */
        &__midl_frag1879,
        { 
        /* index */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* tlsTask */      /* parameter tlsTask */
        &__midl_frag1848,
        { 
        /* tlsTask */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* field */      /* parameter field */
        &__midl_frag1815,
        { 
        /* field */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* bufLen */      /* parameter bufLen */
        &__midl_frag1879,
        { 
        /* bufLen */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* nameLen */      /* parameter nameLen */
        &__midl_frag1879,
        { 
        /* nameLen */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* nameBuf */      /* parameter nameBuf */
        &__midl_frag1821,
        { 
        /* nameBuf */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* token */      /* parameter token */
        &__midl_frag1879,
        { 
        /* token */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        64 /* 0x40 */,   /* Stack offset */
    }
};

static const __midl_frag910_t __midl_frag910 =
{ 
/* StartEnumMethodInstancesByName */
    { 
    /* StartEnumMethodInstancesByName */      /* procedure StartEnumMethodInstancesByName */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 48 /* 0x30 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* name */      /* parameter name */
        &__midl_frag1708,
        { 
        /* name */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* flags */      /* parameter flags */
        &__midl_frag1879,
        { 
        /* flags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* handle */      /* parameter handle */
        &__midl_frag1834,
        { 
        /* handle */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag880_t __midl_frag880 =
{ 
/* GetFieldByToken2 */
    { 
    /* GetFieldByToken2 */      /* procedure GetFieldByToken2 */
        (NDR64_UINT32) 5112131 /* 0x4e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ClientCorrelation */
        (NDR64_UINT32) 72 /* 0x48 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 72 /* 0x48 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* tokenScope */      /* parameter tokenScope */
        &__midl_frag1857,
        { 
        /* tokenScope */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* token */      /* parameter token */
        &__midl_frag1879,
        { 
        /* token */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* nameBufLen */      /* parameter nameBufLen */
        &__midl_frag1879,
        { 
        /* nameBufLen */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* nameLen */      /* parameter nameLen */
        &__midl_frag1879,
        { 
        /* nameLen */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* nameBuf */      /* parameter nameBuf */
        &__midl_frag1790,
        { 
        /* nameBuf */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* type */      /* parameter type */
        &__midl_frag1124,
        { 
        /* type */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* flags */      /* parameter flags */
        &__midl_frag1879,
        { 
        /* flags */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        64 /* 0x40 */,   /* Stack offset */
    }
};

static const __midl_frag866_t __midl_frag866 =
{ 
/* EnumFieldByName2 */
    { 
    /* EnumFieldByName2 */      /* procedure EnumFieldByName2 */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT32) 112 /* 0x70 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* handle */      /* parameter handle */
        &__midl_frag1834,
        { 
        /* handle */
            0,
            0,
            0,
            1,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], [out], Basetype, SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* type */      /* parameter type */
        &__midl_frag1124,
        { 
        /* type */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* flags */      /* parameter flags */
        &__midl_frag1879,
        { 
        /* flags */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* tokenScope */      /* parameter tokenScope */
        &__midl_frag1805,
        { 
        /* tokenScope */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* token */      /* parameter token */
        &__midl_frag1879,
        { 
        /* token */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    }
};

static const __midl_frag846_t __midl_frag846 =
{ 
/* EnumField2 */
    { 
    /* EnumField2 */      /* procedure EnumField2 */
        (NDR64_UINT32) 4849987 /* 0x4a0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn, ClientCorrelation */
        (NDR64_UINT32) 80 /* 0x50 */ ,  /* Stack size */
        (NDR64_UINT32) 48 /* 0x30 */,
        (NDR64_UINT32) 144 /* 0x90 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 9 /* 0x9 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* handle */      /* parameter handle */
        &__midl_frag1834,
        { 
        /* handle */
            0,
            0,
            0,
            1,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], [out], Basetype, SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* nameBufLen */      /* parameter nameBufLen */
        &__midl_frag1879,
        { 
        /* nameBufLen */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* nameLen */      /* parameter nameLen */
        &__midl_frag1879,
        { 
        /* nameLen */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* nameBuf */      /* parameter nameBuf */
        &__midl_frag1515,
        { 
        /* nameBuf */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* type */      /* parameter type */
        &__midl_frag1124,
        { 
        /* type */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* flags */      /* parameter flags */
        &__midl_frag1879,
        { 
        /* flags */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* tokenScope */      /* parameter tokenScope */
        &__midl_frag1805,
        { 
        /* tokenScope */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    },
    { 
    /* token */      /* parameter token */
        &__midl_frag1879,
        { 
        /* token */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        64 /* 0x40 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        72 /* 0x48 */,   /* Stack offset */
    }
};

static const __midl_frag825_t __midl_frag825 =
{ 
/* GetFieldByToken */
    { 
    /* GetFieldByToken */      /* procedure GetFieldByToken */
        (NDR64_UINT32) 4849987 /* 0x4a0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn, ClientCorrelation */
        (NDR64_UINT32) 64 /* 0x40 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 72 /* 0x48 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* token */      /* parameter token */
        &__midl_frag1879,
        { 
        /* token */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* nameBufLen */      /* parameter nameBufLen */
        &__midl_frag1879,
        { 
        /* nameBufLen */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* nameLen */      /* parameter nameLen */
        &__midl_frag1879,
        { 
        /* nameLen */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* nameBuf */      /* parameter nameBuf */
        &__midl_frag1515,
        { 
        /* nameBuf */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* type */      /* parameter type */
        &__midl_frag1124,
        { 
        /* type */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* flags */      /* parameter flags */
        &__midl_frag1879,
        { 
        /* flags */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    }
};

static const __midl_frag811_t __midl_frag811 =
{ 
/* EnumFieldByName */
    { 
    /* EnumFieldByName */      /* procedure EnumFieldByName */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT32) 112 /* 0x70 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* handle */      /* parameter handle */
        &__midl_frag1834,
        { 
        /* handle */
            0,
            0,
            0,
            1,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], [out], Basetype, SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* type */      /* parameter type */
        &__midl_frag1124,
        { 
        /* type */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* flags */      /* parameter flags */
        &__midl_frag1879,
        { 
        /* flags */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* token */      /* parameter token */
        &__midl_frag1879,
        { 
        /* token */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag803_t __midl_frag803 =
{ 
/* StartEnumFieldsByName */
    { 
    /* StartEnumFieldsByName */      /* procedure StartEnumFieldsByName */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 48 /* 0x30 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* name */      /* parameter name */
        &__midl_frag1708,
        { 
        /* name */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* nameFlags */      /* parameter nameFlags */
        &__midl_frag1879,
        { 
        /* nameFlags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* fieldFlags */      /* parameter fieldFlags */
        &__midl_frag1879,
        { 
        /* fieldFlags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* handle */      /* parameter handle */
        &__midl_frag1834,
        { 
        /* handle */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag783_t __midl_frag783 =
{ 
/* EnumField */
    { 
    /* EnumField */      /* procedure EnumField */
        (NDR64_UINT32) 4849987 /* 0x4a0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn, ClientCorrelation */
        (NDR64_UINT32) 72 /* 0x48 */ ,  /* Stack size */
        (NDR64_UINT32) 48 /* 0x30 */,
        (NDR64_UINT32) 144 /* 0x90 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* handle */      /* parameter handle */
        &__midl_frag1834,
        { 
        /* handle */
            0,
            0,
            0,
            1,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], [out], Basetype, SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* nameBufLen */      /* parameter nameBufLen */
        &__midl_frag1879,
        { 
        /* nameBufLen */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* nameLen */      /* parameter nameLen */
        &__midl_frag1879,
        { 
        /* nameLen */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* nameBuf */      /* parameter nameBuf */
        &__midl_frag1515,
        { 
        /* nameBuf */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* type */      /* parameter type */
        &__midl_frag1124,
        { 
        /* type */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* flags */      /* parameter flags */
        &__midl_frag1879,
        { 
        /* flags */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* token */      /* parameter token */
        &__midl_frag1879,
        { 
        /* token */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        64 /* 0x40 */,   /* Stack offset */
    }
};

static const __midl_frag778_t __midl_frag778 =
{ 
/* StartEnumFields */
    { 
    /* StartEnumFields */      /* procedure StartEnumFields */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 48 /* 0x30 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* flags */      /* parameter flags */
        &__midl_frag1879,
        { 
        /* flags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* handle */      /* parameter handle */
        &__midl_frag1834,
        { 
        /* handle */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag747_t __midl_frag747 =
{ 
/* IsSameObject */
    { 
    /* IsSameObject */      /* procedure IsSameObject */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* type */      /* parameter type */
        &__midl_frag1125,
        { 
        /* type */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag713_t __midl_frag713 =
{ 
/* EnumInstance */
    { 
    /* EnumInstance */      /* procedure EnumInstance */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT32) 48 /* 0x30 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* handle */      /* parameter handle */
        &__midl_frag1834,
        { 
        /* handle */
            0,
            0,
            0,
            1,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], [out], Basetype, SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* instance */      /* parameter instance */
        &__midl_frag1746,
        { 
        /* instance */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag701_t __midl_frag701 =
{ 
/* GetMethodDefinitionByToken */
    { 
    /* GetMethodDefinitionByToken */      /* procedure GetMethodDefinitionByToken */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* token */      /* parameter token */
        &__midl_frag1879,
        { 
        /* token */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* methodDefinition */      /* parameter methodDefinition */
        &__midl_frag1219,
        { 
        /* methodDefinition */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag691_t __midl_frag691 =
{ 
/* EnumMethodDefinitionByName */
    { 
    /* EnumMethodDefinitionByName */      /* procedure EnumMethodDefinitionByName */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT32) 48 /* 0x30 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* handle */      /* parameter handle */
        &__midl_frag1834,
        { 
        /* handle */
            0,
            0,
            0,
            1,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], [out], Basetype, SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* method */      /* parameter method */
        &__midl_frag1219,
        { 
        /* method */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag663_t __midl_frag663 =
{ 
/* *GUID */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag8
};

static const __midl_frag662_t __midl_frag662 =
{ 
/* GetVersionId */
    { 
    /* GetVersionId */      /* procedure GetVersionId */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 80 /* 0x50 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* vid */      /* parameter vid */
        &__midl_frag8,
        { 
        /* vid */
            0,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag652_t __midl_frag652 =
{ 
/* EnumAppDomain */
    { 
    /* EnumAppDomain */      /* procedure EnumAppDomain */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT32) 48 /* 0x30 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* handle */      /* parameter handle */
        &__midl_frag1834,
        { 
        /* handle */
            0,
            0,
            0,
            1,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], [out], Basetype, SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* appDomain */      /* parameter appDomain */
        &__midl_frag1474,
        { 
        /* appDomain */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag577_t __midl_frag577 =
{ 
/* StartEnumDataByName */
    { 
    /* StartEnumDataByName */      /* procedure StartEnumDataByName */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 48 /* 0x30 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* name */      /* parameter name */
        &__midl_frag1708,
        { 
        /* name */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* flags */      /* parameter flags */
        &__midl_frag1879,
        { 
        /* flags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* appDomain */      /* parameter appDomain */
        &__midl_frag1873,
        { 
        /* appDomain */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* tlsTask */      /* parameter tlsTask */
        &__midl_frag1848,
        { 
        /* tlsTask */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* handle */      /* parameter handle */
        &__midl_frag1834,
        { 
        /* handle */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    }
};

static const __midl_frag552_t __midl_frag552 =
{ 
/* StartEnumMethodInstancesByName */
    { 
    /* StartEnumMethodInstancesByName */      /* procedure StartEnumMethodInstancesByName */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 48 /* 0x30 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* name */      /* parameter name */
        &__midl_frag1708,
        { 
        /* name */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* flags */      /* parameter flags */
        &__midl_frag1879,
        { 
        /* flags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* appDomain */      /* parameter appDomain */
        &__midl_frag1873,
        { 
        /* appDomain */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* handle */      /* parameter handle */
        &__midl_frag1834,
        { 
        /* handle */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag529_t __midl_frag529 =
{ 
/* GetTypeDefinitionByToken */
    { 
    /* GetTypeDefinitionByToken */      /* procedure GetTypeDefinitionByToken */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* token */      /* parameter token */
        &__midl_frag1879,
        { 
        /* token */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* typeDefinition */      /* parameter typeDefinition */
        &__midl_frag1124,
        { 
        /* typeDefinition */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag500_t __midl_frag500 =
{ 
/* EnumTypeDefinitionByName */
    { 
    /* EnumTypeDefinitionByName */      /* procedure EnumTypeDefinitionByName */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT32) 48 /* 0x30 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* handle */      /* parameter handle */
        &__midl_frag1834,
        { 
        /* handle */
            0,
            0,
            0,
            1,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], [out], Basetype, SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* type */      /* parameter type */
        &__midl_frag1124,
        { 
        /* type */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag458_t __midl_frag458 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x2fa17588,
        0x43c2,
        0x46ab,
        {0x9b, 0x51, 0xc8, 0xf0, 0x1e, 0x39, 0xc9, 0xac}
    }
};

static const __midl_frag457_t __midl_frag457 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag458
};

static const __midl_frag456_t __midl_frag456 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag457
};

static const __midl_frag453_t __midl_frag453 =
{ 
/* EnumAssembly */
    { 
    /* EnumAssembly */      /* procedure EnumAssembly */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT32) 48 /* 0x30 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* handle */      /* parameter handle */
        &__midl_frag1834,
        { 
        /* handle */
            0,
            0,
            0,
            1,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], [out], Basetype, SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* assembly */      /* parameter assembly */
        &__midl_frag456,
        { 
        /* assembly */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag410_t __midl_frag410 =
{ 
/* IsSameObject */
    { 
    /* IsSameObject */      /* procedure IsSameObject */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* assembly */      /* parameter assembly */
        &__midl_frag457,
        { 
        /* assembly */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag380_t __midl_frag380 =
{ 
/* EnumModule */
    { 
    /* EnumModule */      /* procedure EnumModule */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT32) 48 /* 0x30 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* handle */      /* parameter handle */
        &__midl_frag1834,
        { 
        /* handle */
            0,
            0,
            0,
            1,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], [out], Basetype, SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* mod */      /* parameter mod */
        &__midl_frag1805,
        { 
        /* mod */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag329_t __midl_frag329 =
{ 
/* *CLRDATA_FOLLOW_STUB_BUFFER */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag314
};

static const __midl_frag321_t __midl_frag321 =
{ 
/* FollowStub2 */
    { 
    /* FollowStub2 */      /* procedure FollowStub2 */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 72 /* 0x48 */ ,  /* Stack size */
        (NDR64_UINT32) 144 /* 0x90 */,
        (NDR64_UINT32) 200 /* 0xc8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* task */      /* parameter task */
        &__midl_frag1848,
        { 
        /* task */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* inFlags */      /* parameter inFlags */
        &__midl_frag1879,
        { 
        /* inFlags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* inAddr */      /* parameter inAddr */
        &__midl_frag1834,
        { 
        /* inAddr */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* inBuffer */      /* parameter inBuffer */
        &__midl_frag314,
        { 
        /* inBuffer */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* outAddr */      /* parameter outAddr */
        &__midl_frag1834,
        { 
        /* outAddr */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* outBuffer */      /* parameter outBuffer */
        &__midl_frag314,
        { 
        /* outBuffer */
            0,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* outFlags */      /* parameter outFlags */
        &__midl_frag1879,
        { 
        /* outFlags */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        64 /* 0x40 */,   /* Stack offset */
    }
};

static const __midl_frag314_t __midl_frag314 =
{ 
/* CLRDATA_FOLLOW_STUB_BUFFER */
    { 
    /* CLRDATA_FOLLOW_STUB_BUFFER */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* CLRDATA_FOLLOW_STUB_BUFFER */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 64 /* 0x40 */
    }
};

static const __midl_frag310_t __midl_frag310 =
{ 
/* FollowStub */
    { 
    /* FollowStub */      /* procedure FollowStub */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 64 /* 0x40 */ ,  /* Stack size */
        (NDR64_UINT32) 144 /* 0x90 */,
        (NDR64_UINT32) 200 /* 0xc8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* inFlags */      /* parameter inFlags */
        &__midl_frag1879,
        { 
        /* inFlags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* inAddr */      /* parameter inAddr */
        &__midl_frag1834,
        { 
        /* inAddr */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* inBuffer */      /* parameter inBuffer */
        &__midl_frag314,
        { 
        /* inBuffer */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* outAddr */      /* parameter outAddr */
        &__midl_frag1834,
        { 
        /* outAddr */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* outBuffer */      /* parameter outBuffer */
        &__midl_frag314,
        { 
        /* outBuffer */
            0,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* outFlags */      /* parameter outFlags */
        &__midl_frag1879,
        { 
        /* outFlags */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    }
};

static const __midl_frag300_t __midl_frag300 =
{ 
/* EnumMethodDefinitionByAddress */
    { 
    /* EnumMethodDefinitionByAddress */      /* procedure EnumMethodDefinitionByAddress */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* handle */      /* parameter handle */
        &__midl_frag1834,
        { 
        /* handle */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* method */      /* parameter method */
        &__midl_frag1219,
        { 
        /* method */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag295_t __midl_frag295 =
{ 
/* StartEnumMethodDefinitionsByAddress */
    { 
    /* StartEnumMethodDefinitionsByAddress */      /* procedure StartEnumMethodDefinitionsByAddress */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 48 /* 0x30 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* address */      /* parameter address */
        &__midl_frag1834,
        { 
        /* address */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* handle */      /* parameter handle */
        &__midl_frag1834,
        { 
        /* handle */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag273_t __midl_frag273 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag1775
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 1 /* 0x1 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 0 /* 0x0 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *struct _NDR64_POINTER_FORMAT */
                0x24,    /* FC64_IP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag1858
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag1857
    }
};

static const __midl_frag271_t __midl_frag271 =
{ 
/* SetCodeNotifications */
    { 
    /* SetCodeNotifications */      /* procedure SetCodeNotifications */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 64 /* 0x40 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* numTokens */      /* parameter numTokens */
        &__midl_frag1879,
        { 
        /* numTokens */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* mods */      /* parameter mods */
        &__midl_frag273,
        { 
        /* mods */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* singleMod */      /* parameter singleMod */
        &__midl_frag1857,
        { 
        /* singleMod */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* tokens */      /* parameter tokens */
        &__midl_frag1774,
        { 
        /* tokens */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* flags */      /* parameter flags */
        &__midl_frag1774,
        { 
        /* flags */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* singleFlags */      /* parameter singleFlags */
        &__midl_frag1879,
        { 
        /* singleFlags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    }
};

static const __midl_frag255_t __midl_frag255 =
{ 
/* GetCodeNotifications */
    { 
    /* GetCodeNotifications */      /* procedure GetCodeNotifications */
        (NDR64_UINT32) 7209283 /* 0x6e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* numTokens */      /* parameter numTokens */
        &__midl_frag1879,
        { 
        /* numTokens */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* mods */      /* parameter mods */
        &__midl_frag273,
        { 
        /* mods */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* singleMod */      /* parameter singleMod */
        &__midl_frag1857,
        { 
        /* singleMod */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* tokens */      /* parameter tokens */
        &__midl_frag1774,
        { 
        /* tokens */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* flags */      /* parameter flags */
        &__midl_frag1774,
        { 
        /* flags */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    }
};

static const __midl_frag217_t __midl_frag217 =
{ 
/* SetAllCodeNotifications */
    { 
    /* SetAllCodeNotifications */      /* procedure SetAllCodeNotifications */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* mod */      /* parameter mod */
        &__midl_frag1857,
        { 
        /* mod */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* flags */      /* parameter flags */
        &__midl_frag1879,
        { 
        /* flags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag200_t __midl_frag200 =
{ 
/* CreateMemoryValue */
    { 
    /* CreateMemoryValue */      /* procedure CreateMemoryValue */
        (NDR64_UINT32) 917827 /* 0xe0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* appDomain */      /* parameter appDomain */
        &__midl_frag1873,
        { 
        /* appDomain */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* tlsTask */      /* parameter tlsTask */
        &__midl_frag1848,
        { 
        /* tlsTask */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* type */      /* parameter type */
        &__midl_frag1865,
        { 
        /* type */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* addr */      /* parameter addr */
        &__midl_frag1834,
        { 
        /* addr */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* value */      /* parameter value */
        &__midl_frag1815,
        { 
        /* value */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    }
};

static const __midl_frag185_t __midl_frag185 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x2d95a079,
        0x42a1,
        0x4837,
        {0x81, 0x8f, 0x0b, 0x97, 0xd7, 0x04, 0x8e, 0x0e}
    }
};

static const __midl_frag184_t __midl_frag184 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag185
};

static const __midl_frag182_t __midl_frag182 =
{ 
/* TranslateExceptionRecordToNotification */
    { 
    /* TranslateExceptionRecordToNotification */      /* procedure TranslateExceptionRecordToNotification */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 208 /* 0xd0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* record */      /* parameter record */
        &__midl_frag177,
        { 
        /* record */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* notify */      /* parameter notify */
        &__midl_frag184,
        { 
        /* notify */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag177_t __midl_frag177 =
{ 
/* EXCEPTION_RECORD64 */
    { 
    /* EXCEPTION_RECORD64 */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* EXCEPTION_RECORD64 */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 152 /* 0x98 */
    }
};

static const __midl_frag175_t __midl_frag175 =
{ 
/* GetExceptionStateByExceptionRecord */
    { 
    /* GetExceptionStateByExceptionRecord */      /* procedure GetExceptionStateByExceptionRecord */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 208 /* 0xd0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* record */      /* parameter record */
        &__midl_frag177,
        { 
        /* record */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* exState */      /* parameter exState */
        &__midl_frag1552,
        { 
        /* exState */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag156_t __midl_frag156 =
{ 
/* GetDataByAddress */
    { 
    /* GetDataByAddress */      /* procedure GetDataByAddress */
        (NDR64_UINT32) 5112131 /* 0x4e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ClientCorrelation */
        (NDR64_UINT32) 88 /* 0x58 */ ,  /* Stack size */
        (NDR64_UINT32) 32 /* 0x20 */,
        (NDR64_UINT32) 80 /* 0x50 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 10 /* 0xa */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* address */      /* parameter address */
        &__midl_frag1834,
        { 
        /* address */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* flags */      /* parameter flags */
        &__midl_frag1879,
        { 
        /* flags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* appDomain */      /* parameter appDomain */
        &__midl_frag1873,
        { 
        /* appDomain */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* tlsTask */      /* parameter tlsTask */
        &__midl_frag1848,
        { 
        /* tlsTask */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* bufLen */      /* parameter bufLen */
        &__midl_frag1879,
        { 
        /* bufLen */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* nameLen */      /* parameter nameLen */
        &__midl_frag1879,
        { 
        /* nameLen */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* nameBuf */      /* parameter nameBuf */
        &__midl_frag1119,
        { 
        /* nameBuf */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    },
    { 
    /* value */      /* parameter value */
        &__midl_frag1815,
        { 
        /* value */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        64 /* 0x40 */,   /* Stack offset */
    },
    { 
    /* displacement */      /* parameter displacement */
        &__midl_frag1834,
        { 
        /* displacement */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        72 /* 0x48 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        80 /* 0x50 */,   /* Stack offset */
    }
};

static const __midl_frag146_t __midl_frag146 =
{ 
/* EnumMethodInstanceByAddress */
    { 
    /* EnumMethodInstanceByAddress */      /* procedure EnumMethodInstanceByAddress */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* handle */      /* parameter handle */
        &__midl_frag1834,
        { 
        /* handle */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* method */      /* parameter method */
        &__midl_frag1520,
        { 
        /* method */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag139_t __midl_frag139 =
{ 
/* StartEnumMethodInstancesByAddress */
    { 
    /* StartEnumMethodInstancesByAddress */      /* procedure StartEnumMethodInstancesByAddress */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 48 /* 0x30 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* address */      /* parameter address */
        &__midl_frag1834,
        { 
        /* address */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* appDomain */      /* parameter appDomain */
        &__midl_frag1873,
        { 
        /* appDomain */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* handle */      /* parameter handle */
        &__midl_frag1834,
        { 
        /* handle */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag133_t __midl_frag133 =
{ 
/* GetModuleByAddress */
    { 
    /* GetModuleByAddress */      /* procedure GetModuleByAddress */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* address */      /* parameter address */
        &__midl_frag1834,
        { 
        /* address */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* mod */      /* parameter mod */
        &__midl_frag1805,
        { 
        /* mod */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag99_t __midl_frag99 =
{ 
/* GetAppDomainByUniqueID */
    { 
    /* GetAppDomainByUniqueID */      /* procedure GetAppDomainByUniqueID */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* id */      /* parameter id */
        &__midl_frag1834,
        { 
        /* id */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* appDomain */      /* parameter appDomain */
        &__midl_frag1474,
        { 
        /* appDomain */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag73_t __midl_frag73 =
{ 
/* GetRuntimeNameByAddress */
    { 
    /* GetRuntimeNameByAddress */      /* procedure GetRuntimeNameByAddress */
        (NDR64_UINT32) 4849987 /* 0x4a0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn, ClientCorrelation */
        (NDR64_UINT32) 64 /* 0x40 */ ,  /* Stack size */
        (NDR64_UINT32) 32 /* 0x20 */,
        (NDR64_UINT32) 80 /* 0x50 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* address */      /* parameter address */
        &__midl_frag1834,
        { 
        /* address */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* flags */      /* parameter flags */
        &__midl_frag1879,
        { 
        /* flags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* bufLen */      /* parameter bufLen */
        &__midl_frag1879,
        { 
        /* bufLen */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* nameLen */      /* parameter nameLen */
        &__midl_frag1879,
        { 
        /* nameLen */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* nameBuf */      /* parameter nameBuf */
        &__midl_frag1790,
        { 
        /* nameBuf */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* displacement */      /* parameter displacement */
        &__midl_frag1834,
        { 
        /* displacement */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    }
};

static const __midl_frag68_t __midl_frag68 =
{ 
/* GetAddressType */
    { 
    /* GetAddressType */      /* procedure GetAddressType */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* address */      /* parameter address */
        &__midl_frag1834,
        { 
        /* address */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* type */      /* parameter type */
        &__midl_frag1879,
        { 
        /* type */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag52_t __midl_frag52 =
{ 
/* IsSameObject */
    { 
    /* IsSameObject */      /* procedure IsSameObject */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* process */      /* parameter process */
        &__midl_frag1318,
        { 
        /* process */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag42_t __midl_frag42 =
{ 
/* GetTaskByUniqueID */
    { 
    /* GetTaskByUniqueID */      /* procedure GetTaskByUniqueID */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* taskID */      /* parameter taskID */
        &__midl_frag1834,
        { 
        /* taskID */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* task */      /* parameter task */
        &__midl_frag1606,
        { 
        /* task */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag36_t __midl_frag36 =
{ 
/* GetTaskByOSThreadID */
    { 
    /* GetTaskByOSThreadID */      /* procedure GetTaskByOSThreadID */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* osThreadID */      /* parameter osThreadID */
        &__midl_frag1879,
        { 
        /* osThreadID */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* task */      /* parameter task */
        &__midl_frag1606,
        { 
        /* task */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag26_t __midl_frag26 =
{ 
/* EnumTask */
    { 
    /* EnumTask */      /* procedure EnumTask */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT32) 48 /* 0x30 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* handle */      /* parameter handle */
        &__midl_frag1834,
        { 
        /* handle */
            0,
            0,
            0,
            1,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], [out], Basetype, SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* task */      /* parameter task */
        &__midl_frag1606,
        { 
        /* task */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag16_t __midl_frag16 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_NOOP */
        0x5,    /* FC_EXPR_PAD */
        (NDR64_UINT8) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_EXPR_CONST64 */
        0x2,    /* FC_EXPR_CONST64 */
        0x7,    /* FC64_INT64 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT64) 0 /* 0x0 */
    }
};

static const __midl_frag15_t __midl_frag15 =
{ 
/*  */
    (NDR64_UINT32) 0 /* 0x0 */,
    { 
    /* struct _NDR64_EXPR_OPERATOR */
        0x4,    /* FC_EXPR_OPER */
        0x5,    /* OP_UNARY_INDIRECTION */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT8) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x8,    /* FC64_UINT64 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 72 /* 0x48 */  /* Offset */
    }
};

static const __midl_frag14_t __midl_frag14 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 56 /* 0x38 */  /* Offset */
    }
};

static const __midl_frag13_t __midl_frag13 =
{ 
/* *BYTE */
    { 
    /* *BYTE */
        0x43,    /* FC64_CONFVAR_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *BYTE */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag14,
        &__midl_frag15
    }
};

static const __midl_frag12_t __midl_frag12 =
{ 
/* *BYTE */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag13
};

static const __midl_frag8_t __midl_frag8 =
{ 
/* GUID */
    { 
    /* GUID */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* GUID */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */
    }
};

static const __midl_frag7_t __midl_frag7 =
{ 
/* *GUID */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag8
};

static const __midl_frag2_t __midl_frag2 =
{ 
/* GetMetaData */
    { 
    /* GetMetaData */      /* procedure GetMetaData */
        (NDR64_UINT32) 5112131 /* 0x4e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ClientCorrelation */
        (NDR64_UINT32) 88 /* 0x58 */ ,  /* Stack size */
        (NDR64_UINT32) 112 /* 0x70 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 10 /* 0xa */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* imagePath */      /* parameter imagePath */
        &__midl_frag1708,
        { 
        /* imagePath */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* imageTimestamp */      /* parameter imageTimestamp */
        &__midl_frag1879,
        { 
        /* imageTimestamp */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* imageSize */      /* parameter imageSize */
        &__midl_frag1879,
        { 
        /* imageSize */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* mvid */      /* parameter mvid */
        &__midl_frag8,
        { 
        /* mvid */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* mdRva */      /* parameter mdRva */
        &__midl_frag1879,
        { 
        /* mdRva */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* flags */      /* parameter flags */
        &__midl_frag1879,
        { 
        /* flags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* bufferSize */      /* parameter bufferSize */
        &__midl_frag1879,
        { 
        /* bufferSize */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    },
    { 
    /* buffer */      /* parameter buffer */
        &__midl_frag13,
        { 
        /* buffer */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        64 /* 0x40 */,   /* Stack offset */
    },
    { 
    /* dataSize */      /* parameter dataSize */
        &__midl_frag1879,
        { 
        /* dataSize */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        72 /* 0x48 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1879,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        80 /* 0x50 */,   /* Stack offset */
    }
};

static const __midl_frag1_t __midl_frag1 =
(NDR64_UINT32) 0 /* 0x0 */;


#include "poppack.h"



/* Standard interface: __MIDL_itf_xclrdata_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: ICLRDataTarget, ver. 0.0,
   GUID={0x3E11CCEE,0xD08B,0x43e5,{0xAF,0x01,0x32,0x71,0x7A,0x64,0xDA,0x03}} */


/* Object interface: ICLRDataTarget2, ver. 0.0,
   GUID={0x6d05fae3,0x189c,0x4630,{0xa6,0xdc,0x1c,0x25,0x1e,0x1c,0x01,0xab}} */


/* Object interface: IXCLRDataTarget3, ver. 0.0,
   GUID={0x59d9b5e1,0x4a6f,0x4531,{0x84,0xc3,0x51,0xd1,0x2d,0xa2,0x2f,0xd4}} */

#pragma code_seg(".orpc")
static const FormatInfoRef IXCLRDataTarget3_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag2
    };


static const MIDL_SYNTAX_INFO IXCLRDataTarget3_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataTarget3_FormatStringOffsetTable[-3],
    xclrdata__MIDL_TypeFormatString.Format,
    0,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IXCLRDataTarget3_Ndr64ProcTable[-3],
    0,
    0,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IXCLRDataTarget3_ProxyInfo =
    {
    &Object_StubDesc,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataTarget3_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IXCLRDataTarget3_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IXCLRDataTarget3_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    xclrdata__MIDL_ProcFormatString.Format,
    (unsigned short *) &IXCLRDataTarget3_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IXCLRDataTarget3_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(17) _IXCLRDataTarget3ProxyVtbl = 
{
    &IXCLRDataTarget3_ProxyInfo,
    &IID_IXCLRDataTarget3,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* ICLRDataTarget::GetMachineType */ ,
    0 /* ICLRDataTarget::GetPointerSize */ ,
    0 /* ICLRDataTarget::GetImageBase */ ,
    0 /* ICLRDataTarget::ReadVirtual */ ,
    0 /* ICLRDataTarget::WriteVirtual */ ,
    0 /* ICLRDataTarget::GetTLSValue */ ,
    0 /* ICLRDataTarget::SetTLSValue */ ,
    0 /* ICLRDataTarget::GetCurrentThreadID */ ,
    0 /* ICLRDataTarget::GetThreadContext */ ,
    0 /* ICLRDataTarget::SetThreadContext */ ,
    0 /* ICLRDataTarget::Request */ ,
    0 /* ICLRDataTarget2::AllocVirtual */ ,
    0 /* ICLRDataTarget2::FreeVirtual */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTarget3::GetMetaData */
};


static const PRPC_STUB_FUNCTION IXCLRDataTarget3_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall3
};

CInterfaceStubVtbl _IXCLRDataTarget3StubVtbl =
{
    &IID_IXCLRDataTarget3,
    &IXCLRDataTarget3_ServerInfo,
    17,
    &IXCLRDataTarget3_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_xclrdata_0000_0001, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IXCLRDataProcess, ver. 0.0,
   GUID={0x5c552ab6,0xfc09,0x4cb3,{0x8e,0x36,0x22,0xfa,0x03,0xc7,0x98,0xb7}} */

#pragma code_seg(".orpc")
static const FormatInfoRef IXCLRDataProcess_Ndr64ProcTable[] =
    {
    &__midl_frag1421,
    &__midl_frag1618,
    &__midl_frag26,
    &__midl_frag1725,
    &__midl_frag36,
    &__midl_frag42,
    &__midl_frag1825,
    &__midl_frag52,
    &__midl_frag1740,
    &__midl_frag1825,
    &__midl_frag1844,
    &__midl_frag68,
    &__midl_frag73,
    &__midl_frag1618,
    &__midl_frag652,
    &__midl_frag1725,
    &__midl_frag99,
    &__midl_frag1618,
    &__midl_frag453,
    &__midl_frag1725,
    &__midl_frag1618,
    &__midl_frag380,
    &__midl_frag1725,
    &__midl_frag133,
    &__midl_frag139,
    &__midl_frag146,
    &__midl_frag1725,
    &__midl_frag156,
    &__midl_frag175,
    &__midl_frag182,
    &__midl_frag1661,
    &__midl_frag200,
    &__midl_frag217,
    &__midl_frag217,
    &__midl_frag255,
    &__midl_frag271,
    &__midl_frag255,
    &__midl_frag271,
    &__midl_frag1825,
    &__midl_frag1844,
    &__midl_frag295,
    &__midl_frag300,
    &__midl_frag1725,
    &__midl_frag310,
    &__midl_frag321
    };


static const MIDL_SYNTAX_INFO IXCLRDataProcess_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataProcess_FormatStringOffsetTable[-3],
    xclrdata__MIDL_TypeFormatString.Format,
    0,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IXCLRDataProcess_Ndr64ProcTable[-3],
    0,
    0,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IXCLRDataProcess_ProxyInfo =
    {
    &Object_StubDesc,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataProcess_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IXCLRDataProcess_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IXCLRDataProcess_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    xclrdata__MIDL_ProcFormatString.Format,
    (unsigned short *) &IXCLRDataProcess_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IXCLRDataProcess_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(48) _IXCLRDataProcessProxyVtbl = 
{
    &IXCLRDataProcess_ProxyInfo,
    &IID_IXCLRDataProcess,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IXCLRDataProcess::Flush */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataProcess::StartEnumTasks */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataProcess::EnumTask */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataProcess::EndEnumTasks */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataProcess::GetTaskByOSThreadID */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataProcess::GetTaskByUniqueID */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataProcess::GetFlags */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataProcess::IsSameObject */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataProcess::GetManagedObject */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataProcess::GetDesiredExecutionState */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataProcess::SetDesiredExecutionState */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataProcess::GetAddressType */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataProcess::GetRuntimeNameByAddress */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataProcess::StartEnumAppDomains */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataProcess::EnumAppDomain */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataProcess::EndEnumAppDomains */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataProcess::GetAppDomainByUniqueID */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataProcess::StartEnumAssemblies */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataProcess::EnumAssembly */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataProcess::EndEnumAssemblies */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataProcess::StartEnumModules */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataProcess::EnumModule */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataProcess::EndEnumModules */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataProcess::GetModuleByAddress */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataProcess::StartEnumMethodInstancesByAddress */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataProcess::EnumMethodInstanceByAddress */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataProcess::EndEnumMethodInstancesByAddress */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataProcess::GetDataByAddress */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataProcess::GetExceptionStateByExceptionRecord */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataProcess::TranslateExceptionRecordToNotification */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataProcess::Request */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataProcess::CreateMemoryValue */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataProcess::SetAllTypeNotifications */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataProcess::SetAllCodeNotifications */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataProcess::GetTypeNotifications */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataProcess::SetTypeNotifications */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataProcess::GetCodeNotifications */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataProcess::SetCodeNotifications */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataProcess::GetOtherNotificationFlags */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataProcess::SetOtherNotificationFlags */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataProcess::StartEnumMethodDefinitionsByAddress */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataProcess::EnumMethodDefinitionByAddress */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataProcess::EndEnumMethodDefinitionsByAddress */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataProcess::FollowStub */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataProcess::FollowStub2 */
};

const CInterfaceStubVtbl _IXCLRDataProcessStubVtbl =
{
    &IID_IXCLRDataProcess,
    &IXCLRDataProcess_ServerInfo,
    48,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_xclrdata_0000_0002, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IXCLRDataAppDomain, ver. 0.0,
   GUID={0x7CA04601,0xC702,0x4670,{0xA6,0x3C,0xFA,0x44,0xF7,0xDA,0x7B,0xD5}} */

#pragma code_seg(".orpc")
static const FormatInfoRef IXCLRDataAppDomain_Ndr64ProcTable[] =
    {
    &__midl_frag1316,
    &__midl_frag1750,
    &__midl_frag1618,
    &__midl_frag1825,
    &__midl_frag1872,
    &__midl_frag1740,
    &__midl_frag1661
    };


static const MIDL_SYNTAX_INFO IXCLRDataAppDomain_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataAppDomain_FormatStringOffsetTable[-3],
    xclrdata__MIDL_TypeFormatString.Format,
    0,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IXCLRDataAppDomain_Ndr64ProcTable[-3],
    0,
    0,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IXCLRDataAppDomain_ProxyInfo =
    {
    &Object_StubDesc,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataAppDomain_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IXCLRDataAppDomain_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IXCLRDataAppDomain_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    xclrdata__MIDL_ProcFormatString.Format,
    (unsigned short *) &IXCLRDataAppDomain_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IXCLRDataAppDomain_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(10) _IXCLRDataAppDomainProxyVtbl = 
{
    &IXCLRDataAppDomain_ProxyInfo,
    &IID_IXCLRDataAppDomain,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IXCLRDataAppDomain::GetProcess */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataAppDomain::GetName */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataAppDomain::GetUniqueID */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataAppDomain::GetFlags */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataAppDomain::IsSameObject */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataAppDomain::GetManagedObject */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataAppDomain::Request */
};

const CInterfaceStubVtbl _IXCLRDataAppDomainStubVtbl =
{
    &IID_IXCLRDataAppDomain,
    &IXCLRDataAppDomain_ServerInfo,
    10,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_xclrdata_0000_0003, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IXCLRDataAssembly, ver. 0.0,
   GUID={0x2FA17588,0x43C2,0x46ab,{0x9B,0x51,0xC8,0xF0,0x1E,0x39,0xC9,0xAC}} */

#pragma code_seg(".orpc")
static const FormatInfoRef IXCLRDataAssembly_Ndr64ProcTable[] =
    {
    &__midl_frag1618,
    &__midl_frag380,
    &__midl_frag1725,
    &__midl_frag1750,
    &__midl_frag1750,
    &__midl_frag1825,
    &__midl_frag410,
    &__midl_frag1661,
    &__midl_frag1618,
    &__midl_frag652,
    &__midl_frag1725,
    &__midl_frag1750
    };


static const MIDL_SYNTAX_INFO IXCLRDataAssembly_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataAssembly_FormatStringOffsetTable[-3],
    xclrdata__MIDL_TypeFormatString.Format,
    0,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IXCLRDataAssembly_Ndr64ProcTable[-3],
    0,
    0,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IXCLRDataAssembly_ProxyInfo =
    {
    &Object_StubDesc,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataAssembly_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IXCLRDataAssembly_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IXCLRDataAssembly_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    xclrdata__MIDL_ProcFormatString.Format,
    (unsigned short *) &IXCLRDataAssembly_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IXCLRDataAssembly_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(15) _IXCLRDataAssemblyProxyVtbl = 
{
    &IXCLRDataAssembly_ProxyInfo,
    &IID_IXCLRDataAssembly,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IXCLRDataAssembly::StartEnumModules */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataAssembly::EnumModule */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataAssembly::EndEnumModules */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataAssembly::GetName */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataAssembly::GetFileName */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataAssembly::GetFlags */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataAssembly::IsSameObject */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataAssembly::Request */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataAssembly::StartEnumAppDomains */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataAssembly::EnumAppDomain */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataAssembly::EndEnumAppDomains */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataAssembly::GetDisplayName */
};

const CInterfaceStubVtbl _IXCLRDataAssemblyStubVtbl =
{
    &IID_IXCLRDataAssembly,
    &IXCLRDataAssembly_ServerInfo,
    15,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_xclrdata_0000_0004, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IXCLRDataModule, ver. 0.0,
   GUID={0x88E32849,0x0A0A,0x4cb0,{0x90,0x22,0x7C,0xD2,0xE9,0xE1,0x39,0xE2}} */

#pragma code_seg(".orpc")
static const FormatInfoRef IXCLRDataModule_Ndr64ProcTable[] =
    {
    &__midl_frag1618,
    &__midl_frag453,
    &__midl_frag1725,
    &__midl_frag1618,
    &__midl_frag500,
    &__midl_frag1725,
    &__midl_frag1128,
    &__midl_frag713,
    &__midl_frag1725,
    &__midl_frag910,
    &__midl_frag500,
    &__midl_frag1725,
    &__midl_frag552,
    &__midl_frag713,
    &__midl_frag1725,
    &__midl_frag529,
    &__midl_frag910,
    &__midl_frag691,
    &__midl_frag1725,
    &__midl_frag552,
    &__midl_frag1134,
    &__midl_frag1725,
    &__midl_frag701,
    &__midl_frag577,
    &__midl_frag1048,
    &__midl_frag1725,
    &__midl_frag1750,
    &__midl_frag1750,
    &__midl_frag1825,
    &__midl_frag1856,
    &__midl_frag1618,
    &__midl_frag1291,
    &__midl_frag1725,
    &__midl_frag1661,
    &__midl_frag1618,
    &__midl_frag652,
    &__midl_frag1725,
    &__midl_frag662
    };


static const MIDL_SYNTAX_INFO IXCLRDataModule_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataModule_FormatStringOffsetTable[-3],
    xclrdata__MIDL_TypeFormatString.Format,
    0,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IXCLRDataModule_Ndr64ProcTable[-3],
    0,
    0,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IXCLRDataModule_ProxyInfo =
    {
    &Object_StubDesc,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataModule_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IXCLRDataModule_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IXCLRDataModule_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    xclrdata__MIDL_ProcFormatString.Format,
    (unsigned short *) &IXCLRDataModule_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IXCLRDataModule_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(41) _IXCLRDataModuleProxyVtbl = 
{
    &IXCLRDataModule_ProxyInfo,
    &IID_IXCLRDataModule,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IXCLRDataModule::StartEnumAssemblies */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataModule::EnumAssembly */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataModule::EndEnumAssemblies */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataModule::StartEnumTypeDefinitions */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataModule::EnumTypeDefinition */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataModule::EndEnumTypeDefinitions */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataModule::StartEnumTypeInstances */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataModule::EnumTypeInstance */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataModule::EndEnumTypeInstances */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataModule::StartEnumTypeDefinitionsByName */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataModule::EnumTypeDefinitionByName */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataModule::EndEnumTypeDefinitionsByName */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataModule::StartEnumTypeInstancesByName */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataModule::EnumTypeInstanceByName */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataModule::EndEnumTypeInstancesByName */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataModule::GetTypeDefinitionByToken */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataModule::StartEnumMethodDefinitionsByName */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataModule::EnumMethodDefinitionByName */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataModule::EndEnumMethodDefinitionsByName */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataModule::StartEnumMethodInstancesByName */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataModule::EnumMethodInstanceByName */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataModule::EndEnumMethodInstancesByName */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataModule::GetMethodDefinitionByToken */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataModule::StartEnumDataByName */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataModule::EnumDataByName */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataModule::EndEnumDataByName */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataModule::GetName */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataModule::GetFileName */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataModule::GetFlags */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataModule::IsSameObject */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataModule::StartEnumExtents */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataModule::EnumExtent */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataModule::EndEnumExtents */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataModule::Request */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataModule::StartEnumAppDomains */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataModule::EnumAppDomain */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataModule::EndEnumAppDomains */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataModule::GetVersionId */
};

const CInterfaceStubVtbl _IXCLRDataModuleStubVtbl =
{
    &IID_IXCLRDataModule,
    &IXCLRDataModule_ServerInfo,
    41,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IXCLRDataTypeDefinition, ver. 0.0,
   GUID={0x4675666C,0xC275,0x45b8,{0x9F,0x6C,0xAB,0x16,0x5D,0x5C,0x1E,0x09}} */

#pragma code_seg(".orpc")
static const FormatInfoRef IXCLRDataTypeDefinition_Ndr64ProcTable[] =
    {
    &__midl_frag985,
    &__midl_frag1618,
    &__midl_frag691,
    &__midl_frag1725,
    &__midl_frag910,
    &__midl_frag691,
    &__midl_frag1725,
    &__midl_frag701,
    &__midl_frag1128,
    &__midl_frag713,
    &__midl_frag1725,
    &__midl_frag1510,
    &__midl_frag1223,
    &__midl_frag1825,
    &__midl_frag1825,
    &__midl_frag747,
    &__midl_frag1661,
    &__midl_frag1825,
    &__midl_frag1123,
    &__midl_frag1016,
    &__midl_frag778,
    &__midl_frag783,
    &__midl_frag1725,
    &__midl_frag803,
    &__midl_frag811,
    &__midl_frag1725,
    &__midl_frag825,
    &__midl_frag1825,
    &__midl_frag1844,
    &__midl_frag846,
    &__midl_frag866,
    &__midl_frag880
    };


static const MIDL_SYNTAX_INFO IXCLRDataTypeDefinition_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataTypeDefinition_FormatStringOffsetTable[-3],
    xclrdata__MIDL_TypeFormatString.Format,
    0,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IXCLRDataTypeDefinition_Ndr64ProcTable[-3],
    0,
    0,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IXCLRDataTypeDefinition_ProxyInfo =
    {
    &Object_StubDesc,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataTypeDefinition_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IXCLRDataTypeDefinition_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IXCLRDataTypeDefinition_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    xclrdata__MIDL_ProcFormatString.Format,
    (unsigned short *) &IXCLRDataTypeDefinition_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IXCLRDataTypeDefinition_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(35) _IXCLRDataTypeDefinitionProxyVtbl = 
{
    &IXCLRDataTypeDefinition_ProxyInfo,
    &IID_IXCLRDataTypeDefinition,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeDefinition::GetModule */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeDefinition::StartEnumMethodDefinitions */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeDefinition::EnumMethodDefinition */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeDefinition::EndEnumMethodDefinitions */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeDefinition::StartEnumMethodDefinitionsByName */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeDefinition::EnumMethodDefinitionByName */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeDefinition::EndEnumMethodDefinitionsByName */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeDefinition::GetMethodDefinitionByToken */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeDefinition::StartEnumInstances */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeDefinition::EnumInstance */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeDefinition::EndEnumInstances */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeDefinition::GetName */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeDefinition::GetTokenAndScope */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeDefinition::GetCorElementType */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeDefinition::GetFlags */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeDefinition::IsSameObject */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeDefinition::Request */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeDefinition::GetArrayRank */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeDefinition::GetBase */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeDefinition::GetNumFields */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeDefinition::StartEnumFields */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeDefinition::EnumField */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeDefinition::EndEnumFields */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeDefinition::StartEnumFieldsByName */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeDefinition::EnumFieldByName */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeDefinition::EndEnumFieldsByName */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeDefinition::GetFieldByToken */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeDefinition::GetTypeNotification */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeDefinition::SetTypeNotification */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeDefinition::EnumField2 */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeDefinition::EnumFieldByName2 */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeDefinition::GetFieldByToken2 */
};

const CInterfaceStubVtbl _IXCLRDataTypeDefinitionStubVtbl =
{
    &IID_IXCLRDataTypeDefinition,
    &IXCLRDataTypeDefinition_ServerInfo,
    35,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IXCLRDataTypeInstance, ver. 0.0,
   GUID={0x4D078D91,0x9CB3,0x4b0d,{0x97,0xAC,0x28,0xC8,0xA5,0xA8,0x25,0x97}} */

#pragma code_seg(".orpc")
static const FormatInfoRef IXCLRDataTypeInstance_Ndr64ProcTable[] =
    {
    &__midl_frag1618,
    &__midl_frag1134,
    &__midl_frag1725,
    &__midl_frag910,
    &__midl_frag1134,
    &__midl_frag1725,
    &__midl_frag1825,
    &__midl_frag931,
    &__midl_frag947,
    &__midl_frag1048,
    &__midl_frag1725,
    &__midl_frag1825,
    &__midl_frag1541,
    &__midl_frag1510,
    &__midl_frag985,
    &__midl_frag1123,
    &__midl_frag1825,
    &__midl_frag1864,
    &__midl_frag1661,
    &__midl_frag1016,
    &__midl_frag1021,
    &__midl_frag1048,
    &__midl_frag1725,
    &__midl_frag1038,
    &__midl_frag1048,
    &__midl_frag1725,
    &__midl_frag1058,
    &__midl_frag1745,
    &__midl_frag1781,
    &__midl_frag1799,
    &__midl_frag1107
    };


static const MIDL_SYNTAX_INFO IXCLRDataTypeInstance_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataTypeInstance_FormatStringOffsetTable[-3],
    xclrdata__MIDL_TypeFormatString.Format,
    0,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IXCLRDataTypeInstance_Ndr64ProcTable[-3],
    0,
    0,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IXCLRDataTypeInstance_ProxyInfo =
    {
    &Object_StubDesc,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataTypeInstance_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IXCLRDataTypeInstance_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IXCLRDataTypeInstance_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    xclrdata__MIDL_ProcFormatString.Format,
    (unsigned short *) &IXCLRDataTypeInstance_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IXCLRDataTypeInstance_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(34) _IXCLRDataTypeInstanceProxyVtbl = 
{
    &IXCLRDataTypeInstance_ProxyInfo,
    &IID_IXCLRDataTypeInstance,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeInstance::StartEnumMethodInstances */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeInstance::EnumMethodInstance */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeInstance::EndEnumMethodInstances */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeInstance::StartEnumMethodInstancesByName */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeInstance::EnumMethodInstanceByName */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeInstance::EndEnumMethodInstancesByName */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeInstance::GetNumStaticFields */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeInstance::GetStaticFieldByIndex */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeInstance::StartEnumStaticFieldsByName */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeInstance::EnumStaticFieldByName */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeInstance::EndEnumStaticFieldsByName */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeInstance::GetNumTypeArguments */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeInstance::GetTypeArgumentByIndex */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeInstance::GetName */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeInstance::GetModule */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeInstance::GetDefinition */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeInstance::GetFlags */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeInstance::IsSameObject */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeInstance::Request */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeInstance::GetNumStaticFields2 */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeInstance::StartEnumStaticFields */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeInstance::EnumStaticField */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeInstance::EndEnumStaticFields */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeInstance::StartEnumStaticFieldsByName2 */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeInstance::EnumStaticFieldByName2 */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeInstance::EndEnumStaticFieldsByName2 */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeInstance::GetStaticFieldByToken */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeInstance::GetBase */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeInstance::EnumStaticField2 */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeInstance::EnumStaticFieldByName3 */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTypeInstance::GetStaticFieldByToken2 */
};

const CInterfaceStubVtbl _IXCLRDataTypeInstanceStubVtbl =
{
    &IID_IXCLRDataTypeInstance,
    &IXCLRDataTypeInstance_ServerInfo,
    34,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_xclrdata_0000_0007, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IXCLRDataMethodDefinition, ver. 0.0,
   GUID={0xAAF60008,0xFB2C,0x420b,{0x8F,0xB1,0x42,0xD2,0x44,0xA5,0x4A,0x97}} */

#pragma code_seg(".orpc")
static const FormatInfoRef IXCLRDataMethodDefinition_Ndr64ProcTable[] =
    {
    &__midl_frag1123,
    &__midl_frag1128,
    &__midl_frag1134,
    &__midl_frag1725,
    &__midl_frag1510,
    &__midl_frag1223,
    &__midl_frag1825,
    &__midl_frag1164,
    &__midl_frag1825,
    &__midl_frag1618,
    &__midl_frag1176,
    &__midl_frag1725,
    &__midl_frag1825,
    &__midl_frag1844,
    &__midl_frag1661,
    &__midl_frag1618,
    &__midl_frag1825
    };


static const MIDL_SYNTAX_INFO IXCLRDataMethodDefinition_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataMethodDefinition_FormatStringOffsetTable[-3],
    xclrdata__MIDL_TypeFormatString.Format,
    0,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IXCLRDataMethodDefinition_Ndr64ProcTable[-3],
    0,
    0,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IXCLRDataMethodDefinition_ProxyInfo =
    {
    &Object_StubDesc,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataMethodDefinition_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IXCLRDataMethodDefinition_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IXCLRDataMethodDefinition_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    xclrdata__MIDL_ProcFormatString.Format,
    (unsigned short *) &IXCLRDataMethodDefinition_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IXCLRDataMethodDefinition_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(20) _IXCLRDataMethodDefinitionProxyVtbl = 
{
    &IXCLRDataMethodDefinition_ProxyInfo,
    &IID_IXCLRDataMethodDefinition,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IXCLRDataMethodDefinition::GetTypeDefinition */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataMethodDefinition::StartEnumInstances */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataMethodDefinition::EnumInstance */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataMethodDefinition::EndEnumInstances */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataMethodDefinition::GetName */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataMethodDefinition::GetTokenAndScope */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataMethodDefinition::GetFlags */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataMethodDefinition::IsSameObject */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataMethodDefinition::GetLatestEnCVersion */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataMethodDefinition::StartEnumExtents */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataMethodDefinition::EnumExtent */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataMethodDefinition::EndEnumExtents */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataMethodDefinition::GetCodeNotification */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataMethodDefinition::SetCodeNotification */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataMethodDefinition::Request */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataMethodDefinition::GetRepresentativeEntryAddress */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataMethodDefinition::HasClassOrMethodInstantiation */
};

const CInterfaceStubVtbl _IXCLRDataMethodDefinitionStubVtbl =
{
    &IID_IXCLRDataMethodDefinition,
    &IXCLRDataMethodDefinition_ServerInfo,
    20,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IXCLRDataMethodInstance, ver. 0.0,
   GUID={0xECD73800,0x22CA,0x4b0d,{0xAB,0x55,0xE9,0xBA,0x7E,0x63,0x18,0xA5}} */

#pragma code_seg(".orpc")
static const FormatInfoRef IXCLRDataMethodInstance_Ndr64ProcTable[] =
    {
    &__midl_frag1745,
    &__midl_frag1218,
    &__midl_frag1223,
    &__midl_frag1510,
    &__midl_frag1825,
    &__midl_frag1840,
    &__midl_frag1825,
    &__midl_frag1825,
    &__midl_frag1541,
    &__midl_frag1261,
    &__midl_frag1270,
    &__midl_frag1279,
    &__midl_frag1618,
    &__midl_frag1291,
    &__midl_frag1725,
    &__midl_frag1661,
    &__midl_frag1618
    };


static const MIDL_SYNTAX_INFO IXCLRDataMethodInstance_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataMethodInstance_FormatStringOffsetTable[-3],
    xclrdata__MIDL_TypeFormatString.Format,
    0,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IXCLRDataMethodInstance_Ndr64ProcTable[-3],
    0,
    0,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IXCLRDataMethodInstance_ProxyInfo =
    {
    &Object_StubDesc,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataMethodInstance_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IXCLRDataMethodInstance_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IXCLRDataMethodInstance_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    xclrdata__MIDL_ProcFormatString.Format,
    (unsigned short *) &IXCLRDataMethodInstance_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IXCLRDataMethodInstance_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(20) _IXCLRDataMethodInstanceProxyVtbl = 
{
    &IXCLRDataMethodInstance_ProxyInfo,
    &IID_IXCLRDataMethodInstance,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IXCLRDataMethodInstance::GetTypeInstance */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataMethodInstance::GetDefinition */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataMethodInstance::GetTokenAndScope */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataMethodInstance::GetName */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataMethodInstance::GetFlags */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataMethodInstance::IsSameObject */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataMethodInstance::GetEnCVersion */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataMethodInstance::GetNumTypeArguments */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataMethodInstance::GetTypeArgumentByIndex */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataMethodInstance::GetILOffsetsByAddress */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataMethodInstance::GetAddressRangesByILOffset */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataMethodInstance::GetILAddressMap */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataMethodInstance::StartEnumExtents */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataMethodInstance::EnumExtent */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataMethodInstance::EndEnumExtents */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataMethodInstance::Request */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataMethodInstance::GetRepresentativeEntryAddress */
};

const CInterfaceStubVtbl _IXCLRDataMethodInstanceStubVtbl =
{
    &IID_IXCLRDataMethodInstance,
    &IXCLRDataMethodInstance_ServerInfo,
    20,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_xclrdata_0000_0009, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IXCLRDataTask, ver. 0.0,
   GUID={0xA5B0BEEA,0xEC62,0x4618,{0x80,0x12,0xA2,0x4F,0xFC,0x23,0x93,0x4C}} */

#pragma code_seg(".orpc")
static const FormatInfoRef IXCLRDataTask_Ndr64ProcTable[] =
    {
    &__midl_frag1316,
    &__midl_frag1473,
    &__midl_frag1618,
    &__midl_frag1825,
    &__midl_frag1334,
    &__midl_frag1740,
    &__midl_frag1825,
    &__midl_frag1844,
    &__midl_frag1350,
    &__midl_frag1825,
    &__midl_frag1464,
    &__midl_frag1415,
    &__midl_frag1551,
    &__midl_frag1661,
    &__midl_frag1750,
    &__midl_frag1551
    };


static const MIDL_SYNTAX_INFO IXCLRDataTask_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataTask_FormatStringOffsetTable[-3],
    xclrdata__MIDL_TypeFormatString.Format,
    0,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IXCLRDataTask_Ndr64ProcTable[-3],
    0,
    0,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IXCLRDataTask_ProxyInfo =
    {
    &Object_StubDesc,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataTask_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IXCLRDataTask_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IXCLRDataTask_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    xclrdata__MIDL_ProcFormatString.Format,
    (unsigned short *) &IXCLRDataTask_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IXCLRDataTask_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(19) _IXCLRDataTaskProxyVtbl = 
{
    &IXCLRDataTask_ProxyInfo,
    &IID_IXCLRDataTask,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IXCLRDataTask::GetProcess */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTask::GetCurrentAppDomain */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTask::GetUniqueID */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTask::GetFlags */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTask::IsSameObject */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTask::GetManagedObject */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTask::GetDesiredExecutionState */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTask::SetDesiredExecutionState */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTask::CreateStackWalk */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTask::GetOSThreadID */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTask::GetContext */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTask::SetContext */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTask::GetCurrentExceptionState */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTask::Request */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTask::GetName */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataTask::GetLastExceptionState */
};

const CInterfaceStubVtbl _IXCLRDataTaskStubVtbl =
{
    &IID_IXCLRDataTask,
    &IXCLRDataTask_ServerInfo,
    19,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_xclrdata_0000_0010, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IXCLRDataStackWalk, ver. 0.0,
   GUID={0xE59D8D22,0xADA7,0x49a2,{0x89,0xB5,0xA4,0x15,0xAF,0xCF,0xC9,0x5F}} */

#pragma code_seg(".orpc")
static const FormatInfoRef IXCLRDataStackWalk_Ndr64ProcTable[] =
    {
    &__midl_frag1464,
    &__midl_frag1415,
    &__midl_frag1421,
    &__midl_frag1618,
    &__midl_frag1458,
    &__midl_frag1433,
    &__midl_frag1661,
    &__midl_frag1451
    };


static const MIDL_SYNTAX_INFO IXCLRDataStackWalk_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataStackWalk_FormatStringOffsetTable[-3],
    xclrdata__MIDL_TypeFormatString.Format,
    0,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IXCLRDataStackWalk_Ndr64ProcTable[-3],
    0,
    0,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IXCLRDataStackWalk_ProxyInfo =
    {
    &Object_StubDesc,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataStackWalk_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IXCLRDataStackWalk_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IXCLRDataStackWalk_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    xclrdata__MIDL_ProcFormatString.Format,
    (unsigned short *) &IXCLRDataStackWalk_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IXCLRDataStackWalk_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(11) _IXCLRDataStackWalkProxyVtbl = 
{
    &IXCLRDataStackWalk_ProxyInfo,
    &IID_IXCLRDataStackWalk,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IXCLRDataStackWalk::GetContext */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataStackWalk::SetContext */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataStackWalk::Next */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataStackWalk::GetStackSizeSkipped */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataStackWalk::GetFrameType */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataStackWalk::GetFrame */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataStackWalk::Request */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataStackWalk::SetContext2 */
};

const CInterfaceStubVtbl _IXCLRDataStackWalkStubVtbl =
{
    &IID_IXCLRDataStackWalk,
    &IXCLRDataStackWalk_ServerInfo,
    11,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IXCLRDataFrame, ver. 0.0,
   GUID={0x271498C2,0x4085,0x4766,{0xBC,0x3A,0x7F,0x8E,0xD1,0x88,0xA1,0x73}} */

#pragma code_seg(".orpc")
static const FormatInfoRef IXCLRDataFrame_Ndr64ProcTable[] =
    {
    &__midl_frag1458,
    &__midl_frag1464,
    &__midl_frag1473,
    &__midl_frag1825,
    &__midl_frag1728,
    &__midl_frag1825,
    &__midl_frag1728,
    &__midl_frag1510,
    &__midl_frag1519,
    &__midl_frag1661,
    &__midl_frag1825,
    &__midl_frag1541
    };


static const MIDL_SYNTAX_INFO IXCLRDataFrame_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataFrame_FormatStringOffsetTable[-3],
    xclrdata__MIDL_TypeFormatString.Format,
    0,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IXCLRDataFrame_Ndr64ProcTable[-3],
    0,
    0,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IXCLRDataFrame_ProxyInfo =
    {
    &Object_StubDesc,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataFrame_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IXCLRDataFrame_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IXCLRDataFrame_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    xclrdata__MIDL_ProcFormatString.Format,
    (unsigned short *) &IXCLRDataFrame_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IXCLRDataFrame_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(15) _IXCLRDataFrameProxyVtbl = 
{
    &IXCLRDataFrame_ProxyInfo,
    &IID_IXCLRDataFrame,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IXCLRDataFrame::GetFrameType */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataFrame::GetContext */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataFrame::GetAppDomain */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataFrame::GetNumArguments */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataFrame::GetArgumentByIndex */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataFrame::GetNumLocalVariables */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataFrame::GetLocalVariableByIndex */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataFrame::GetCodeName */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataFrame::GetMethodInstance */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataFrame::Request */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataFrame::GetNumTypeArguments */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataFrame::GetTypeArgumentByIndex */
};

const CInterfaceStubVtbl _IXCLRDataFrameStubVtbl =
{
    &IID_IXCLRDataFrame,
    &IXCLRDataFrame_ServerInfo,
    15,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_xclrdata_0000_0012, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IXCLRDataExceptionState, ver. 0.0,
   GUID={0x75DA9E4C,0xBD33,0x43C8,{0x8F,0x5C,0x96,0xE8,0xA5,0x24,0x1F,0x57}} */

#pragma code_seg(".orpc")
static const FormatInfoRef IXCLRDataExceptionState_Ndr64ProcTable[] =
    {
    &__midl_frag1825,
    &__midl_frag1551,
    &__midl_frag1740,
    &__midl_frag1825,
    &__midl_frag1825,
    &__midl_frag1750,
    &__midl_frag1661,
    &__midl_frag1590,
    &__midl_frag1597,
    &__midl_frag1605
    };


static const MIDL_SYNTAX_INFO IXCLRDataExceptionState_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataExceptionState_FormatStringOffsetTable[-3],
    xclrdata__MIDL_TypeFormatString.Format,
    0,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IXCLRDataExceptionState_Ndr64ProcTable[-3],
    0,
    0,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IXCLRDataExceptionState_ProxyInfo =
    {
    &Object_StubDesc,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataExceptionState_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IXCLRDataExceptionState_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IXCLRDataExceptionState_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    xclrdata__MIDL_ProcFormatString.Format,
    (unsigned short *) &IXCLRDataExceptionState_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IXCLRDataExceptionState_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(13) _IXCLRDataExceptionStateProxyVtbl = 
{
    &IXCLRDataExceptionState_ProxyInfo,
    &IID_IXCLRDataExceptionState,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IXCLRDataExceptionState::GetFlags */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataExceptionState::GetPrevious */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataExceptionState::GetManagedObject */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataExceptionState::GetBaseType */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataExceptionState::GetCode */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataExceptionState::GetString */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataExceptionState::Request */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataExceptionState::IsSameState */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataExceptionState::IsSameState2 */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataExceptionState::GetTask */
};

const CInterfaceStubVtbl _IXCLRDataExceptionStateStubVtbl =
{
    &IID_IXCLRDataExceptionState,
    &IXCLRDataExceptionState_ServerInfo,
    13,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_xclrdata_0000_0013, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IXCLRDataValue, ver. 0.0,
   GUID={0x96EC93C7,0x1000,0x4e93,{0x89,0x91,0x98,0xD8,0x76,0x6E,0x66,0x66}} */

#pragma code_seg(".orpc")
static const FormatInfoRef IXCLRDataValue_Ndr64ProcTable[] =
    {
    &__midl_frag1825,
    &__midl_frag1618,
    &__midl_frag1618,
    &__midl_frag1622,
    &__midl_frag1630,
    &__midl_frag1745,
    &__midl_frag1825,
    &__midl_frag1647,
    &__midl_frag1661,
    &__midl_frag1674,
    &__midl_frag1681,
    &__midl_frag1688,
    &__midl_frag1725,
    &__midl_frag1706,
    &__midl_frag1716,
    &__midl_frag1725,
    &__midl_frag1728,
    &__midl_frag1740,
    &__midl_frag1745,
    &__midl_frag1750,
    &__midl_frag1758,
    &__midl_frag1772,
    &__midl_frag1781,
    &__midl_frag1799,
    &__midl_frag1811,
    &__midl_frag1825,
    &__midl_frag1829
    };


static const MIDL_SYNTAX_INFO IXCLRDataValue_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataValue_FormatStringOffsetTable[-3],
    xclrdata__MIDL_TypeFormatString.Format,
    0,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IXCLRDataValue_Ndr64ProcTable[-3],
    0,
    0,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IXCLRDataValue_ProxyInfo =
    {
    &Object_StubDesc,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataValue_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IXCLRDataValue_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IXCLRDataValue_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    xclrdata__MIDL_ProcFormatString.Format,
    (unsigned short *) &IXCLRDataValue_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IXCLRDataValue_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(30) _IXCLRDataValueProxyVtbl = 
{
    &IXCLRDataValue_ProxyInfo,
    &IID_IXCLRDataValue,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IXCLRDataValue::GetFlags */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataValue::GetAddress */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataValue::GetSize */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataValue::GetBytes */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataValue::SetBytes */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataValue::GetType */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataValue::GetNumFields */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataValue::GetFieldByIndex */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataValue::Request */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataValue::GetNumFields2 */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataValue::StartEnumFields */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataValue::EnumField */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataValue::EndEnumFields */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataValue::StartEnumFieldsByName */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataValue::EnumFieldByName */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataValue::EndEnumFieldsByName */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataValue::GetFieldByToken */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataValue::GetAssociatedValue */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataValue::GetAssociatedType */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataValue::GetString */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataValue::GetArrayProperties */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataValue::GetArrayElement */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataValue::EnumField2 */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataValue::EnumFieldByName2 */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataValue::GetFieldByToken2 */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataValue::GetNumLocations */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataValue::GetLocationByIndex */
};

const CInterfaceStubVtbl _IXCLRDataValueStubVtbl =
{
    &IID_IXCLRDataValue,
    &IXCLRDataValue_ServerInfo,
    30,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IXCLRDataExceptionNotification, ver. 0.0,
   GUID={0x2D95A079,0x42A1,0x4837,{0x81,0x8F,0x0B,0x97,0xD7,0x04,0x8E,0x0E}} */

#pragma code_seg(".orpc")
static const FormatInfoRef IXCLRDataExceptionNotification_Ndr64ProcTable[] =
    {
    &__midl_frag1840,
    &__midl_frag1840,
    &__midl_frag1844,
    &__midl_frag1847,
    &__midl_frag1856,
    &__midl_frag1856,
    &__midl_frag1864,
    &__midl_frag1864
    };


static const MIDL_SYNTAX_INFO IXCLRDataExceptionNotification_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataExceptionNotification_FormatStringOffsetTable[-3],
    xclrdata__MIDL_TypeFormatString.Format,
    0,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IXCLRDataExceptionNotification_Ndr64ProcTable[-3],
    0,
    0,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IXCLRDataExceptionNotification_ProxyInfo =
    {
    &Object_StubDesc,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataExceptionNotification_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IXCLRDataExceptionNotification_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IXCLRDataExceptionNotification_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    xclrdata__MIDL_ProcFormatString.Format,
    (unsigned short *) &IXCLRDataExceptionNotification_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IXCLRDataExceptionNotification_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(11) _IXCLRDataExceptionNotificationProxyVtbl = 
{
    &IXCLRDataExceptionNotification_ProxyInfo,
    &IID_IXCLRDataExceptionNotification,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IXCLRDataExceptionNotification::OnCodeGenerated */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataExceptionNotification::OnCodeDiscarded */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataExceptionNotification::OnProcessExecution */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataExceptionNotification::OnTaskExecution */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataExceptionNotification::OnModuleLoaded */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataExceptionNotification::OnModuleUnloaded */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataExceptionNotification::OnTypeLoaded */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataExceptionNotification::OnTypeUnloaded */
};

const CInterfaceStubVtbl _IXCLRDataExceptionNotificationStubVtbl =
{
    &IID_IXCLRDataExceptionNotification,
    &IXCLRDataExceptionNotification_ServerInfo,
    11,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IXCLRDataExceptionNotification2, ver. 0.0,
   GUID={0x31201a94,0x4337,0x49b7,{0xae,0xf7,0x0c,0x75,0x50,0x54,0x09,0x1f}} */

#pragma code_seg(".orpc")
static const FormatInfoRef IXCLRDataExceptionNotification2_Ndr64ProcTable[] =
    {
    &__midl_frag1840,
    &__midl_frag1840,
    &__midl_frag1844,
    &__midl_frag1847,
    &__midl_frag1856,
    &__midl_frag1856,
    &__midl_frag1864,
    &__midl_frag1864,
    &__midl_frag1872,
    &__midl_frag1872,
    &__midl_frag1876
    };


static const MIDL_SYNTAX_INFO IXCLRDataExceptionNotification2_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataExceptionNotification2_FormatStringOffsetTable[-3],
    xclrdata__MIDL_TypeFormatString.Format,
    0,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IXCLRDataExceptionNotification2_Ndr64ProcTable[-3],
    0,
    0,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IXCLRDataExceptionNotification2_ProxyInfo =
    {
    &Object_StubDesc,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataExceptionNotification2_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IXCLRDataExceptionNotification2_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IXCLRDataExceptionNotification2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    xclrdata__MIDL_ProcFormatString.Format,
    (unsigned short *) &IXCLRDataExceptionNotification2_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IXCLRDataExceptionNotification2_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(14) _IXCLRDataExceptionNotification2ProxyVtbl = 
{
    &IXCLRDataExceptionNotification2_ProxyInfo,
    &IID_IXCLRDataExceptionNotification2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IXCLRDataExceptionNotification::OnCodeGenerated */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataExceptionNotification::OnCodeDiscarded */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataExceptionNotification::OnProcessExecution */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataExceptionNotification::OnTaskExecution */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataExceptionNotification::OnModuleLoaded */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataExceptionNotification::OnModuleUnloaded */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataExceptionNotification::OnTypeLoaded */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataExceptionNotification::OnTypeUnloaded */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataExceptionNotification2::OnAppDomainLoaded */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataExceptionNotification2::OnAppDomainUnloaded */ ,
    (void *) (INT_PTR) -1 /* IXCLRDataExceptionNotification2::OnException */
};

const CInterfaceStubVtbl _IXCLRDataExceptionNotification2StubVtbl =
{
    &IID_IXCLRDataExceptionNotification2,
    &IXCLRDataExceptionNotification2_ServerInfo,
    14,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    xclrdata__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x801026e, /* MIDL Version 8.1.622 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x2000001, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _xclrdata_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IXCLRDataMethodInstanceProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IXCLRDataAppDomainProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IXCLRDataMethodDefinitionProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IXCLRDataStackWalkProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IXCLRDataModuleProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IXCLRDataExceptionStateProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IXCLRDataTypeDefinitionProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IXCLRDataExceptionNotificationProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IXCLRDataAssemblyProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IXCLRDataTypeInstanceProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IXCLRDataExceptionNotification2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IXCLRDataProcessProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IXCLRDataFrameProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IXCLRDataValueProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IXCLRDataTarget3ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IXCLRDataTaskProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _xclrdata_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IXCLRDataMethodInstanceStubVtbl,
    ( CInterfaceStubVtbl *) &_IXCLRDataAppDomainStubVtbl,
    ( CInterfaceStubVtbl *) &_IXCLRDataMethodDefinitionStubVtbl,
    ( CInterfaceStubVtbl *) &_IXCLRDataStackWalkStubVtbl,
    ( CInterfaceStubVtbl *) &_IXCLRDataModuleStubVtbl,
    ( CInterfaceStubVtbl *) &_IXCLRDataExceptionStateStubVtbl,
    ( CInterfaceStubVtbl *) &_IXCLRDataTypeDefinitionStubVtbl,
    ( CInterfaceStubVtbl *) &_IXCLRDataExceptionNotificationStubVtbl,
    ( CInterfaceStubVtbl *) &_IXCLRDataAssemblyStubVtbl,
    ( CInterfaceStubVtbl *) &_IXCLRDataTypeInstanceStubVtbl,
    ( CInterfaceStubVtbl *) &_IXCLRDataExceptionNotification2StubVtbl,
    ( CInterfaceStubVtbl *) &_IXCLRDataProcessStubVtbl,
    ( CInterfaceStubVtbl *) &_IXCLRDataFrameStubVtbl,
    ( CInterfaceStubVtbl *) &_IXCLRDataValueStubVtbl,
    ( CInterfaceStubVtbl *) &_IXCLRDataTarget3StubVtbl,
    ( CInterfaceStubVtbl *) &_IXCLRDataTaskStubVtbl,
    0
};

PCInterfaceName const _xclrdata_InterfaceNamesList[] = 
{
    "IXCLRDataMethodInstance",
    "IXCLRDataAppDomain",
    "IXCLRDataMethodDefinition",
    "IXCLRDataStackWalk",
    "IXCLRDataModule",
    "IXCLRDataExceptionState",
    "IXCLRDataTypeDefinition",
    "IXCLRDataExceptionNotification",
    "IXCLRDataAssembly",
    "IXCLRDataTypeInstance",
    "IXCLRDataExceptionNotification2",
    "IXCLRDataProcess",
    "IXCLRDataFrame",
    "IXCLRDataValue",
    "IXCLRDataTarget3",
    "IXCLRDataTask",
    0
};

const IID *  const _xclrdata_BaseIIDList[] = 
{
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    &IID_ICLRDataTarget2,
    0,
    0
};


#define _xclrdata_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _xclrdata, pIID, n)

int __stdcall _xclrdata_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _xclrdata, 16, 8 )
    IID_BS_LOOKUP_NEXT_TEST( _xclrdata, 4 )
    IID_BS_LOOKUP_NEXT_TEST( _xclrdata, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _xclrdata, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _xclrdata, 16, *pIndex )
    
}

const ExtendedProxyFileInfo xclrdata_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _xclrdata_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _xclrdata_StubVtblList,
    (const PCInterfaceName * ) & _xclrdata_InterfaceNamesList,
    (const IID ** ) & _xclrdata_BaseIIDList,
    & _xclrdata_IID_Lookup, 
    16,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* defined(_M_AMD64)*/

