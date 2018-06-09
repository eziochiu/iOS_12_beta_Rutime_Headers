/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGLRenderBufferAllocator : NSObject <TSCH3DRenderBufferAllocator> {
    TSCH3DRenderBufferStorage * mStorage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isTexturable;
@property (readonly) Class superclass;

+ (id)allocator;
+ (id)allocatorWithStorage:(id)arg1;

- (id)bufferWithAllocatorInfo:(const /* Warning: unhandled struct encoding: '{RenderbufferAllocatorInfo=^{FramebufferAttributes}^{tvec2<int>}@}' */ struct RenderbufferAllocatorInfo { struct FramebufferAttributes {} *x1; struct tvec2<int> {} *x2; id x3; }*)arg1 internalFormat:(unsigned int)arg2 attachment:(unsigned int)arg3;
- (id)colorbufferWithAllocatorInfo:(const /* Warning: unhandled struct encoding: '{RenderbufferAllocatorInfo=^{FramebufferAttributes}^{tvec2<int>}@}' */ struct RenderbufferAllocatorInfo { struct FramebufferAttributes {} *x1; struct tvec2<int> {} *x2; id x3; }*)arg1;
- (void)dealloc;
- (id)depthbufferWithAllocatorInfo:(const /* Warning: unhandled struct encoding: '{RenderbufferAllocatorInfo=^{FramebufferAttributes}^{tvec2<int>}@}' */ struct RenderbufferAllocatorInfo { struct FramebufferAttributes {} *x1; struct tvec2<int> {} *x2; id x3; }*)arg1;
- (id)initWithStorage:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isTexturable;

@end
