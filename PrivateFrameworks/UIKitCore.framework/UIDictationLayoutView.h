/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIDictationLayoutView : UIDictationView {
    bool  _blackTextColor;
    NSString * _currentDictationLanguage;
    UIButton * _globeButton;
    bool  _hideSwitcher;
    UIButton * _keyboardButton;
    UILabel * _languageLabel;
    UIButton * _waveTapEndpointButton;
}

- (id)darkGrayColor;
- (void)dealloc;
- (void)finishReturnToKeyboard;
- (void)globeButtonPressed:(id)arg1 withEvent:(id)arg2;
- (void)globeButtonPressed:(id)arg1 withEvent:(id)arg2 location:(struct CGPoint { double x1; double x2; })arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isShowing;
- (void)keyboardButtonPressed;
- (void)layoutSubviews;
- (void)returnToKeyboard;
- (void)setRenderConfig:(id)arg1;
- (void)setState:(int)arg1;
- (void)updateLanguageLabel;

@end
