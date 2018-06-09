/* made by EzioChiu.
 */

@protocol MusicMediaDetailSplitViewController <NSObject>

@required

- (<MusicMediaDetailSplitViewControllerDelegate> *)mediaSplitViewControllerDelegate;
- (void)setMediaSplitViewControllerDelegate:(id <MusicMediaDetailSplitViewControllerDelegate>)arg1;

@optional

- (void)setMediaDetailTintInformation:(MusicMediaDetailTintInformation *)arg1;
- (void)setPreferredMaximumContentWidth:(double)arg1;

@end
