#ifndef BRL_IO_COMMON_BMX_RELEASE_HAIKU_X64_H
#define BRL_IO_COMMON_BMX_RELEASE_HAIKU_X64_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.release.haiku.x64.h>
#include <pub.mod/physfs.mod/.bmx/physfs.bmx.release.haiku.x64.h>
int _bb_brl_io_common();
struct brl_io_common_SMaxIO_Stat;
void _brl_io_common_SMaxIO_Stat_New(struct brl_io_common_SMaxIO_Stat* o);
struct brl_io_common_SMaxIO_Stat brl_io_common_SMaxIO_Stat_New_ObjectNew();
BBINT _brl_io_common_SMaxIO_Stat_Compare_i_vTSMaxIO_Stat(struct brl_io_common_SMaxIO_Stat*,struct brl_io_common_SMaxIO_Stat*);
struct brl_io_common_SMaxIO_Stat {
	BBLONG _brl_io_common_smaxio_stat__filesize;
	BBLONG _brl_io_common_smaxio_stat__modtime;
	BBLONG _brl_io_common_smaxio_stat__createtime;
	BBLONG _brl_io_common_smaxio_stat__accesstime;
	BBINT _brl_io_common_smaxio_stat__filetype;
	BBINT _brl_io_common_smaxio_stat__readonly;
};
extern BBINT bmx_PHYSFS_init();
extern BBINT PHYSFS_deinit();
extern BBSTRING bmx_PHYSFS_getLastError();
extern BBINT bmx_PHYSFS_mount(BBSTRING bbt_newDir,BBSTRING bbt_mountPoint,BBINT bbt_appendToPath);
extern BBSTRING bmx_PHYSFS_getBaseDir();
extern BBSTRING bmx_PHYSFS_getPrefDir(BBSTRING bbt_org,BBSTRING bbt_app);
extern BBINT bmx_PHYSFS_mountMemory(BBBYTE* bbt_dirPtr,BBINT bbt_dirLen,BBSTRING bbt_newDir,BBSTRING bbt_mountPoint,BBINT bbt_appendToPath);
extern BBINT bmx_PHYSFS_setWriteDir(BBSTRING bbt_newDir);
extern BBLONG PHYSFS_tell(BBBYTE* bbt_filePtr);
extern BBINT PHYSFS_seek(BBBYTE* bbt_filePtr,BBLONG bbt_newPos);
extern BBLONG PHYSFS_fileLength(BBBYTE* bbt_filePtr);
extern BBLONG PHYSFS_readBytes(BBBYTE* bbt_filePtr,BBBYTE* bbt_buf,BBULONG bbt_length);
extern BBLONG PHYSFS_writeBytes(BBBYTE* bbt_filePtr,BBBYTE* bbt_buf,BBULONG bbt_length);
extern BBINT PHYSFS_flush(BBBYTE* bbt_filePtr);
extern BBINT PHYSFS_close(BBBYTE* bbt_filePtr);
extern BBINT PHYSFS_setBuffer(BBBYTE* bbt_filePtr,BBULONG bbt_bufsize);
extern BBBYTE* bmx_PHYSFS_openAppend(BBSTRING bbt_path);
extern BBBYTE* bmx_PHYSFS_openWrite(BBSTRING bbt_path);
extern BBBYTE* bmx_PHYSFS_openRead(BBSTRING bbt_path);
extern BBINT bmx_PHYSFS_stat(BBSTRING bbt_filename,struct brl_io_common_SMaxIO_Stat* bbt_stat);
extern BBINT bmx_PHYSFS_delete(BBSTRING bbt_path);
extern BBINT bmx_PHYSFS_mkdir(BBSTRING bbt_dirName);
extern BBBYTE* bmx_blitzio_readdir(BBSTRING bbt_dir);
extern BBSTRING bmx_blitzio_nextFile(BBBYTE* bbt_dir);
extern void bmx_blitzio_closeDir(BBBYTE* bbt_dir);
extern BBEnum* brl_io_common_EMaxIOFileType_BBEnum_impl;
BBSTRING brl_io_common_EMaxIOFileType_ToString(BBINT);
BBINT brl_io_common_EMaxIOFileType_TryConvert(BBINT ordinalValue, BBINT * ordinalResult);
extern const BBINT bbEnumbrl_io_common_EMaxIOFileType_Mask;
BBINT brl_io_common_DefaultComparator_Compare(struct brl_io_common_SMaxIO_Stat* bbt_o1,struct brl_io_common_SMaxIO_Stat* bbt_o2);

#endif
