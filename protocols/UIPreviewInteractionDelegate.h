/* made by EzioChiu.
 */

@protocol UIPreviewInteractionDelegate <NSObject>

@required

- (void)previewInteraction:(UIPreviewInteraction *)arg1 didUpdatePreviewTransition:(double)arg2 ended:(bool)arg3;
- (void)previewInteractionDidCancel:(UIPreviewInteraction *)arg1;

@optional

- (void)previewInteraction:(UIPreviewInteraction *)arg1 didUpdateCommitTransition:(double)arg2 ended:(bool)arg3;
- (bool)previewInteractionShouldBegin:(UIPreviewInteraction *)arg1;

@end
