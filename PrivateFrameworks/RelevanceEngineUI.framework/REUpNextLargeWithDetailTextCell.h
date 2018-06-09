/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
 */

@interface REUpNextLargeWithDetailTextCell : REUpNextBaseCell {
    UIVisualEffectView * _bodyEffectView;
    REUpNextImageView * _bodyImage;
    UILabel * _bodyLabel;
    UILayoutGuide * _contentLayoutGuide;
    UIVisualEffectView * _detail1EffectView;
    UILabel * _detail1Label;
    UIVisualEffectView * _detail2EffectView;
    UILabel * _detail2Label;
    UIVisualEffectView * _headerEffectView;
    UILabel * _headerLabel;
}

+ (void)initialize;

- (void).cxx_destruct;
- (void)_updateHeaderColor;
- (void)configureWithContent:(id)arg1;
- (void)defaultTextColorDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)primaryEffectViews;
- (id)secondaryEffectViews;

@end
