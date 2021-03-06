#ifndef BRL_STREAM_STREAM_BMX_RELEASE_HAIKU_X64_H
#define BRL_STREAM_STREAM_BMX_RELEASE_HAIKU_X64_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.release.haiku.x64.h>
#include <brl.mod/io.mod/.bmx/io.bmx.release.haiku.x64.h>
#include <pub.mod/stdc.mod/.bmx/stdc.bmx.release.haiku.x64.h>
int __bb_brl_stream_stream();
struct brl_stream_TStreamFactory_obj;
struct brl_stream_TStreamException_obj;
struct brl_stream_TStreamReadException_obj;
struct brl_stream_TStreamWriteException_obj;
struct brl_stream_TIO_obj;
struct brl_stream_TStream_obj;
struct brl_stream_TStreamWrapper_obj;
struct brl_stream_TStreamStream_obj;
struct brl_stream_TFileStream_obj;
struct brl_stream_TCStream_obj;
struct brl_stream_TIOStream_obj;
void _brl_stream_TStreamFactory_New(struct brl_stream_TStreamFactory_obj* o);
typedef struct brl_stream_TStream_obj* (*brl_stream_TStreamFactory_CreateStream_TObjectSSii_m)(struct brl_stream_TStreamFactory_obj*,BBOBJECT,BBSTRING,BBSTRING,BBINT,BBINT);
struct brl_stream_TStream_obj* _brl_stream_TStreamFactory_CreateStream_TObjectSSii(struct brl_stream_TStreamFactory_obj*,BBOBJECT,BBSTRING,BBSTRING,BBINT,BBINT);
struct BBClass_brl_stream_TStreamFactory {
	BBClass*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	unsigned int instance_count;
	unsigned int fields_offset;
	brl_stream_TStreamFactory_CreateStream_TObjectSSii_m m_CreateStream_TObjectSSii;
};

struct brl_stream_TStreamFactory_obj {
	struct BBClass_brl_stream_TStreamFactory* clas;
	struct brl_stream_TStreamFactory_obj* _brl_stream_tstreamfactory__succ;
};
extern struct BBClass_brl_stream_TStreamFactory brl_stream_TStreamFactory;
void _brl_stream_TStreamException_New(struct brl_stream_TStreamException_obj* o);
struct BBClass_brl_stream_TStreamException {
	BBClass*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	unsigned int instance_count;
	unsigned int fields_offset;
};

struct brl_stream_TStreamException_obj {
	struct BBClass_brl_stream_TStreamException* clas;
};
extern struct BBClass_brl_stream_TStreamException brl_stream_TStreamException;
void _brl_stream_TStreamReadException_New(struct brl_stream_TStreamReadException_obj* o);
BBSTRING _brl_stream_TStreamReadException_ToString(struct brl_stream_TStreamReadException_obj* o);
struct BBClass_brl_stream_TStreamReadException {
	struct BBClass_brl_stream_TStreamException*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	unsigned int instance_count;
	unsigned int fields_offset;
};

struct brl_stream_TStreamReadException_obj {
	struct BBClass_brl_stream_TStreamReadException* clas;
};
extern struct BBClass_brl_stream_TStreamReadException brl_stream_TStreamReadException;
void _brl_stream_TStreamWriteException_New(struct brl_stream_TStreamWriteException_obj* o);
BBSTRING _brl_stream_TStreamWriteException_ToString(struct brl_stream_TStreamWriteException_obj* o);
struct BBClass_brl_stream_TStreamWriteException {
	struct BBClass_brl_stream_TStreamException*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	unsigned int instance_count;
	unsigned int fields_offset;
};

struct brl_stream_TStreamWriteException_obj {
	struct BBClass_brl_stream_TStreamWriteException* clas;
};
extern struct BBClass_brl_stream_TStreamWriteException brl_stream_TStreamWriteException;
void _brl_stream_TIO_New(struct brl_stream_TIO_obj* o);
void _brl_stream_TIO_Delete(struct brl_stream_TIO_obj* o);
typedef BBINT (*brl_stream_TIO_Eof_m)(struct brl_stream_TIO_obj*);
BBINT _brl_stream_TIO_Eof(struct brl_stream_TIO_obj*);
typedef BBLONG (*brl_stream_TIO_Pos_m)(struct brl_stream_TIO_obj*);
BBLONG _brl_stream_TIO_Pos(struct brl_stream_TIO_obj*);
typedef BBLONG (*brl_stream_TIO_Size_m)(struct brl_stream_TIO_obj*);
BBLONG _brl_stream_TIO_Size(struct brl_stream_TIO_obj*);
typedef BBLONG (*brl_stream_TIO_Seek_li_m)(struct brl_stream_TIO_obj*,BBLONG,BBINT);
BBLONG _brl_stream_TIO_Seek_li(struct brl_stream_TIO_obj*,BBLONG,BBINT);
typedef void (*brl_stream_TIO_Flush_m)(struct brl_stream_TIO_obj*);
void _brl_stream_TIO_Flush(struct brl_stream_TIO_obj*);
typedef void (*brl_stream_TIO_Close_m)(struct brl_stream_TIO_obj*);
void _brl_stream_TIO_Close(struct brl_stream_TIO_obj*);
typedef BBLONG (*brl_stream_TIO_Read_pbl_m)(struct brl_stream_TIO_obj*,BBBYTE*,BBLONG);
BBLONG _brl_stream_TIO_Read_pbl(struct brl_stream_TIO_obj*,BBBYTE*,BBLONG);
typedef BBLONG (*brl_stream_TIO_Write_pbl_m)(struct brl_stream_TIO_obj*,BBBYTE*,BBLONG);
BBLONG _brl_stream_TIO_Write_pbl(struct brl_stream_TIO_obj*,BBBYTE*,BBLONG);
typedef BBINT (*brl_stream_TIO_SetSize_l_m)(struct brl_stream_TIO_obj*,BBLONG);
BBINT _brl_stream_TIO_SetSize_l(struct brl_stream_TIO_obj*,BBLONG);
struct BBClass_brl_stream_TIO {
	BBClass*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	unsigned int instance_count;
	unsigned int fields_offset;
	brl_stream_TIO_Eof_m m_Eof;
	brl_stream_TIO_Pos_m m_Pos;
	brl_stream_TIO_Size_m m_Size;
	brl_stream_TIO_Seek_li_m m_Seek_li;
	brl_stream_TIO_Flush_m m_Flush;
	brl_stream_TIO_Close_m m_Close;
	brl_stream_TIO_Read_pbl_m m_Read_pbl;
	brl_stream_TIO_Write_pbl_m m_Write_pbl;
	brl_stream_TIO_SetSize_l_m m_SetSize_l;
};

struct brl_stream_TIO_obj {
	struct BBClass_brl_stream_TIO* clas;
};
extern struct BBClass_brl_stream_TIO brl_stream_TIO;
void _brl_stream_TStream_New(struct brl_stream_TStream_obj* o);
void _brl_stream_TStream_Delete(struct brl_stream_TStream_obj* o);
typedef BBLONG (*brl_stream_TStream_ReadBytes_pbl_m)(struct brl_stream_TStream_obj*,BBBYTE*,BBLONG);
BBLONG _brl_stream_TStream_ReadBytes_pbl(struct brl_stream_TStream_obj*,BBBYTE*,BBLONG);
typedef BBLONG (*brl_stream_TStream_WriteBytes_pbl_m)(struct brl_stream_TStream_obj*,BBBYTE*,BBLONG);
BBLONG _brl_stream_TStream_WriteBytes_pbl(struct brl_stream_TStream_obj*,BBBYTE*,BBLONG);
typedef BBLONG (*brl_stream_TStream_SkipBytes_l_m)(struct brl_stream_TStream_obj*,BBLONG);
BBLONG _brl_stream_TStream_SkipBytes_l(struct brl_stream_TStream_obj*,BBLONG);
typedef BBINT (*brl_stream_TStream_ReadByte_m)(struct brl_stream_TStream_obj*);
BBINT _brl_stream_TStream_ReadByte(struct brl_stream_TStream_obj*);
typedef void (*brl_stream_TStream_WriteByte_i_m)(struct brl_stream_TStream_obj*,BBINT);
void _brl_stream_TStream_WriteByte_i(struct brl_stream_TStream_obj*,BBINT);
typedef BBINT (*brl_stream_TStream_ReadShort_m)(struct brl_stream_TStream_obj*);
BBINT _brl_stream_TStream_ReadShort(struct brl_stream_TStream_obj*);
typedef void (*brl_stream_TStream_WriteShort_i_m)(struct brl_stream_TStream_obj*,BBINT);
void _brl_stream_TStream_WriteShort_i(struct brl_stream_TStream_obj*,BBINT);
typedef BBINT (*brl_stream_TStream_ReadInt_m)(struct brl_stream_TStream_obj*);
BBINT _brl_stream_TStream_ReadInt(struct brl_stream_TStream_obj*);
typedef void (*brl_stream_TStream_WriteInt_i_m)(struct brl_stream_TStream_obj*,BBINT);
void _brl_stream_TStream_WriteInt_i(struct brl_stream_TStream_obj*,BBINT);
typedef BBLONG (*brl_stream_TStream_ReadLong_m)(struct brl_stream_TStream_obj*);
BBLONG _brl_stream_TStream_ReadLong(struct brl_stream_TStream_obj*);
typedef void (*brl_stream_TStream_WriteLong_l_m)(struct brl_stream_TStream_obj*,BBLONG);
void _brl_stream_TStream_WriteLong_l(struct brl_stream_TStream_obj*,BBLONG);
typedef BBFLOAT (*brl_stream_TStream_ReadFloat_m)(struct brl_stream_TStream_obj*);
BBFLOAT _brl_stream_TStream_ReadFloat(struct brl_stream_TStream_obj*);
typedef void (*brl_stream_TStream_WriteFloat_f_m)(struct brl_stream_TStream_obj*,BBFLOAT);
void _brl_stream_TStream_WriteFloat_f(struct brl_stream_TStream_obj*,BBFLOAT);
typedef BBDOUBLE (*brl_stream_TStream_ReadDouble_m)(struct brl_stream_TStream_obj*);
BBDOUBLE _brl_stream_TStream_ReadDouble(struct brl_stream_TStream_obj*);
typedef void (*brl_stream_TStream_WriteDouble_d_m)(struct brl_stream_TStream_obj*,BBDOUBLE);
void _brl_stream_TStream_WriteDouble_d(struct brl_stream_TStream_obj*,BBDOUBLE);
typedef BBSTRING (*brl_stream_TStream_ReadLine_m)(struct brl_stream_TStream_obj*);
BBSTRING _brl_stream_TStream_ReadLine(struct brl_stream_TStream_obj*);
typedef BBINT (*brl_stream_TStream_WriteLine_S_m)(struct brl_stream_TStream_obj*,BBSTRING);
BBINT _brl_stream_TStream_WriteLine_S(struct brl_stream_TStream_obj*,BBSTRING);
typedef BBSTRING (*brl_stream_TStream_ReadString_i_m)(struct brl_stream_TStream_obj*,BBINT);
BBSTRING _brl_stream_TStream_ReadString_i(struct brl_stream_TStream_obj*,BBINT);
typedef void (*brl_stream_TStream_WriteString_S_m)(struct brl_stream_TStream_obj*,BBSTRING);
void _brl_stream_TStream_WriteString_S(struct brl_stream_TStream_obj*,BBSTRING);
typedef BBOBJECT (*brl_stream_TStream_ReadObject_m)(struct brl_stream_TStream_obj*);
BBOBJECT _brl_stream_TStream_ReadObject(struct brl_stream_TStream_obj*);
typedef void (*brl_stream_TStream_WriteObject_TObject_m)(struct brl_stream_TStream_obj*,BBOBJECT);
void _brl_stream_TStream_WriteObject_TObject(struct brl_stream_TStream_obj*,BBOBJECT);
struct BBClass_brl_stream_TStream {
	struct BBClass_brl_stream_TIO*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	unsigned int instance_count;
	unsigned int fields_offset;
	brl_stream_TIO_Eof_m m_Eof;
	brl_stream_TIO_Pos_m m_Pos;
	brl_stream_TIO_Size_m m_Size;
	brl_stream_TIO_Seek_li_m m_Seek_li;
	brl_stream_TIO_Flush_m m_Flush;
	brl_stream_TIO_Close_m m_Close;
	brl_stream_TIO_Read_pbl_m m_Read_pbl;
	brl_stream_TIO_Write_pbl_m m_Write_pbl;
	brl_stream_TIO_SetSize_l_m m_SetSize_l;
	brl_stream_TStream_ReadBytes_pbl_m m_ReadBytes_pbl;
	brl_stream_TStream_WriteBytes_pbl_m m_WriteBytes_pbl;
	brl_stream_TStream_SkipBytes_l_m m_SkipBytes_l;
	brl_stream_TStream_ReadByte_m m_ReadByte;
	brl_stream_TStream_WriteByte_i_m m_WriteByte_i;
	brl_stream_TStream_ReadShort_m m_ReadShort;
	brl_stream_TStream_WriteShort_i_m m_WriteShort_i;
	brl_stream_TStream_ReadInt_m m_ReadInt;
	brl_stream_TStream_WriteInt_i_m m_WriteInt_i;
	brl_stream_TStream_ReadLong_m m_ReadLong;
	brl_stream_TStream_WriteLong_l_m m_WriteLong_l;
	brl_stream_TStream_ReadFloat_m m_ReadFloat;
	brl_stream_TStream_WriteFloat_f_m m_WriteFloat_f;
	brl_stream_TStream_ReadDouble_m m_ReadDouble;
	brl_stream_TStream_WriteDouble_d_m m_WriteDouble_d;
	brl_stream_TStream_ReadLine_m m_ReadLine;
	brl_stream_TStream_WriteLine_S_m m_WriteLine_S;
	brl_stream_TStream_ReadString_i_m m_ReadString_i;
	brl_stream_TStream_WriteString_S_m m_WriteString_S;
	brl_stream_TStream_ReadObject_m m_ReadObject;
	brl_stream_TStream_WriteObject_TObject_m m_WriteObject_TObject;
};

struct brl_stream_TStream_obj {
	struct BBClass_brl_stream_TStream* clas;
};
extern struct BBClass_brl_stream_TStream brl_stream_TStream;
void _brl_stream_TStreamWrapper_New(struct brl_stream_TStreamWrapper_obj* o);
void _brl_stream_TStreamWrapper_Delete(struct brl_stream_TStreamWrapper_obj* o);
typedef void (*brl_stream_TStreamWrapper_SetStream_TTStream_m)(struct brl_stream_TStreamWrapper_obj*,struct brl_stream_TStream_obj*);
void _brl_stream_TStreamWrapper_SetStream_TTStream(struct brl_stream_TStreamWrapper_obj*,struct brl_stream_TStream_obj*);
typedef BBINT (*brl_stream_TStreamWrapper_Eof_m)(struct brl_stream_TStreamWrapper_obj*);
BBINT _brl_stream_TStreamWrapper_Eof(struct brl_stream_TStreamWrapper_obj*);
typedef BBLONG (*brl_stream_TStreamWrapper_Pos_m)(struct brl_stream_TStreamWrapper_obj*);
BBLONG _brl_stream_TStreamWrapper_Pos(struct brl_stream_TStreamWrapper_obj*);
typedef BBLONG (*brl_stream_TStreamWrapper_Size_m)(struct brl_stream_TStreamWrapper_obj*);
BBLONG _brl_stream_TStreamWrapper_Size(struct brl_stream_TStreamWrapper_obj*);
typedef BBLONG (*brl_stream_TStreamWrapper_Seek_li_m)(struct brl_stream_TStreamWrapper_obj*,BBLONG,BBINT);
BBLONG _brl_stream_TStreamWrapper_Seek_li(struct brl_stream_TStreamWrapper_obj*,BBLONG,BBINT);
typedef void (*brl_stream_TStreamWrapper_Flush_m)(struct brl_stream_TStreamWrapper_obj*);
void _brl_stream_TStreamWrapper_Flush(struct brl_stream_TStreamWrapper_obj*);
typedef void (*brl_stream_TStreamWrapper_Close_m)(struct brl_stream_TStreamWrapper_obj*);
void _brl_stream_TStreamWrapper_Close(struct brl_stream_TStreamWrapper_obj*);
typedef BBLONG (*brl_stream_TStreamWrapper_Read_pbl_m)(struct brl_stream_TStreamWrapper_obj*,BBBYTE*,BBLONG);
BBLONG _brl_stream_TStreamWrapper_Read_pbl(struct brl_stream_TStreamWrapper_obj*,BBBYTE*,BBLONG);
typedef BBLONG (*brl_stream_TStreamWrapper_Write_pbl_m)(struct brl_stream_TStreamWrapper_obj*,BBBYTE*,BBLONG);
BBLONG _brl_stream_TStreamWrapper_Write_pbl(struct brl_stream_TStreamWrapper_obj*,BBBYTE*,BBLONG);
typedef BBINT (*brl_stream_TStreamWrapper_ReadByte_m)(struct brl_stream_TStreamWrapper_obj*);
BBINT _brl_stream_TStreamWrapper_ReadByte(struct brl_stream_TStreamWrapper_obj*);
typedef void (*brl_stream_TStreamWrapper_WriteByte_i_m)(struct brl_stream_TStreamWrapper_obj*,BBINT);
void _brl_stream_TStreamWrapper_WriteByte_i(struct brl_stream_TStreamWrapper_obj*,BBINT);
typedef BBINT (*brl_stream_TStreamWrapper_ReadShort_m)(struct brl_stream_TStreamWrapper_obj*);
BBINT _brl_stream_TStreamWrapper_ReadShort(struct brl_stream_TStreamWrapper_obj*);
typedef void (*brl_stream_TStreamWrapper_WriteShort_i_m)(struct brl_stream_TStreamWrapper_obj*,BBINT);
void _brl_stream_TStreamWrapper_WriteShort_i(struct brl_stream_TStreamWrapper_obj*,BBINT);
typedef BBINT (*brl_stream_TStreamWrapper_ReadInt_m)(struct brl_stream_TStreamWrapper_obj*);
BBINT _brl_stream_TStreamWrapper_ReadInt(struct brl_stream_TStreamWrapper_obj*);
typedef void (*brl_stream_TStreamWrapper_WriteInt_i_m)(struct brl_stream_TStreamWrapper_obj*,BBINT);
void _brl_stream_TStreamWrapper_WriteInt_i(struct brl_stream_TStreamWrapper_obj*,BBINT);
typedef BBFLOAT (*brl_stream_TStreamWrapper_ReadFloat_m)(struct brl_stream_TStreamWrapper_obj*);
BBFLOAT _brl_stream_TStreamWrapper_ReadFloat(struct brl_stream_TStreamWrapper_obj*);
typedef void (*brl_stream_TStreamWrapper_WriteFloat_f_m)(struct brl_stream_TStreamWrapper_obj*,BBFLOAT);
void _brl_stream_TStreamWrapper_WriteFloat_f(struct brl_stream_TStreamWrapper_obj*,BBFLOAT);
typedef BBDOUBLE (*brl_stream_TStreamWrapper_ReadDouble_m)(struct brl_stream_TStreamWrapper_obj*);
BBDOUBLE _brl_stream_TStreamWrapper_ReadDouble(struct brl_stream_TStreamWrapper_obj*);
typedef void (*brl_stream_TStreamWrapper_WriteDouble_d_m)(struct brl_stream_TStreamWrapper_obj*,BBDOUBLE);
void _brl_stream_TStreamWrapper_WriteDouble_d(struct brl_stream_TStreamWrapper_obj*,BBDOUBLE);
typedef BBSTRING (*brl_stream_TStreamWrapper_ReadLine_m)(struct brl_stream_TStreamWrapper_obj*);
BBSTRING _brl_stream_TStreamWrapper_ReadLine(struct brl_stream_TStreamWrapper_obj*);
typedef BBINT (*brl_stream_TStreamWrapper_WriteLine_S_m)(struct brl_stream_TStreamWrapper_obj*,BBSTRING);
BBINT _brl_stream_TStreamWrapper_WriteLine_S(struct brl_stream_TStreamWrapper_obj*,BBSTRING);
typedef BBSTRING (*brl_stream_TStreamWrapper_ReadString_i_m)(struct brl_stream_TStreamWrapper_obj*,BBINT);
BBSTRING _brl_stream_TStreamWrapper_ReadString_i(struct brl_stream_TStreamWrapper_obj*,BBINT);
typedef void (*brl_stream_TStreamWrapper_WriteString_S_m)(struct brl_stream_TStreamWrapper_obj*,BBSTRING);
void _brl_stream_TStreamWrapper_WriteString_S(struct brl_stream_TStreamWrapper_obj*,BBSTRING);
typedef BBOBJECT (*brl_stream_TStreamWrapper_ReadObject_m)(struct brl_stream_TStreamWrapper_obj*);
BBOBJECT _brl_stream_TStreamWrapper_ReadObject(struct brl_stream_TStreamWrapper_obj*);
typedef void (*brl_stream_TStreamWrapper_WriteObject_TObject_m)(struct brl_stream_TStreamWrapper_obj*,BBOBJECT);
void _brl_stream_TStreamWrapper_WriteObject_TObject(struct brl_stream_TStreamWrapper_obj*,BBOBJECT);
typedef BBINT (*brl_stream_TStreamWrapper_SetSize_l_m)(struct brl_stream_TStreamWrapper_obj*,BBLONG);
BBINT _brl_stream_TStreamWrapper_SetSize_l(struct brl_stream_TStreamWrapper_obj*,BBLONG);
struct BBClass_brl_stream_TStreamWrapper {
	struct BBClass_brl_stream_TStream*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	unsigned int instance_count;
	unsigned int fields_offset;
	brl_stream_TStreamWrapper_Eof_m m_Eof;
	brl_stream_TStreamWrapper_Pos_m m_Pos;
	brl_stream_TStreamWrapper_Size_m m_Size;
	brl_stream_TStreamWrapper_Seek_li_m m_Seek_li;
	brl_stream_TStreamWrapper_Flush_m m_Flush;
	brl_stream_TStreamWrapper_Close_m m_Close;
	brl_stream_TStreamWrapper_Read_pbl_m m_Read_pbl;
	brl_stream_TStreamWrapper_Write_pbl_m m_Write_pbl;
	brl_stream_TStreamWrapper_SetSize_l_m m_SetSize_l;
	brl_stream_TStream_ReadBytes_pbl_m m_ReadBytes_pbl;
	brl_stream_TStream_WriteBytes_pbl_m m_WriteBytes_pbl;
	brl_stream_TStream_SkipBytes_l_m m_SkipBytes_l;
	brl_stream_TStreamWrapper_ReadByte_m m_ReadByte;
	brl_stream_TStreamWrapper_WriteByte_i_m m_WriteByte_i;
	brl_stream_TStreamWrapper_ReadShort_m m_ReadShort;
	brl_stream_TStreamWrapper_WriteShort_i_m m_WriteShort_i;
	brl_stream_TStreamWrapper_ReadInt_m m_ReadInt;
	brl_stream_TStreamWrapper_WriteInt_i_m m_WriteInt_i;
	brl_stream_TStream_ReadLong_m m_ReadLong;
	brl_stream_TStream_WriteLong_l_m m_WriteLong_l;
	brl_stream_TStreamWrapper_ReadFloat_m m_ReadFloat;
	brl_stream_TStreamWrapper_WriteFloat_f_m m_WriteFloat_f;
	brl_stream_TStreamWrapper_ReadDouble_m m_ReadDouble;
	brl_stream_TStreamWrapper_WriteDouble_d_m m_WriteDouble_d;
	brl_stream_TStreamWrapper_ReadLine_m m_ReadLine;
	brl_stream_TStreamWrapper_WriteLine_S_m m_WriteLine_S;
	brl_stream_TStreamWrapper_ReadString_i_m m_ReadString_i;
	brl_stream_TStreamWrapper_WriteString_S_m m_WriteString_S;
	brl_stream_TStreamWrapper_ReadObject_m m_ReadObject;
	brl_stream_TStreamWrapper_WriteObject_TObject_m m_WriteObject_TObject;
	brl_stream_TStreamWrapper_SetStream_TTStream_m m_SetStream_TTStream;
};

struct brl_stream_TStreamWrapper_obj {
	struct BBClass_brl_stream_TStreamWrapper* clas;
	struct brl_stream_TStream_obj* _brl_stream_tstreamwrapper__stream;
};
extern struct BBClass_brl_stream_TStreamWrapper brl_stream_TStreamWrapper;
void _brl_stream_TStreamStream_New(struct brl_stream_TStreamStream_obj* o);
void _brl_stream_TStreamStream_Delete(struct brl_stream_TStreamStream_obj* o);
typedef void (*brl_stream_TStreamStream_Close_m)(struct brl_stream_TStreamStream_obj*);
void _brl_stream_TStreamStream_Close(struct brl_stream_TStreamStream_obj*);
typedef struct brl_stream_TStreamStream_obj* (*brl_stream_TStreamStream_Create_TTStreamStream_TTStream_f)(struct brl_stream_TStream_obj*);
struct brl_stream_TStreamStream_obj* brl_stream_TStreamStream_Create_TTStreamStream_TTStream(struct brl_stream_TStream_obj*);
struct BBClass_brl_stream_TStreamStream {
	struct BBClass_brl_stream_TStreamWrapper*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	unsigned int instance_count;
	unsigned int fields_offset;
	brl_stream_TStreamWrapper_Eof_m m_Eof;
	brl_stream_TStreamWrapper_Pos_m m_Pos;
	brl_stream_TStreamWrapper_Size_m m_Size;
	brl_stream_TStreamWrapper_Seek_li_m m_Seek_li;
	brl_stream_TStreamWrapper_Flush_m m_Flush;
	brl_stream_TStreamStream_Close_m m_Close;
	brl_stream_TStreamWrapper_Read_pbl_m m_Read_pbl;
	brl_stream_TStreamWrapper_Write_pbl_m m_Write_pbl;
	brl_stream_TStreamWrapper_SetSize_l_m m_SetSize_l;
	brl_stream_TStream_ReadBytes_pbl_m m_ReadBytes_pbl;
	brl_stream_TStream_WriteBytes_pbl_m m_WriteBytes_pbl;
	brl_stream_TStream_SkipBytes_l_m m_SkipBytes_l;
	brl_stream_TStreamWrapper_ReadByte_m m_ReadByte;
	brl_stream_TStreamWrapper_WriteByte_i_m m_WriteByte_i;
	brl_stream_TStreamWrapper_ReadShort_m m_ReadShort;
	brl_stream_TStreamWrapper_WriteShort_i_m m_WriteShort_i;
	brl_stream_TStreamWrapper_ReadInt_m m_ReadInt;
	brl_stream_TStreamWrapper_WriteInt_i_m m_WriteInt_i;
	brl_stream_TStream_ReadLong_m m_ReadLong;
	brl_stream_TStream_WriteLong_l_m m_WriteLong_l;
	brl_stream_TStreamWrapper_ReadFloat_m m_ReadFloat;
	brl_stream_TStreamWrapper_WriteFloat_f_m m_WriteFloat_f;
	brl_stream_TStreamWrapper_ReadDouble_m m_ReadDouble;
	brl_stream_TStreamWrapper_WriteDouble_d_m m_WriteDouble_d;
	brl_stream_TStreamWrapper_ReadLine_m m_ReadLine;
	brl_stream_TStreamWrapper_WriteLine_S_m m_WriteLine_S;
	brl_stream_TStreamWrapper_ReadString_i_m m_ReadString_i;
	brl_stream_TStreamWrapper_WriteString_S_m m_WriteString_S;
	brl_stream_TStreamWrapper_ReadObject_m m_ReadObject;
	brl_stream_TStreamWrapper_WriteObject_TObject_m m_WriteObject_TObject;
	brl_stream_TStreamWrapper_SetStream_TTStream_m m_SetStream_TTStream;
	brl_stream_TStreamStream_Create_TTStreamStream_TTStream_f f_Create_TTStreamStream_TTStream;
};

struct brl_stream_TStreamStream_obj {
	struct BBClass_brl_stream_TStreamStream* clas;
	struct brl_stream_TStream_obj* _brl_stream_tstreamwrapper__stream;
};
extern struct BBClass_brl_stream_TStreamStream brl_stream_TStreamStream;
void _brl_stream_TFileStream_New(struct brl_stream_TFileStream_obj* o);
void _brl_stream_TFileStream_Delete(struct brl_stream_TFileStream_obj* o);
typedef BBLONG (*brl_stream_TFileStream_Pos_m)(struct brl_stream_TFileStream_obj*);
BBLONG _brl_stream_TFileStream_Pos(struct brl_stream_TFileStream_obj*);
typedef BBLONG (*brl_stream_TFileStream_Size_m)(struct brl_stream_TFileStream_obj*);
BBLONG _brl_stream_TFileStream_Size(struct brl_stream_TFileStream_obj*);
typedef BBSTRING (*brl_stream_TFileStream_GetMode_S_iivi_f)(BBINT,BBINT,BBINT*);
BBSTRING brl_stream_TFileStream_GetMode_S_iivi(BBINT,BBINT,BBINT*);
struct BBClass_brl_stream_TFileStream {
	struct BBClass_brl_stream_TStream*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	unsigned int instance_count;
	unsigned int fields_offset;
	brl_stream_TIO_Eof_m m_Eof;
	brl_stream_TFileStream_Pos_m m_Pos;
	brl_stream_TFileStream_Size_m m_Size;
	brl_stream_TIO_Seek_li_m m_Seek_li;
	brl_stream_TIO_Flush_m m_Flush;
	brl_stream_TIO_Close_m m_Close;
	brl_stream_TIO_Read_pbl_m m_Read_pbl;
	brl_stream_TIO_Write_pbl_m m_Write_pbl;
	brl_stream_TIO_SetSize_l_m m_SetSize_l;
	brl_stream_TStream_ReadBytes_pbl_m m_ReadBytes_pbl;
	brl_stream_TStream_WriteBytes_pbl_m m_WriteBytes_pbl;
	brl_stream_TStream_SkipBytes_l_m m_SkipBytes_l;
	brl_stream_TStream_ReadByte_m m_ReadByte;
	brl_stream_TStream_WriteByte_i_m m_WriteByte_i;
	brl_stream_TStream_ReadShort_m m_ReadShort;
	brl_stream_TStream_WriteShort_i_m m_WriteShort_i;
	brl_stream_TStream_ReadInt_m m_ReadInt;
	brl_stream_TStream_WriteInt_i_m m_WriteInt_i;
	brl_stream_TStream_ReadLong_m m_ReadLong;
	brl_stream_TStream_WriteLong_l_m m_WriteLong_l;
	brl_stream_TStream_ReadFloat_m m_ReadFloat;
	brl_stream_TStream_WriteFloat_f_m m_WriteFloat_f;
	brl_stream_TStream_ReadDouble_m m_ReadDouble;
	brl_stream_TStream_WriteDouble_d_m m_WriteDouble_d;
	brl_stream_TStream_ReadLine_m m_ReadLine;
	brl_stream_TStream_WriteLine_S_m m_WriteLine_S;
	brl_stream_TStream_ReadString_i_m m_ReadString_i;
	brl_stream_TStream_WriteString_S_m m_WriteString_S;
	brl_stream_TStream_ReadObject_m m_ReadObject;
	brl_stream_TStream_WriteObject_TObject_m m_WriteObject_TObject;
	brl_stream_TFileStream_GetMode_S_iivi_f f_GetMode_S_iivi;
};

struct brl_stream_TFileStream_obj {
	struct BBClass_brl_stream_TFileStream* clas;
	BBLONG _brl_stream_tfilestream__pos;
	BBLONG _brl_stream_tfilestream__size;
	BBINT _brl_stream_tfilestream__mode;
	BBBYTE* _brl_stream_tfilestream__stream;
};
extern struct BBClass_brl_stream_TFileStream brl_stream_TFileStream;
void _brl_stream_TCStream_New(struct brl_stream_TCStream_obj* o);
void _brl_stream_TCStream_Delete(struct brl_stream_TCStream_obj* o);
typedef BBLONG (*brl_stream_TCStream_Seek_li_m)(struct brl_stream_TCStream_obj*,BBLONG,BBINT);
BBLONG _brl_stream_TCStream_Seek_li(struct brl_stream_TCStream_obj*,BBLONG,BBINT);
typedef BBLONG (*brl_stream_TCStream_Read_pbl_m)(struct brl_stream_TCStream_obj*,BBBYTE*,BBLONG);
BBLONG _brl_stream_TCStream_Read_pbl(struct brl_stream_TCStream_obj*,BBBYTE*,BBLONG);
typedef BBLONG (*brl_stream_TCStream_Write_pbl_m)(struct brl_stream_TCStream_obj*,BBBYTE*,BBLONG);
BBLONG _brl_stream_TCStream_Write_pbl(struct brl_stream_TCStream_obj*,BBBYTE*,BBLONG);
typedef void (*brl_stream_TCStream_Flush_m)(struct brl_stream_TCStream_obj*);
void _brl_stream_TCStream_Flush(struct brl_stream_TCStream_obj*);
typedef void (*brl_stream_TCStream_Close_m)(struct brl_stream_TCStream_obj*);
void _brl_stream_TCStream_Close(struct brl_stream_TCStream_obj*);
typedef BBINT (*brl_stream_TCStream_SetSize_l_m)(struct brl_stream_TCStream_obj*,BBLONG);
BBINT _brl_stream_TCStream_SetSize_l(struct brl_stream_TCStream_obj*,BBLONG);
typedef struct brl_stream_TCStream_obj* (*brl_stream_TCStream_OpenFile_TTCStream_Sii_f)(BBSTRING,BBINT,BBINT);
struct brl_stream_TCStream_obj* brl_stream_TCStream_OpenFile_TTCStream_Sii(BBSTRING,BBINT,BBINT);
typedef struct brl_stream_TCStream_obj* (*brl_stream_TCStream_CreateWithCStream_TTCStream_pbi_f)(BBBYTE*,BBINT);
struct brl_stream_TCStream_obj* brl_stream_TCStream_CreateWithCStream_TTCStream_pbi(BBBYTE*,BBINT);
struct BBClass_brl_stream_TCStream {
	struct BBClass_brl_stream_TFileStream*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	unsigned int instance_count;
	unsigned int fields_offset;
	brl_stream_TIO_Eof_m m_Eof;
	brl_stream_TFileStream_Pos_m m_Pos;
	brl_stream_TFileStream_Size_m m_Size;
	brl_stream_TCStream_Seek_li_m m_Seek_li;
	brl_stream_TCStream_Flush_m m_Flush;
	brl_stream_TCStream_Close_m m_Close;
	brl_stream_TCStream_Read_pbl_m m_Read_pbl;
	brl_stream_TCStream_Write_pbl_m m_Write_pbl;
	brl_stream_TCStream_SetSize_l_m m_SetSize_l;
	brl_stream_TStream_ReadBytes_pbl_m m_ReadBytes_pbl;
	brl_stream_TStream_WriteBytes_pbl_m m_WriteBytes_pbl;
	brl_stream_TStream_SkipBytes_l_m m_SkipBytes_l;
	brl_stream_TStream_ReadByte_m m_ReadByte;
	brl_stream_TStream_WriteByte_i_m m_WriteByte_i;
	brl_stream_TStream_ReadShort_m m_ReadShort;
	brl_stream_TStream_WriteShort_i_m m_WriteShort_i;
	brl_stream_TStream_ReadInt_m m_ReadInt;
	brl_stream_TStream_WriteInt_i_m m_WriteInt_i;
	brl_stream_TStream_ReadLong_m m_ReadLong;
	brl_stream_TStream_WriteLong_l_m m_WriteLong_l;
	brl_stream_TStream_ReadFloat_m m_ReadFloat;
	brl_stream_TStream_WriteFloat_f_m m_WriteFloat_f;
	brl_stream_TStream_ReadDouble_m m_ReadDouble;
	brl_stream_TStream_WriteDouble_d_m m_WriteDouble_d;
	brl_stream_TStream_ReadLine_m m_ReadLine;
	brl_stream_TStream_WriteLine_S_m m_WriteLine_S;
	brl_stream_TStream_ReadString_i_m m_ReadString_i;
	brl_stream_TStream_WriteString_S_m m_WriteString_S;
	brl_stream_TStream_ReadObject_m m_ReadObject;
	brl_stream_TStream_WriteObject_TObject_m m_WriteObject_TObject;
	brl_stream_TFileStream_GetMode_S_iivi_f f_GetMode_S_iivi;
	brl_stream_TCStream_OpenFile_TTCStream_Sii_f f_OpenFile_TTCStream_Sii;
	brl_stream_TCStream_CreateWithCStream_TTCStream_pbi_f f_CreateWithCStream_TTCStream_pbi;
};

struct brl_stream_TCStream_obj {
	struct BBClass_brl_stream_TCStream* clas;
	BBLONG _brl_stream_tfilestream__pos;
	BBLONG _brl_stream_tfilestream__size;
	BBINT _brl_stream_tfilestream__mode;
	BBBYTE* _brl_stream_tfilestream__stream;
};
extern struct BBClass_brl_stream_TCStream brl_stream_TCStream;
void _brl_stream_TIOStream_New(struct brl_stream_TIOStream_obj* o);
void _brl_stream_TIOStream_Delete(struct brl_stream_TIOStream_obj* o);
typedef BBLONG (*brl_stream_TIOStream_Pos_m)(struct brl_stream_TIOStream_obj*);
BBLONG _brl_stream_TIOStream_Pos(struct brl_stream_TIOStream_obj*);
typedef BBLONG (*brl_stream_TIOStream_Size_m)(struct brl_stream_TIOStream_obj*);
BBLONG _brl_stream_TIOStream_Size(struct brl_stream_TIOStream_obj*);
typedef BBLONG (*brl_stream_TIOStream_Seek_li_m)(struct brl_stream_TIOStream_obj*,BBLONG,BBINT);
BBLONG _brl_stream_TIOStream_Seek_li(struct brl_stream_TIOStream_obj*,BBLONG,BBINT);
typedef BBLONG (*brl_stream_TIOStream_Read_pbl_m)(struct brl_stream_TIOStream_obj*,BBBYTE*,BBLONG);
BBLONG _brl_stream_TIOStream_Read_pbl(struct brl_stream_TIOStream_obj*,BBBYTE*,BBLONG);
typedef BBLONG (*brl_stream_TIOStream_Write_pbl_m)(struct brl_stream_TIOStream_obj*,BBBYTE*,BBLONG);
BBLONG _brl_stream_TIOStream_Write_pbl(struct brl_stream_TIOStream_obj*,BBBYTE*,BBLONG);
typedef void (*brl_stream_TIOStream_Flush_m)(struct brl_stream_TIOStream_obj*);
void _brl_stream_TIOStream_Flush(struct brl_stream_TIOStream_obj*);
typedef void (*brl_stream_TIOStream_Close_m)(struct brl_stream_TIOStream_obj*);
void _brl_stream_TIOStream_Close(struct brl_stream_TIOStream_obj*);
typedef BBINT (*brl_stream_TIOStream_SetSize_l_m)(struct brl_stream_TIOStream_obj*,BBLONG);
BBINT _brl_stream_TIOStream_SetSize_l(struct brl_stream_TIOStream_obj*,BBLONG);
typedef struct brl_stream_TIOStream_obj* (*brl_stream_TIOStream_OpenFile_TTIOStream_Sii_f)(BBSTRING,BBINT,BBINT);
struct brl_stream_TIOStream_obj* brl_stream_TIOStream_OpenFile_TTIOStream_Sii(BBSTRING,BBINT,BBINT);
typedef struct brl_stream_TIOStream_obj* (*brl_stream_TIOStream_CreateWithIOStream_TTIOStream_pbi_f)(BBBYTE*,BBINT);
struct brl_stream_TIOStream_obj* brl_stream_TIOStream_CreateWithIOStream_TTIOStream_pbi(BBBYTE*,BBINT);
struct BBClass_brl_stream_TIOStream {
	struct BBClass_brl_stream_TFileStream*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	unsigned int instance_count;
	unsigned int fields_offset;
	brl_stream_TIO_Eof_m m_Eof;
	brl_stream_TIOStream_Pos_m m_Pos;
	brl_stream_TIOStream_Size_m m_Size;
	brl_stream_TIOStream_Seek_li_m m_Seek_li;
	brl_stream_TIOStream_Flush_m m_Flush;
	brl_stream_TIOStream_Close_m m_Close;
	brl_stream_TIOStream_Read_pbl_m m_Read_pbl;
	brl_stream_TIOStream_Write_pbl_m m_Write_pbl;
	brl_stream_TIOStream_SetSize_l_m m_SetSize_l;
	brl_stream_TStream_ReadBytes_pbl_m m_ReadBytes_pbl;
	brl_stream_TStream_WriteBytes_pbl_m m_WriteBytes_pbl;
	brl_stream_TStream_SkipBytes_l_m m_SkipBytes_l;
	brl_stream_TStream_ReadByte_m m_ReadByte;
	brl_stream_TStream_WriteByte_i_m m_WriteByte_i;
	brl_stream_TStream_ReadShort_m m_ReadShort;
	brl_stream_TStream_WriteShort_i_m m_WriteShort_i;
	brl_stream_TStream_ReadInt_m m_ReadInt;
	brl_stream_TStream_WriteInt_i_m m_WriteInt_i;
	brl_stream_TStream_ReadLong_m m_ReadLong;
	brl_stream_TStream_WriteLong_l_m m_WriteLong_l;
	brl_stream_TStream_ReadFloat_m m_ReadFloat;
	brl_stream_TStream_WriteFloat_f_m m_WriteFloat_f;
	brl_stream_TStream_ReadDouble_m m_ReadDouble;
	brl_stream_TStream_WriteDouble_d_m m_WriteDouble_d;
	brl_stream_TStream_ReadLine_m m_ReadLine;
	brl_stream_TStream_WriteLine_S_m m_WriteLine_S;
	brl_stream_TStream_ReadString_i_m m_ReadString_i;
	brl_stream_TStream_WriteString_S_m m_WriteString_S;
	brl_stream_TStream_ReadObject_m m_ReadObject;
	brl_stream_TStream_WriteObject_TObject_m m_WriteObject_TObject;
	brl_stream_TFileStream_GetMode_S_iivi_f f_GetMode_S_iivi;
	brl_stream_TIOStream_OpenFile_TTIOStream_Sii_f f_OpenFile_TTIOStream_Sii;
	brl_stream_TIOStream_CreateWithIOStream_TTIOStream_pbi_f f_CreateWithIOStream_TTIOStream_pbi;
};

struct brl_stream_TIOStream_obj {
	struct BBClass_brl_stream_TIOStream* clas;
	BBLONG _brl_stream_tfilestream__pos;
	BBLONG _brl_stream_tfilestream__size;
	BBINT _brl_stream_tfilestream__mode;
	BBBYTE* _brl_stream_tfilestream__stream;
};
extern struct BBClass_brl_stream_TIOStream brl_stream_TIOStream;
struct brl_stream_TStream_obj* brl_stream_OpenStream(BBOBJECT bbt_url,BBINT bbt_readable,BBINT bbt_writeMode);
struct brl_stream_TStream_obj* brl_stream_ReadStream(BBOBJECT bbt_url);
struct brl_stream_TStream_obj* brl_stream_WriteStream(BBOBJECT bbt_url);
struct brl_stream_TStream_obj* brl_stream_AppendStream(BBOBJECT bbt_url);
BBINT brl_stream_Eof(struct brl_stream_TStream_obj* bbt_stream);
BBLONG brl_stream_StreamPos(struct brl_stream_TStream_obj* bbt_stream);
BBLONG brl_stream_StreamSize(struct brl_stream_TStream_obj* bbt_stream);
BBLONG brl_stream_SeekStream(struct brl_stream_TStream_obj* bbt_stream,BBLONG bbt_pos,BBINT bbt_whence);
void brl_stream_FlushStream(struct brl_stream_TStream_obj* bbt_stream);
void brl_stream_CloseStream(struct brl_stream_TStream_obj* bbt_stream);
BBINT brl_stream_ReadByte(struct brl_stream_TStream_obj* bbt_stream);
BBINT brl_stream_ReadShort(struct brl_stream_TStream_obj* bbt_stream);
BBINT brl_stream_ReadInt(struct brl_stream_TStream_obj* bbt_stream);
BBLONG brl_stream_ReadLong(struct brl_stream_TStream_obj* bbt_stream);
BBFLOAT brl_stream_ReadFloat(struct brl_stream_TStream_obj* bbt_stream);
BBDOUBLE brl_stream_ReadDouble(struct brl_stream_TStream_obj* bbt_stream);
void brl_stream_WriteByte(struct brl_stream_TStream_obj* bbt_stream,BBINT bbt_n);
void brl_stream_WriteShort(struct brl_stream_TStream_obj* bbt_stream,BBINT bbt_n);
void brl_stream_WriteInt(struct brl_stream_TStream_obj* bbt_stream,BBINT bbt_n);
void brl_stream_WriteLong(struct brl_stream_TStream_obj* bbt_stream,BBLONG bbt_n);
void brl_stream_WriteFloat(struct brl_stream_TStream_obj* bbt_stream,BBFLOAT bbt_n);
void brl_stream_WriteDouble(struct brl_stream_TStream_obj* bbt_stream,BBDOUBLE bbt_n);
BBSTRING brl_stream_ReadString(struct brl_stream_TStream_obj* bbt_stream,BBINT bbt_length);
void brl_stream_WriteString(struct brl_stream_TStream_obj* bbt_stream,BBSTRING bbt_str);
BBSTRING brl_stream_ReadLine(struct brl_stream_TStream_obj* bbt_stream);
BBINT brl_stream_WriteLine(struct brl_stream_TStream_obj* bbt_stream,BBSTRING bbt_str);
BBARRAY brl_stream_LoadByteArray(BBOBJECT bbt_url);
BBSTRING brl_stream_LoadString(BBOBJECT bbt_url);
void brl_stream_SaveString(BBSTRING bbt_str,BBOBJECT bbt_url);
BBOBJECT brl_stream_LoadObject(BBOBJECT bbt_url);
void brl_stream_SaveObject(BBOBJECT bbt_obj,BBOBJECT bbt_url);
void brl_stream_SaveByteArray(BBARRAY bbt_byteArray,BBOBJECT bbt_url);
void brl_stream_CopyStream(struct brl_stream_TStream_obj* bbt_fromStream,struct brl_stream_TStream_obj* bbt_toStream,BBINT bbt_bufSize);
void brl_stream_CopyBytes(struct brl_stream_TStream_obj* bbt_fromStream,struct brl_stream_TStream_obj* bbt_toStream,BBINT bbt_count,BBINT bbt_bufSize);
BBSTRING brl_stream_CasedFileName(BBSTRING bbt_path);

#endif
