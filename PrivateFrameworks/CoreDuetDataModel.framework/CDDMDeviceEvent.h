/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuetDataModel.framework/CoreDuetDataModel
 */

@interface CDDMDeviceEvent : NSManagedObject

@property (nonatomic, retain) NSNumber *anonymizedBeacon;
@property (nonatomic, retain) NSNumber *anonymizedLocation;
@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, retain) NSDate *exchangeDate;
@property (nonatomic, retain) NSNumber *integerId;
@property (nonatomic, retain) NSNumber *isDefaultPairedDevice;
@property (nonatomic, retain) NSNumber *localDaysSinceSunday;
@property (nonatomic, retain) NSNumber *localTime;
@property (nonatomic, retain) NSNumber *localTimeQuarterHourSlot;
@property (nonatomic, retain) NSNumber *locallyPresent;
@property (nonatomic, retain) NSNumber *networkQuality;
@property (nonatomic, retain) NSString *service;
@property (nonatomic, retain) NSNumber *state;
@property (nonatomic, retain) NSNumber *userId;

@end
