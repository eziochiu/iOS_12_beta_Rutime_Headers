/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuetDataModel.framework/CoreDuetDataModel
 */

@interface CDDMForecast : NSManagedObject

@property (nonatomic, retain) NSNumber *attributeId;
@property (nonatomic, retain) NSNumber *basisCount;
@property (nonatomic, retain) NSNumber *basisFilled;
@property (nonatomic, retain) NSNumber *clientId;
@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, retain) NSNumber *forecastFormat;
@property (nonatomic, retain) NSDate *forecastGeneratedOn;
@property (nonatomic, retain) NSNumber *forecastGranularity;
@property (nonatomic, retain) NSNumber *forecastGroupId;
@property (nonatomic, retain) NSNumber *forecastType;
@property (nonatomic, retain) NSDate *historyWindowEnd;
@property (nonatomic, retain) NSNumber *historyWindowRecurrenceDelta;
@property (nonatomic, retain) NSNumber *historyWindowRecurrenceWidth;
@property (nonatomic, retain) NSDate *historyWindowStart;
@property (nonatomic, retain) NSNumber *integerId;
@property (nonatomic, retain) NSNumber *limitCount;
@property (nonatomic, retain) NSDate *oldestEntryDate;
@property (nonatomic, retain) NSNumber *userId;

@end
