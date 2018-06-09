/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIConfirmationHUDView : UIView {
    UIVisualEffectView * _effectView;
    UILabel * _textLabel;
}

@property (nonatomic, retain) UIVisualEffectView *effectView;
@property (nonatomic, retain) UILabel *textLabel;

- (void).cxx_destruct;
- (void)animateCheckmark;
- (id)effectView;
- (id)init;
- (void)layoutSubviews;
- (void)setEffectView:(id)arg1;
- (void)setTextLabel:(id)arg1;
- (id)textLabel;

@end
