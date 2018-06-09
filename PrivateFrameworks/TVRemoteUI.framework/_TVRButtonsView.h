/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
 */

@interface _TVRButtonsView : _TVRMaterialView {
    _TVRButtonsLayoutView * _buttonLayoutView;
    NSMutableDictionary * _buttonsByType;
    <_TVRButtonsViewDelegate> * _delegate;
    _TVRButton * _keyboardButton;
    _TVRButton * _leftMediaButton;
    NSArray * _nonMediaViews;
    _TVRButton * _rightMediaButton;
    NSMutableDictionary * _viewsByType;
    bool  _volumeControlEnabled;
}

@property (nonatomic, retain) _TVRButtonsLayoutView *buttonLayoutView;
@property (nonatomic, retain) NSMutableDictionary *buttonsByType;
@property (nonatomic) <_TVRButtonsViewDelegate> *delegate;
@property (nonatomic, retain) _TVRButton *keyboardButton;
@property (nonatomic, retain) _TVRButton *leftMediaButton;
@property (nonatomic, retain) NSArray *nonMediaViews;
@property (nonatomic, retain) _TVRButton *rightMediaButton;
@property (nonatomic, retain) NSMutableDictionary *viewsByType;
@property (nonatomic) bool volumeControlEnabled;

- (void).cxx_destruct;
- (void)_addAndConfigureMediaButton:(id)arg1;
- (id)_buttonForView:(id)arg1;
- (void)_configureInteractionOnView:(id)arg1 forButton:(id)arg2;
- (id)_createGenericViewForButtonType:(long long)arg1;
- (void)_disableVolumeControl;
- (void)_enableVolumeControl;
- (void)_genericButtonTouchDown:(id)arg1;
- (void)_genericButtonTouchUp:(id)arg1;
- (void)_genericLongPressGesture:(id)arg1;
- (void)_genericTapGesture:(id)arg1;
- (bool)_isBottomRowButton:(id)arg1;
- (bool)_isMediaButton:(id)arg1;
- (bool)_isVolumeButton:(id)arg1;
- (id)_keyboardButton;
- (void)_keyboardButtonTapped;
- (bool)_mediaButtonIsLeftHanded:(id)arg1;
- (void)_setView:(id)arg1 asEnabled:(bool)arg2;
- (void)_volumeDownButtonTouchDown:(id)arg1;
- (void)_volumeDownButtonTouchUp:(id)arg1;
- (void)_volumeUpButtonTouchDown:(id)arg1;
- (void)_volumeUpButtonTouchUp:(id)arg1;
- (id)buttonLayoutView;
- (id)buttonsByType;
- (void)dealloc;
- (id)delegate;
- (void)disableAllButtons;
- (void)enableButtons:(id)arg1;
- (void)hideKeyboardButton;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)keyboardButton;
- (void)layoutSubviews;
- (id)leftMediaButton;
- (id)nonMediaViews;
- (id)rightMediaButton;
- (void)setButtonLayoutView:(id)arg1;
- (void)setButtonsByType:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setKeyboardButton:(id)arg1;
- (void)setLeftMediaButton:(id)arg1;
- (void)setNonMediaViews:(id)arg1;
- (void)setRightMediaButton:(id)arg1;
- (void)setViewsByType:(id)arg1;
- (void)setVolumeControlEnabled:(bool)arg1;
- (void)showKeyboardButton;
- (void)supportedButtonsAdded:(id)arg1 removed:(id)arg2;
- (id)viewsByType;
- (bool)volumeControlEnabled;

@end
