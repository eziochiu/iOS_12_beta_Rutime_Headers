/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlColorViewController : HUQuickControlSingleControlViewController <HUQuickControlColorInteractionCoordinatorDelegate>

@property (nonatomic, readonly) HFColorControlItem *controlItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HUQuickControlColorViewProfile *viewProfile;

+ (Class)controlItemClass;

- (unsigned long long)_paletteType;
- (id)controlToViewValueTransformer;
- (id)createInteractionCoordinator;
- (id)createViewProfile;
- (void)interactionCoordinator:(id)arg1 activeModeDidChange:(unsigned long long)arg2;
- (void)interactionCoordinator:(id)arg1 colorPaletteDidChange:(id)arg2;
- (id)overrideSecondaryStatusText;
- (id)overrideStatusText;

@end
