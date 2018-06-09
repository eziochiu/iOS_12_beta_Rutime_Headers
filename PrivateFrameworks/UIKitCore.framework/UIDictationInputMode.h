/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIDictationInputMode : UISpecializedInputMode {
    UIKeyboardInputMode * _currentInputModeForDictation;
    UITouch * _triggeringTouch;
}

@property (nonatomic, retain) UIKeyboardInputMode *currentInputModeForDictation;
@property (nonatomic, retain) UITouch *triggeringTouch;

+ (bool)currentInputModeSupportsDictation;

- (id)currentInputModeForDictation;
- (void)dealloc;
- (bool)includeBarHeight;
- (void)setCurrentInputModeForDictation:(id)arg1;
- (void)setTriggeringTouch:(id)arg1;
- (id)triggeringTouch;
- (Class)viewControllerClass;

@end
