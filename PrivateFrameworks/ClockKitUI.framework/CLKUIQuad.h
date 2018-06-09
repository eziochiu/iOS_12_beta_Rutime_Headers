/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
 */

@interface CLKUIQuad : NSObject {
    bool  _opaque;
}

@property (getter=isOpaque, nonatomic) bool opaque;

- (void)encodeGLforSize:(struct CLKUIQuadSize { int x1; int x2; })arg1;
- (void)encodeMetalForSize:(struct CLKUIQuadSize { int x1; int x2; })arg1 encoder:(id)arg2;
- (id)init;
- (bool)isOpaque;
- (void)prepare;
- (void)purge;
- (void)setOpaque:(bool)arg1;

@end
