/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceHoursDayRow : MKPlaceSectionRowView {
    NSArray * _baselineToBaselineConstraints;
    NSArray * _baselineToBottomConstraints;
    NSLayoutConstraint * _baselineToTop;
    NSArray * _labels;
    UIColor * _openingStateColor;
}

@property (nonatomic, retain) UIColor *openingStateColor;

- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (id)_standardLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)openingStateColor;
- (void)setDays:(id)arg1 hours:(id)arg2 shouldStack:(bool)arg3 isViewControllerExpanding:(bool)arg4 shouldCollapseFurther:(bool)arg5;
- (void)setOpeningStateColor:(id)arg1;
- (bool)wantsDefaultClipping;

@end
