/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

@interface BFFLinkLabelFooterView : UIView {
    NSAttributedString * _attributedSubtitleText;
    double  _flexibleHeight;
    UILabel * _label;
    NSMutableArray * _linkHandlers;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _margins;
    UILabel * _subtitleLabel;
    UIView * _topLine;
    bool  _wantsFromBottomLayout;
    bool  _wantsSideBySideLayout;
}

@property (nonatomic, retain) NSAttributedString *attributedSubtitleText;
@property (nonatomic) double flexibleHeight;
@property (nonatomic, retain) NSString *labelText;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } margins;
@property (nonatomic, retain) UIColor *topLineColor;
@property (nonatomic) bool wantsFromBottomLayout;
@property (nonatomic) bool wantsSideBySideLayout;

+ (void)initialize;

- (void).cxx_destruct;
- (void)addLinkWithTitle:(id)arg1 handler:(id /* block */)arg2;
- (void)addLinkWithTitle:(id)arg1 textStyle:(id)arg2 handler:(id /* block */)arg3;
- (id)attributedSubtitleText;
- (double)flexibleHeight;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)labelText;
- (void)layoutSubviews;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })margins;
- (unsigned long long)numberOfLinks;
- (void)removeAllLinks;
- (void)removeLinkAtIndex:(unsigned long long)arg1;
- (void)setAttributedSubtitleText:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFlexibleHeight:(double)arg1;
- (void)setLabelText:(id)arg1;
- (void)setMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTopLineColor:(id)arg1;
- (void)setWantsFromBottomLayout:(bool)arg1;
- (void)setWantsSideBySideLayout:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 shouldSetSize:(bool)arg2;
- (id)topLineColor;
- (bool)wantsFromBottomLayout;
- (bool)wantsSideBySideLayout;

@end