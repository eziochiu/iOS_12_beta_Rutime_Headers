/* made by EzioChiu.
 */

@protocol HFServiceVendor <HFAccessoryVendor>

@required

- (NSSet *)services;

@optional

- (bool)shouldReduceOptionItemsForNotifyingCharacteristics;

@end
