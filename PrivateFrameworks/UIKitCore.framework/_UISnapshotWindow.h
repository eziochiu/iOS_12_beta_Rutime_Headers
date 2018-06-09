/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UISnapshotWindow : UIWindow

+ (bool)_isSystemWindow;

- (bool)_alwaysGetsContexts;
- (bool)_canActAsKeyWindowForScreen:(id)arg1;
- (bool)_canBecomeKeyWindow;
- (bool)_isConstrainedByScreenJail;
- (bool)_isSettingFirstResponder;
- (void)_setFirstResponder:(id)arg1;
- (bool)_shouldZoom;
- (void)_updateTransformLayerForClassicPresentation;

@end
