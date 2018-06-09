/* made by EzioChiu.
 */

@protocol PLPreviewInteractionPresentable <NSObject>

@required

- (<PLPreviewInteractionPresenting> *)presenter;
- (void)setPresenter:(id <PLPreviewInteractionPresenting>)arg1;

@optional

- (UIView *)viewForTouchContinuation;
- (UIView *)viewWithContent;

@end
