/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFBlindsServiceItem : HFDoorServiceItem

+ (id)supportedServiceTypes;

- (long long)_doorServicePriority;
- (id)createControlItems;

@end
