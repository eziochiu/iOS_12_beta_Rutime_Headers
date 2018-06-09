/* made by EzioChiu.
 */

@protocol HUQuickControlInteractionCoordinatorDelegate <NSObject>

@required

- (bool)hasModelValueChangedForInteractionCoordinator:(HUQuickControlInteractionCoordinator *)arg1;
- (void)hideAuxiliaryViewForInteractionCoordinator:(HUQuickControlInteractionCoordinator *)arg1;
- (void)interactionCoordinator:(HUQuickControlInteractionCoordinator *)arg1 interactionStateDidChange:(bool)arg2;
- (void)interactionCoordinator:(HUQuickControlInteractionCoordinator *)arg1 showAuxiliaryView:(UIView<HUQuickControlAuxiliaryView> *)arg2;
- (void)interactionCoordinator:(HUQuickControlInteractionCoordinator *)arg1 updateControlHorizontalCompressionFactor:(double)arg2;
- (void)interactionCoordinator:(HUQuickControlInteractionCoordinator *)arg1 updateControlVerticalStretchFactor:(double)arg2;
- (void)interactionCoordinator:(HUQuickControlInteractionCoordinator *)arg1 viewValueDidChange:(id)arg2;
- (void)interactionCoordinatorWantsDismissal:(HUQuickControlInteractionCoordinator *)arg1;

@end
