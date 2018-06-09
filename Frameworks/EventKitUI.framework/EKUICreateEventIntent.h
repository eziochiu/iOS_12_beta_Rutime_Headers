/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUICreateEventIntent : INIntent

@property (nonatomic, copy) INIdentifierString *endDate;
@property (nonatomic, copy) CLPlacemark *geolocation;
@property (nonatomic, copy) NSString *locationAddress;
@property (nonatomic, copy) NSString *locationName;
@property (nonatomic, copy) INIdentifierString *startDate;
@property (nonatomic, copy) NSString *title;

@end
