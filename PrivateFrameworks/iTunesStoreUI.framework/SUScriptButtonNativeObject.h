/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptButtonNativeObject : SUScriptNativeObject {
    bool  _loading;
    NSString * _styleString;
    NSString * _subtitle;
    NSString * _systemItemString;
}

@property (getter=isBackButton, nonatomic, readonly) bool backButton;
@property (nonatomic, readonly) int buttonType;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } imageInsets;
@property (getter=isLoading, nonatomic) bool loading;
@property (getter=isShowingConfirmation, nonatomic, readonly) bool showingConfirmation;
@property (nonatomic, readonly) NSString *styleString;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, readonly) NSString *systemItemString;
@property (nonatomic) long long tag;
@property (nonatomic, retain) NSString *title;

+ (id)objectWithDefaultButtonForScriptButton:(id)arg1;

- (void)buttonAction:(id)arg1;
- (int)buttonType;
- (void)configureFromScriptButtonNativeObject:(id)arg1;
- (void)connectButtonAction;
- (void)dealloc;
- (void)disconnectButtonAction;
- (void)hideConfirmationAnimated:(bool)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })imageInsets;
- (id)initWithSystemItemString:(id)arg1;
- (bool)isBackButton;
- (bool)isEnabled;
- (bool)isLoading;
- (bool)isShowingConfirmation;
- (void)setEnabled:(bool)arg1;
- (void)setImageInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLoading:(bool)arg1;
- (void)setStyleFromString:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)showConfirmationWithTitle:(id)arg1 animated:(bool)arg2;
- (id)styleString;
- (id)subtitle;
- (id)systemItemString;

@end
