/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQZEntry : NSObject {
    unsigned long long  mCompressedSize;
    int  mCompressionMethod;
    unsigned int  mCrc;
    <GQZArchiveInputStream> * mInput;
    unsigned long long  mOffset;
    unsigned long long  mUncompressedSize;
}

- (id)data;
- (void)dealloc;
- (id)initFromCentralFileHeader:(const char *)arg1 inputStream:(id)arg2;
- (id)inputStream;
- (void)readZip64ExtraField:(const char *)arg1 size:(unsigned long long)arg2;
- (struct _xmlDoc { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; int x10; int x11; struct _xmlDtd {} *x12; struct _xmlDtd {} *x13; struct _xmlNs {} *x14; char *x15; char *x16; void *x17; void *x18; char *x19; int x20; struct _xmlDict {} *x21; void *x22; int x23; int x24; }*)recoverXmlDocument;
- (struct _xmlDoc { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; int x10; int x11; struct _xmlDtd {} *x12; struct _xmlDtd {} *x13; struct _xmlNs {} *x14; char *x15; char *x16; void *x17; void *x18; char *x19; int x20; struct _xmlDict {} *x21; void *x22; int x23; int x24; }*)xmlDocument;
- (struct _xmlTextReader { }*)xmlReader:(bool)arg1;

@end
