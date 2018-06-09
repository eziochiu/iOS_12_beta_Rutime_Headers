/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptCanvasContext : SUScriptObject {
    struct CGContext { } * _context;
    struct CGPath { } * _contextPath;
    id  _fillStyle;
    long long  _fillStyleType;
    double  _height;
    double  _scale;
    double  _shadowBlur;
    SUScriptColor * _shadowColor;
    double  _shadowOffsetX;
    double  _shadowOffsetY;
    id  _strokeStyle;
    long long  _strokeStyleType;
    double  _width;
}

@property (retain) id fillStyle;
@property double globalAlpha;
@property (retain) NSString *globalCompositeOperation;
@property (readonly) double height;
@property (retain) id lineCap;
@property (retain) id lineJoin;
@property double lineWidth;
@property double miterLimit;
@property double shadowBlur;
@property (retain) id shadowColor;
@property double shadowOffsetX;
@property double shadowOffsetY;
@property (retain) id strokeStyle;
@property (readonly) double width;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (void)_ntsApplyShadow;
- (void)arcToX1:(double)arg1 y1:(double)arg2 x2:(double)arg3 y2:(double)arg4 radius:(double)arg5;
- (void)arcWithX:(double)arg1 y:(double)arg2 radius:(double)arg3 startAngle:(double)arg4 endAngle:(double)arg5 antiClockwise:(bool)arg6;
- (id)attributeKeys;
- (void)beginPath;
- (void)bezierCurveToCP1X:(double)arg1 cp1y:(double)arg2 cp2x:(double)arg3 cp2y:(double)arg4 x:(double)arg5 y:(double)arg6;
- (void)clearRectWithX:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4;
- (void)clip;
- (void)closePath;
- (id)copyCanvasImage;
- (struct CGPath { }*)copyCanvasPath;
- (void)dealloc;
- (void)fill;
- (void)fillRectWithX:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4;
- (id)fillStyle;
- (double)globalAlpha;
- (id)globalCompositeOperation;
- (double)height;
- (id)initWithWidth:(double)arg1 height:(double)arg2;
- (bool)isPointInPathWithX:(double)arg1 y:(double)arg2;
- (id)lineCap;
- (id)lineJoin;
- (void)lineToX:(double)arg1 y:(double)arg2;
- (double)lineWidth;
- (id)makeLinearGradientWithX0:(double)arg1 y0:(double)arg2 x1:(double)arg3 y1:(double)arg4;
- (id)makeRadialGradientWithX0:(double)arg1 y0:(double)arg2 r0:(double)arg3 x1:(double)arg4 y1:(double)arg5 r1:(double)arg6;
- (double)miterLimit;
- (void)moveToX:(double)arg1 y:(double)arg2;
- (void)quadraticCurveToCPX:(double)arg1 cpy:(double)arg2 x:(double)arg3 y:(double)arg4;
- (void)restoreState;
- (void)rotateWithAngle:(double)arg1;
- (void)saveState;
- (void)scaleWithX:(double)arg1 y:(double)arg2;
- (id)scriptAttributeKeys;
- (void)setFillStyle:(id)arg1;
- (void)setGlobalAlpha:(double)arg1;
- (void)setGlobalCompositeOperation:(id)arg1;
- (void)setLineCap:(id)arg1;
- (void)setLineJoin:(id)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setMiterLimit:(double)arg1;
- (void)setShadowBlur:(double)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShadowOffsetX:(double)arg1;
- (void)setShadowOffsetY:(double)arg1;
- (void)setStrokeStyle:(id)arg1;
- (void)setTransformWithM11:(double)arg1 m12:(double)arg2 m21:(double)arg3 m22:(double)arg4 dx:(double)arg5 dy:(double)arg6;
- (double)shadowBlur;
- (id)shadowColor;
- (double)shadowOffsetX;
- (double)shadowOffsetY;
- (void)stroke;
- (void)strokeRectWithX:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4;
- (id)strokeStyle;
- (void)transformWithM11:(double)arg1 m12:(double)arg2 m21:(double)arg3 m22:(double)arg4 dx:(double)arg5 dy:(double)arg6;
- (void)translateWithX:(double)arg1 y:(double)arg2;
- (double)width;

@end
