/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UITextEffectsRemoteView : _UIRemoteView {
    _UIRemoteViewController * _remoteViewController;
}

@property (nonatomic) _UIRemoteViewController *remoteViewController;

+ (bool)_requiresWindowTouches;

- (id)remoteViewController;
- (void)setRemoteViewController:(id)arg1;
- (int)textEffectsVisibilityLevel;

@end
