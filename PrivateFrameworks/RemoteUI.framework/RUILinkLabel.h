/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUILinkLabel : UIView {
    id /* block */  _action;
    bool  _enabled;
    UIButton * _linkButton;
    long long  _textAlignment;
    UILabel * _textLabel;
}

@property (nonatomic, copy) id /* block */ action;
@property (nonatomic) bool enabled;
@property (nonatomic, copy) UIFont *font;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic, readonly) UIButton *linkButton;
@property (nonatomic) long long numberOfLines;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) long long textAlignment;
@property (nonatomic, readonly) UILabel *textLabel;

- (void).cxx_destruct;
- (void)_linkPressed;
- (void)_resize;
- (id /* block */)action;
- (bool)enabled;
- (id)font;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (long long)lineBreakMode;
- (id)linkButton;
- (long long)numberOfLines;
- (void)setAction:(id /* block */)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFont:(id)arg1;
- (void)setLineBreakMode:(long long)arg1;
- (void)setNumberOfLines:(long long)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)text;
- (long long)textAlignment;
- (id)textLabel;

@end
