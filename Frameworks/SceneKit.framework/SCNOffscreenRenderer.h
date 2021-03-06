/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNOffscreenRenderer : SCNRenderer

@property (nonatomic) unsigned long long antialiasingMode;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) unsigned int textureID;

+ (id)offscreenRendererWithContext:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (id)offscreenRendererWithDevice:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;

- (unsigned long long)antialiasingMode;
- (void)setAntialiasingMode:(unsigned long long)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)snapshot;
- (unsigned int)textureID;

@end
