/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STUsageTotalDeltaView : UIView {
    UIImageView * _imageView;
    UILabel * _label;
    NSLayoutYAxisAnchor * _labelLastBaselineAnchor;
}

@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, readonly) UILabel *label;
@property (nonatomic, readonly, copy) NSLayoutYAxisAnchor *labelLastBaselineAnchor;

- (void).cxx_destruct;
- (id)imageView;
- (id)init;
- (id)label;
- (id)labelLastBaselineAnchor;
- (id)lastBaselineAnchor;
- (void)setDeltaFromAverage:(double)arg1 timePeriod:(unsigned long long)arg2;

@end
