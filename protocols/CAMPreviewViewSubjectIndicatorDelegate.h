/* made by EzioChiu.
 */

@protocol CAMPreviewViewSubjectIndicatorDelegate <NSObject>

@required

- (void)previewViewDidAddFirstTrackedSubjectIndicator:(CAMPreviewView *)arg1;
- (void)previewViewDidRemoveLastTrackedSubjectIndicator:(CAMPreviewView *)arg1;

@end
