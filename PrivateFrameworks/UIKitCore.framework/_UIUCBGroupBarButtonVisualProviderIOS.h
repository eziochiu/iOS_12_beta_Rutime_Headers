/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIUCBGroupBarButtonVisualProviderIOS : _UIUCBBarButtonVisualProviderIOS {
    bool  _lightKeyboard;
    _UIUCBKBSelectionBackground * _selectionBackgroundView;
}

@property (nonatomic) bool lightKeyboard;

+ (id)darkKeyboardProvider;
+ (id)lightKeyboardProvider;

- (void).cxx_destruct;
- (void)configureButton:(id)arg1 withAppearanceDelegate:(id)arg2 fromBarItem:(id)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isEqual:(id)arg1;
- (bool)lightKeyboard;
- (void)setLightKeyboard:(bool)arg1;
- (void)updateButton:(id)arg1 forSelectedState:(bool)arg2;
- (void)updateButton:(id)arg1 toUseButtonShapes:(bool)arg2;

@end
