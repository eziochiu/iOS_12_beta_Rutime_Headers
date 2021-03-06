/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlPrimaryStateViewController : HUQuickControlSingleControlViewController

@property (nonatomic, readonly) HFControlItem<HFPrimaryStateWriter> *controlItem;

+ (Class)controlItemClass;
+ (id)controlItemPredicate;

- (id)controlToViewValueTransformer;
- (id)createInteractionCoordinator;
- (id)createViewProfile;

@end
