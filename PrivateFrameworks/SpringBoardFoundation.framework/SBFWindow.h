/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFWindow : UIWindow {
    NSNumber * _isHiddenOverride;
    _SBFKeyWindowStack * _keyWindowStack;
}

@property (setter=_setKeyWindowStack:, nonatomic, retain) _SBFKeyWindowStack *_keyWindowStack;

- (void).cxx_destruct;
- (bool)_canBecomeKeyWindow;
- (bool)_isEffectivelyHiddenForKeyWindowStack;
- (id)_keyWindowStack;
- (void)_makeKeyFromKeyWindowStack;
- (void)_resignKeyFromKeyWindowStack;
- (void)_setKeyWindowStack:(id)arg1;
- (void)dealloc;
- (void)makeKeyWindow;
- (void)resignAsKeyWindow;
- (void)setHidden:(bool)arg1;

@end
