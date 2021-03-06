#ifndef BRL_TEXTSTREAM_TEXTSTREAM_BMX_RELEASE_HAIKU_X64_H
#define BRL_TEXTSTREAM_TEXTSTREAM_BMX_RELEASE_HAIKU_X64_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.release.haiku.x64.h>
#include <brl.mod/stream.mod/.bmx/stream.bmx.release.haiku.x64.h>
int __bb_brl_textstream_textstream();
struct brl_textstream_TTextStreamFactory_obj;
struct brl_textstream_TTextStream_obj;
void _brl_textstream_TTextStreamFactory_New(struct brl_textstream_TTextStreamFactory_obj* o);
typedef struct brl_stream_TStream_obj* (*brl_textstream_TTextStreamFactory_CreateStream_TObjectSSii_m)(struct brl_textstream_TTextStreamFactory_obj*,BBOBJECT,BBSTRING,BBSTRING,BBINT,BBINT);
struct brl_stream_TStream_obj* _brl_textstream_TTextStreamFactory_CreateStream_TObjectSSii(struct brl_textstream_TTextStreamFactory_obj*,BBOBJECT,BBSTRING,BBSTRING,BBINT,BBINT);
struct BBClass_brl_textstream_TTextStreamFactory {
	struct BBClass_brl_stream_TStreamFactory*  super;
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
	brl_textstream_TTextStreamFactory_CreateStream_TObjectSSii_m m_CreateStream_TObjectSSii;
};

struct brl_textstream_TTextStreamFactory_obj {
	struct BBClass_brl_textstream_TTextStreamFactory* clas;
	struct brl_stream_TStreamFactory_obj* _brl_stream_tstreamfactory__succ;
};
extern struct BBClass_brl_textstream_TTextStreamFactory brl_textstream_TTextStreamFactory;
void _brl_textstream_TTextStream_New(struct brl_textstream_TTextStream_obj* o);
void _brl_textstream_TTextStream_Delete(struct brl_textstream_TTextStream_obj* o);
typedef BBLONG (*brl_textstream_TTextStream_Read_pbl_m)(struct brl_textstream_TTextStream_obj*,BBBYTE*,BBLONG);
BBLONG _brl_textstream_TTextStream_Read_pbl(struct brl_textstream_TTextStream_obj*,BBBYTE*,BBLONG);
typedef BBLONG (*brl_textstream_TTextStream_Write_pbl_m)(struct brl_textstream_TTextStream_obj*,BBBYTE*,BBLONG);
BBLONG _brl_textstream_TTextStream_Write_pbl(struct brl_textstream_TTextStream_obj*,BBBYTE*,BBLONG);
typedef BBINT (*brl_textstream_TTextStream_ReadByte_m)(struct brl_textstream_TTextStream_obj*);
BBINT _brl_textstream_TTextStream_ReadByte(struct brl_textstream_TTextStream_obj*);
typedef void (*brl_textstream_TTextStream_WriteByte_i_m)(struct brl_textstream_TTextStream_obj*,BBINT);
void _brl_textstream_TTextStream_WriteByte_i(struct brl_textstream_TTextStream_obj*,BBINT);
typedef BBINT (*brl_textstream_TTextStream_ReadShort_m)(struct brl_textstream_TTextStream_obj*);
BBINT _brl_textstream_TTextStream_ReadShort(struct brl_textstream_TTextStream_obj*);
typedef void (*brl_textstream_TTextStream_WriteShort_i_m)(struct brl_textstream_TTextStream_obj*,BBINT);
void _brl_textstream_TTextStream_WriteShort_i(struct brl_textstream_TTextStream_obj*,BBINT);
typedef BBINT (*brl_textstream_TTextStream_ReadInt_m)(struct brl_textstream_TTextStream_obj*);
BBINT _brl_textstream_TTextStream_ReadInt(struct brl_textstream_TTextStream_obj*);
typedef void (*brl_textstream_TTextStream_WriteInt_i_m)(struct brl_textstream_TTextStream_obj*,BBINT);
void _brl_textstream_TTextStream_WriteInt_i(struct brl_textstream_TTextStream_obj*,BBINT);
typedef BBLONG (*brl_textstream_TTextStream_ReadLong_m)(struct brl_textstream_TTextStream_obj*);
BBLONG _brl_textstream_TTextStream_ReadLong(struct brl_textstream_TTextStream_obj*);
typedef void (*brl_textstream_TTextStream_WriteLong_l_m)(struct brl_textstream_TTextStream_obj*,BBLONG);
void _brl_textstream_TTextStream_WriteLong_l(struct brl_textstream_TTextStream_obj*,BBLONG);
typedef BBFLOAT (*brl_textstream_TTextStream_ReadFloat_m)(struct brl_textstream_TTextStream_obj*);
BBFLOAT _brl_textstream_TTextStream_ReadFloat(struct brl_textstream_TTextStream_obj*);
typedef void (*brl_textstream_TTextStream_WriteFloat_f_m)(struct brl_textstream_TTextStream_obj*,BBFLOAT);
void _brl_textstream_TTextStream_WriteFloat_f(struct brl_textstream_TTextStream_obj*,BBFLOAT);
typedef BBDOUBLE (*brl_textstream_TTextStream_ReadDouble_m)(struct brl_textstream_TTextStream_obj*);
BBDOUBLE _brl_textstream_TTextStream_ReadDouble(struct brl_textstream_TTextStream_obj*);
typedef void (*brl_textstream_TTextStream_WriteDouble_d_m)(struct brl_textstream_TTextStream_obj*,BBDOUBLE);
void _brl_textstream_TTextStream_WriteDouble_d(struct brl_textstream_TTextStream_obj*,BBDOUBLE);
typedef BBSTRING (*brl_textstream_TTextStream_ReadLine_m)(struct brl_textstream_TTextStream_obj*);
BBSTRING _brl_textstream_TTextStream_ReadLine(struct brl_textstream_TTextStream_obj*);
typedef BBSTRING (*brl_textstream_TTextStream_ReadFile_m)(struct brl_textstream_TTextStream_obj*);
BBSTRING _brl_textstream_TTextStream_ReadFile(struct brl_textstream_TTextStream_obj*);
typedef BBINT (*brl_textstream_TTextStream_WriteLine_S_m)(struct brl_textstream_TTextStream_obj*,BBSTRING);
BBINT _brl_textstream_TTextStream_WriteLine_S(struct brl_textstream_TTextStream_obj*,BBSTRING);
typedef BBSTRING (*brl_textstream_TTextStream_ReadString_i_m)(struct brl_textstream_TTextStream_obj*,BBINT);
BBSTRING _brl_textstream_TTextStream_ReadString_i(struct brl_textstream_TTextStream_obj*,BBINT);
typedef void (*brl_textstream_TTextStream_WriteString_S_m)(struct brl_textstream_TTextStream_obj*,BBSTRING);
void _brl_textstream_TTextStream_WriteString_S(struct brl_textstream_TTextStream_obj*,BBSTRING);
typedef BBINT (*brl_textstream_TTextStream_ReadChar_m)(struct brl_textstream_TTextStream_obj*);
BBINT _brl_textstream_TTextStream_ReadChar(struct brl_textstream_TTextStream_obj*);
typedef void (*brl_textstream_TTextStream_WriteChar_i_m)(struct brl_textstream_TTextStream_obj*,BBINT);
void _brl_textstream_TTextStream_WriteChar_i(struct brl_textstream_TTextStream_obj*,BBINT);
typedef struct brl_textstream_TTextStream_obj* (*brl_textstream_TTextStream_Create_TTTextStream_TTStreami_f)(struct brl_stream_TStream_obj*,BBINT);
struct brl_textstream_TTextStream_obj* brl_textstream_TTextStream_Create_TTTextStream_TTStreami(struct brl_stream_TStream_obj*,BBINT);
typedef struct brl_textstream_TTextStream_obj* (*brl_textstream_TTextStream_Create_TTTextStream_TTStreameETextStreamFormat_f)(struct brl_stream_TStream_obj*,BBINT);
struct brl_textstream_TTextStream_obj* brl_textstream_TTextStream_Create_TTTextStream_TTStreameETextStreamFormat(struct brl_stream_TStream_obj*,BBINT);
typedef BBINT (*brl_textstream_TTextStream__ReadByte_m)(struct brl_textstream_TTextStream_obj*);
BBINT _brl_textstream_TTextStream__ReadByte(struct brl_textstream_TTextStream_obj*);
typedef void (*brl_textstream_TTextStream__WriteByte_i_m)(struct brl_textstream_TTextStream_obj*,BBINT);
void _brl_textstream_TTextStream__WriteByte_i(struct brl_textstream_TTextStream_obj*,BBINT);
typedef void (*brl_textstream_TTextStream__FlushRead_m)(struct brl_textstream_TTextStream_obj*);
void _brl_textstream_TTextStream__FlushRead(struct brl_textstream_TTextStream_obj*);
typedef void (*brl_textstream_TTextStream__FlushWrite_m)(struct brl_textstream_TTextStream_obj*);
void _brl_textstream_TTextStream__FlushWrite(struct brl_textstream_TTextStream_obj*);
struct BBClass_brl_textstream_TTextStream {
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
	brl_stream_TStreamWrapper_Close_m m_Close;
	brl_textstream_TTextStream_Read_pbl_m m_Read_pbl;
	brl_textstream_TTextStream_Write_pbl_m m_Write_pbl;
	brl_stream_TStreamWrapper_SetSize_l_m m_SetSize_l;
	brl_stream_TStream_ReadBytes_pbl_m m_ReadBytes_pbl;
	brl_stream_TStream_WriteBytes_pbl_m m_WriteBytes_pbl;
	brl_stream_TStream_SkipBytes_l_m m_SkipBytes_l;
	brl_textstream_TTextStream_ReadByte_m m_ReadByte;
	brl_textstream_TTextStream_WriteByte_i_m m_WriteByte_i;
	brl_textstream_TTextStream_ReadShort_m m_ReadShort;
	brl_textstream_TTextStream_WriteShort_i_m m_WriteShort_i;
	brl_textstream_TTextStream_ReadInt_m m_ReadInt;
	brl_textstream_TTextStream_WriteInt_i_m m_WriteInt_i;
	brl_textstream_TTextStream_ReadLong_m m_ReadLong;
	brl_textstream_TTextStream_WriteLong_l_m m_WriteLong_l;
	brl_textstream_TTextStream_ReadFloat_m m_ReadFloat;
	brl_textstream_TTextStream_WriteFloat_f_m m_WriteFloat_f;
	brl_textstream_TTextStream_ReadDouble_m m_ReadDouble;
	brl_textstream_TTextStream_WriteDouble_d_m m_WriteDouble_d;
	brl_textstream_TTextStream_ReadLine_m m_ReadLine;
	brl_textstream_TTextStream_WriteLine_S_m m_WriteLine_S;
	brl_textstream_TTextStream_ReadString_i_m m_ReadString_i;
	brl_textstream_TTextStream_WriteString_S_m m_WriteString_S;
	brl_stream_TStreamWrapper_ReadObject_m m_ReadObject;
	brl_stream_TStreamWrapper_WriteObject_TObject_m m_WriteObject_TObject;
	brl_stream_TStreamWrapper_SetStream_TTStream_m m_SetStream_TTStream;
	brl_textstream_TTextStream_ReadFile_m m_ReadFile;
	brl_textstream_TTextStream_ReadChar_m m_ReadChar;
	brl_textstream_TTextStream_WriteChar_i_m m_WriteChar_i;
	brl_textstream_TTextStream_Create_TTTextStream_TTStreami_f f_Create_TTTextStream_TTStreami;
	brl_textstream_TTextStream_Create_TTTextStream_TTStreameETextStreamFormat_f f_Create_TTTextStream_TTStreameETextStreamFormat;
	brl_textstream_TTextStream__ReadByte_m m__ReadByte;
	brl_textstream_TTextStream__WriteByte_i_m m__WriteByte_i;
	brl_textstream_TTextStream__FlushRead_m m__FlushRead;
	brl_textstream_TTextStream__FlushWrite_m m__FlushWrite;
};

struct brl_textstream_TTextStream_obj {
	struct BBClass_brl_textstream_TTextStream* clas;
	struct brl_stream_TStream_obj* _brl_stream_tstreamwrapper__stream;
	BBINT _brl_textstream_ttextstream__encoding;
	BBINT _brl_textstream_ttextstream__bufcount;
	BBINT _brl_textstream_ttextstream__carried;
};
extern struct BBClass_brl_textstream_TTextStream brl_textstream_TTextStream;
extern BBEnum* brl_textstream_ETextStreamFormat_BBEnum_impl;
BBSTRING brl_textstream_ETextStreamFormat_ToString(BBINT);
BBINT brl_textstream_ETextStreamFormat_TryConvert(BBINT ordinalValue, BBINT * ordinalResult);
extern const BBINT bbEnumbrl_textstream_ETextStreamFormat_Mask;
BBINT brl_textstream_Decode(BBBYTE* bbt_buf,BBINT bbt_count);
BBINT brl_textstream_Encode(BBINT bbt_char,BBBYTE* bbt_buf,BBINT bbt_count);
BBINT brl_textstream_IsProbablyUTF8(BBBYTE* bbt_data,BBINT bbt_size);
BBSTRING brl_textstream_LoadText(BBOBJECT bbt_url,BBINT bbt_checkForUTF8);
BBINT brl_textstream_SaveText(BBSTRING bbt_str,BBOBJECT bbt_url,BBINT bbt_format,BBINT bbt_withBOM);

#endif
