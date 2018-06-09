/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNSpriteKitSource : SCNImageSource {
    SKScene * _scene;
}

@property (nonatomic, retain) SKScene *scene;

- (void)dealloc;
- (bool)isOpaque;
- (id)scene;
- (void)setScene:(id)arg1;
- (id)textureSource;

@end
