/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlAlarmDetailsViewController : HUQuickControlSingleControlViewController <HUQuickControlDetailsViewControllerVendor>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)controlItemClass;

- (id)createDetailsViewController;
- (id)createInteractionCoordinator;
- (id)secondaryQuickControlPresentationStyle;
- (bool)shouldShowControlWhenUnreachable;

@end
