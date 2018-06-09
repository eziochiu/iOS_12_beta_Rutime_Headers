/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDEventTriggerModel : HMDTriggerModel

@property (nonatomic, retain) NSData *evaluationCondition;
@property (nonatomic, retain) NSNumber *executeOnce;
@property (nonatomic, retain) NSData *recurrences;

+ (id)properties;

- (id)createPayload;

@end
