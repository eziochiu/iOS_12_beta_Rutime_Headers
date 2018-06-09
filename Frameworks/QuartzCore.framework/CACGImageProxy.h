/* made by EzioChiu
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CACGImageProxy : NSObject {
    unsigned int  _copy_flags;
    struct CGImage { } * _image;
    struct CGColor { } * _tint_color;
}

+ (id)proxyWithImage:(struct CGImage { }*)arg1 tintColor:(struct CGColor { }*)arg2 copyFlags:(unsigned int)arg3;

- (struct Object { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; }*)CA_copyRenderValue;
- (void)CA_prepareRenderValue;
- (void)dealloc;

@end
