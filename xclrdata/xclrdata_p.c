

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Fri Jan 06 11:05:40 2012
 */
/* Compiler settings for xclrdata.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#if !defined(_M_IA64) && !defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif // __RPCPROXY_H_VERSION__


#include "xclrdata.h"

#define TYPE_FORMAT_STRING_SIZE   989                               
#define PROC_FORMAT_STRING_SIZE   11089                             
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


static RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


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



#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need a Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
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
/*  8 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 10 */	NdrFcShort( 0x6c ),	/* 108 */
/* 12 */	NdrFcShort( 0x24 ),	/* 36 */
/* 14 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xa,		/* 10 */
/* 16 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 18 */	NdrFcShort( 0x1 ),	/* 1 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter imagePath */

/* 24 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter imageTimestamp */

/* 30 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 32 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 34 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter imageSize */

/* 36 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 38 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 40 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter mvid */

/* 42 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 44 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 46 */	NdrFcShort( 0x10 ),	/* Type Offset=16 */

	/* Parameter mdRva */

/* 48 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 50 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 52 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter flags */

/* 54 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 56 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 58 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bufferSize */

/* 60 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 62 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 64 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter buffer */

/* 66 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 68 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 70 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Parameter dataSize */

/* 72 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 74 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 76 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 78 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 80 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 82 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Flush */

/* 84 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 86 */	NdrFcLong( 0x0 ),	/* 0 */
/* 90 */	NdrFcShort( 0x3 ),	/* 3 */
/* 92 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 94 */	NdrFcShort( 0x0 ),	/* 0 */
/* 96 */	NdrFcShort( 0x8 ),	/* 8 */
/* 98 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 100 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 106 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 108 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 110 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetAddress */


	/* Procedure StartEnumMethodDefinitions */


	/* Procedure StartEnumTasks */

/* 114 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 116 */	NdrFcLong( 0x0 ),	/* 0 */
/* 120 */	NdrFcShort( 0x4 ),	/* 4 */
/* 122 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 126 */	NdrFcShort( 0x2c ),	/* 44 */
/* 128 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 130 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 136 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter address */


	/* Parameter handle */


	/* Parameter handle */

/* 138 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 140 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 142 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 144 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 146 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 148 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumTask */

/* 150 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 152 */	NdrFcLong( 0x0 ),	/* 0 */
/* 156 */	NdrFcShort( 0x5 ),	/* 5 */
/* 158 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 160 */	NdrFcShort( 0x24 ),	/* 36 */
/* 162 */	NdrFcShort( 0x2c ),	/* 44 */
/* 164 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 166 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 172 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 174 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 176 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 178 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter task */

/* 180 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 182 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 184 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */

	/* Return value */

/* 186 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 188 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 190 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EndEnumInstances */


	/* Procedure EndEnumMethodDefinitions */


	/* Procedure EndEnumTasks */

/* 192 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 194 */	NdrFcLong( 0x0 ),	/* 0 */
/* 198 */	NdrFcShort( 0x6 ),	/* 6 */
/* 200 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 202 */	NdrFcShort( 0x10 ),	/* 16 */
/* 204 */	NdrFcShort( 0x8 ),	/* 8 */
/* 206 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 208 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 214 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */


	/* Parameter handle */


	/* Parameter handle */

/* 216 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 218 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 220 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 222 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 224 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 226 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTaskByOSThreadID */

/* 228 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 230 */	NdrFcLong( 0x0 ),	/* 0 */
/* 234 */	NdrFcShort( 0x7 ),	/* 7 */
/* 236 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 238 */	NdrFcShort( 0x8 ),	/* 8 */
/* 240 */	NdrFcShort( 0x8 ),	/* 8 */
/* 242 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 244 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 250 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter osThreadID */

/* 252 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 254 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 256 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter task */

/* 258 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 260 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 262 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */

	/* Return value */

/* 264 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 266 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 268 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTaskByUniqueID */

/* 270 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 272 */	NdrFcLong( 0x0 ),	/* 0 */
/* 276 */	NdrFcShort( 0x8 ),	/* 8 */
/* 278 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 280 */	NdrFcShort( 0x10 ),	/* 16 */
/* 282 */	NdrFcShort( 0x8 ),	/* 8 */
/* 284 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 286 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 292 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter taskID */

/* 294 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 296 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 298 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter task */

/* 300 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 302 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 304 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */

	/* Return value */

/* 306 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 308 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 310 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetNumFields */


	/* Procedure GetDesiredExecutionState */


	/* Procedure GetEnCVersion */


	/* Procedure GetFlags */


	/* Procedure GetNumStaticFields */


	/* Procedure GetFlags */

/* 312 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 314 */	NdrFcLong( 0x0 ),	/* 0 */
/* 318 */	NdrFcShort( 0x9 ),	/* 9 */
/* 320 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 324 */	NdrFcShort( 0x24 ),	/* 36 */
/* 326 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 328 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 334 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter numFields */


	/* Parameter state */


	/* Parameter version */


	/* Parameter flags */


	/* Parameter numFields */


	/* Parameter flags */

/* 336 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 338 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 340 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 342 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 344 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 346 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsSameObject */

/* 348 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 350 */	NdrFcLong( 0x0 ),	/* 0 */
/* 354 */	NdrFcShort( 0xa ),	/* 10 */
/* 356 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 360 */	NdrFcShort( 0x8 ),	/* 8 */
/* 362 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 364 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 370 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter process */

/* 372 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 374 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 376 */	NdrFcShort( 0x54 ),	/* Type Offset=84 */

	/* Return value */

/* 378 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 380 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetManagedObject */

/* 384 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 386 */	NdrFcLong( 0x0 ),	/* 0 */
/* 390 */	NdrFcShort( 0xb ),	/* 11 */
/* 392 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 396 */	NdrFcShort( 0x8 ),	/* 8 */
/* 398 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 400 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 406 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 408 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 410 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 412 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */

	/* Return value */

/* 414 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 416 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 418 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetOSThreadID */


	/* Procedure GetDesiredExecutionState */

/* 420 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 422 */	NdrFcLong( 0x0 ),	/* 0 */
/* 426 */	NdrFcShort( 0xc ),	/* 12 */
/* 428 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 432 */	NdrFcShort( 0x24 ),	/* 36 */
/* 434 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 436 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 442 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter id */


	/* Parameter state */

/* 444 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 446 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 448 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 450 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 452 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 454 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetDesiredExecutionState */

/* 456 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 458 */	NdrFcLong( 0x0 ),	/* 0 */
/* 462 */	NdrFcShort( 0xd ),	/* 13 */
/* 464 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 466 */	NdrFcShort( 0x8 ),	/* 8 */
/* 468 */	NdrFcShort( 0x8 ),	/* 8 */
/* 470 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 472 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 478 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter state */

/* 480 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 482 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 484 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 486 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 488 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 490 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetAddressType */

/* 492 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 494 */	NdrFcLong( 0x0 ),	/* 0 */
/* 498 */	NdrFcShort( 0xe ),	/* 14 */
/* 500 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 502 */	NdrFcShort( 0x10 ),	/* 16 */
/* 504 */	NdrFcShort( 0x22 ),	/* 34 */
/* 506 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 508 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 514 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter address */

/* 516 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 518 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 520 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter type */

/* 522 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 524 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 526 */	NdrFcShort( 0x7c ),	/* Type Offset=124 */

	/* Return value */

/* 528 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 530 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 532 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetRuntimeNameByAddress */

/* 534 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 536 */	NdrFcLong( 0x0 ),	/* 0 */
/* 540 */	NdrFcShort( 0xf ),	/* 15 */
/* 542 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 544 */	NdrFcShort( 0x20 ),	/* 32 */
/* 546 */	NdrFcShort( 0x48 ),	/* 72 */
/* 548 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x7,		/* 7 */
/* 550 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 552 */	NdrFcShort( 0x1 ),	/* 1 */
/* 554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 556 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter address */

/* 558 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 560 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 562 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter flags */

/* 564 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 566 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 568 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bufLen */

/* 570 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 572 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameLen */

/* 576 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 578 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 580 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameBuf */

/* 582 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 584 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 586 */	NdrFcShort( 0x80 ),	/* Type Offset=128 */

	/* Parameter displacement */

/* 588 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 590 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 592 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 594 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 596 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 598 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartEnumAppDomains */

/* 600 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 602 */	NdrFcLong( 0x0 ),	/* 0 */
/* 606 */	NdrFcShort( 0x10 ),	/* 16 */
/* 608 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 612 */	NdrFcShort( 0x2c ),	/* 44 */
/* 614 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 616 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 622 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 624 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 626 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 628 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 630 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 632 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 634 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumAppDomain */

/* 636 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 638 */	NdrFcLong( 0x0 ),	/* 0 */
/* 642 */	NdrFcShort( 0x11 ),	/* 17 */
/* 644 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 646 */	NdrFcShort( 0x24 ),	/* 36 */
/* 648 */	NdrFcShort( 0x2c ),	/* 44 */
/* 650 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 652 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 658 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 660 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 662 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 664 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter appDomain */

/* 666 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 668 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 670 */	NdrFcShort( 0x8c ),	/* Type Offset=140 */

	/* Return value */

/* 672 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 674 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 676 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EndEnumFieldsByName */


	/* Procedure EndEnumAppDomains */

/* 678 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 680 */	NdrFcLong( 0x0 ),	/* 0 */
/* 684 */	NdrFcShort( 0x12 ),	/* 18 */
/* 686 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 688 */	NdrFcShort( 0x10 ),	/* 16 */
/* 690 */	NdrFcShort( 0x8 ),	/* 8 */
/* 692 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 694 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 700 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */


	/* Parameter handle */

/* 702 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 704 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 706 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 708 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 710 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 712 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetAppDomainByUniqueID */

/* 714 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 716 */	NdrFcLong( 0x0 ),	/* 0 */
/* 720 */	NdrFcShort( 0x13 ),	/* 19 */
/* 722 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 724 */	NdrFcShort( 0x10 ),	/* 16 */
/* 726 */	NdrFcShort( 0x8 ),	/* 8 */
/* 728 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 730 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 734 */	NdrFcShort( 0x0 ),	/* 0 */
/* 736 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter id */

/* 738 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 740 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 742 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter appDomain */

/* 744 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 746 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 748 */	NdrFcShort( 0x8c ),	/* Type Offset=140 */

	/* Return value */

/* 750 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 752 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 754 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartEnumAssemblies */

/* 756 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 758 */	NdrFcLong( 0x0 ),	/* 0 */
/* 762 */	NdrFcShort( 0x14 ),	/* 20 */
/* 764 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 768 */	NdrFcShort( 0x2c ),	/* 44 */
/* 770 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 772 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 778 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 780 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 782 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 784 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 786 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 788 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 790 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumAssembly */

/* 792 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 794 */	NdrFcLong( 0x0 ),	/* 0 */
/* 798 */	NdrFcShort( 0x15 ),	/* 21 */
/* 800 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 802 */	NdrFcShort( 0x24 ),	/* 36 */
/* 804 */	NdrFcShort( 0x2c ),	/* 44 */
/* 806 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 808 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 814 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 816 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 818 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 820 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter assembly */

/* 822 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 824 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 826 */	NdrFcShort( 0xa2 ),	/* Type Offset=162 */

	/* Return value */

/* 828 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 830 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 832 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EndEnumAssemblies */

/* 834 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 836 */	NdrFcLong( 0x0 ),	/* 0 */
/* 840 */	NdrFcShort( 0x16 ),	/* 22 */
/* 842 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 844 */	NdrFcShort( 0x10 ),	/* 16 */
/* 846 */	NdrFcShort( 0x8 ),	/* 8 */
/* 848 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 850 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 856 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 858 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 860 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 862 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 864 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 866 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 868 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartEnumModules */

/* 870 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 872 */	NdrFcLong( 0x0 ),	/* 0 */
/* 876 */	NdrFcShort( 0x17 ),	/* 23 */
/* 878 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 882 */	NdrFcShort( 0x2c ),	/* 44 */
/* 884 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 886 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 892 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 894 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 896 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 898 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 900 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 902 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 904 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumModule */

/* 906 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 908 */	NdrFcLong( 0x0 ),	/* 0 */
/* 912 */	NdrFcShort( 0x18 ),	/* 24 */
/* 914 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 916 */	NdrFcShort( 0x24 ),	/* 36 */
/* 918 */	NdrFcShort( 0x2c ),	/* 44 */
/* 920 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 922 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 928 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 930 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 932 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 934 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter mod */

/* 936 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 938 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 940 */	NdrFcShort( 0xb8 ),	/* Type Offset=184 */

	/* Return value */

/* 942 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 944 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 946 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EndEnumStaticFields */


	/* Procedure EndEnumFields */


	/* Procedure EndEnumModules */

/* 948 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 950 */	NdrFcLong( 0x0 ),	/* 0 */
/* 954 */	NdrFcShort( 0x19 ),	/* 25 */
/* 956 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 958 */	NdrFcShort( 0x10 ),	/* 16 */
/* 960 */	NdrFcShort( 0x8 ),	/* 8 */
/* 962 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 964 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 970 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */


	/* Parameter handle */


	/* Parameter handle */

/* 972 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 974 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 976 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 978 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 980 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 982 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetModuleByAddress */

/* 984 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 986 */	NdrFcLong( 0x0 ),	/* 0 */
/* 990 */	NdrFcShort( 0x1a ),	/* 26 */
/* 992 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 994 */	NdrFcShort( 0x10 ),	/* 16 */
/* 996 */	NdrFcShort( 0x8 ),	/* 8 */
/* 998 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 1000 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1006 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter address */

/* 1008 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1010 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1012 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter mod */

/* 1014 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1016 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1018 */	NdrFcShort( 0xb8 ),	/* Type Offset=184 */

	/* Return value */

/* 1020 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1022 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1024 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartEnumMethodInstancesByAddress */

/* 1026 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1028 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1032 */	NdrFcShort( 0x1b ),	/* 27 */
/* 1034 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1036 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1038 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1040 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1042 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1048 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter address */

/* 1050 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1052 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1054 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter appDomain */

/* 1056 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1058 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1060 */	NdrFcShort( 0x90 ),	/* Type Offset=144 */

	/* Parameter handle */

/* 1062 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1064 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1066 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 1068 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1070 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1072 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumMethodInstanceByAddress */

/* 1074 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1076 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1080 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1082 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1084 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1086 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1088 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 1090 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1096 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 1098 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 1100 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1102 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter method */

/* 1104 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1106 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1108 */	NdrFcShort( 0xce ),	/* Type Offset=206 */

	/* Return value */

/* 1110 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1112 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1114 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EndEnumMethodInstancesByAddress */

/* 1116 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1118 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1122 */	NdrFcShort( 0x1d ),	/* 29 */
/* 1124 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1126 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1128 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1130 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1132 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1138 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 1140 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1142 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1144 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 1146 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1148 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1150 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetDataByAddress */

/* 1152 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1154 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1158 */	NdrFcShort( 0x1e ),	/* 30 */
/* 1160 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 1162 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1164 */	NdrFcShort( 0x48 ),	/* 72 */
/* 1166 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xa,		/* 10 */
/* 1168 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1170 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1174 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter address */

/* 1176 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1178 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1180 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter flags */

/* 1182 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1184 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1186 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter appDomain */

/* 1188 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1190 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1192 */	NdrFcShort( 0x90 ),	/* Type Offset=144 */

	/* Parameter tlsTask */

/* 1194 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1196 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1198 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */

	/* Parameter bufLen */

/* 1200 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1202 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1204 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameLen */

/* 1206 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1208 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1210 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameBuf */

/* 1212 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1214 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1216 */	NdrFcShort( 0xe4 ),	/* Type Offset=228 */

	/* Parameter value */

/* 1218 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1220 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 1222 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */

	/* Parameter displacement */

/* 1224 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1226 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1228 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 1230 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1232 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 1234 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetExceptionStateByExceptionRecord */

/* 1236 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1238 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1242 */	NdrFcShort( 0x1f ),	/* 31 */
/* 1244 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1246 */	NdrFcShort( 0xcc ),	/* 204 */
/* 1248 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1250 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 1252 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1258 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter record */

/* 1260 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 1262 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1264 */	NdrFcShort( 0xfa ),	/* Type Offset=250 */

	/* Parameter exState */

/* 1266 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1268 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1270 */	NdrFcShort( 0x10a ),	/* Type Offset=266 */

	/* Return value */

/* 1272 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1274 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1276 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TranslateExceptionRecordToNotification */

/* 1278 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1280 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1284 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1286 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1288 */	NdrFcShort( 0xcc ),	/* 204 */
/* 1290 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1292 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1294 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1300 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter record */

/* 1302 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 1304 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1306 */	NdrFcShort( 0xfa ),	/* Type Offset=250 */

	/* Parameter notify */

/* 1308 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1310 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1312 */	NdrFcShort( 0x120 ),	/* Type Offset=288 */

	/* Return value */

/* 1314 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1316 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1318 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Request */

/* 1320 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1322 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1326 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1328 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1330 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1332 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1334 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1336 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1338 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1340 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1342 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter reqCode */

/* 1344 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1346 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1348 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter inBufferSize */

/* 1350 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1352 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1354 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter inBuffer */

/* 1356 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1358 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1360 */	NdrFcShort( 0x136 ),	/* Type Offset=310 */

	/* Parameter outBufferSize */

/* 1362 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1364 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1366 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter outBuffer */

/* 1368 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 1370 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1372 */	NdrFcShort( 0x146 ),	/* Type Offset=326 */

	/* Return value */

/* 1374 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1376 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1378 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateMemoryValue */

/* 1380 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1382 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1386 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1388 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1390 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1392 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1394 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1396 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1402 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter appDomain */

/* 1404 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1406 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1408 */	NdrFcShort( 0x90 ),	/* Type Offset=144 */

	/* Parameter tlsTask */

/* 1410 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1412 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1414 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */

	/* Parameter type */

/* 1416 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1418 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1420 */	NdrFcShort( 0x152 ),	/* Type Offset=338 */

	/* Parameter addr */

/* 1422 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1424 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1426 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter value */

/* 1428 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1430 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1432 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */

	/* Return value */

/* 1434 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1436 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1438 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetAllTypeNotifications */

/* 1440 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1442 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1446 */	NdrFcShort( 0x23 ),	/* 35 */
/* 1448 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1450 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1452 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1454 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1456 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1462 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter mod */

/* 1464 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1466 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1468 */	NdrFcShort( 0xbc ),	/* Type Offset=188 */

	/* Parameter flags */

/* 1470 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1472 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1474 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1476 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1478 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1480 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetAllCodeNotifications */

/* 1482 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1484 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1488 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1490 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1492 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1494 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1496 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1498 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1504 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter mod */

/* 1506 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1508 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1510 */	NdrFcShort( 0xbc ),	/* Type Offset=188 */

	/* Parameter flags */

/* 1512 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1514 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1516 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1518 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1520 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1522 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTypeNotifications */

/* 1524 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1526 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1530 */	NdrFcShort( 0x25 ),	/* 37 */
/* 1532 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1534 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1536 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1538 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1540 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1542 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1544 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1546 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter numTokens */

/* 1548 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1550 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1552 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter mods */

/* 1554 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1556 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1558 */	NdrFcShort( 0x164 ),	/* Type Offset=356 */

	/* Parameter singleMod */

/* 1560 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1562 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1564 */	NdrFcShort( 0xbc ),	/* Type Offset=188 */

	/* Parameter tokens */

/* 1566 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1568 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1570 */	NdrFcShort( 0x17a ),	/* Type Offset=378 */

	/* Parameter flags */

/* 1572 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1574 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1576 */	NdrFcShort( 0x17a ),	/* Type Offset=378 */

	/* Return value */

/* 1578 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1580 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1582 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetTypeNotifications */

/* 1584 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1586 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1590 */	NdrFcShort( 0x26 ),	/* 38 */
/* 1592 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1594 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1596 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1598 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 1600 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1604 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1606 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter numTokens */

/* 1608 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1610 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1612 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter mods */

/* 1614 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1616 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1618 */	NdrFcShort( 0x164 ),	/* Type Offset=356 */

	/* Parameter singleMod */

/* 1620 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1622 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1624 */	NdrFcShort( 0xbc ),	/* Type Offset=188 */

	/* Parameter tokens */

/* 1626 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1628 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1630 */	NdrFcShort( 0x17a ),	/* Type Offset=378 */

	/* Parameter flags */

/* 1632 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1634 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1636 */	NdrFcShort( 0x17a ),	/* Type Offset=378 */

	/* Parameter singleFlags */

/* 1638 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1640 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1642 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1644 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1646 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1648 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCodeNotifications */

/* 1650 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1652 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1656 */	NdrFcShort( 0x27 ),	/* 39 */
/* 1658 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1660 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1662 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1664 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1666 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1668 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1670 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1672 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter numTokens */

/* 1674 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1676 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1678 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter mods */

/* 1680 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1682 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1684 */	NdrFcShort( 0x164 ),	/* Type Offset=356 */

	/* Parameter singleMod */

/* 1686 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1688 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1690 */	NdrFcShort( 0xbc ),	/* Type Offset=188 */

	/* Parameter tokens */

/* 1692 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1694 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1696 */	NdrFcShort( 0x17a ),	/* Type Offset=378 */

	/* Parameter flags */

/* 1698 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1700 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1702 */	NdrFcShort( 0x17a ),	/* Type Offset=378 */

	/* Return value */

/* 1704 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1706 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1708 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetCodeNotifications */

/* 1710 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1712 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1716 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1718 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1720 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1722 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1724 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 1726 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1730 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1732 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter numTokens */

/* 1734 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1736 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1738 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter mods */

/* 1740 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1742 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1744 */	NdrFcShort( 0x164 ),	/* Type Offset=356 */

	/* Parameter singleMod */

/* 1746 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1748 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1750 */	NdrFcShort( 0xbc ),	/* Type Offset=188 */

	/* Parameter tokens */

/* 1752 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1754 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1756 */	NdrFcShort( 0x17a ),	/* Type Offset=378 */

	/* Parameter flags */

/* 1758 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1760 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1762 */	NdrFcShort( 0x17a ),	/* Type Offset=378 */

	/* Parameter singleFlags */

/* 1764 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1766 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1768 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1770 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1772 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1774 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetOtherNotificationFlags */

/* 1776 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1778 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1782 */	NdrFcShort( 0x29 ),	/* 41 */
/* 1784 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1788 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1790 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1792 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1798 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter flags */

/* 1800 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1802 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1804 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1806 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1808 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1810 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetOtherNotificationFlags */

/* 1812 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1814 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1818 */	NdrFcShort( 0x2a ),	/* 42 */
/* 1820 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1822 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1824 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1826 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1828 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1832 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1834 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter flags */

/* 1836 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1838 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1840 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1842 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1844 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1846 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartEnumMethodDefinitionsByAddress */

/* 1848 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1850 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1854 */	NdrFcShort( 0x2b ),	/* 43 */
/* 1856 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1858 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1860 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1862 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1864 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1866 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1868 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1870 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter address */

/* 1872 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1874 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1876 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter handle */

/* 1878 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1880 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1882 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 1884 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1886 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1888 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumMethodDefinitionByAddress */

/* 1890 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1892 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1896 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1898 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1900 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1902 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1904 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 1906 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1908 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1910 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1912 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 1914 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 1916 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1918 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter method */

/* 1920 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1922 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1924 */	NdrFcShort( 0x186 ),	/* Type Offset=390 */

	/* Return value */

/* 1926 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1928 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1930 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EndEnumMethodDefinitionsByAddress */

/* 1932 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1934 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1938 */	NdrFcShort( 0x2d ),	/* 45 */
/* 1940 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1942 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1944 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1946 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1948 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1950 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1952 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1954 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 1956 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1958 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1960 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 1962 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1964 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1966 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FollowStub */

/* 1968 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1970 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1974 */	NdrFcShort( 0x2e ),	/* 46 */
/* 1976 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 1978 */	NdrFcShort( 0x8c ),	/* 140 */
/* 1980 */	NdrFcShort( 0xbc ),	/* 188 */
/* 1982 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x7,		/* 7 */
/* 1984 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1986 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1988 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1990 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter inFlags */

/* 1992 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1994 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1996 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter inAddr */

/* 1998 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2000 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2002 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter inBuffer */

/* 2004 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 2006 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2008 */	NdrFcShort( 0x1a6 ),	/* Type Offset=422 */

	/* Parameter outAddr */

/* 2010 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2012 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2014 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter outBuffer */

/* 2016 */	NdrFcShort( 0x112 ),	/* Flags:  must free, out, simple ref, */
/* 2018 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2020 */	NdrFcShort( 0x1a6 ),	/* Type Offset=422 */

	/* Parameter outFlags */

/* 2022 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2024 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2026 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2028 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2030 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2032 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FollowStub2 */

/* 2034 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2036 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2040 */	NdrFcShort( 0x2f ),	/* 47 */
/* 2042 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 2044 */	NdrFcShort( 0x8c ),	/* 140 */
/* 2046 */	NdrFcShort( 0xbc ),	/* 188 */
/* 2048 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 2050 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2056 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter task */

/* 2058 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2060 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2062 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */

	/* Parameter inFlags */

/* 2064 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2066 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2068 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter inAddr */

/* 2070 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2072 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2074 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter inBuffer */

/* 2076 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 2078 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2080 */	NdrFcShort( 0x1a6 ),	/* Type Offset=422 */

	/* Parameter outAddr */

/* 2082 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2084 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2086 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter outBuffer */

/* 2088 */	NdrFcShort( 0x112 ),	/* Flags:  must free, out, simple ref, */
/* 2090 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2092 */	NdrFcShort( 0x1a6 ),	/* Type Offset=422 */

	/* Parameter outFlags */

/* 2094 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2096 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2098 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2100 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2102 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 2104 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetProcess */

/* 2106 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2108 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2112 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2114 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2118 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2120 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2122 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2128 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter process */

/* 2130 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2132 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2134 */	NdrFcShort( 0x1b0 ),	/* Type Offset=432 */

	/* Return value */

/* 2136 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2138 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2140 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetName */

/* 2142 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2144 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2148 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2150 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2152 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2154 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2156 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 2158 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2160 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2164 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bufLen */

/* 2166 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2168 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2170 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameLen */

/* 2172 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2174 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2176 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter name */

/* 2178 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2180 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2182 */	NdrFcShort( 0x1b4 ),	/* Type Offset=436 */

	/* Return value */

/* 2184 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2186 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2188 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetSize */


	/* Procedure GetUniqueID */


	/* Procedure GetUniqueID */

/* 2190 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2192 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2196 */	NdrFcShort( 0x5 ),	/* 5 */
/* 2198 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2202 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2204 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2206 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2212 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter size */


	/* Parameter id */


	/* Parameter id */

/* 2214 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2216 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2218 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 2220 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2222 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2224 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetNumArguments */


	/* Procedure GetFlags */


	/* Procedure GetFlags */

/* 2226 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2228 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2232 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2234 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2238 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2240 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2242 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2248 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter numArgs */


	/* Parameter flags */


	/* Parameter flags */

/* 2250 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2252 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2254 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 2256 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2258 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2260 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsSameObject */

/* 2262 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2264 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2268 */	NdrFcShort( 0x7 ),	/* 7 */
/* 2270 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2274 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2276 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2278 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2284 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter appDomain */

/* 2286 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2288 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2290 */	NdrFcShort( 0x90 ),	/* Type Offset=144 */

	/* Return value */

/* 2292 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2294 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2296 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetManagedObject */

/* 2298 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2300 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2304 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2306 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2310 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2312 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2314 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2320 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 2322 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2324 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2326 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */

	/* Return value */

/* 2328 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2330 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2332 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Request */


	/* Procedure Request */


	/* Procedure Request */

/* 2334 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2336 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2340 */	NdrFcShort( 0x9 ),	/* 9 */
/* 2342 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2344 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2346 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2348 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 2350 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2352 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2354 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2356 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter reqCode */


	/* Parameter reqCode */


	/* Parameter reqCode */

/* 2358 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2360 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2362 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter inBufferSize */


	/* Parameter inBufferSize */


	/* Parameter inBufferSize */

/* 2364 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2366 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2368 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter inBuffer */


	/* Parameter inBuffer */


	/* Parameter inBuffer */

/* 2370 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2372 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2374 */	NdrFcShort( 0x136 ),	/* Type Offset=310 */

	/* Parameter outBufferSize */


	/* Parameter outBufferSize */


	/* Parameter outBufferSize */

/* 2376 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2378 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2380 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter outBuffer */


	/* Parameter outBuffer */


	/* Parameter outBuffer */

/* 2382 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 2384 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2386 */	NdrFcShort( 0x146 ),	/* Type Offset=326 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 2388 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2390 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2392 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartEnumMethodInstances */


	/* Procedure StartEnumAssemblies */


	/* Procedure StartEnumModules */

/* 2394 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2396 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2400 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2402 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2406 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2408 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2410 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2416 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */


	/* Parameter handle */


	/* Parameter handle */

/* 2418 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2420 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2422 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 2424 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2426 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2428 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumModule */

/* 2430 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2432 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2436 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2438 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2440 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2442 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2444 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 2446 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2452 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 2454 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 2456 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2458 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter mod */

/* 2460 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2462 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2464 */	NdrFcShort( 0xb8 ),	/* Type Offset=184 */

	/* Return value */

/* 2466 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2468 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2470 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EndEnumMethodInstances */


	/* Procedure EndEnumAssemblies */


	/* Procedure EndEnumModules */

/* 2472 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2474 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2478 */	NdrFcShort( 0x5 ),	/* 5 */
/* 2480 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2482 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2484 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2486 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2488 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2490 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2494 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */


	/* Parameter handle */


	/* Parameter handle */

/* 2496 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2498 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2500 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 2502 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2504 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2506 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetName */

/* 2508 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2510 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2514 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2516 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2518 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2520 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2522 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 2524 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2526 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2530 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bufLen */

/* 2532 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2534 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2536 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameLen */

/* 2538 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2540 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2542 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter name */

/* 2544 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2546 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2548 */	NdrFcShort( 0x1b4 ),	/* Type Offset=436 */

	/* Return value */

/* 2550 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2552 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2554 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFileName */

/* 2556 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2558 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2562 */	NdrFcShort( 0x7 ),	/* 7 */
/* 2564 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2566 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2568 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2570 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 2572 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2574 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2578 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bufLen */

/* 2580 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2582 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2584 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameLen */

/* 2586 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2588 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2590 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter name */

/* 2592 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2594 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2596 */	NdrFcShort( 0x1b4 ),	/* Type Offset=436 */

	/* Return value */

/* 2598 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2600 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2602 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetNumLocalVariables */


	/* Procedure GetFlags */

/* 2604 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2606 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2610 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2612 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2616 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2618 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2620 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2626 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter numLocals */


	/* Parameter flags */

/* 2628 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2630 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2632 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 2634 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2636 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2638 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsSameObject */

/* 2640 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2642 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2646 */	NdrFcShort( 0x9 ),	/* 9 */
/* 2648 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2652 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2654 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2656 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2662 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter assembly */

/* 2664 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2666 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2668 */	NdrFcShort( 0xa6 ),	/* Type Offset=166 */

	/* Return value */

/* 2670 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2672 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2674 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Request */

/* 2676 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2678 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2682 */	NdrFcShort( 0xa ),	/* 10 */
/* 2684 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2686 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2688 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2690 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 2692 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2694 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2696 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2698 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter reqCode */

/* 2700 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2702 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2704 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter inBufferSize */

/* 2706 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2708 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2710 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter inBuffer */

/* 2712 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2714 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2716 */	NdrFcShort( 0x136 ),	/* Type Offset=310 */

	/* Parameter outBufferSize */

/* 2718 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2720 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2722 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter outBuffer */

/* 2724 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 2726 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2728 */	NdrFcShort( 0x146 ),	/* Type Offset=326 */

	/* Return value */

/* 2730 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2732 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2734 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartEnumAppDomains */

/* 2736 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2738 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2742 */	NdrFcShort( 0xb ),	/* 11 */
/* 2744 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2748 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2750 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2752 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2758 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 2760 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2762 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2764 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 2766 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2768 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2770 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumAppDomain */

/* 2772 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2774 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2778 */	NdrFcShort( 0xc ),	/* 12 */
/* 2780 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2782 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2784 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2786 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 2788 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2794 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 2796 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 2798 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2800 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter appDomain */

/* 2802 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2804 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2806 */	NdrFcShort( 0x8c ),	/* Type Offset=140 */

	/* Return value */

/* 2808 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2810 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2812 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EndEnumStaticFieldsByName */


	/* Procedure EndEnumInstances */


	/* Procedure EndEnumAppDomains */

/* 2814 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2816 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2820 */	NdrFcShort( 0xd ),	/* 13 */
/* 2822 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2824 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2826 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2828 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2830 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2832 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2836 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */


	/* Parameter handle */


	/* Parameter handle */

/* 2838 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2840 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2842 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 2844 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2846 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2848 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetDisplayName */

/* 2850 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2852 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2856 */	NdrFcShort( 0xe ),	/* 14 */
/* 2858 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2860 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2862 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2864 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 2866 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2868 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2870 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2872 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bufLen */

/* 2874 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2876 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2878 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameLen */

/* 2880 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2882 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2884 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter name */

/* 2886 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2888 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2890 */	NdrFcShort( 0x1b4 ),	/* Type Offset=436 */

	/* Return value */

/* 2892 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2894 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2896 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumAssembly */

/* 2898 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2900 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2904 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2906 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2908 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2910 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2912 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 2914 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2916 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2920 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 2922 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 2924 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2926 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter assembly */

/* 2928 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2930 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2932 */	NdrFcShort( 0xa2 ),	/* Type Offset=162 */

	/* Return value */

/* 2934 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2936 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2938 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetStackSizeSkipped */


	/* Procedure StartEnumTypeDefinitions */

/* 2940 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2942 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2946 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2948 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2950 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2952 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2954 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2956 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2962 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter stackSizeSkipped */


	/* Parameter handle */

/* 2964 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2966 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2968 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 2970 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2972 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2974 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumTypeDefinition */

/* 2976 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2978 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2982 */	NdrFcShort( 0x7 ),	/* 7 */
/* 2984 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2986 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2988 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2990 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 2992 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2998 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 3000 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 3002 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3004 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter typeDefinition */

/* 3006 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3008 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3010 */	NdrFcShort( 0x1c0 ),	/* Type Offset=448 */

	/* Return value */

/* 3012 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3014 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3016 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EndEnumMethodInstancesByName */


	/* Procedure EndEnumTypeDefinitions */

/* 3018 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3020 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3024 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3026 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3028 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3030 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3032 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3034 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3040 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */


	/* Parameter handle */

/* 3042 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3044 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3046 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 3048 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3050 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3052 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartEnumTypeInstances */

/* 3054 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3056 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3060 */	NdrFcShort( 0x9 ),	/* 9 */
/* 3062 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3064 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3066 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3068 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3070 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3076 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter appDomain */

/* 3078 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3080 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3082 */	NdrFcShort( 0x90 ),	/* Type Offset=144 */

	/* Parameter handle */

/* 3084 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3086 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3088 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 3090 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3092 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3094 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumTypeInstance */

/* 3096 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3098 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3102 */	NdrFcShort( 0xa ),	/* 10 */
/* 3104 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3106 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3108 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3110 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3112 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3114 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3118 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 3120 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 3122 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3124 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter typeInstance */

/* 3126 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3128 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3130 */	NdrFcShort( 0x1d6 ),	/* Type Offset=470 */

	/* Return value */

/* 3132 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3134 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EndEnumTypeInstances */

/* 3138 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3140 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3144 */	NdrFcShort( 0xb ),	/* 11 */
/* 3146 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3148 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3150 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3152 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3154 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3160 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 3162 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3164 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3166 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 3168 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3170 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3172 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartEnumTypeDefinitionsByName */

/* 3174 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3176 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3180 */	NdrFcShort( 0xc ),	/* 12 */
/* 3182 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3184 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3186 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3188 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3190 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3196 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 3198 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3200 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3202 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter flags */

/* 3204 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3206 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3208 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter handle */

/* 3210 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3212 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3214 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 3216 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3218 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3220 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumTypeDefinitionByName */

/* 3222 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3224 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3228 */	NdrFcShort( 0xd ),	/* 13 */
/* 3230 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3232 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3234 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3236 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3238 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3244 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 3246 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 3248 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3250 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter type */

/* 3252 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3254 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3256 */	NdrFcShort( 0x1c0 ),	/* Type Offset=448 */

	/* Return value */

/* 3258 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3260 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3262 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EndEnumExtents */


	/* Procedure EndEnumTypeDefinitionsByName */

/* 3264 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3266 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3270 */	NdrFcShort( 0xe ),	/* 14 */
/* 3272 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3274 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3276 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3278 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3280 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3286 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */


	/* Parameter handle */

/* 3288 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3290 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3292 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 3294 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3296 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3298 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartEnumTypeInstancesByName */

/* 3300 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3302 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3306 */	NdrFcShort( 0xf ),	/* 15 */
/* 3308 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3310 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3312 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3314 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 3316 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3322 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 3324 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3326 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3328 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter flags */

/* 3330 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3332 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3334 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter appDomain */

/* 3336 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3338 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3340 */	NdrFcShort( 0x90 ),	/* Type Offset=144 */

	/* Parameter handle */

/* 3342 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3344 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3346 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 3348 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3350 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3352 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumTypeInstanceByName */

/* 3354 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3356 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3360 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3362 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3364 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3366 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3368 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3370 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3376 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 3378 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 3380 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3382 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter type */

/* 3384 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3386 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3388 */	NdrFcShort( 0x1d6 ),	/* Type Offset=470 */

	/* Return value */

/* 3390 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3392 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3394 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EndEnumExtents */


	/* Procedure EndEnumTypeInstancesByName */

/* 3396 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3398 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3402 */	NdrFcShort( 0x11 ),	/* 17 */
/* 3404 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3406 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3408 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3410 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3412 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3418 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */


	/* Parameter handle */

/* 3420 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3422 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3424 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 3426 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3428 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3430 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTypeDefinitionByToken */

/* 3432 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3434 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3438 */	NdrFcShort( 0x12 ),	/* 18 */
/* 3440 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3442 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3444 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3446 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3448 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3454 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter token */

/* 3456 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3458 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3460 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter typeDefinition */

/* 3462 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3464 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3466 */	NdrFcShort( 0x1c0 ),	/* Type Offset=448 */

	/* Return value */

/* 3468 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3470 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3472 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartEnumMethodDefinitionsByName */

/* 3474 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3476 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3480 */	NdrFcShort( 0x13 ),	/* 19 */
/* 3482 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3484 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3486 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3488 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3490 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3496 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 3498 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3500 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3502 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter flags */

/* 3504 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3506 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3508 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter handle */

/* 3510 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3512 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3514 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 3516 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3518 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3520 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumMethodDefinitionByName */

/* 3522 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3524 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3528 */	NdrFcShort( 0x14 ),	/* 20 */
/* 3530 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3532 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3534 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3536 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3538 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3544 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 3546 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 3548 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3550 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter method */

/* 3552 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3554 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3556 */	NdrFcShort( 0x186 ),	/* Type Offset=390 */

	/* Return value */

/* 3558 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3560 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3562 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EndEnumMethodDefinitionsByName */

/* 3564 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3566 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3570 */	NdrFcShort( 0x15 ),	/* 21 */
/* 3572 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3574 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3576 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3578 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3580 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3586 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 3588 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3590 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3592 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 3594 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3596 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3598 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartEnumMethodInstancesByName */

/* 3600 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3602 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3606 */	NdrFcShort( 0x16 ),	/* 22 */
/* 3608 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3610 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3612 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3614 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 3616 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3622 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 3624 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3626 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3628 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter flags */

/* 3630 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3632 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3634 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter appDomain */

/* 3636 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3638 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3640 */	NdrFcShort( 0x90 ),	/* Type Offset=144 */

	/* Parameter handle */

/* 3642 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3644 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3646 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 3648 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3650 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3652 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumMethodInstanceByName */

/* 3654 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3656 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3660 */	NdrFcShort( 0x17 ),	/* 23 */
/* 3662 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3664 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3666 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3668 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3670 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3676 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 3678 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 3680 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3682 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter method */

/* 3684 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3686 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3688 */	NdrFcShort( 0xce ),	/* Type Offset=206 */

	/* Return value */

/* 3690 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3692 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3694 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EndEnumMethodInstancesByName */

/* 3696 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3698 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3702 */	NdrFcShort( 0x18 ),	/* 24 */
/* 3704 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3706 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3708 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3710 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3712 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3718 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 3720 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3722 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3724 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 3726 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3728 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3730 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetMethodDefinitionByToken */

/* 3732 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3734 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3738 */	NdrFcShort( 0x19 ),	/* 25 */
/* 3740 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3742 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3744 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3746 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3748 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3752 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3754 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter token */

/* 3756 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3758 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3760 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter methodDefinition */

/* 3762 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3764 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3766 */	NdrFcShort( 0x186 ),	/* Type Offset=390 */

	/* Return value */

/* 3768 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3770 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3772 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartEnumDataByName */

/* 3774 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3776 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3780 */	NdrFcShort( 0x1a ),	/* 26 */
/* 3782 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 3784 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3786 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3788 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 3790 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3796 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 3798 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3800 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3802 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter flags */

/* 3804 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3806 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3808 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter appDomain */

/* 3810 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3812 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3814 */	NdrFcShort( 0x90 ),	/* Type Offset=144 */

	/* Parameter tlsTask */

/* 3816 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3818 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3820 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */

	/* Parameter handle */

/* 3822 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3824 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3826 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 3828 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3830 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3832 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumDataByName */

/* 3834 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3836 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3840 */	NdrFcShort( 0x1b ),	/* 27 */
/* 3842 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3844 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3846 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3848 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3850 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3856 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 3858 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 3860 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3862 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter value */

/* 3864 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3866 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3868 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */

	/* Return value */

/* 3870 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3872 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3874 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EndEnumStaticFieldsByName2 */


	/* Procedure EndEnumFieldsByName */


	/* Procedure EndEnumDataByName */

/* 3876 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3878 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3882 */	NdrFcShort( 0x1c ),	/* 28 */
/* 3884 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3886 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3888 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3890 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3892 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3898 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */


	/* Parameter handle */


	/* Parameter handle */

/* 3900 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3902 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3904 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 3906 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3908 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3910 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetName */

/* 3912 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3914 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3918 */	NdrFcShort( 0x1d ),	/* 29 */
/* 3920 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3922 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3924 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3926 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 3928 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3930 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3932 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3934 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bufLen */

/* 3936 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3938 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3940 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameLen */

/* 3942 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3944 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3946 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter name */

/* 3948 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3950 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3952 */	NdrFcShort( 0x1b4 ),	/* Type Offset=436 */

	/* Return value */

/* 3954 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3956 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3958 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFileName */

/* 3960 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3962 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3966 */	NdrFcShort( 0x1e ),	/* 30 */
/* 3968 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3970 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3972 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3974 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 3976 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3978 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3980 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3982 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bufLen */

/* 3984 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3986 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3988 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameLen */

/* 3990 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3992 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3994 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter name */

/* 3996 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3998 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4000 */	NdrFcShort( 0x1b4 ),	/* Type Offset=436 */

	/* Return value */

/* 4002 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4004 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4006 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFlags */

/* 4008 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4010 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4014 */	NdrFcShort( 0x1f ),	/* 31 */
/* 4016 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4018 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4020 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4022 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4024 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4028 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4030 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter flags */

/* 4032 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4034 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4036 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4038 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4040 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4042 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsSameObject */

/* 4044 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4046 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4050 */	NdrFcShort( 0x20 ),	/* 32 */
/* 4052 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4056 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4058 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 4060 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4062 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4064 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4066 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter mod */

/* 4068 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4070 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4072 */	NdrFcShort( 0xbc ),	/* Type Offset=188 */

	/* Return value */

/* 4074 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4076 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4078 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartEnumExtents */

/* 4080 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4082 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4086 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4088 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4092 */	NdrFcShort( 0x2c ),	/* 44 */
/* 4094 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4096 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4098 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4102 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 4104 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4106 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4108 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 4110 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4112 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4114 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumExtent */

/* 4116 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4118 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4122 */	NdrFcShort( 0x22 ),	/* 34 */
/* 4124 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4126 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4128 */	NdrFcShort( 0x2c ),	/* 44 */
/* 4130 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 4132 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4138 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 4140 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 4142 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4144 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter extent */

/* 4146 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 4148 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4150 */	NdrFcShort( 0x1de ),	/* Type Offset=478 */

	/* Return value */

/* 4152 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4154 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4156 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EndEnumExtents */

/* 4158 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4160 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4164 */	NdrFcShort( 0x23 ),	/* 35 */
/* 4166 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4168 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4170 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4172 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4174 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4180 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 4182 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4184 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4186 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 4188 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4190 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4192 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Request */

/* 4194 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4196 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4200 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4202 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 4204 */	NdrFcShort( 0x18 ),	/* 24 */
/* 4206 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4208 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 4210 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 4212 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4214 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4216 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter reqCode */

/* 4218 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4220 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4222 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter inBufferSize */

/* 4224 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4226 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4228 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter inBuffer */

/* 4230 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4232 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4234 */	NdrFcShort( 0x136 ),	/* Type Offset=310 */

	/* Parameter outBufferSize */

/* 4236 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4238 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4240 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter outBuffer */

/* 4242 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 4244 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4246 */	NdrFcShort( 0x146 ),	/* Type Offset=326 */

	/* Return value */

/* 4248 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4250 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4252 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartEnumAppDomains */

/* 4254 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4256 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4260 */	NdrFcShort( 0x25 ),	/* 37 */
/* 4262 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4266 */	NdrFcShort( 0x2c ),	/* 44 */
/* 4268 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4270 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4274 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4276 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 4278 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4280 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4282 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 4284 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4286 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4288 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumAppDomain */

/* 4290 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4292 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4296 */	NdrFcShort( 0x26 ),	/* 38 */
/* 4298 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4300 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4302 */	NdrFcShort( 0x2c ),	/* 44 */
/* 4304 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 4306 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4312 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 4314 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 4316 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4318 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter appDomain */

/* 4320 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4322 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4324 */	NdrFcShort( 0x8c ),	/* Type Offset=140 */

	/* Return value */

/* 4326 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4328 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4330 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EndEnumAppDomains */

/* 4332 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4334 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4338 */	NdrFcShort( 0x27 ),	/* 39 */
/* 4340 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4342 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4344 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4346 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4348 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4354 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 4356 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4358 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4360 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 4362 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4364 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4366 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetVersionId */

/* 4368 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4370 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4374 */	NdrFcShort( 0x28 ),	/* 40 */
/* 4376 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4378 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4380 */	NdrFcShort( 0x4c ),	/* 76 */
/* 4382 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4384 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4388 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4390 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter vid */

/* 4392 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 4394 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4396 */	NdrFcShort( 0x10 ),	/* Type Offset=16 */

	/* Return value */

/* 4398 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4400 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4402 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetModule */

/* 4404 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4406 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4410 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4412 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4416 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4418 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4420 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4426 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter mod */

/* 4428 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4430 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4432 */	NdrFcShort( 0xb8 ),	/* Type Offset=184 */

	/* Return value */

/* 4434 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4436 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4438 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumMethodDefinition */

/* 4440 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4442 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4446 */	NdrFcShort( 0x5 ),	/* 5 */
/* 4448 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4450 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4452 */	NdrFcShort( 0x2c ),	/* 44 */
/* 4454 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 4456 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4462 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 4464 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 4466 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4468 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter methodDefinition */

/* 4470 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4472 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4474 */	NdrFcShort( 0x186 ),	/* Type Offset=390 */

	/* Return value */

/* 4476 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4478 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4480 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartEnumMethodDefinitionsByName */

/* 4482 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4484 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4488 */	NdrFcShort( 0x7 ),	/* 7 */
/* 4490 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4492 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4494 */	NdrFcShort( 0x2c ),	/* 44 */
/* 4496 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4498 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4504 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 4506 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4508 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4510 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter flags */

/* 4512 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4514 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4516 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter handle */

/* 4518 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4520 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4522 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 4524 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4526 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4528 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumMethodDefinitionByName */

/* 4530 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4532 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4536 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4538 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4540 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4542 */	NdrFcShort( 0x2c ),	/* 44 */
/* 4544 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 4546 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4552 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 4554 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 4556 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4558 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter method */

/* 4560 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4562 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4564 */	NdrFcShort( 0x186 ),	/* Type Offset=390 */

	/* Return value */

/* 4566 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4568 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4570 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EndEnumMethodDefinitionsByName */

/* 4572 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4574 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4578 */	NdrFcShort( 0x9 ),	/* 9 */
/* 4580 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4582 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4584 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4586 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4588 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4594 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 4596 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4598 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4600 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 4602 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4604 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4606 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetMethodDefinitionByToken */

/* 4608 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4610 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4614 */	NdrFcShort( 0xa ),	/* 10 */
/* 4616 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4618 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4620 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4622 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 4624 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4630 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter token */

/* 4632 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4634 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4636 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter methodDefinition */

/* 4638 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4640 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4642 */	NdrFcShort( 0x186 ),	/* Type Offset=390 */

	/* Return value */

/* 4644 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4646 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4648 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartEnumInstances */

/* 4650 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4652 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4656 */	NdrFcShort( 0xb ),	/* 11 */
/* 4658 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4662 */	NdrFcShort( 0x2c ),	/* 44 */
/* 4664 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4666 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4672 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter appDomain */

/* 4674 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4676 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4678 */	NdrFcShort( 0x90 ),	/* Type Offset=144 */

	/* Parameter handle */

/* 4680 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4682 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4684 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 4686 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4688 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4690 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumInstance */

/* 4692 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4694 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4698 */	NdrFcShort( 0xc ),	/* 12 */
/* 4700 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4702 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4704 */	NdrFcShort( 0x2c ),	/* 44 */
/* 4706 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 4708 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4714 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 4716 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 4718 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4720 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter instance */

/* 4722 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4724 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4726 */	NdrFcShort( 0x1d6 ),	/* Type Offset=470 */

	/* Return value */

/* 4728 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4730 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4732 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetName */

/* 4734 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4736 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4740 */	NdrFcShort( 0xe ),	/* 14 */
/* 4742 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4744 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4746 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4748 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 4750 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4752 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4756 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter flags */

/* 4758 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4760 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4762 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bufLen */

/* 4764 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4766 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4768 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameLen */

/* 4770 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4772 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4774 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameBuf */

/* 4776 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4778 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4780 */	NdrFcShort( 0x1ee ),	/* Type Offset=494 */

	/* Return value */

/* 4782 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4784 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4786 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTokenAndScope */

/* 4788 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4790 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4794 */	NdrFcShort( 0xf ),	/* 15 */
/* 4796 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4800 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4802 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 4804 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4810 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter token */

/* 4812 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4814 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4816 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter mod */

/* 4818 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4820 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4822 */	NdrFcShort( 0xb8 ),	/* Type Offset=184 */

	/* Return value */

/* 4824 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4826 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4828 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCorElementType */

/* 4830 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4832 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4836 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4838 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4842 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4844 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4846 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4852 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter type */

/* 4854 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4856 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4858 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4860 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4862 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4864 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFlags */

/* 4866 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4868 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4872 */	NdrFcShort( 0x11 ),	/* 17 */
/* 4874 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4878 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4880 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4882 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4888 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter flags */

/* 4890 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4892 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4894 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4896 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4898 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4900 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsSameObject */

/* 4902 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4904 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4908 */	NdrFcShort( 0x12 ),	/* 18 */
/* 4910 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4914 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4916 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 4918 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4924 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter type */

/* 4926 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4928 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4930 */	NdrFcShort( 0x1c4 ),	/* Type Offset=452 */

	/* Return value */

/* 4932 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4934 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4936 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Request */

/* 4938 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4940 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4944 */	NdrFcShort( 0x13 ),	/* 19 */
/* 4946 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 4948 */	NdrFcShort( 0x18 ),	/* 24 */
/* 4950 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4952 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 4954 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 4956 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4958 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4960 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter reqCode */

/* 4962 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4964 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4966 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter inBufferSize */

/* 4968 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4970 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4972 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter inBuffer */

/* 4974 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4976 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4978 */	NdrFcShort( 0x136 ),	/* Type Offset=310 */

	/* Parameter outBufferSize */

/* 4980 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4982 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4984 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter outBuffer */

/* 4986 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 4988 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4990 */	NdrFcShort( 0x146 ),	/* Type Offset=326 */

	/* Return value */

/* 4992 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4994 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4996 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetArrayRank */

/* 4998 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5000 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5004 */	NdrFcShort( 0x14 ),	/* 20 */
/* 5006 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5010 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5012 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5014 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5016 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5018 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5020 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter rank */

/* 5022 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5024 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5026 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5028 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5030 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5032 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetBase */

/* 5034 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5036 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5040 */	NdrFcShort( 0x15 ),	/* 21 */
/* 5042 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5046 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5048 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5050 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5056 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter base */

/* 5058 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5060 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5062 */	NdrFcShort( 0x1c0 ),	/* Type Offset=448 */

	/* Return value */

/* 5064 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5066 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5068 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetNumStaticFields2 */


	/* Procedure GetNumFields */

/* 5070 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5072 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5076 */	NdrFcShort( 0x16 ),	/* 22 */
/* 5078 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5080 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5082 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5084 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 5086 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5088 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5092 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter flags */


	/* Parameter flags */

/* 5094 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5096 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5098 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter numFields */


	/* Parameter numFields */

/* 5100 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5102 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5104 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 5106 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5108 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5110 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartEnumFields */

/* 5112 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5114 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5118 */	NdrFcShort( 0x17 ),	/* 23 */
/* 5120 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5122 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5124 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5126 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 5128 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5134 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter flags */

/* 5136 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5138 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5140 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter handle */

/* 5142 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5144 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5146 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 5148 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5150 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5152 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumField */

/* 5154 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5156 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5160 */	NdrFcShort( 0x18 ),	/* 24 */
/* 5162 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 5164 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5166 */	NdrFcShort( 0x80 ),	/* 128 */
/* 5168 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x8,		/* 8 */
/* 5170 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 5172 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5176 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 5178 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 5180 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5182 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter nameBufLen */

/* 5184 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5186 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5188 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameLen */

/* 5190 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5192 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5194 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameBuf */

/* 5196 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5198 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5200 */	NdrFcShort( 0x1ee ),	/* Type Offset=494 */

	/* Parameter type */

/* 5202 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5204 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5206 */	NdrFcShort( 0x1c0 ),	/* Type Offset=448 */

	/* Parameter flags */

/* 5208 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5210 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5212 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter token */

/* 5214 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5216 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 5218 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5220 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5222 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 5224 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartEnumFieldsByName */

/* 5226 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5228 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5232 */	NdrFcShort( 0x1a ),	/* 26 */
/* 5234 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5236 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5238 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5240 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 5242 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5248 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 5250 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5252 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5254 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter nameFlags */

/* 5256 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5258 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5260 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fieldFlags */

/* 5262 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5264 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5266 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter handle */

/* 5268 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5270 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5272 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 5274 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5276 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5278 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumFieldByName */

/* 5280 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5282 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5286 */	NdrFcShort( 0x1b ),	/* 27 */
/* 5288 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5290 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5292 */	NdrFcShort( 0x64 ),	/* 100 */
/* 5294 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 5296 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5302 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 5304 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 5306 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5308 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter type */

/* 5310 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5312 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5314 */	NdrFcShort( 0x1c0 ),	/* Type Offset=448 */

	/* Parameter flags */

/* 5316 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5318 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5320 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter token */

/* 5322 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5324 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5326 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5328 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5330 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5332 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFieldByToken */

/* 5334 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5336 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5340 */	NdrFcShort( 0x1d ),	/* 29 */
/* 5342 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 5344 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5346 */	NdrFcShort( 0x40 ),	/* 64 */
/* 5348 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x7,		/* 7 */
/* 5350 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 5352 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5356 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter token */

/* 5358 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5360 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5362 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameBufLen */

/* 5364 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5366 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5368 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameLen */

/* 5370 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5372 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5374 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameBuf */

/* 5376 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5378 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5380 */	NdrFcShort( 0x1ee ),	/* Type Offset=494 */

	/* Parameter type */

/* 5382 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5384 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5386 */	NdrFcShort( 0x1c0 ),	/* Type Offset=448 */

	/* Parameter flags */

/* 5388 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5390 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5392 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5394 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5396 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 5398 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTypeNotification */

/* 5400 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5402 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5406 */	NdrFcShort( 0x1e ),	/* 30 */
/* 5408 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5412 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5414 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5416 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5422 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter flags */

/* 5424 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5426 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5428 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5430 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5432 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5434 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetTypeNotification */

/* 5436 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5438 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5442 */	NdrFcShort( 0x1f ),	/* 31 */
/* 5444 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5446 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5448 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5450 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5452 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5458 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter flags */

/* 5460 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5462 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5464 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5466 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5468 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5470 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumField2 */

/* 5472 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5474 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5478 */	NdrFcShort( 0x20 ),	/* 32 */
/* 5480 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 5482 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5484 */	NdrFcShort( 0x80 ),	/* 128 */
/* 5486 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x9,		/* 9 */
/* 5488 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 5490 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5494 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 5496 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 5498 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5500 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter nameBufLen */

/* 5502 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5504 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5506 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameLen */

/* 5508 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5510 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5512 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameBuf */

/* 5514 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5516 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5518 */	NdrFcShort( 0x1ee ),	/* Type Offset=494 */

	/* Parameter type */

/* 5520 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5522 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5524 */	NdrFcShort( 0x1c0 ),	/* Type Offset=448 */

	/* Parameter flags */

/* 5526 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5528 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5530 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter tokenScope */

/* 5532 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5534 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 5536 */	NdrFcShort( 0xb8 ),	/* Type Offset=184 */

	/* Parameter token */

/* 5538 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5540 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 5542 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5544 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5546 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 5548 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumFieldByName2 */

/* 5550 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5552 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5556 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5558 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 5560 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5562 */	NdrFcShort( 0x64 ),	/* 100 */
/* 5564 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x6,		/* 6 */
/* 5566 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5572 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 5574 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 5576 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5578 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter type */

/* 5580 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5582 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5584 */	NdrFcShort( 0x1c0 ),	/* Type Offset=448 */

	/* Parameter flags */

/* 5586 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5588 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5590 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter tokenScope */

/* 5592 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5594 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5596 */	NdrFcShort( 0xb8 ),	/* Type Offset=184 */

	/* Parameter token */

/* 5598 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5600 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5602 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5604 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5606 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5608 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFieldByToken2 */

/* 5610 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5612 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5616 */	NdrFcShort( 0x22 ),	/* 34 */
/* 5618 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 5620 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5622 */	NdrFcShort( 0x40 ),	/* 64 */
/* 5624 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 5626 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 5628 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5632 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter tokenScope */

/* 5634 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5636 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5638 */	NdrFcShort( 0xbc ),	/* Type Offset=188 */

	/* Parameter token */

/* 5640 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5642 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5644 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameBufLen */

/* 5646 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5648 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5650 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameLen */

/* 5652 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5654 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5656 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameBuf */

/* 5658 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5660 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5662 */	NdrFcShort( 0x1fa ),	/* Type Offset=506 */

	/* Parameter type */

/* 5664 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5666 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5668 */	NdrFcShort( 0x1c0 ),	/* Type Offset=448 */

	/* Parameter flags */

/* 5670 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5672 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 5674 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5676 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5678 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 5680 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumMethodInstance */

/* 5682 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5684 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5688 */	NdrFcShort( 0x4 ),	/* 4 */
/* 5690 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5692 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5694 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5696 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 5698 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5700 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5704 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 5706 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 5708 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5710 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter methodInstance */

/* 5712 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5714 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5716 */	NdrFcShort( 0x206 ),	/* Type Offset=518 */

	/* Return value */

/* 5718 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5720 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5722 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartEnumMethodInstancesByName */

/* 5724 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5726 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5730 */	NdrFcShort( 0x6 ),	/* 6 */
/* 5732 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5734 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5736 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5738 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5740 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5746 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 5748 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5750 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5752 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter flags */

/* 5754 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5756 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5758 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter handle */

/* 5760 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5762 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5764 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 5766 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5768 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5770 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumMethodInstanceByName */

/* 5772 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5774 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5778 */	NdrFcShort( 0x7 ),	/* 7 */
/* 5780 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5782 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5784 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5786 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 5788 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5794 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 5796 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 5798 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5800 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter method */

/* 5802 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5804 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5806 */	NdrFcShort( 0x206 ),	/* Type Offset=518 */

	/* Return value */

/* 5808 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5810 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5812 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetStaticFieldByIndex */

/* 5814 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5816 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5820 */	NdrFcShort( 0xa ),	/* 10 */
/* 5822 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 5824 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5826 */	NdrFcShort( 0x40 ),	/* 64 */
/* 5828 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 5830 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 5832 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5836 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 5838 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5840 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5842 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter tlsTask */

/* 5844 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5846 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5848 */	NdrFcShort( 0x21c ),	/* Type Offset=540 */

	/* Parameter field */

/* 5850 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5852 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5854 */	NdrFcShort( 0x22e ),	/* Type Offset=558 */

	/* Parameter bufLen */

/* 5856 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5858 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5860 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameLen */

/* 5862 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5864 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5866 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameBuf */

/* 5868 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5870 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5872 */	NdrFcShort( 0x80 ),	/* Type Offset=128 */

	/* Parameter token */

/* 5874 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5876 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 5878 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5880 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5882 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 5884 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartEnumStaticFieldsByName */

/* 5886 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5888 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5892 */	NdrFcShort( 0xb ),	/* 11 */
/* 5894 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5896 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5898 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5900 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 5902 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5904 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5908 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 5910 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5912 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5914 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter flags */

/* 5916 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5918 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5920 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter tlsTask */

/* 5922 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5924 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5926 */	NdrFcShort( 0x21c ),	/* Type Offset=540 */

	/* Parameter handle */

/* 5928 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5930 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5932 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 5934 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5936 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5938 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumStaticFieldByName */

/* 5940 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5942 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5946 */	NdrFcShort( 0xc ),	/* 12 */
/* 5948 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5950 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5952 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5954 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 5956 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5962 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 5964 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 5966 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5968 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter value */

/* 5970 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5972 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5974 */	NdrFcShort( 0x22e ),	/* Type Offset=558 */

	/* Return value */

/* 5976 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5978 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5980 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetNumTypeArguments */

/* 5982 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5984 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5988 */	NdrFcShort( 0xe ),	/* 14 */
/* 5990 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5994 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5996 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5998 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6000 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6004 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter numTypeArgs */

/* 6006 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6008 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6010 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6012 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6014 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6016 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTypeArgumentByIndex */

/* 6018 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6020 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6024 */	NdrFcShort( 0xf ),	/* 15 */
/* 6026 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6028 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6030 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6032 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 6034 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6040 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 6042 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6044 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6046 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter typeArg */

/* 6048 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6050 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6052 */	NdrFcShort( 0x244 ),	/* Type Offset=580 */

	/* Return value */

/* 6054 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6056 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6058 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetName */

/* 6060 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6062 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6066 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6068 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 6070 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6072 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6074 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 6076 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 6078 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6080 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6082 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter flags */

/* 6084 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6086 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6088 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bufLen */

/* 6090 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6092 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6094 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameLen */

/* 6096 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6098 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameBuf */

/* 6102 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6104 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6106 */	NdrFcShort( 0x1ee ),	/* Type Offset=494 */

	/* Return value */

/* 6108 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6110 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetModule */

/* 6114 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6116 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6120 */	NdrFcShort( 0x11 ),	/* 17 */
/* 6122 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6126 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6128 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6130 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6136 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter mod */

/* 6138 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6140 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6142 */	NdrFcShort( 0x25a ),	/* Type Offset=602 */

	/* Return value */

/* 6144 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6146 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6148 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetDefinition */

/* 6150 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6152 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6156 */	NdrFcShort( 0x12 ),	/* 18 */
/* 6158 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6162 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6164 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6166 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6172 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter typeDefinition */

/* 6174 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6176 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6178 */	NdrFcShort( 0x270 ),	/* Type Offset=624 */

	/* Return value */

/* 6180 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6182 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6184 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure HasClassOrMethodInstantiation */


	/* Procedure GetFlags */

/* 6186 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6188 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6192 */	NdrFcShort( 0x13 ),	/* 19 */
/* 6194 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6198 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6200 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6202 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6208 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bGeneric */


	/* Parameter flags */

/* 6210 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6212 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6214 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 6216 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6218 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6220 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsSameObject */

/* 6222 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6224 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6228 */	NdrFcShort( 0x14 ),	/* 20 */
/* 6230 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6234 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6236 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 6238 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6244 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter type */

/* 6246 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6248 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6250 */	NdrFcShort( 0x248 ),	/* Type Offset=584 */

	/* Return value */

/* 6252 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6254 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6256 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Request */

/* 6258 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6260 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6264 */	NdrFcShort( 0x15 ),	/* 21 */
/* 6266 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 6268 */	NdrFcShort( 0x18 ),	/* 24 */
/* 6270 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6272 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 6274 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 6276 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6278 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6280 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter reqCode */

/* 6282 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6284 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6286 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter inBufferSize */

/* 6288 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6290 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6292 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter inBuffer */

/* 6294 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 6296 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6298 */	NdrFcShort( 0x136 ),	/* Type Offset=310 */

	/* Parameter outBufferSize */

/* 6300 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6302 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6304 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter outBuffer */

/* 6306 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 6308 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6310 */	NdrFcShort( 0x146 ),	/* Type Offset=326 */

	/* Return value */

/* 6312 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6314 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 6316 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartEnumStaticFields */

/* 6318 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6320 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6324 */	NdrFcShort( 0x17 ),	/* 23 */
/* 6326 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6328 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6330 */	NdrFcShort( 0x2c ),	/* 44 */
/* 6332 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 6334 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6340 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter flags */

/* 6342 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6344 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6346 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter tlsTask */

/* 6348 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6350 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6352 */	NdrFcShort( 0x21c ),	/* Type Offset=540 */

	/* Parameter handle */

/* 6354 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6356 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6358 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 6360 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6362 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6364 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumStaticField */

/* 6366 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6368 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6372 */	NdrFcShort( 0x18 ),	/* 24 */
/* 6374 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6376 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6378 */	NdrFcShort( 0x2c ),	/* 44 */
/* 6380 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 6382 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6388 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 6390 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 6392 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6394 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter value */

/* 6396 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6398 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6400 */	NdrFcShort( 0x22e ),	/* Type Offset=558 */

	/* Return value */

/* 6402 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6404 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6406 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartEnumStaticFieldsByName2 */

/* 6408 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6410 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6414 */	NdrFcShort( 0x1a ),	/* 26 */
/* 6416 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 6418 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6420 */	NdrFcShort( 0x2c ),	/* 44 */
/* 6422 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 6424 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6428 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6430 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 6432 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 6434 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6436 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter nameFlags */

/* 6438 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6440 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6442 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fieldFlags */

/* 6444 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6446 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6448 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter tlsTask */

/* 6450 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6452 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6454 */	NdrFcShort( 0x21c ),	/* Type Offset=540 */

	/* Parameter handle */

/* 6456 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6458 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6460 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 6462 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6464 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 6466 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumStaticFieldByName2 */

/* 6468 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6470 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6474 */	NdrFcShort( 0x1b ),	/* 27 */
/* 6476 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6478 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6480 */	NdrFcShort( 0x2c ),	/* 44 */
/* 6482 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 6484 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6490 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 6492 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 6494 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6496 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter value */

/* 6498 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6500 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6502 */	NdrFcShort( 0x22e ),	/* Type Offset=558 */

	/* Return value */

/* 6504 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6506 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6508 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetStaticFieldByToken */

/* 6510 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6512 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6516 */	NdrFcShort( 0x1d ),	/* 29 */
/* 6518 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 6520 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6522 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6524 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 6526 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 6528 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6532 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter token */

/* 6534 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6536 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6538 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter tlsTask */

/* 6540 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6542 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6544 */	NdrFcShort( 0x21c ),	/* Type Offset=540 */

	/* Parameter field */

/* 6546 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6548 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6550 */	NdrFcShort( 0x22e ),	/* Type Offset=558 */

	/* Parameter bufLen */

/* 6552 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6554 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6556 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameLen */

/* 6558 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6560 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6562 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameBuf */

/* 6564 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6566 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 6568 */	NdrFcShort( 0x80 ),	/* Type Offset=128 */

	/* Return value */

/* 6570 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6572 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 6574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetBase */

/* 6576 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6578 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6582 */	NdrFcShort( 0x1e ),	/* 30 */
/* 6584 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6588 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6590 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6592 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6598 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter base */

/* 6600 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6602 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6604 */	NdrFcShort( 0x244 ),	/* Type Offset=580 */

	/* Return value */

/* 6606 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6608 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6610 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumStaticField2 */

/* 6612 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6614 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6618 */	NdrFcShort( 0x1f ),	/* 31 */
/* 6620 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 6622 */	NdrFcShort( 0x2c ),	/* 44 */
/* 6624 */	NdrFcShort( 0x64 ),	/* 100 */
/* 6626 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x8,		/* 8 */
/* 6628 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 6630 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6634 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 6636 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 6638 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6640 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter value */

/* 6642 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6644 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6646 */	NdrFcShort( 0x22e ),	/* Type Offset=558 */

	/* Parameter bufLen */

/* 6648 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6650 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6652 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameLen */

/* 6654 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6656 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6658 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameBuf */

/* 6660 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6662 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6664 */	NdrFcShort( 0x1fa ),	/* Type Offset=506 */

	/* Parameter tokenScope */

/* 6666 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6668 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 6670 */	NdrFcShort( 0x25a ),	/* Type Offset=602 */

	/* Parameter token */

/* 6672 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6674 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 6676 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6678 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6680 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 6682 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumStaticFieldByName3 */

/* 6684 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6686 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6690 */	NdrFcShort( 0x20 ),	/* 32 */
/* 6692 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 6694 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6696 */	NdrFcShort( 0x48 ),	/* 72 */
/* 6698 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 6700 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6704 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6706 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 6708 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 6710 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6712 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter value */

/* 6714 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6716 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6718 */	NdrFcShort( 0x22e ),	/* Type Offset=558 */

	/* Parameter tokenScope */

/* 6720 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6722 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6724 */	NdrFcShort( 0x25a ),	/* Type Offset=602 */

	/* Parameter token */

/* 6726 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6728 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6730 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6732 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6734 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6736 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetStaticFieldByToken2 */

/* 6738 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6740 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6744 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6746 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 6748 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6750 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6752 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 6754 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 6756 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6760 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter tokenScope */

/* 6762 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6764 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6766 */	NdrFcShort( 0x25e ),	/* Type Offset=606 */

	/* Parameter token */

/* 6768 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6770 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6772 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter tlsTask */

/* 6774 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6776 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6778 */	NdrFcShort( 0x21c ),	/* Type Offset=540 */

	/* Parameter field */

/* 6780 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6782 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6784 */	NdrFcShort( 0x22e ),	/* Type Offset=558 */

	/* Parameter bufLen */

/* 6786 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6788 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6790 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameLen */

/* 6792 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6794 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 6796 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameBuf */

/* 6798 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6800 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 6802 */	NdrFcShort( 0x286 ),	/* Type Offset=646 */

	/* Return value */

/* 6804 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6806 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 6808 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTypeDefinition */

/* 6810 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6812 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6816 */	NdrFcShort( 0x3 ),	/* 3 */
/* 6818 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6820 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6822 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6824 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6826 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6828 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6832 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter typeDefinition */

/* 6834 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6836 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6838 */	NdrFcShort( 0x270 ),	/* Type Offset=624 */

	/* Return value */

/* 6840 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6842 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6844 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartEnumInstances */

/* 6846 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6848 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6852 */	NdrFcShort( 0x4 ),	/* 4 */
/* 6854 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6858 */	NdrFcShort( 0x2c ),	/* 44 */
/* 6860 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6862 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6864 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6866 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6868 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter appDomain */

/* 6870 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6872 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6874 */	NdrFcShort( 0x292 ),	/* Type Offset=658 */

	/* Parameter handle */

/* 6876 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6878 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6880 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 6882 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6884 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6886 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumInstance */

/* 6888 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6890 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6894 */	NdrFcShort( 0x5 ),	/* 5 */
/* 6896 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6898 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6900 */	NdrFcShort( 0x2c ),	/* 44 */
/* 6902 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 6904 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6908 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6910 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 6912 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 6914 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6916 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter instance */

/* 6918 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6920 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6922 */	NdrFcShort( 0x2a4 ),	/* Type Offset=676 */

	/* Return value */

/* 6924 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6926 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6928 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetName */

/* 6930 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6932 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6936 */	NdrFcShort( 0x7 ),	/* 7 */
/* 6938 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 6940 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6942 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6944 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 6946 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 6948 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6950 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6952 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter flags */

/* 6954 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6956 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 6958 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bufLen */

/* 6960 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6962 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 6964 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameLen */

/* 6966 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6968 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 6970 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter name */

/* 6972 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6974 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6976 */	NdrFcShort( 0x1ee ),	/* Type Offset=494 */

	/* Return value */

/* 6978 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6980 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 6982 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTokenAndScope */

/* 6984 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6986 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6990 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6992 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 6994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6996 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6998 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 7000 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7006 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter token */

/* 7008 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7010 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7012 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter mod */

/* 7014 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7016 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7018 */	NdrFcShort( 0x2ba ),	/* Type Offset=698 */

	/* Return value */

/* 7020 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7022 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7024 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsSameObject */

/* 7026 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7028 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7032 */	NdrFcShort( 0xa ),	/* 10 */
/* 7034 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7038 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7040 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 7042 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7048 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter method */

/* 7050 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7052 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7054 */	NdrFcShort( 0x2d0 ),	/* Type Offset=720 */

	/* Return value */

/* 7056 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7058 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7060 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetLatestEnCVersion */

/* 7062 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7064 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7068 */	NdrFcShort( 0xb ),	/* 11 */
/* 7070 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7074 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7076 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7078 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7080 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7084 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter version */

/* 7086 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7088 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7090 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7092 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7094 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7096 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartEnumExtents */

/* 7098 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7100 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7104 */	NdrFcShort( 0xc ),	/* 12 */
/* 7106 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7110 */	NdrFcShort( 0x2c ),	/* 44 */
/* 7112 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7114 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7120 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 7122 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7124 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7126 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 7128 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7130 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7132 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumExtent */

/* 7134 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7136 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7140 */	NdrFcShort( 0xd ),	/* 13 */
/* 7142 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7144 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7146 */	NdrFcShort( 0x2c ),	/* 44 */
/* 7148 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 7150 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7156 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 7158 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 7160 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7162 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter extent */

/* 7164 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 7166 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7168 */	NdrFcShort( 0x2e6 ),	/* Type Offset=742 */

	/* Return value */

/* 7170 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7172 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7174 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCodeNotification */

/* 7176 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7178 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7182 */	NdrFcShort( 0xf ),	/* 15 */
/* 7184 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7188 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7190 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7192 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7198 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter flags */

/* 7200 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7202 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7204 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7206 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7208 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7210 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetCodeNotification */

/* 7212 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7214 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7218 */	NdrFcShort( 0x10 ),	/* 16 */
/* 7220 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7222 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7224 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7226 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7228 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7234 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter flags */

/* 7236 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7238 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7240 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7242 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7244 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7246 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Request */

/* 7248 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7250 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7254 */	NdrFcShort( 0x11 ),	/* 17 */
/* 7256 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 7258 */	NdrFcShort( 0x18 ),	/* 24 */
/* 7260 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7262 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 7264 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 7266 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7268 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7270 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter reqCode */

/* 7272 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7274 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7276 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter inBufferSize */

/* 7278 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7280 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7282 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter inBuffer */

/* 7284 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 7286 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7288 */	NdrFcShort( 0x136 ),	/* Type Offset=310 */

	/* Parameter outBufferSize */

/* 7290 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7292 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7294 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter outBuffer */

/* 7296 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 7298 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7300 */	NdrFcShort( 0x146 ),	/* Type Offset=326 */

	/* Return value */

/* 7302 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7304 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 7306 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetRepresentativeEntryAddress */

/* 7308 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7310 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7314 */	NdrFcShort( 0x12 ),	/* 18 */
/* 7316 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7320 */	NdrFcShort( 0x2c ),	/* 44 */
/* 7322 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7324 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7330 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter addr */

/* 7332 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7334 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7336 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 7338 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7340 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7342 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTypeInstance */

/* 7344 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7346 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7350 */	NdrFcShort( 0x3 ),	/* 3 */
/* 7352 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7356 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7358 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 7360 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7366 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter typeInstance */

/* 7368 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7370 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7372 */	NdrFcShort( 0x2f4 ),	/* Type Offset=756 */

	/* Return value */

/* 7374 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7376 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7378 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetDefinition */

/* 7380 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7382 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7386 */	NdrFcShort( 0x4 ),	/* 4 */
/* 7388 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7392 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7394 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 7396 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7402 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter methodDefinition */

/* 7404 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7406 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7408 */	NdrFcShort( 0x30a ),	/* Type Offset=778 */

	/* Return value */

/* 7410 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7412 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7414 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTokenAndScope */

/* 7416 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7418 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7422 */	NdrFcShort( 0x5 ),	/* 5 */
/* 7424 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7428 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7430 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 7432 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7438 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter token */

/* 7440 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7442 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7444 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter mod */

/* 7446 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7448 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7450 */	NdrFcShort( 0x2ba ),	/* Type Offset=698 */

	/* Return value */

/* 7452 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7454 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7456 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetName */

/* 7458 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7460 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7464 */	NdrFcShort( 0x6 ),	/* 6 */
/* 7466 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 7468 */	NdrFcShort( 0x10 ),	/* 16 */
/* 7470 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7472 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 7474 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 7476 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7480 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter flags */

/* 7482 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7484 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7486 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bufLen */

/* 7488 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7490 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7492 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameLen */

/* 7494 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7496 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7498 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameBuf */

/* 7500 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7502 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7504 */	NdrFcShort( 0x1ee ),	/* Type Offset=494 */

	/* Return value */

/* 7506 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7508 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7510 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCode */


	/* Procedure GetFlags */

/* 7512 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7514 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7518 */	NdrFcShort( 0x7 ),	/* 7 */
/* 7520 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7524 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7526 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7528 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7534 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter code */


	/* Parameter flags */

/* 7536 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7538 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7540 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 7542 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7544 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7546 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsSameObject */

/* 7548 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7550 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7554 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7556 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7560 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7562 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 7564 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7570 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter method */

/* 7572 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7574 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7576 */	NdrFcShort( 0x2a8 ),	/* Type Offset=680 */

	/* Return value */

/* 7578 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7580 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7582 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetNumTypeArguments */

/* 7584 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7586 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7590 */	NdrFcShort( 0xa ),	/* 10 */
/* 7592 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7596 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7598 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7600 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7606 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter numTypeArgs */

/* 7608 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7610 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7612 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7614 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7616 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7618 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTypeArgumentByIndex */

/* 7620 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7622 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7626 */	NdrFcShort( 0xb ),	/* 11 */
/* 7628 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7630 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7632 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7634 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 7636 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7642 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 7644 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7646 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7648 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter typeArg */

/* 7650 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7652 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7654 */	NdrFcShort( 0x244 ),	/* Type Offset=580 */

	/* Return value */

/* 7656 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7658 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7660 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetILOffsetsByAddress */

/* 7662 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7664 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7668 */	NdrFcShort( 0xc ),	/* 12 */
/* 7670 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 7672 */	NdrFcShort( 0x18 ),	/* 24 */
/* 7674 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7676 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 7678 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 7680 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7684 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter address */

/* 7686 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7688 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7690 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter offsetsLen */

/* 7692 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7694 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7696 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter offsetsNeeded */

/* 7698 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7700 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7702 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ilOffsets */

/* 7704 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7706 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7708 */	NdrFcShort( 0x30e ),	/* Type Offset=782 */

	/* Return value */

/* 7710 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7712 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 7714 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetAddressRangesByILOffset */

/* 7716 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7718 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7722 */	NdrFcShort( 0xd ),	/* 13 */
/* 7724 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 7726 */	NdrFcShort( 0x10 ),	/* 16 */
/* 7728 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7730 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 7732 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 7734 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7736 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7738 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ilOffset */

/* 7740 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7742 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7744 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rangesLen */

/* 7746 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7748 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7750 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rangesNeeded */

/* 7752 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7754 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7756 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter addressRanges */

/* 7758 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7760 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7762 */	NdrFcShort( 0x322 ),	/* Type Offset=802 */

	/* Return value */

/* 7764 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7766 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7768 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetILAddressMap */

/* 7770 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7772 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7776 */	NdrFcShort( 0xe ),	/* 14 */
/* 7778 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7780 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7782 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7784 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 7786 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 7788 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7792 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter mapLen */

/* 7794 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7796 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7798 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter mapNeeded */

/* 7800 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7802 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7804 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter maps */

/* 7806 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7808 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7810 */	NdrFcShort( 0x342 ),	/* Type Offset=834 */

	/* Return value */

/* 7812 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7814 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7816 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartEnumExtents */

/* 7818 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7820 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7824 */	NdrFcShort( 0xf ),	/* 15 */
/* 7826 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7828 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7830 */	NdrFcShort( 0x2c ),	/* 44 */
/* 7832 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7834 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7840 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 7842 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7844 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7846 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 7848 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7850 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7852 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumExtent */

/* 7854 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7856 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7860 */	NdrFcShort( 0x10 ),	/* 16 */
/* 7862 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7864 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7866 */	NdrFcShort( 0x60 ),	/* 96 */
/* 7868 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 7870 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7874 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7876 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 7878 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 7880 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7882 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter extent */

/* 7884 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 7886 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7888 */	NdrFcShort( 0x31a ),	/* Type Offset=794 */

	/* Return value */

/* 7890 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7892 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7894 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Request */

/* 7896 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7898 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7902 */	NdrFcShort( 0x12 ),	/* 18 */
/* 7904 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 7906 */	NdrFcShort( 0x18 ),	/* 24 */
/* 7908 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7910 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 7912 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 7914 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7916 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7918 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter reqCode */

/* 7920 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7922 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7924 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter inBufferSize */

/* 7926 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7928 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7930 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter inBuffer */

/* 7932 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 7934 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7936 */	NdrFcShort( 0x136 ),	/* Type Offset=310 */

	/* Parameter outBufferSize */

/* 7938 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7940 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 7942 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter outBuffer */

/* 7944 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 7946 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 7948 */	NdrFcShort( 0x146 ),	/* Type Offset=326 */

	/* Return value */

/* 7950 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7952 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 7954 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetRepresentativeEntryAddress */

/* 7956 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7958 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7962 */	NdrFcShort( 0x13 ),	/* 19 */
/* 7964 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 7966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7968 */	NdrFcShort( 0x2c ),	/* 44 */
/* 7970 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7972 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7974 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7978 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter addr */

/* 7980 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7982 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 7984 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 7986 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7988 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 7990 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetProcess */

/* 7992 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7994 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7998 */	NdrFcShort( 0x3 ),	/* 3 */
/* 8000 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8004 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8006 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8008 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8012 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8014 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter process */

/* 8016 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8018 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8020 */	NdrFcShort( 0x35c ),	/* Type Offset=860 */

	/* Return value */

/* 8022 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8024 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8026 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCurrentAppDomain */

/* 8028 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8030 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8034 */	NdrFcShort( 0x4 ),	/* 4 */
/* 8036 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8040 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8042 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8044 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8050 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter appDomain */

/* 8052 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8054 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8056 */	NdrFcShort( 0x372 ),	/* Type Offset=882 */

	/* Return value */

/* 8058 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8060 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8062 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsSameObject */

/* 8064 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8066 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8070 */	NdrFcShort( 0x7 ),	/* 7 */
/* 8072 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8076 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8078 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 8080 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8084 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8086 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter task */

/* 8088 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8090 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8092 */	NdrFcShort( 0x21c ),	/* Type Offset=540 */

	/* Return value */

/* 8094 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8096 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8098 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetManagedObject */

/* 8100 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8102 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8106 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8108 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8112 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8114 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8116 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8122 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 8124 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8126 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8128 */	NdrFcShort( 0x22e ),	/* Type Offset=558 */

	/* Return value */

/* 8130 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8132 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8134 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetDesiredExecutionState */

/* 8136 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8138 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8142 */	NdrFcShort( 0xa ),	/* 10 */
/* 8144 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8146 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8148 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8150 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8152 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8158 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter state */

/* 8160 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8162 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8164 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8166 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8168 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8170 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateStackWalk */

/* 8172 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8174 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8178 */	NdrFcShort( 0xb ),	/* 11 */
/* 8180 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8182 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8184 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8186 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 8188 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8194 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter flags */

/* 8196 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8198 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8200 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter stackWalk */

/* 8202 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8204 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8206 */	NdrFcShort( 0x376 ),	/* Type Offset=886 */

	/* Return value */

/* 8208 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8210 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8212 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetContext */

/* 8214 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8216 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8220 */	NdrFcShort( 0xd ),	/* 13 */
/* 8222 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 8224 */	NdrFcShort( 0x10 ),	/* 16 */
/* 8226 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8228 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 8230 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 8232 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8236 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter contextFlags */

/* 8238 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8240 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8242 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter contextBufSize */

/* 8244 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8246 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8248 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter contextSize */

/* 8250 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8252 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8254 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter contextBuf */

/* 8256 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8258 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8260 */	NdrFcShort( 0x136 ),	/* Type Offset=310 */

	/* Return value */

/* 8262 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8264 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 8266 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetContext */

/* 8268 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8270 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8274 */	NdrFcShort( 0xe ),	/* 14 */
/* 8276 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8278 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8280 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8282 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8284 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8288 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8290 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter contextSize */

/* 8292 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8294 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8296 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter context */

/* 8298 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8300 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8302 */	NdrFcShort( 0x38c ),	/* Type Offset=908 */

	/* Return value */

/* 8304 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8306 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8308 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCurrentExceptionState */

/* 8310 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8312 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8316 */	NdrFcShort( 0xf ),	/* 15 */
/* 8318 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8322 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8324 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8326 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8332 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter exception */

/* 8334 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8336 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8338 */	NdrFcShort( 0x398 ),	/* Type Offset=920 */

	/* Return value */

/* 8340 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8342 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8344 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Request */

/* 8346 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8348 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8352 */	NdrFcShort( 0x10 ),	/* 16 */
/* 8354 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 8356 */	NdrFcShort( 0x18 ),	/* 24 */
/* 8358 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8360 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 8362 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 8364 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8366 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8368 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter reqCode */

/* 8370 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8372 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8374 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter inBufferSize */

/* 8376 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8378 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8380 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter inBuffer */

/* 8382 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 8384 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8386 */	NdrFcShort( 0x136 ),	/* Type Offset=310 */

	/* Parameter outBufferSize */

/* 8388 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8390 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8392 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter outBuffer */

/* 8394 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 8396 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 8398 */	NdrFcShort( 0x146 ),	/* Type Offset=326 */

	/* Return value */

/* 8400 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8402 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 8404 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetName */

/* 8406 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8408 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8412 */	NdrFcShort( 0x11 ),	/* 17 */
/* 8414 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 8416 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8418 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8420 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 8422 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 8424 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8428 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bufLen */

/* 8430 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8432 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8434 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameLen */

/* 8436 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8438 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8440 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter name */

/* 8442 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8444 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8446 */	NdrFcShort( 0x1b4 ),	/* Type Offset=436 */

	/* Return value */

/* 8448 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8450 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8452 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetLastExceptionState */

/* 8454 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8456 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8460 */	NdrFcShort( 0x12 ),	/* 18 */
/* 8462 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8466 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8468 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8470 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8476 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter exception */

/* 8478 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8480 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8482 */	NdrFcShort( 0x398 ),	/* Type Offset=920 */

	/* Return value */

/* 8484 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8486 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8488 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetContext */

/* 8490 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8492 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8496 */	NdrFcShort( 0x3 ),	/* 3 */
/* 8498 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 8500 */	NdrFcShort( 0x10 ),	/* 16 */
/* 8502 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8504 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 8506 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 8508 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8512 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter contextFlags */

/* 8514 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8516 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8518 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter contextBufSize */

/* 8520 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8522 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8524 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter contextSize */

/* 8526 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8528 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8530 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter contextBuf */

/* 8532 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8534 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8536 */	NdrFcShort( 0x136 ),	/* Type Offset=310 */

	/* Return value */

/* 8538 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8540 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 8542 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetContext */

/* 8544 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8546 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8550 */	NdrFcShort( 0x4 ),	/* 4 */
/* 8552 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8554 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8556 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8558 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8560 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8564 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8566 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter contextSize */

/* 8568 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8570 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8572 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter context */

/* 8574 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8576 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8578 */	NdrFcShort( 0x38c ),	/* Type Offset=908 */

	/* Return value */

/* 8580 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8582 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8584 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Next */

/* 8586 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8588 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8592 */	NdrFcShort( 0x5 ),	/* 5 */
/* 8594 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8598 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8600 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 8602 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8608 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 8610 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8612 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8614 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFrameType */

/* 8616 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8618 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8622 */	NdrFcShort( 0x7 ),	/* 7 */
/* 8624 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8628 */	NdrFcShort( 0x3c ),	/* 60 */
/* 8630 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 8632 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8636 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8638 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter simpleType */

/* 8640 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 8642 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8644 */	NdrFcShort( 0x7c ),	/* Type Offset=124 */

	/* Parameter detailedType */

/* 8646 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 8648 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8650 */	NdrFcShort( 0x7c ),	/* Type Offset=124 */

	/* Return value */

/* 8652 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8654 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8656 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFrame */

/* 8658 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8660 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8664 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8666 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8670 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8672 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8674 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8676 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8680 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter frame */

/* 8682 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8684 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8686 */	NdrFcShort( 0x3ae ),	/* Type Offset=942 */

	/* Return value */

/* 8688 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8690 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8692 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetContext2 */

/* 8694 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8696 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8700 */	NdrFcShort( 0xa ),	/* 10 */
/* 8702 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 8704 */	NdrFcShort( 0x10 ),	/* 16 */
/* 8706 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8708 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 8710 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 8712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8714 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8716 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter flags */

/* 8718 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8720 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8722 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter contextSize */

/* 8724 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8726 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8728 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter context */

/* 8730 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8732 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8734 */	NdrFcShort( 0x136 ),	/* Type Offset=310 */

	/* Return value */

/* 8736 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8738 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8740 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFrameType */

/* 8742 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8744 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8748 */	NdrFcShort( 0x3 ),	/* 3 */
/* 8750 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8752 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8754 */	NdrFcShort( 0x3c ),	/* 60 */
/* 8756 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 8758 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8764 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter simpleType */

/* 8766 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 8768 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8770 */	NdrFcShort( 0x7c ),	/* Type Offset=124 */

	/* Parameter detailedType */

/* 8772 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 8774 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8776 */	NdrFcShort( 0x7c ),	/* Type Offset=124 */

	/* Return value */

/* 8778 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8780 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8782 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetContext */

/* 8784 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8786 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8790 */	NdrFcShort( 0x4 ),	/* 4 */
/* 8792 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 8794 */	NdrFcShort( 0x10 ),	/* 16 */
/* 8796 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8798 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 8800 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 8802 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8806 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter contextFlags */

/* 8808 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8810 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8812 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter contextBufSize */

/* 8814 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8816 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8818 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter contextSize */

/* 8820 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8822 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8824 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter contextBuf */

/* 8826 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8828 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8830 */	NdrFcShort( 0x136 ),	/* Type Offset=310 */

	/* Return value */

/* 8832 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8834 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 8836 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetAppDomain */

/* 8838 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8840 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8844 */	NdrFcShort( 0x5 ),	/* 5 */
/* 8846 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8850 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8852 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8854 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8860 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter appDomain */

/* 8862 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8864 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8866 */	NdrFcShort( 0x372 ),	/* Type Offset=882 */

	/* Return value */

/* 8868 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8870 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8872 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetArgumentByIndex */

/* 8874 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8876 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8880 */	NdrFcShort( 0x7 ),	/* 7 */
/* 8882 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 8884 */	NdrFcShort( 0x10 ),	/* 16 */
/* 8886 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8888 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x6,		/* 6 */
/* 8890 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 8892 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8896 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 8898 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8900 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8902 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg */

/* 8904 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8906 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8908 */	NdrFcShort( 0x22e ),	/* Type Offset=558 */

	/* Parameter bufLen */

/* 8910 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8912 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8914 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameLen */

/* 8916 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8918 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8920 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter name */

/* 8922 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8924 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 8926 */	NdrFcShort( 0x1fa ),	/* Type Offset=506 */

	/* Return value */

/* 8928 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8930 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 8932 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetLocalVariableByIndex */

/* 8934 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8936 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8940 */	NdrFcShort( 0x9 ),	/* 9 */
/* 8942 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 8944 */	NdrFcShort( 0x10 ),	/* 16 */
/* 8946 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8948 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x6,		/* 6 */
/* 8950 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 8952 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8954 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8956 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 8958 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8960 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 8962 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter localVariable */

/* 8964 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8966 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 8968 */	NdrFcShort( 0x22e ),	/* Type Offset=558 */

	/* Parameter bufLen */

/* 8970 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8972 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 8974 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameLen */

/* 8976 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8978 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 8980 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter name */

/* 8982 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8984 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 8986 */	NdrFcShort( 0x1fa ),	/* Type Offset=506 */

	/* Return value */

/* 8988 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8990 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 8992 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCodeName */

/* 8994 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8996 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9000 */	NdrFcShort( 0xa ),	/* 10 */
/* 9002 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 9004 */	NdrFcShort( 0x10 ),	/* 16 */
/* 9006 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9008 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 9010 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 9012 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9016 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter flags */

/* 9018 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9020 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9022 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bufLen */

/* 9024 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9026 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9028 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameLen */

/* 9030 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9032 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9034 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameBuf */

/* 9036 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9038 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9040 */	NdrFcShort( 0x1ee ),	/* Type Offset=494 */

	/* Return value */

/* 9042 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9044 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9046 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetMethodInstance */

/* 9048 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9050 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9054 */	NdrFcShort( 0xb ),	/* 11 */
/* 9056 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9060 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9062 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9064 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9066 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9068 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9070 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter method */

/* 9072 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9074 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9076 */	NdrFcShort( 0x206 ),	/* Type Offset=518 */

	/* Return value */

/* 9078 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9080 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9082 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Request */

/* 9084 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9086 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9090 */	NdrFcShort( 0xc ),	/* 12 */
/* 9092 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 9094 */	NdrFcShort( 0x18 ),	/* 24 */
/* 9096 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9098 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 9100 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 9102 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9104 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9106 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter reqCode */

/* 9108 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9110 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter inBufferSize */

/* 9114 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9116 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9118 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter inBuffer */

/* 9120 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 9122 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9124 */	NdrFcShort( 0x136 ),	/* Type Offset=310 */

	/* Parameter outBufferSize */

/* 9126 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9128 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9130 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter outBuffer */

/* 9132 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 9134 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9136 */	NdrFcShort( 0x146 ),	/* Type Offset=326 */

	/* Return value */

/* 9138 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9140 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 9142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetNumTypeArguments */

/* 9144 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9146 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9150 */	NdrFcShort( 0xd ),	/* 13 */
/* 9152 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9156 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9158 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9160 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9166 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter numTypeArgs */

/* 9168 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9170 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9172 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9174 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9176 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTypeArgumentByIndex */

/* 9180 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9182 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9186 */	NdrFcShort( 0xe ),	/* 14 */
/* 9188 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9190 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9192 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9194 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 9196 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9202 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 9204 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9206 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9208 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter typeArg */

/* 9210 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9212 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9214 */	NdrFcShort( 0x1d6 ),	/* Type Offset=470 */

	/* Return value */

/* 9216 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9218 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9220 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFlags */


	/* Procedure GetFlags */

/* 9222 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9224 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9228 */	NdrFcShort( 0x3 ),	/* 3 */
/* 9230 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9234 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9236 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9238 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9244 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter flags */


	/* Parameter flags */

/* 9246 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9248 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9250 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 9252 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9254 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9256 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetPrevious */

/* 9258 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9260 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9264 */	NdrFcShort( 0x4 ),	/* 4 */
/* 9266 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9270 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9272 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9274 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9280 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter exState */

/* 9282 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9284 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9286 */	NdrFcShort( 0x10a ),	/* Type Offset=266 */

	/* Return value */

/* 9288 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9290 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9292 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetManagedObject */

/* 9294 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9296 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9300 */	NdrFcShort( 0x5 ),	/* 5 */
/* 9302 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9306 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9308 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9310 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9316 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 9318 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9320 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9322 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */

	/* Return value */

/* 9324 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9326 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9328 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetBaseType */

/* 9330 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9332 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9336 */	NdrFcShort( 0x6 ),	/* 6 */
/* 9338 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9342 */	NdrFcShort( 0x22 ),	/* 34 */
/* 9344 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9346 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9352 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter type */

/* 9354 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 9356 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9358 */	NdrFcShort( 0x7c ),	/* Type Offset=124 */

	/* Return value */

/* 9360 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9362 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9364 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetString */

/* 9366 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9368 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9372 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9374 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9376 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9378 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9380 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 9382 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 9384 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9388 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bufLen */

/* 9390 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9392 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9394 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter strLen */

/* 9396 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9398 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9400 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter str */

/* 9402 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9404 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9406 */	NdrFcShort( 0x1b4 ),	/* Type Offset=436 */

	/* Return value */

/* 9408 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9410 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9412 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsSameState */

/* 9414 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9416 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9420 */	NdrFcShort( 0xa ),	/* 10 */
/* 9422 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9424 */	NdrFcShort( 0xd4 ),	/* 212 */
/* 9426 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9428 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 9430 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 9432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9434 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9436 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter exRecord */

/* 9438 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 9440 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9442 */	NdrFcShort( 0xfa ),	/* Type Offset=250 */

	/* Parameter contextSize */

/* 9444 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9446 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9448 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cxRecord */

/* 9450 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9452 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9454 */	NdrFcShort( 0x136 ),	/* Type Offset=310 */

	/* Return value */

/* 9456 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9458 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9460 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsSameState2 */

/* 9462 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9464 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9468 */	NdrFcShort( 0xb ),	/* 11 */
/* 9470 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 9472 */	NdrFcShort( 0xdc ),	/* 220 */
/* 9474 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9476 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 9478 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 9480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9482 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9484 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter flags */

/* 9486 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9488 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9490 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter exRecord */

/* 9492 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 9494 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9496 */	NdrFcShort( 0xfa ),	/* Type Offset=250 */

	/* Parameter contextSize */

/* 9498 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9500 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9502 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cxRecord */

/* 9504 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9506 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9508 */	NdrFcShort( 0x3c4 ),	/* Type Offset=964 */

	/* Return value */

/* 9510 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9512 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9514 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTask */

/* 9516 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9518 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9522 */	NdrFcShort( 0xc ),	/* 12 */
/* 9524 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9528 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9530 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9532 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9538 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter task */

/* 9540 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9542 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9544 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */

	/* Return value */

/* 9546 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9548 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9550 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetBytes */

/* 9552 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9554 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9558 */	NdrFcShort( 0x6 ),	/* 6 */
/* 9560 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9562 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9564 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9566 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 9568 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 9570 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9574 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bufLen */

/* 9576 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9578 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9580 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dataSize */

/* 9582 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9584 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9586 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter buffer */

/* 9588 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9590 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9592 */	NdrFcShort( 0x38c ),	/* Type Offset=908 */

	/* Return value */

/* 9594 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9596 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9598 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetBytes */

/* 9600 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9602 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9606 */	NdrFcShort( 0x7 ),	/* 7 */
/* 9608 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9610 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9612 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9614 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 9616 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 9618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9620 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9622 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bufLen */

/* 9624 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9626 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9628 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dataSize */

/* 9630 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9632 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9634 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter buffer */

/* 9636 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9638 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9640 */	NdrFcShort( 0x38c ),	/* Type Offset=908 */

	/* Return value */

/* 9642 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9644 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetType */

/* 9648 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9650 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9654 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9656 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9660 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9662 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9664 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9670 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter typeInstance */

/* 9672 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9674 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9676 */	NdrFcShort( 0x1d6 ),	/* Type Offset=470 */

	/* Return value */

/* 9678 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9680 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9682 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFieldByIndex */

/* 9684 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9686 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9690 */	NdrFcShort( 0xa ),	/* 10 */
/* 9692 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 9694 */	NdrFcShort( 0x10 ),	/* 16 */
/* 9696 */	NdrFcShort( 0x40 ),	/* 64 */
/* 9698 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x7,		/* 7 */
/* 9700 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 9702 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9704 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9706 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 9708 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9710 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9712 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter field */

/* 9714 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9716 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9718 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */

	/* Parameter bufLen */

/* 9720 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9722 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9724 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameLen */

/* 9726 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9728 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9730 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameBuf */

/* 9732 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9734 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9736 */	NdrFcShort( 0x1fa ),	/* Type Offset=506 */

	/* Parameter token */

/* 9738 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9740 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 9742 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9744 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9746 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 9748 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Request */

/* 9750 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9752 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9756 */	NdrFcShort( 0xb ),	/* 11 */
/* 9758 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 9760 */	NdrFcShort( 0x18 ),	/* 24 */
/* 9762 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9764 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 9766 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 9768 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9770 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9772 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter reqCode */

/* 9774 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9776 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9778 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter inBufferSize */

/* 9780 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9782 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9784 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter inBuffer */

/* 9786 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 9788 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9790 */	NdrFcShort( 0x136 ),	/* Type Offset=310 */

	/* Parameter outBufferSize */

/* 9792 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9794 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9796 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter outBuffer */

/* 9798 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 9800 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9802 */	NdrFcShort( 0x146 ),	/* Type Offset=326 */

	/* Return value */

/* 9804 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9806 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 9808 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetNumFields2 */

/* 9810 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9812 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9816 */	NdrFcShort( 0xc ),	/* 12 */
/* 9818 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9820 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9822 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9824 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 9826 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9828 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9832 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter flags */

/* 9834 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9836 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9838 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fromType */

/* 9840 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9842 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9844 */	NdrFcShort( 0x152 ),	/* Type Offset=338 */

	/* Parameter numFields */

/* 9846 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9848 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9850 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9852 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9854 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9856 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartEnumFields */

/* 9858 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9860 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9864 */	NdrFcShort( 0xd ),	/* 13 */
/* 9866 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9868 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9870 */	NdrFcShort( 0x2c ),	/* 44 */
/* 9872 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 9874 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9880 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter flags */

/* 9882 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9884 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9886 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fromType */

/* 9888 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 9890 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9892 */	NdrFcShort( 0x152 ),	/* Type Offset=338 */

	/* Parameter handle */

/* 9894 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9896 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9898 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 9900 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9902 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9904 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumField */

/* 9906 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9908 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9912 */	NdrFcShort( 0xe ),	/* 14 */
/* 9914 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 9916 */	NdrFcShort( 0x2c ),	/* 44 */
/* 9918 */	NdrFcShort( 0x64 ),	/* 100 */
/* 9920 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x7,		/* 7 */
/* 9922 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 9924 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9928 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 9930 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 9932 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 9934 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter field */

/* 9936 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9938 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 9940 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */

	/* Parameter nameBufLen */

/* 9942 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9944 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 9946 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameLen */

/* 9948 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9950 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9952 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameBuf */

/* 9954 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9956 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 9958 */	NdrFcShort( 0x1fa ),	/* Type Offset=506 */

	/* Parameter token */

/* 9960 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9962 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 9964 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9966 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9968 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 9970 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EndEnumFields */

/* 9972 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9974 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9978 */	NdrFcShort( 0xf ),	/* 15 */
/* 9980 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 9982 */	NdrFcShort( 0x10 ),	/* 16 */
/* 9984 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9986 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9988 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9994 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 9996 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9998 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10000 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 10002 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10004 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10006 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartEnumFieldsByName */

/* 10008 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10010 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10014 */	NdrFcShort( 0x10 ),	/* 16 */
/* 10016 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 10018 */	NdrFcShort( 0x10 ),	/* 16 */
/* 10020 */	NdrFcShort( 0x2c ),	/* 44 */
/* 10022 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 10024 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10028 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10030 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 10032 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 10034 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10036 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter nameFlags */

/* 10038 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10040 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10042 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fieldFlags */

/* 10044 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10046 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10048 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fromType */

/* 10050 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10052 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10054 */	NdrFcShort( 0x152 ),	/* Type Offset=338 */

	/* Parameter handle */

/* 10056 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10058 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10060 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 10062 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10064 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 10066 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumFieldByName */

/* 10068 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10070 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10074 */	NdrFcShort( 0x11 ),	/* 17 */
/* 10076 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10078 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10080 */	NdrFcShort( 0x48 ),	/* 72 */
/* 10082 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 10084 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10086 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10088 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10090 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 10092 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 10094 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10096 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter field */

/* 10098 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10100 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10102 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */

	/* Parameter token */

/* 10104 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10106 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10108 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10110 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10112 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10114 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFieldByToken */

/* 10116 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10118 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10122 */	NdrFcShort( 0x13 ),	/* 19 */
/* 10124 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 10126 */	NdrFcShort( 0x10 ),	/* 16 */
/* 10128 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10130 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x6,		/* 6 */
/* 10132 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 10134 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10138 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter token */

/* 10140 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10142 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10144 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter field */

/* 10146 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10148 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10150 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */

	/* Parameter bufLen */

/* 10152 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10154 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10156 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameLen */

/* 10158 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10160 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10162 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameBuf */

/* 10164 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10166 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10168 */	NdrFcShort( 0x1fa ),	/* Type Offset=506 */

	/* Return value */

/* 10170 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10172 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 10174 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetAssociatedValue */

/* 10176 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10178 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10182 */	NdrFcShort( 0x14 ),	/* 20 */
/* 10184 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10188 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10190 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10192 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10198 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter assocValue */

/* 10200 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10202 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10204 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */

	/* Return value */

/* 10206 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10208 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10210 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetAssociatedType */

/* 10212 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10214 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10218 */	NdrFcShort( 0x15 ),	/* 21 */
/* 10220 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10224 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10226 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10228 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10234 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter assocType */

/* 10236 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10238 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10240 */	NdrFcShort( 0x1d6 ),	/* Type Offset=470 */

	/* Return value */

/* 10242 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10244 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10246 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetString */

/* 10248 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10250 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10254 */	NdrFcShort( 0x16 ),	/* 22 */
/* 10256 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10258 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10260 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10262 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 10264 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 10266 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10270 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bufLen */

/* 10272 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10274 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10276 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter strLen */

/* 10278 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10280 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10282 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter str */

/* 10284 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10286 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10288 */	NdrFcShort( 0x1b4 ),	/* Type Offset=436 */

	/* Return value */

/* 10290 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10292 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10294 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetArrayProperties */

/* 10296 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10298 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10302 */	NdrFcShort( 0x17 ),	/* 23 */
/* 10304 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 10306 */	NdrFcShort( 0x10 ),	/* 16 */
/* 10308 */	NdrFcShort( 0x40 ),	/* 64 */
/* 10310 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x7,		/* 7 */
/* 10312 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 10314 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10318 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter rank */

/* 10320 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10322 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10324 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter totalElements */

/* 10326 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10328 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10330 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter numDim */

/* 10332 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10334 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10336 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dims */

/* 10338 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10340 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10342 */	NdrFcShort( 0x30e ),	/* Type Offset=782 */

	/* Parameter numBases */

/* 10344 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10346 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10348 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bases */

/* 10350 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10352 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 10354 */	NdrFcShort( 0x3d0 ),	/* Type Offset=976 */

	/* Return value */

/* 10356 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10358 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 10360 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetArrayElement */

/* 10362 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10364 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10368 */	NdrFcShort( 0x18 ),	/* 24 */
/* 10370 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10372 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10374 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10376 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 10378 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10382 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10384 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter numInd */

/* 10386 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10388 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10390 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter indices */

/* 10392 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10394 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10396 */	NdrFcShort( 0x17a ),	/* Type Offset=378 */

	/* Parameter value */

/* 10398 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10400 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10402 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */

	/* Return value */

/* 10404 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10406 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10408 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumField2 */

/* 10410 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10412 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10416 */	NdrFcShort( 0x19 ),	/* 25 */
/* 10418 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 10420 */	NdrFcShort( 0x2c ),	/* 44 */
/* 10422 */	NdrFcShort( 0x64 ),	/* 100 */
/* 10424 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x8,		/* 8 */
/* 10426 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 10428 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10432 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 10434 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 10436 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10438 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter field */

/* 10440 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10442 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10444 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */

	/* Parameter nameBufLen */

/* 10446 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10448 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10450 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameLen */

/* 10452 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10454 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10456 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameBuf */

/* 10458 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10460 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10462 */	NdrFcShort( 0x1fa ),	/* Type Offset=506 */

	/* Parameter tokenScope */

/* 10464 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10466 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 10468 */	NdrFcShort( 0xb8 ),	/* Type Offset=184 */

	/* Parameter token */

/* 10470 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10472 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 10474 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10476 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10478 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 10480 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumFieldByName2 */

/* 10482 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10484 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10488 */	NdrFcShort( 0x1a ),	/* 26 */
/* 10490 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 10492 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10494 */	NdrFcShort( 0x48 ),	/* 72 */
/* 10496 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 10498 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10504 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handle */

/* 10506 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 10508 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10510 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter field */

/* 10512 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10514 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10516 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */

	/* Parameter tokenScope */

/* 10518 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10520 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10522 */	NdrFcShort( 0xb8 ),	/* Type Offset=184 */

	/* Parameter token */

/* 10524 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10526 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10528 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10530 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10532 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10534 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFieldByToken2 */

/* 10536 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10538 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10542 */	NdrFcShort( 0x1b ),	/* 27 */
/* 10544 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 10546 */	NdrFcShort( 0x10 ),	/* 16 */
/* 10548 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10550 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 10552 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 10554 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10558 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter tokenScope */

/* 10560 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10562 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10564 */	NdrFcShort( 0xbc ),	/* Type Offset=188 */

	/* Parameter token */

/* 10566 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10568 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10570 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter field */

/* 10572 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10574 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10576 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */

	/* Parameter bufLen */

/* 10578 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10580 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10582 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameLen */

/* 10584 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10586 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10588 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nameBuf */

/* 10590 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 10592 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 10594 */	NdrFcShort( 0x80 ),	/* Type Offset=128 */

	/* Return value */

/* 10596 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10598 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 10600 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetNumLocations */

/* 10602 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10604 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10608 */	NdrFcShort( 0x1c ),	/* 28 */
/* 10610 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10614 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10616 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10618 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10624 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter numLocs */

/* 10626 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10628 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10630 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10632 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10634 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10636 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetLocationByIndex */

/* 10638 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10640 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10644 */	NdrFcShort( 0x1d ),	/* 29 */
/* 10646 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10648 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10650 */	NdrFcShort( 0x48 ),	/* 72 */
/* 10652 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 10654 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10660 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter loc */

/* 10662 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10664 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10666 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter flags */

/* 10668 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10670 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10672 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg */

/* 10674 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10676 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10678 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 10680 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10682 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10684 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnCodeGenerated */

/* 10686 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10688 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10692 */	NdrFcShort( 0x3 ),	/* 3 */
/* 10694 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10698 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10700 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 10702 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10704 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10708 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter method */

/* 10710 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10712 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10714 */	NdrFcShort( 0xd2 ),	/* Type Offset=210 */

	/* Return value */

/* 10716 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10718 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10720 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnCodeDiscarded */

/* 10722 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10724 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10728 */	NdrFcShort( 0x4 ),	/* 4 */
/* 10730 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10734 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10736 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 10738 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10744 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter method */

/* 10746 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10748 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10750 */	NdrFcShort( 0xd2 ),	/* Type Offset=210 */

	/* Return value */

/* 10752 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10754 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10756 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnProcessExecution */

/* 10758 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10760 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10764 */	NdrFcShort( 0x5 ),	/* 5 */
/* 10766 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10768 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10770 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10772 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10774 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10780 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter state */

/* 10782 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10784 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10786 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10788 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10790 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10792 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnTaskExecution */

/* 10794 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10796 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10800 */	NdrFcShort( 0x6 ),	/* 6 */
/* 10802 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10804 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10806 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10808 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 10810 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10816 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter task */

/* 10818 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10820 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10822 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */

	/* Parameter state */

/* 10824 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10826 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10828 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10830 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10832 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10834 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnModuleLoaded */

/* 10836 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10838 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10842 */	NdrFcShort( 0x7 ),	/* 7 */
/* 10844 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10848 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10850 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 10852 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10858 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter mod */

/* 10860 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10862 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10864 */	NdrFcShort( 0xbc ),	/* Type Offset=188 */

	/* Return value */

/* 10866 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10868 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10870 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnModuleUnloaded */

/* 10872 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10874 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10878 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10880 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10884 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10886 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 10888 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10894 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter mod */

/* 10896 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10898 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10900 */	NdrFcShort( 0xbc ),	/* Type Offset=188 */

	/* Return value */

/* 10902 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10904 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10906 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnTypeLoaded */

/* 10908 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10910 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10914 */	NdrFcShort( 0x9 ),	/* 9 */
/* 10916 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10920 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10922 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 10924 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10928 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10930 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter typeInst */

/* 10932 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10934 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10936 */	NdrFcShort( 0x152 ),	/* Type Offset=338 */

	/* Return value */

/* 10938 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10940 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10942 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnTypeUnloaded */

/* 10944 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10946 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10950 */	NdrFcShort( 0xa ),	/* 10 */
/* 10952 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10954 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10956 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10958 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 10960 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10966 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter typeInst */

/* 10968 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 10970 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 10972 */	NdrFcShort( 0x152 ),	/* Type Offset=338 */

	/* Return value */

/* 10974 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10976 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 10978 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnAppDomainLoaded */

/* 10980 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10982 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10986 */	NdrFcShort( 0xb ),	/* 11 */
/* 10988 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10992 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10994 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 10996 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11000 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11002 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter domain */

/* 11004 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11006 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11008 */	NdrFcShort( 0x90 ),	/* Type Offset=144 */

	/* Return value */

/* 11010 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11012 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11014 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnAppDomainUnloaded */

/* 11016 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11018 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11022 */	NdrFcShort( 0xc ),	/* 12 */
/* 11024 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11028 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11030 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 11032 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11034 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11038 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter domain */

/* 11040 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11042 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11044 */	NdrFcShort( 0x90 ),	/* Type Offset=144 */

	/* Return value */

/* 11046 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11048 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11050 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnException */

/* 11052 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11054 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11058 */	NdrFcShort( 0xd ),	/* 13 */
/* 11060 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 11062 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11064 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11066 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 11068 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11074 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter exception */

/* 11076 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11078 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 11080 */	NdrFcShort( 0x10e ),	/* Type Offset=270 */

	/* Return value */

/* 11082 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11084 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 11086 */	0x8,		/* FC_LONG */
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
/* 38 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 40 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 42 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 44 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
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
/* 134 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
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
/* 234 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
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
/* 316 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
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
/* 332 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
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
/* 362 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
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
/* 384 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
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
/* 442 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
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
/* 500 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 502 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 504 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 506 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 508 */	NdrFcShort( 0x2 ),	/* 2 */
/* 510 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 512 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 514 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 516 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 518 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 520 */	NdrFcShort( 0x2 ),	/* Offset= 2 (522) */
/* 522 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 524 */	NdrFcLong( 0xecd73800 ),	/* -321439744 */
/* 528 */	NdrFcShort( 0x22ca ),	/* 8906 */
/* 530 */	NdrFcShort( 0x4b0d ),	/* 19213 */
/* 532 */	0xab,		/* 171 */
			0x55,		/* 85 */
/* 534 */	0xe9,		/* 233 */
			0xba,		/* 186 */
/* 536 */	0x7e,		/* 126 */
			0x63,		/* 99 */
/* 538 */	0x18,		/* 24 */
			0xa5,		/* 165 */
/* 540 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 542 */	NdrFcLong( 0xa5b0beea ),	/* -1515143446 */
/* 546 */	NdrFcShort( 0xec62 ),	/* -5022 */
/* 548 */	NdrFcShort( 0x4618 ),	/* 17944 */
/* 550 */	0x80,		/* 128 */
			0x12,		/* 18 */
/* 552 */	0xa2,		/* 162 */
			0x4f,		/* 79 */
/* 554 */	0xfc,		/* 252 */
			0x23,		/* 35 */
/* 556 */	0x93,		/* 147 */
			0x4c,		/* 76 */
/* 558 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 560 */	NdrFcShort( 0x2 ),	/* Offset= 2 (562) */
/* 562 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 564 */	NdrFcLong( 0x96ec93c7 ),	/* -1762880569 */
/* 568 */	NdrFcShort( 0x1000 ),	/* 4096 */
/* 570 */	NdrFcShort( 0x4e93 ),	/* 20115 */
/* 572 */	0x89,		/* 137 */
			0x91,		/* 145 */
/* 574 */	0x98,		/* 152 */
			0xd8,		/* 216 */
/* 576 */	0x76,		/* 118 */
			0x6e,		/* 110 */
/* 578 */	0x66,		/* 102 */
			0x66,		/* 102 */
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
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 648 */	NdrFcShort( 0x2 ),	/* 2 */
/* 650 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 652 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 654 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 656 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 658 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 660 */	NdrFcLong( 0x7ca04601 ),	/* 2090878465 */
/* 664 */	NdrFcShort( 0xc702 ),	/* -14590 */
/* 666 */	NdrFcShort( 0x4670 ),	/* 18032 */
/* 668 */	0xa6,		/* 166 */
			0x3c,		/* 60 */
/* 670 */	0xfa,		/* 250 */
			0x44,		/* 68 */
/* 672 */	0xf7,		/* 247 */
			0xda,		/* 218 */
/* 674 */	0x7b,		/* 123 */
			0xd5,		/* 213 */
/* 676 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 678 */	NdrFcShort( 0x2 ),	/* Offset= 2 (680) */
/* 680 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 682 */	NdrFcLong( 0xecd73800 ),	/* -321439744 */
/* 686 */	NdrFcShort( 0x22ca ),	/* 8906 */
/* 688 */	NdrFcShort( 0x4b0d ),	/* 19213 */
/* 690 */	0xab,		/* 171 */
			0x55,		/* 85 */
/* 692 */	0xe9,		/* 233 */
			0xba,		/* 186 */
/* 694 */	0x7e,		/* 126 */
			0x63,		/* 99 */
/* 696 */	0x18,		/* 24 */
			0xa5,		/* 165 */
/* 698 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 700 */	NdrFcShort( 0x2 ),	/* Offset= 2 (702) */
/* 702 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 704 */	NdrFcLong( 0x88e32849 ),	/* -1998378935 */
/* 708 */	NdrFcShort( 0xa0a ),	/* 2570 */
/* 710 */	NdrFcShort( 0x4cb0 ),	/* 19632 */
/* 712 */	0x90,		/* 144 */
			0x22,		/* 34 */
/* 714 */	0x7c,		/* 124 */
			0xd2,		/* 210 */
/* 716 */	0xe9,		/* 233 */
			0xe1,		/* 225 */
/* 718 */	0x39,		/* 57 */
			0xe2,		/* 226 */
/* 720 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 722 */	NdrFcLong( 0xaaf60008 ),	/* -1426718712 */
/* 726 */	NdrFcShort( 0xfb2c ),	/* -1236 */
/* 728 */	NdrFcShort( 0x420b ),	/* 16907 */
/* 730 */	0x8f,		/* 143 */
			0xb1,		/* 177 */
/* 732 */	0x42,		/* 66 */
			0xd2,		/* 210 */
/* 734 */	0x44,		/* 68 */
			0xa5,		/* 165 */
/* 736 */	0x4a,		/* 74 */
			0x97,		/* 151 */
/* 738 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 740 */	NdrFcShort( 0x2 ),	/* Offset= 2 (742) */
/* 742 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 744 */	NdrFcShort( 0x18 ),	/* 24 */
/* 746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 748 */	NdrFcShort( 0x0 ),	/* Offset= 0 (748) */
/* 750 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 752 */	0x8,		/* FC_LONG */
			0xd,		/* FC_ENUM16 */
/* 754 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 756 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 758 */	NdrFcShort( 0x2 ),	/* Offset= 2 (760) */
/* 760 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 762 */	NdrFcLong( 0x4d078d91 ),	/* 1292340625 */
/* 766 */	NdrFcShort( 0x9cb3 ),	/* -25421 */
/* 768 */	NdrFcShort( 0x4b0d ),	/* 19213 */
/* 770 */	0x97,		/* 151 */
			0xac,		/* 172 */
/* 772 */	0x28,		/* 40 */
			0xc8,		/* 200 */
/* 774 */	0xa5,		/* 165 */
			0xa8,		/* 168 */
/* 776 */	0x25,		/* 37 */
			0x97,		/* 151 */
/* 778 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 780 */	NdrFcShort( 0xffc4 ),	/* Offset= -60 (720) */
/* 782 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 784 */	NdrFcShort( 0x4 ),	/* 4 */
/* 786 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 788 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 790 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 792 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 794 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 796 */	NdrFcShort( 0x10 ),	/* 16 */
/* 798 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 800 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 802 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 804 */	NdrFcShort( 0x10 ),	/* 16 */
/* 806 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 808 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 810 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 812 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 814 */	NdrFcShort( 0xffec ),	/* Offset= -20 (794) */
/* 816 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 818 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 820 */	NdrFcShort( 0x20 ),	/* 32 */
/* 822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 824 */	NdrFcShort( 0x0 ),	/* Offset= 0 (824) */
/* 826 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 828 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 830 */	0xd,		/* FC_ENUM16 */
			0x40,		/* FC_STRUCTPAD4 */
/* 832 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 834 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x7,		/* 7 */
/* 836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 838 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 840 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 842 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 844 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 848 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 850 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 852 */	NdrFcShort( 0xffde ),	/* Offset= -34 (818) */
/* 854 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 856 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 858 */	NdrFcShort( 0xffc0 ),	/* Offset= -64 (794) */
/* 860 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 862 */	NdrFcShort( 0x2 ),	/* Offset= 2 (864) */
/* 864 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 866 */	NdrFcLong( 0x5c552ab6 ),	/* 1549085366 */
/* 870 */	NdrFcShort( 0xfc09 ),	/* -1015 */
/* 872 */	NdrFcShort( 0x4cb3 ),	/* 19635 */
/* 874 */	0x8e,		/* 142 */
			0x36,		/* 54 */
/* 876 */	0x22,		/* 34 */
			0xfa,		/* 250 */
/* 878 */	0x3,		/* 3 */
			0xc7,		/* 199 */
/* 880 */	0x98,		/* 152 */
			0xb7,		/* 183 */
/* 882 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 884 */	NdrFcShort( 0xff1e ),	/* Offset= -226 (658) */
/* 886 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 888 */	NdrFcShort( 0x2 ),	/* Offset= 2 (890) */
/* 890 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 892 */	NdrFcLong( 0xe59d8d22 ),	/* -442659550 */
/* 896 */	NdrFcShort( 0xada7 ),	/* -21081 */
/* 898 */	NdrFcShort( 0x49a2 ),	/* 18850 */
/* 900 */	0x89,		/* 137 */
			0xb5,		/* 181 */
/* 902 */	0xa4,		/* 164 */
			0x15,		/* 21 */
/* 904 */	0xaf,		/* 175 */
			0xcf,		/* 207 */
/* 906 */	0xc9,		/* 201 */
			0x5f,		/* 95 */
/* 908 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 910 */	NdrFcShort( 0x1 ),	/* 1 */
/* 912 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 914 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 916 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 918 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 920 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 922 */	NdrFcShort( 0x2 ),	/* Offset= 2 (924) */
/* 924 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 926 */	NdrFcLong( 0x75da9e4c ),	/* 1977261644 */
/* 930 */	NdrFcShort( 0xbd33 ),	/* -17101 */
/* 932 */	NdrFcShort( 0x43c8 ),	/* 17352 */
/* 934 */	0x8f,		/* 143 */
			0x5c,		/* 92 */
/* 936 */	0x96,		/* 150 */
			0xe8,		/* 232 */
/* 938 */	0xa5,		/* 165 */
			0x24,		/* 36 */
/* 940 */	0x1f,		/* 31 */
			0x57,		/* 87 */
/* 942 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 944 */	NdrFcShort( 0x2 ),	/* Offset= 2 (946) */
/* 946 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 948 */	NdrFcLong( 0x271498c2 ),	/* 655661250 */
/* 952 */	NdrFcShort( 0x4085 ),	/* 16517 */
/* 954 */	NdrFcShort( 0x4766 ),	/* 18278 */
/* 956 */	0xbc,		/* 188 */
			0x3a,		/* 58 */
/* 958 */	0x7f,		/* 127 */
			0x8e,		/* 142 */
/* 960 */	0xd1,		/* 209 */
			0x88,		/* 136 */
/* 962 */	0xa1,		/* 161 */
			0x73,		/* 115 */
/* 964 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 966 */	NdrFcShort( 0x1 ),	/* 1 */
/* 968 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 970 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 972 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 974 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 976 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 978 */	NdrFcShort( 0x4 ),	/* 4 */
/* 980 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 982 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
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

static const MIDL_STUBLESS_PROXY_INFO IXCLRDataTarget3_ProxyInfo =
    {
    &Object_StubDesc,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataTarget3_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IXCLRDataTarget3_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataTarget3_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(17) _IXCLRDataTarget3ProxyVtbl = 
{
    &IXCLRDataTarget3_ProxyInfo,
    &IID_IXCLRDataTarget3,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *) (INT_PTR) -1 /* ICLRDataTarget::GetMachineType */ ,
    0 /* (void *) (INT_PTR) -1 /* ICLRDataTarget::GetPointerSize */ ,
    0 /* (void *) (INT_PTR) -1 /* ICLRDataTarget::GetImageBase */ ,
    0 /* (void *) (INT_PTR) -1 /* ICLRDataTarget::ReadVirtual */ ,
    0 /* (void *) (INT_PTR) -1 /* ICLRDataTarget::WriteVirtual */ ,
    0 /* (void *) (INT_PTR) -1 /* ICLRDataTarget::GetTLSValue */ ,
    0 /* (void *) (INT_PTR) -1 /* ICLRDataTarget::SetTLSValue */ ,
    0 /* (void *) (INT_PTR) -1 /* ICLRDataTarget::GetCurrentThreadID */ ,
    0 /* (void *) (INT_PTR) -1 /* ICLRDataTarget::GetThreadContext */ ,
    0 /* (void *) (INT_PTR) -1 /* ICLRDataTarget::SetThreadContext */ ,
    0 /* (void *) (INT_PTR) -1 /* ICLRDataTarget::Request */ ,
    0 /* (void *) (INT_PTR) -1 /* ICLRDataTarget2::AllocVirtual */ ,
    0 /* (void *) (INT_PTR) -1 /* ICLRDataTarget2::FreeVirtual */ ,
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
    NdrStubCall2
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
static const unsigned short IXCLRDataProcess_FormatStringOffsetTable[] =
    {
    84,
    114,
    150,
    192,
    228,
    270,
    312,
    348,
    384,
    420,
    456,
    492,
    534,
    600,
    636,
    678,
    714,
    756,
    792,
    834,
    870,
    906,
    948,
    984,
    1026,
    1074,
    1116,
    1152,
    1236,
    1278,
    1320,
    1380,
    1440,
    1482,
    1524,
    1584,
    1650,
    1710,
    1776,
    1812,
    1848,
    1890,
    1932,
    1968,
    2034
    };

static const MIDL_STUBLESS_PROXY_INFO IXCLRDataProcess_ProxyInfo =
    {
    &Object_StubDesc,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataProcess_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IXCLRDataProcess_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataProcess_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
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
static const unsigned short IXCLRDataAppDomain_FormatStringOffsetTable[] =
    {
    2106,
    2142,
    2190,
    2226,
    2262,
    2298,
    2334
    };

static const MIDL_STUBLESS_PROXY_INFO IXCLRDataAppDomain_ProxyInfo =
    {
    &Object_StubDesc,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataAppDomain_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IXCLRDataAppDomain_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataAppDomain_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
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
static const unsigned short IXCLRDataAssembly_FormatStringOffsetTable[] =
    {
    2394,
    2430,
    2472,
    2508,
    2556,
    2604,
    2640,
    2676,
    2736,
    2772,
    2814,
    2850
    };

static const MIDL_STUBLESS_PROXY_INFO IXCLRDataAssembly_ProxyInfo =
    {
    &Object_StubDesc,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataAssembly_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IXCLRDataAssembly_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataAssembly_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
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
static const unsigned short IXCLRDataModule_FormatStringOffsetTable[] =
    {
    2394,
    2898,
    2472,
    2940,
    2976,
    3018,
    3054,
    3096,
    3138,
    3174,
    3222,
    3264,
    3300,
    3354,
    3396,
    3432,
    3474,
    3522,
    3564,
    3600,
    3654,
    3696,
    3732,
    3774,
    3834,
    3876,
    3912,
    3960,
    4008,
    4044,
    4080,
    4116,
    4158,
    4194,
    4254,
    4290,
    4332,
    4368
    };

static const MIDL_STUBLESS_PROXY_INFO IXCLRDataModule_ProxyInfo =
    {
    &Object_StubDesc,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataModule_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IXCLRDataModule_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataModule_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
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
static const unsigned short IXCLRDataTypeDefinition_FormatStringOffsetTable[] =
    {
    4404,
    114,
    4440,
    192,
    4482,
    4530,
    4572,
    4608,
    4650,
    4692,
    2814,
    4734,
    4788,
    4830,
    4866,
    4902,
    4938,
    4998,
    5034,
    5070,
    5112,
    5154,
    948,
    5226,
    5280,
    3876,
    5334,
    5400,
    5436,
    5472,
    5550,
    5610
    };

static const MIDL_STUBLESS_PROXY_INFO IXCLRDataTypeDefinition_ProxyInfo =
    {
    &Object_StubDesc,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataTypeDefinition_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IXCLRDataTypeDefinition_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataTypeDefinition_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
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
static const unsigned short IXCLRDataTypeInstance_FormatStringOffsetTable[] =
    {
    2394,
    5682,
    2472,
    5724,
    5772,
    3018,
    312,
    5814,
    5886,
    5940,
    2814,
    5982,
    6018,
    6060,
    6114,
    6150,
    6186,
    6222,
    6258,
    5070,
    6318,
    6366,
    948,
    6408,
    6468,
    3876,
    6510,
    6576,
    6612,
    6684,
    6738
    };

static const MIDL_STUBLESS_PROXY_INFO IXCLRDataTypeInstance_ProxyInfo =
    {
    &Object_StubDesc,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataTypeInstance_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IXCLRDataTypeInstance_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataTypeInstance_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
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
static const unsigned short IXCLRDataMethodDefinition_FormatStringOffsetTable[] =
    {
    6810,
    6846,
    6888,
    192,
    6930,
    6984,
    312,
    7026,
    7062,
    7098,
    7134,
    3264,
    7176,
    7212,
    7248,
    7308,
    6186
    };

static const MIDL_STUBLESS_PROXY_INFO IXCLRDataMethodDefinition_ProxyInfo =
    {
    &Object_StubDesc,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataMethodDefinition_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IXCLRDataMethodDefinition_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataMethodDefinition_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
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
static const unsigned short IXCLRDataMethodInstance_FormatStringOffsetTable[] =
    {
    7344,
    7380,
    7416,
    7458,
    7512,
    7548,
    312,
    7584,
    7620,
    7662,
    7716,
    7770,
    7818,
    7854,
    3396,
    7896,
    7956
    };

static const MIDL_STUBLESS_PROXY_INFO IXCLRDataMethodInstance_ProxyInfo =
    {
    &Object_StubDesc,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataMethodInstance_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IXCLRDataMethodInstance_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataMethodInstance_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
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
static const unsigned short IXCLRDataTask_FormatStringOffsetTable[] =
    {
    7992,
    8028,
    2190,
    2226,
    8064,
    8100,
    312,
    8136,
    8172,
    420,
    8214,
    8268,
    8310,
    8346,
    8406,
    8454
    };

static const MIDL_STUBLESS_PROXY_INFO IXCLRDataTask_ProxyInfo =
    {
    &Object_StubDesc,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataTask_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IXCLRDataTask_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataTask_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
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
static const unsigned short IXCLRDataStackWalk_FormatStringOffsetTable[] =
    {
    8490,
    8544,
    8586,
    2940,
    8616,
    8658,
    2334,
    8694
    };

static const MIDL_STUBLESS_PROXY_INFO IXCLRDataStackWalk_ProxyInfo =
    {
    &Object_StubDesc,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataStackWalk_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IXCLRDataStackWalk_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataStackWalk_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
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
static const unsigned short IXCLRDataFrame_FormatStringOffsetTable[] =
    {
    8742,
    8784,
    8838,
    2226,
    8874,
    2604,
    8934,
    8994,
    9048,
    9084,
    9144,
    9180
    };

static const MIDL_STUBLESS_PROXY_INFO IXCLRDataFrame_ProxyInfo =
    {
    &Object_StubDesc,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataFrame_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IXCLRDataFrame_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataFrame_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
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
static const unsigned short IXCLRDataExceptionState_FormatStringOffsetTable[] =
    {
    9222,
    9258,
    9294,
    9330,
    7512,
    9366,
    2334,
    9414,
    9462,
    9516
    };

static const MIDL_STUBLESS_PROXY_INFO IXCLRDataExceptionState_ProxyInfo =
    {
    &Object_StubDesc,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataExceptionState_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IXCLRDataExceptionState_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataExceptionState_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
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
static const unsigned short IXCLRDataValue_FormatStringOffsetTable[] =
    {
    9222,
    114,
    2190,
    9552,
    9600,
    9648,
    312,
    9684,
    9750,
    9810,
    9858,
    9906,
    9972,
    10008,
    10068,
    678,
    10116,
    10176,
    10212,
    10248,
    10296,
    10362,
    10410,
    10482,
    10536,
    10602,
    10638
    };

static const MIDL_STUBLESS_PROXY_INFO IXCLRDataValue_ProxyInfo =
    {
    &Object_StubDesc,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataValue_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IXCLRDataValue_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataValue_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
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
static const unsigned short IXCLRDataExceptionNotification_FormatStringOffsetTable[] =
    {
    10686,
    10722,
    10758,
    10794,
    10836,
    10872,
    10908,
    10944
    };

static const MIDL_STUBLESS_PROXY_INFO IXCLRDataExceptionNotification_ProxyInfo =
    {
    &Object_StubDesc,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataExceptionNotification_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IXCLRDataExceptionNotification_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataExceptionNotification_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
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
static const unsigned short IXCLRDataExceptionNotification2_FormatStringOffsetTable[] =
    {
    10686,
    10722,
    10758,
    10794,
    10836,
    10872,
    10908,
    10944,
    10980,
    11016,
    11052
    };

static const MIDL_STUBLESS_PROXY_INFO IXCLRDataExceptionNotification2_ProxyInfo =
    {
    &Object_StubDesc,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataExceptionNotification2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IXCLRDataExceptionNotification2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    xclrdata__MIDL_ProcFormatString.Format,
    &IXCLRDataExceptionNotification2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
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
    0x50002, /* Ndr library version */
    0,
    0x70001f4, /* MIDL Version 7.0.500 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * _xclrdata_ProxyVtblList[] = 
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

const CInterfaceStubVtbl * _xclrdata_StubVtblList[] = 
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

const IID *  _xclrdata_BaseIIDList[] = 
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
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64)*/

