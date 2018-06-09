/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
 */

@interface CLKUIMetalQuadRenderer : NSObject {
    <MTLCommandQueue> * _commandQueue;
    NSArray * _quads;
    MTLRenderPassDescriptor * _renderPassDescriptor;
}

@property (nonatomic, retain) NSArray *quads;

- (void).cxx_destruct;
- (id)_newRenderPassDescriptor;
- (id)init;
- (id)quads;
- (void)renderDrawable:(id)arg1 size:(struct CLKUIQuadSize { int x1; int x2; })arg2;
- (void)setQuads:(id)arg1;

@end
