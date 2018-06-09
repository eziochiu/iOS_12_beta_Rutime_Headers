/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKBubbleSet : NSObject {
    GKBubbleFlowBubbleControl * _bubbleControls;
    NSString * _debuggingTag;
    long long  _supportedBubbles;
}

@property (nonatomic, readonly) NSArray *bubbleControls;
@property (nonatomic, retain) NSString *debuggingTag;
@property (nonatomic) long long supportedBubbles;

+ (id)setWithBubbleControls:(id)arg1;
+ (id)setWithBubbleTypes:(long long)arg1;

- (void)animateOutWithFocus:(long long)arg1 viewsToFadeOut:(id)arg2 effectiveView:(id)arg3 completion:(id /* block */)arg4;
- (id)bubbleControls;
- (id)bubbleForType:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debuggingTag;
- (id)description;
- (void)hideAllBubbleControls;
- (bool)isEqual:(id)arg1;
- (void)setAllContentAlpha:(double)arg1;
- (void)setDebuggingTag:(id)arg1;
- (void)setSupportedBubbles:(long long)arg1;
- (id)subsetWithBubbleTypes:(long long)arg1;
- (long long)supportedBubbles;
- (void)syncBubbleMeshAnimationStateFromSet:(id)arg1;
- (void)updateBubbleVisibilityAccordingToSupportedBubblesMask;

@end