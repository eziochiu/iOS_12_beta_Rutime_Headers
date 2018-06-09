/* made by EzioChiu.
 */

@protocol CFXEffectBrowserViewControllerDelegate <CFXEffectBrowserContentPresenterDelegate>

@required

- (bool)allowLandscapeForEffectBrowserViewController:(CFXEffectBrowserViewController *)arg1;
- (void)effectBrowserViewController:(CFXEffectBrowserViewController *)arg1 didDropOverlayEffect:(CFXEffect *)arg2 atScreenPoint:(struct CGPoint { double x1; double x2; })arg3 scale:(double)arg4 rotationAngle:(double)arg5;
- (void)effectBrowserViewController:(CFXEffectBrowserViewController *)arg1 didRemoveAllEffectsOfType:(CFXEffectType *)arg2;
- (void)effectBrowserViewController:(CFXEffectBrowserViewController *)arg1 didSelectEffect:(CFXEffect *)arg2;
- (NSString *)localizedPromptForHidingAnimojiForEffectBrowserViewController:(CFXEffectBrowserViewController *)arg1;
- (NSString *)selectedAnimojiIdentifierForEffectBrowserViewController:(CFXEffectBrowserViewController *)arg1;
- (NSString *)selectedFilterIdentifierForEffectBrowserViewController:(CFXEffectBrowserViewController *)arg1;

@optional

- (void)effectBrowserViewController:(CFXEffectBrowserViewController *)arg1 didDismissPickerForEffectType:(CFXEffectType *)arg2;
- (void)effectBrowserViewController:(CFXEffectBrowserViewController *)arg1 didPresentPickerForEffectType:(CFXEffectType *)arg2;
- (void)effectBrowserViewControllerDidStartCaptureSession:(CFXEffectBrowserViewController *)arg1;
- (void)effectBrowserViewControllerDidStopCaptureSession:(CFXEffectBrowserViewController *)arg1;
- (CFXMediaItem *)mediaItemForEffectBrowserViewController:(CFXEffectBrowserViewController *)arg1;

@end
