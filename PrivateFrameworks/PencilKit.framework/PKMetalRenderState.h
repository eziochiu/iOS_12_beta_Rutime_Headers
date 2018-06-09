/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKMetalRenderState : NSObject {
    <MTLCommandBuffer> * _commandBuffer;
    NSMutableArray * _commandBuffers;
    <MTLCommandQueue> * _commandQueue;
    <MTLCommandBuffer> * _computeCommandBuffer;
    <MTLComputeCommandEncoder> * _computeEncoder;
    unsigned long long  _destinationColorAttachmentIndex;
    <MTLTexture> * _destinationTexture;
    bool  _liveRendering;
    <MTLRenderCommandEncoder> * _renderEncoder;
    bool  _renderOnPaper;
    struct { 
        unsigned long long x; 
        unsigned long long y; 
        unsigned long long width; 
        unsigned long long height; 
    }  _scissorRect;
    unsigned long long  _vertexEncodeCount;
    bool  _waitUntilCompletedOnCommit;
}

@property (nonatomic, readonly) <MTLCommandBuffer> *commandBuffer;
@property (nonatomic, readonly) <MTLCommandQueue> *commandQueue;
@property (nonatomic, readonly) <MTLCommandBuffer> *computeCommandBuffer;
@property (nonatomic, retain) <MTLComputeCommandEncoder> *computeEncoder;
@property (nonatomic) unsigned long long destinationColorAttachmentIndex;
@property (nonatomic, retain) <MTLTexture> *destinationTexture;
@property (nonatomic) bool liveRendering;
@property (nonatomic, retain) <MTLRenderCommandEncoder> *renderEncoder;
@property (nonatomic) bool renderOnPaper;
@property (nonatomic) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; } scissorRect;
@property (nonatomic) unsigned long long vertexEncodeCount;
@property (nonatomic) bool waitUntilCompletedOnCommit;

- (void).cxx_destruct;
- (void)addCommandBuffer:(id)arg1;
- (void)cancel;
- (id)commandBuffer;
- (id)commandBufferCreateIfNecessary;
- (id)commandQueue;
- (void)commit;
- (void)commitAndPurgeResourceSet:(id)arg1;
- (id)computeCommandBuffer;
- (id)computeCommandBufferCreateIfNecessary;
- (id)computeEncoder;
- (void)dealloc;
- (unsigned long long)destinationColorAttachmentIndex;
- (id)destinationTexture;
- (id)initWithCommandQueue:(id)arg1 liveRendering:(bool)arg2;
- (bool)liveRendering;
- (void)popDebugGroup;
- (void)pushDebugGroup:(id)arg1;
- (id)renderEncoder;
- (bool)renderOnPaper;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })scissorRect;
- (void)setComputeEncoder:(id)arg1;
- (void)setDestinationColorAttachmentIndex:(unsigned long long)arg1;
- (void)setDestinationTexture:(id)arg1;
- (void)setLiveRendering:(bool)arg1;
- (void)setRenderEncoder:(id)arg1;
- (void)setRenderOnPaper:(bool)arg1;
- (void)setScissorRect:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1;
- (void)setVertexEncodeCount:(unsigned long long)arg1;
- (void)setWaitUntilCompletedOnCommit:(bool)arg1;
- (void)textureBarrierIfNecessary;
- (unsigned long long)vertexEncodeCount;
- (bool)waitUntilCompletedOnCommit;

@end
