/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceShortcutsUI.framework/VoiceShortcutsUI
 */

@interface VCUIVoiceShortcutCell : UITableViewCell {
    UIView * _cardView;
}

@property (nonatomic) UIView *cardView;

- (void).cxx_destruct;
- (id)cardView;
- (void)configureWithVoiceShortcut:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setCardView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
