/* made by EzioChiu.
 */

@protocol TSCH3DRenderBufferAllocator <NSObject>

@required

- (id)colorbufferWithAllocatorInfo:(const struct RenderbufferAllocatorInfo { struct FramebufferAttributes {} *x1; struct tvec2<int> {} *x2; id x3; /* Warning: Unrecognized filer type: '1' using 'void*' */ void*x4; void*x5; }*)arg1;
- (id)depthbufferWithAllocatorInfo:(const struct RenderbufferAllocatorInfo { struct FramebufferAttributes {} *x1; struct tvec2<int> {} *x2; id x3; /* Warning: Unrecognized filer type: '1' using 'void*' */ void*x4; void*x5; }*)arg1;
- (bool)isTexturable;

@end
