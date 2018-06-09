/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSMetricsLogEvent : SSMetricsMutableEvent

@property (nonatomic) unsigned long long logLevel;
@property (nonatomic, retain) NSString *logSubsystem;
@property (nonatomic, retain) NSString *message;

+ (unsigned long long)_logLevelFromString:(id)arg1;
+ (id)_stringFromLogLevel:(unsigned long long)arg1;

- (id)description;
- (id)init;
- (unsigned long long)logLevel;
- (id)logSubsystem;
- (id)message;
- (void)setLogLevel:(unsigned long long)arg1;
- (void)setLogSubsystem:(id)arg1;
- (void)setMessage:(id)arg1;

@end
