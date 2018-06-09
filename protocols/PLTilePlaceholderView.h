/* made by EzioChiu.
 */

@protocol PLTilePlaceholderView <NSObject>

@required

- (void)fadeOutSoonIfNeededAndRemoveFromSuperview:(bool)arg1;
- (void)setImageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setToolbarVisible:(bool)arg1;
- (void)showErrorIndicator;
- (void)showLoadingIndicator;
- (void)showLoadingIndicatorWhenReady;
- (void)updateCloudDownloadProgress:(double)arg1;

@end
