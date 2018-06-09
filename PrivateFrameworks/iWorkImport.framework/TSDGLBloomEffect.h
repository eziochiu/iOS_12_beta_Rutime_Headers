/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDGLBloomEffect : NSObject {
    TSDGLShader * _bloomShader;
    struct CGSize { 
        double width; 
        double height; 
    }  _blurBufferSize;
    TSDGLDataBuffer * _blurDataBuffer;
    TSDGLFrameBuffer * _blurFramebuffer;
    TSDGLShader * _blurHorizontalShader;
    TSDGLDataBuffer * _blurTransferDataBuffer;
    TSDGLShader * _blurVerticalShader;
    TSDGLFrameBuffer * _colorFramebuffer;
    TSDGLDataBuffer * _dataBuffer;
    struct CGSize { 
        double width; 
        double height; 
    }  _effectSize;
    TSDGLShader * _fboTransferShader;
    int  _oldViewportRect;
    bool  _oldViewportRectInitialized;
}

- (void)bindFramebuffer;
- (void)dealloc;
- (void)drawBloomEffectWithMVPMatrix:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1 bloomAmount:(double)arg2 currentGLFramebuffer:(int)arg3;
- (id)initWithEffectSize:(struct CGSize { double x1; double x2; })arg1 blurScale:(double)arg2;
- (void)p_blurColorBufferWithPreviousFramebuffer:(int)arg1;
- (void)p_setupBuffers;
- (void)p_setupShaders;
- (void)teardown;
- (void)unbindFramebufferAndBindGLFramebuffer:(int)arg1;

@end
