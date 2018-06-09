/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUNameAndIconEditorCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol, HUEditableTextCellProtocol> {
    UIView * _containerView;
    <HUNameAndIconEditorCellDelegate> * _delegate;
    bool  _disabled;
    bool  _fullWidth;
    HUIconButton * _iconButton;
    HFItem * _item;
    NSLayoutConstraint * _leftConstraint;
    NSLayoutConstraint * _rightConstraint;
    UITextField * _textField;
}

@property (nonatomic, retain) UIView *containerView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUNameAndIconEditorCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isDisabled, nonatomic) bool disabled;
@property (nonatomic) bool fullWidth;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HUIconButton *iconButton;
@property (nonatomic, retain) HFItem *item;
@property (nonatomic, retain) NSLayoutConstraint *leftConstraint;
@property (nonatomic) <HUResizableCellDelegate> *resizingDelegate;
@property (nonatomic, retain) NSLayoutConstraint *rightConstraint;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITextField *textField;
@property (nonatomic, retain) UIFont *textFieldFont;

- (void).cxx_destruct;
- (void)_handleIconButtonTap:(id)arg1;
- (void)_setupConstraints;
- (void)_updateFullWidthAppearance;
- (id)containerView;
- (id)delegate;
- (bool)fullWidth;
- (id)iconButton;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isDisabled;
- (id)item;
- (id)leftConstraint;
- (void)prepareForReuse;
- (id)rightConstraint;
- (void)setContainerView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setFullWidth:(bool)arg1;
- (void)setIconButton:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setLeftConstraint:(id)arg1;
- (void)setRightConstraint:(id)arg1;
- (void)setTextField:(id)arg1;
- (void)setTextFieldFont:(id)arg1;
- (id)textField;
- (id)textFieldFont;
- (void)updateUIWithAnimation:(bool)arg1;

@end
