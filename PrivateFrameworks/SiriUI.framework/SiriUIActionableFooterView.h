/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUIActionableFooterView : SiriUIReusableFooterView {
    UIButton * _button;
    <SiriUIActionableFooterViewDelegate> * _delegate;
    bool  _hasKeyline;
    SiriUIKeyline * _keyline;
    SiriUISnippetViewController * _snippetViewController;
}

@property (nonatomic) <SiriUIActionableFooterViewDelegate> *delegate;
@property (nonatomic) bool hasKeyline;
@property (nonatomic, copy) NSString *title;

+ (double)defaultHeight;

- (void).cxx_destruct;
- (void)_buttonTapped:(id)arg1;
- (id)delegate;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (bool)hasKeyline;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)setHasKeyline:(bool)arg1;
- (void)setSnippetViewController:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)snippetViewController;
- (id)title;

@end
