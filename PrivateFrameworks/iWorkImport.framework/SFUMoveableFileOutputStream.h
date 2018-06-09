/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface SFUMoveableFileOutputStream : NSObject <SFUOutputStream> {
    int  mFd;
    NSString * mPath;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)canCreateInputStream;
- (bool)canSeek;
- (void)close;
- (id)closeLocalStream;
- (void)dealloc;
- (void)flush;
- (id)initWithPath:(id)arg1;
- (id)initWithTemporaryFile:(id)arg1;
- (id)inputStream;
- (bool)moveToPath:(id)arg1;
- (long long)offset;
- (id)path;
- (void)seekToOffset:(long long)arg1 whence:(int)arg2;
- (void)truncateToLength:(unsigned long long)arg1;
- (void)writeBuffer:(const char *)arg1 size:(unsigned long long)arg2;

@end
