/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
 */

@interface REUpNextAccessoryView : UIView {
    REAccessoryDescription * _accessoryDescription;
    UILabel * _label;
    UIVisualEffectView * _labelEffectView;
}

+ (void)initialize;

- (void).cxx_destruct;
- (void)configureWithDescription:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)primaryEffectViews;
- (id)secondaryEffectViews;
- (void)setTextColor:(id)arg1;
- (id)viewForLastBaselineLayout;

@end
