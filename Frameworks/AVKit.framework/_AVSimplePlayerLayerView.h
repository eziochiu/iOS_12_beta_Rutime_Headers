/* made by EzioChiu
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface _AVSimplePlayerLayerView : UIView

@property (nonatomic, readonly) AVPlayerLayer *playerLayer;

+ (id)keyPathsForValuesAffectingPlayerLayer;
+ (Class)layerClass;

- (id)playerLayer;

@end
