/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroMovieView : UIView

+ (Class)layerClass;

- (id)avPlayerLayer;
- (void)cleanupPlayerLayerAttributes;
- (void)configurePlayerLayerAttributes;
- (id)player;
- (void)setPlayer:(id)arg1;

@end
