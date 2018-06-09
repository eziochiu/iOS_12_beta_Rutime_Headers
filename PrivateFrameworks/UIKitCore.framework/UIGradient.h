/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIGradient : NSObject {
    double  _height;
    struct CGShading { } * _shader;
    struct { double x1; double x2; double x3; double x4; double x5; } * _values;
}

- (void)dealloc;
- (void)fillRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)fillRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (id)initVerticalWithValues:(struct { double x1; double x2; double x3; double x4; double x5; }*)arg1;

@end
