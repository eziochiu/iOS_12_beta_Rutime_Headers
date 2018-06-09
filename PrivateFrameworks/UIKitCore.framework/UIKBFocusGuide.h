/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKBFocusGuide : UIFocusGuide {
    <UIKBFocusGuideDelegate> * _keyboardDelegate;
    unsigned long long  focusHeading;
}

@property (nonatomic) unsigned long long focusHeading;
@property (nonatomic) <UIKBFocusGuideDelegate> *keyboardDelegate;

- (void)_didUpdateFocusToPreferredFocusedView;
- (unsigned long long)focusHeading;
- (id)keyboardDelegate;
- (void)setFocusHeading:(unsigned long long)arg1;
- (void)setKeyboardDelegate:(id)arg1;

@end
