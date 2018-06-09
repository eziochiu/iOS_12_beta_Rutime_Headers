/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLDebugBuffer : MTLToolsBuffer {
    unsigned int  _checksum;
    MTLDebugResource * _common;
    MTLDebugDevice * _debugDevice;
    NSMutableArray * _debugMarkers;
    MTLIndirectCommandBufferDescriptor * _indirectCommandBufferDescriptor;
    bool  _isContentExposedToCPU;
    bool  _isContentsPointerExposed;
    unsigned long long  _length;
    unsigned int  _maxIndirectCommandCount;
    const void * _pointer;
    unsigned long long  _purgeableState;
    bool  _purgeableStateHasBeenSet;
    MTLDebugResourceAccessTracker * _resourceAccessTracker;
}

@property (nonatomic) unsigned int checksum;
@property (nonatomic, readonly) MTLDebugResource *common;
@property (nonatomic, readonly) MTLIndirectCommandBufferDescriptor *indirectCommandBufferDescriptor;
@property (nonatomic) bool isContentExposedToCPU;
@property (nonatomic, readonly) bool isContentsPointerExposed;
@property (nonatomic, readonly) unsigned int maxIndirectCommandCount;
@property (nonatomic, readonly) const void*pointer;
@property (nonatomic, readonly) unsigned long long purgeableState;
@property (nonatomic, readonly) bool purgeableStateHasBeenSet;
@property (nonatomic, readonly) bool resourceTrackingEnabled;
@property (nonatomic, readonly) unsigned int resourceUsage;

- (void)_initResourceTrackingWithDevice:(id)arg1;
- (void)accessedByCPU;
- (void)accessedByGPU;
- (void)addDebugMarker:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)blitManagedToPrivate;
- (void)blitManagedToShared;
- (unsigned int)checksum;
- (id)common;
- (void*)contents;
- (id)copyDebugMarkers;
- (void)dealloc;
- (id)description;
- (void)didModifyRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)doesAliasAllResources:(const id*)arg1 count:(unsigned long long)arg2;
- (bool)doesAliasAnyResources:(const id*)arg1 count:(unsigned long long)arg2;
- (bool)doesAliasResource:(id)arg1;
- (id)heap;
- (id)indirectCommandBufferDescriptor;
- (id)initWithBuffer:(id)arg1 device:(id)arg2 bytes:(const void*)arg3 options:(unsigned long long)arg4;
- (id)initWithBuffer:(id)arg1 device:(id)arg2 options:(unsigned long long)arg3;
- (id)initWithBuffer:(id)arg1 heap:(id)arg2 device:(id)arg3 options:(unsigned long long)arg4;
- (id)initWithIndirectCommandBuffer:(id)arg1 descriptor:(id)arg2 maxCount:(unsigned long long)arg3 device:(id)arg4 options:(unsigned long long)arg5;
- (bool)isContentExposedToCPU;
- (bool)isContentsPointerExposed;
- (unsigned long long)length;
- (void)makeAliasable;
- (unsigned int)maxIndirectCommandCount;
- (id)newLinearTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4;
- (id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3;
- (const void*)pointer;
- (unsigned long long)purgeableState;
- (bool)purgeableStateHasBeenSet;
- (void)removeAllDebugMarkers;
- (bool)resourceTrackingEnabled;
- (unsigned int)resourceUsage;
- (void)setChecksum:(unsigned int)arg1;
- (void)setIsContentExposedToCPU:(bool)arg1;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;

@end
