/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIInputViewPostPinningReloadState : NSObject {
    UIResponder * _responderPreventedFromSettingInputViews;
}

@property (nonatomic, retain) UIResponder *responderToReload;

+ (id)stateWithResponder:(id)arg1;

- (void)dealloc;
- (id)responderToReload;
- (void)setResponderToReload:(id)arg1;

@end
