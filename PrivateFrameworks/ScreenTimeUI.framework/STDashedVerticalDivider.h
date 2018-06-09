/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STDashedVerticalDivider : UIView {
    UIImageView * _dashedLine;
    NSLayoutXAxisAnchor * _dashedLineCenterXAnchor;
    UILabel * _label;
    NSLayoutYAxisAnchor * _labelLastBaselineAnchor;
    NSLayoutConstraint * _labelLeadingConstraint;
    NSString * _labelText;
}

@property (nonatomic, retain) UIImageView *dashedLine;
@property (nonatomic, readonly, copy) NSLayoutXAxisAnchor *dashedLineCenterXAnchor;
@property (nonatomic, retain) UILabel *label;
@property (nonatomic, readonly, copy) NSLayoutYAxisAnchor *labelLastBaselineAnchor;
@property (nonatomic, retain) NSLayoutConstraint *labelLeadingConstraint;
@property (nonatomic, copy) NSString *labelText;

+ (id)dashedLineImage;

- (void).cxx_destruct;
- (id)dashedLine;
- (id)dashedLineCenterXAnchor;
- (id)init;
- (id)label;
- (id)labelLastBaselineAnchor;
- (id)labelLeadingConstraint;
- (id)labelText;
- (void)setDashedLine:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLabelLeadingConstraint:(id)arg1;
- (void)setLabelText:(id)arg1;

@end
