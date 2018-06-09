/* made by EzioChiu
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKOpenGLNode : SKNode

@property struct CGSize { double x1; double x2; } viewportSize;

+ (id)openGLNodeWithViewportSize:(struct CGSize { double x1; double x2; })arg1;

- (void)_renderForTime:(double)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithViewportSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)needsRenderForTime:(double)arg1;
- (void)renderForTime:(double)arg1;
- (void)setViewportSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })viewportSize;

@end
