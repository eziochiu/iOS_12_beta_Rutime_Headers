/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSMetricsEvent : NSObject {
    NSNumber * _databasePID;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSMutableDictionary * _underlyingDictionary;
}

@property (nonatomic, retain) NSString *appVersion;
@property (nonatomic, retain) NSNumber *baseVersion;
@property (nonatomic, retain) NSString *canaryIdentifier;
@property (nonatomic, retain) NSNumber *databasePID;
@property (nonatomic, retain) NSNumber *eventTime;
@property (nonatomic, retain) NSString *eventType;
@property (nonatomic, retain) NSNumber *eventVersion;
@property (nonatomic, retain) NSString *osVersion;
@property (nonatomic, retain) NSNumber *timezoneOffset;
@property (nonatomic, retain) NSString *topic;
@property (nonatomic, readonly) NSMutableDictionary *underlyingDictionary;

+ (id)_buyParamsFromString:(id)arg1;
+ (id)_buyParamsStringFromAuthenticationContext:(id)arg1;
+ (bool)_isValidJSONProperty:(id)arg1;
+ (id)_topicFromAuthenticationContext:(id)arg1;
+ (id)createEventFromAuthenticationContext:(id)arg1 error:(id)arg2;
+ (id)metricsAuthenticationAttemptDictionaryForAuthKitError:(id)arg1;

- (void).cxx_destruct;
- (void)addPropertiesWithDictionary:(id)arg1;
- (id)appVersion;
- (id)baseVersion;
- (id)canaryIdentifier;
- (id)databasePID;
- (id)eventTime;
- (id)eventType;
- (id)eventVersion;
- (id)initWithDictionary:(id)arg1;
- (id)initWithTopic:(id)arg1;
- (id)osVersion;
- (id)propertyForBodyKey:(id)arg1;
- (id)reportingURLFromContract:(id)arg1 error:(id*)arg2;
- (void)setAppVersion:(id)arg1;
- (void)setBaseVersion:(id)arg1;
- (void)setCanaryIdentifier:(id)arg1;
- (void)setDatabasePID:(id)arg1;
- (void)setEventTime:(id)arg1;
- (void)setEventType:(id)arg1;
- (void)setEventVersion:(id)arg1;
- (void)setOsVersion:(id)arg1;
- (void)setProperty:(id)arg1 forBodyKey:(id)arg2;
- (void)setTimezoneOffset:(id)arg1;
- (void)setTopic:(id)arg1;
- (id)timezoneOffset;
- (id)topic;
- (id)underlyingDictionary;

@end
