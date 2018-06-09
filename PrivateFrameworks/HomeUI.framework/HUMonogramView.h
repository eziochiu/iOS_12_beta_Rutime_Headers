/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUMonogramView : UIView {
    UIView * _backgroundView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _bubbleEdgeOutsets;
    NSArray * _labelLayoutConstraints;
    UILabel * _monogramLabel;
    bool  _needsComputeLayoutMetrics;
    unsigned long long  _style;
}

@property (nonatomic, readonly) UIView *backgroundView;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } bubbleEdgeOutsets;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic, copy) NSArray *labelLayoutConstraints;
@property (nonatomic, readonly) UILabel *monogramLabel;
@property (nonatomic, copy) NSString *monogramString;
@property (nonatomic) bool needsComputeLayoutMetrics;
@property (nonatomic) unsigned long long style;
@property (nonatomic, retain) UIColor *textColor;

+ (unsigned long long)desiredStyleForString:(id)arg1;

- (void).cxx_destruct;
- (void)_computeLayoutMetrics;
- (void)_setupBackgroundView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setupMonogramLabel:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)backgroundColor;
- (id)backgroundView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })bubbleEdgeOutsets;
- (id)font;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)labelLayoutConstraints;
- (void)layoutSubviews;
- (id)monogramLabel;
- (id)monogramString;
- (bool)needsComputeLayoutMetrics;
- (void)setBackgroundColor:(id)arg1;
- (void)setBubbleEdgeOutsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setContentCompressionResistancePriority:(float)arg1 forAxis:(long long)arg2;
- (void)setContentHuggingPriority:(float)arg1 forAxis:(long long)arg2;
- (void)setFont:(id)arg1;
- (void)setLabelLayoutConstraints:(id)arg1;
- (void)setMonogramString:(id)arg1;
- (void)setNeedsComputeLayoutMetrics;
- (void)setNeedsComputeLayoutMetrics:(bool)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setTextColor:(id)arg1;
- (unsigned long long)style;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (id)textColor;

@end
