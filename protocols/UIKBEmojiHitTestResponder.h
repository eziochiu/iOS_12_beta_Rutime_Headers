/* made by EzioChiu.
 */

@protocol UIKBEmojiHitTestResponder <NSObject>

@required

- (void)deactivateActiveKey;
- (void)finishSliderBehaviorFeedback;
- (bool)isTrackpadMode;
- (void)prepareSliderBehaviorFeedback;
- (void)provideSliderBehaviorFeedback;

@end
