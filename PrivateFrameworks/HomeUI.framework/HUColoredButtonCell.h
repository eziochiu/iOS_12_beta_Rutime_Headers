/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUColoredButtonCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol> {
    HUColoredButton * _button;
    UIColor * _buttonBackgroundColor;
    bool  _buttonColorFollowsTintColor;
    <HUColoredButtonCellDelegate> * _delegate;
    bool  _disabled;
    HFItem * _item;
}

@property (nonatomic, retain) HUColoredButton *button;
@property (nonatomic, retain) UIColor *buttonBackgroundColor;
@property (nonatomic) bool buttonColorFollowsTintColor;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUColoredButtonCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isDisabled, nonatomic) bool disabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HFItem *item;
@property (nonatomic) <HUResizableCellDelegate> *resizingDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)button;
- (id)buttonBackgroundColor;
- (bool)buttonColorFollowsTintColor;
- (void)buttonPressed:(id)arg1;
- (id)delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isDisabled;
- (id)item;
- (void)prepareForReuse;
- (void)setButton:(id)arg1;
- (void)setButtonBackgroundColor:(id)arg1;
- (void)setButtonColorFollowsTintColor:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setItem:(id)arg1;
- (void)tintColorDidChange;
- (void)updateButtonColor;
- (void)updateUIWithAnimation:(bool)arg1;

@end
