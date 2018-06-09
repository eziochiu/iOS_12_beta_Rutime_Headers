/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMAskForTimeRequestResponse : NSManagedObject

@property (nonatomic, retain) NSNumber *amountGranted;
@property (nonatomic, retain) NSNumber *answer;
@property (nonatomic, retain) NSDate *expirationDate;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic, retain) NSDate *requestTimeStamp;
@property (nonatomic, retain) RMApp *requestedApplication;
@property (nonatomic, retain) RMCategory *requestedCategory;
@property (nonatomic, retain) RMWebDomain *requestedWebDomain;
@property (nonatomic, retain) RMUser *requestingUser;
@property (nonatomic, retain) RMUser *respondingUser;
@property (nonatomic, retain) NSDate *responseTimeStamp;
@property (nonatomic, retain) NSNumber *timeRequested;
@property (nonatomic) long long usageType;

+ (id)_fetchPredicateForAskForTimeRequest:(id)arg1 requestingUserDSID:(id)arg2;
+ (id)upsertAskForTimeRequest:(id)arg1 fromUser:(id)arg2 inContext:(id)arg3 error:(id*)arg4;

- (void)awakeFromInsert;

@end
