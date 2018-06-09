/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OABOle : NSObject

+ (bool)isBiffCLSID:(id)arg1;
+ (bool)isChart:(id)arg1;
+ (id)read4ByteFromStream:(struct SsrwOOStream { int (**x1)(); }*)arg1;
+ (id)readAnsiStringFromStream:(struct SsrwOOStream { int (**x1)(); }*)arg1;
+ (id)readCLSIDFromStream:(struct SsrwOOStream { int (**x1)(); }*)arg1;
+ (id)readCompressedFromStream:(struct SsrwOOStream { int (**x1)(); }*)arg1 compressedSize:(unsigned int)arg2 uncompressedSize:(unsigned int)arg3 cancel:(id)arg4;
+ (id)readFromData:(id)arg1 cancel:(id)arg2;
+ (id)readFromFileName:(id)arg1 cancel:(id)arg2;
+ (id)readFromParentStorage:(struct SsrwOOStorage { struct _Storage {} *x1; unsigned short x2[36]; }*)arg1 storageName:(id)arg2 cancel:(id)arg3;
+ (id)readFromStream:(struct SsrwOOStream { int (**x1)(); }*)arg1 size:(unsigned int)arg2 cancel:(id)arg3;
+ (bool)readSharedInfoFor:(id)arg1 fromStorage:(struct SsrwOOStorage { struct _Storage {} *x1; unsigned short x2[36]; }*)arg2;
+ (id)readUnicodeStringFromStream:(struct SsrwOOStream { int (**x1)(); }*)arg1;
+ (id)stringForCLSID:(struct _SsrwOO_GUID { unsigned int x1; unsigned short x2; unsigned short x3; unsigned char x4[8]; })arg1;

@end
