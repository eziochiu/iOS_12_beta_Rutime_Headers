/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLToolsIndirectCommandBuffer : MTLToolsResource <MTLIndirectCommandBufferSPI> {
    MTLToolsPointerArray * _indirectRenderCommand;
}

@property (readonly) unsigned long long allocatedSize;
@property (readonly) unsigned long long cpuCacheMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) unsigned long long hash;
@property (readonly) <MTLHeap> *heap;
@property (nonatomic, readonly) MTLToolsPointerArray *indirectRenderCommand;
@property (copy) NSString *label;
@property (readonly) unsigned long long size;
@property (readonly) unsigned long long storageMode;
@property (readonly) Class superclass;
@property (readonly) unsigned long long uniqueIdentifier;

- (void)acceptVisitor:(id)arg1;
- (void)dealloc;
- (void)getHeader:(void**)arg1 headerSize:(unsigned long long*)arg2;
- (id)indirectRenderCommand;
- (id)indirectRenderCommandAtIndex:(unsigned long long)arg1;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (unsigned long long)size;
- (unsigned long long)storageMode;
- (unsigned long long)uniqueIdentifier;

@end
