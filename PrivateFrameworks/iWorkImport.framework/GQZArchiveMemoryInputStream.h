/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQZArchiveMemoryInputStream : NSObject <GQZArchiveInputStream> {
    const char * mBytes;
    NSData * mData;
    long long  mSize;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (const char *)dataAtOffset:(long long)arg1 size:(unsigned long long)arg2 end:(long long)arg3 readSize:(unsigned long long*)arg4;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (void)readFromOffset:(long long)arg1 size:(unsigned long long)arg2 buffer:(char *)arg3;
- (long long)size;

@end
