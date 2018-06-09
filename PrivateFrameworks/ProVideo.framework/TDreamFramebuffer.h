/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface TDreamFramebuffer : NSObject {
    unsigned int  _framebuffer;
    bool  _ownsFBO;
    bool  _ownsTexture;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    unsigned int  _texture;
    struct __CVOpenGLESTextureCache { } * _textureCache;
    bool  _validLUT;
}

@property (readonly) unsigned int framebuffer;
@property (readonly) struct CGSize { double x1; double x2; } size;
@property (readonly) unsigned int texture;
@property (readonly) bool validLUT;

- (void)dealloc;
- (unsigned int)framebuffer;
- (void)generateFramebuffer;
- (void)generateFramebufferTex:(id)arg1;
- (id)initWithExistingImageTexture:(struct IPImage { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; float x3; float x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; })arg1;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithTexName:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (unsigned int)texture;
- (bool)validLUT;

@end
