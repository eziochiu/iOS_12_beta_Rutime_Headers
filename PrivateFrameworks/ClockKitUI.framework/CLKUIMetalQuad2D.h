/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
 */

@interface CLKUIMetalQuad2D : CLKUIQuad2D {
    unsigned int  _isPrepared;
    <MTLRenderPipelineState> * _renderPipelineState;
    <MTLBuffer> * _uniformBuffer;
    <MTLBuffer> * _vertexBuffer;
}

- (void).cxx_destruct;
- (id)_newRenderPipelineStateOpaque:(bool)arg1;
- (void)encodeMetalForSize:(struct CLKUIQuadSize { int x1; int x2; })arg1 encoder:(id)arg2;
- (void)prepare;
- (void)purge;
- (void)setOpaque:(bool)arg1;

@end
