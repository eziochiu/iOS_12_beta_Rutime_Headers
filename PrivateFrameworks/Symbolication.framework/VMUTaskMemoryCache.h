/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUTaskMemoryCache : NSObject {
    struct mapped_memory_t { } * _memoryRegions;
    bool  _stopped;
    unsigned int  _task;
    bool  _taskIs64Bit;
}

+ (bool)taskIs64Bit:(unsigned int)arg1;
+ (id)taskMemoryCacheForTask:(unsigned int)arg1;

- (bool)copyRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1 to:(void*)arg2;
- (void)dealloc;
- (void)flushMemoryCache;
- (id)initWithTask:(unsigned int)arg1;
- (int)mapAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 returnedAddress:(unsigned long long*)arg3 returnedSize:(unsigned long long*)arg4;
- (int)peekAtAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 returnsBuf:(void**)arg3;
- (int)readPointerAt:(unsigned long long)arg1 value:(unsigned long long*)arg2;
- (int)startPeeking;
- (int)stopPeeking;

@end
