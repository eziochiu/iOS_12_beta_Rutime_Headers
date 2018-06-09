/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLIOAccelDebugCommandEncoder : _MTLDebugCommandEncoder {
    MTLResourceList * _api_resourceList;
    void * _kernelCommandBufferCurrent;
    void * _kernelCommandBufferEnd;
    struct IOAccelResourceList { unsigned short x1[256]; struct IOAccelSegmentResourceDescriptorGroup {} *x2; unsigned long long x3; unsigned long long x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; int (*x12)(); void *x13; } * _resourceList;
}

- (void)IOLogBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (void)IOLogResource:(unsigned int)arg1 length:(unsigned int)arg2;
- (void)addAPIResource:(id)arg1;
- (unsigned int)addDebugResourceListInfo:(struct IOAccelResourceInfo { struct __IOSurface {} *x1; unsigned int x2 : 56; unsigned int x3 : 8; unsigned int x4; }*)arg1 flag:(unsigned int)arg2;
- (void)dealloc;
- (void)debugBytes:(const char *)arg1 length:(unsigned long long)arg2 output_type:(unsigned int)arg3;
- (void)debugResourceBytes:(unsigned int)arg1 length:(unsigned long long)arg2 output_type:(unsigned int)arg3;
- (void)endEncoding;
- (id)initWithCommandBuffer:(id)arg1;
- (void)kprintfBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (void)kprintfResource:(unsigned int)arg1 length:(unsigned int)arg2;
- (void*)reserveKernelCommandBufferSpace:(unsigned long long)arg1;
- (void)restartDebugPass;

@end
