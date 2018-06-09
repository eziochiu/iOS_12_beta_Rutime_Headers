/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
 */

@interface CLKUIMmapFile : NSObject {
    const void * _bytes;
    int  _descriptor;
    unsigned long long  _length;
    NSString * _path;
}

@property (nonatomic, readonly) const void*bytes;
@property (nonatomic, readonly) int descriptor;
@property (nonatomic, readonly) unsigned long long length;
@property (nonatomic, readonly) NSString *path;

+ (id)mmapFileWithPath:(id)arg1;

- (void).cxx_destruct;
- (const void*)bytes;
- (void)dealloc;
- (int)descriptor;
- (id)initWithPath:(id)arg1 descriptor:(int)arg2 length:(unsigned long long)arg3 bytes:(const void*)arg4;
- (unsigned long long)length;
- (id)path;

@end
