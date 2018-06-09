/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlRangeViewController : HUQuickControlSingleControlViewController

@property (nonatomic, readonly) HFRangeControlItem *controlItem;

+ (Class)controlItemClass;

- (id)controlToViewValueTransformer;
- (id)createInteractionCoordinator;
- (id)createViewProfile;

@end
