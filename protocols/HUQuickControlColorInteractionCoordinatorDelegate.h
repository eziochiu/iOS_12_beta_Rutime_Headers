/* made by EzioChiu.
 */

@protocol HUQuickControlColorInteractionCoordinatorDelegate <HUQuickControlInteractionCoordinatorDelegate>

@required

- (void)interactionCoordinator:(HUQuickControlColorInteractionCoordinator *)arg1 activeModeDidChange:(unsigned long long)arg2;
- (void)interactionCoordinator:(HUQuickControlColorInteractionCoordinator *)arg1 colorPaletteDidChange:(HFColorPalette *)arg2;

@end
