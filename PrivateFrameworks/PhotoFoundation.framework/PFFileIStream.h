/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFFileIStream : PFFile <PFIStream, PFStream> {
    char * _buffer;
    unsigned long long  _bufferLength;
    NSError * _error;
    struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; } * _file;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)advanceStream;
- (bool)advanceStream:(long long)arg1 distanceMoved:(long long*)arg2;
- (void)closeStream;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)createDirectoryIfNecessary;
- (void)dealloc;
- (id)getStreamError;
- (id)initWithFile:(id)arg1;
- (void)lock;
- (bool)openStream;
- (unsigned long long)preferredStreamBlockSize;
- (bool)readStream:(char *)arg1 length:(unsigned long long)arg2 read:(unsigned long long*)arg3;
- (bool)rewindStream;
- (bool)rewindStream:(long long)arg1;
- (void)setError:(id)arg1;
- (const char *)streamData:(unsigned long long*)arg1;
- (long long)streamLength;
- (long long)streamPosition;
- (void)unlock;
- (void)updateError;

@end
