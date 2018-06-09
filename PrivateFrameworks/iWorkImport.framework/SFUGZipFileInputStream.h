/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

@interface SFUGZipFileInputStream : NSObject <SFUInputStream> {
    int  _fd;
    struct gzFile_s { unsigned int x1; char *x2; long long x3; } * _file;
    bool  _isCachingDisabled;
    long long  _offset;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)canSeek;
- (void)close;
- (id)closeLocalStream;
- (void)dealloc;
- (void)disableSystemCaching;
- (void)enableSystemCaching;
- (id)initWithPath:(id)arg1;
- (long long)offset;
- (unsigned long long)readToBuffer:(char *)arg1 size:(unsigned long long)arg2;
- (void)seekToOffset:(long long)arg1;

@end
