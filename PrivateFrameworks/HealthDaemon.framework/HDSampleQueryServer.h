/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSampleQueryServer : HDBatchedQueryServer {
    bool  _includeTimeZones;
    unsigned long long  _limit;
    NSArray * _sortDescriptors;
    bool  _suspended;
}

@property (nonatomic, readonly) bool includeTimeZones;
@property (nonatomic, readonly) unsigned long long limit;
@property (nonatomic, readonly) NSArray *sortDescriptors;

+ (Class)queryClass;
+ (id)requiredEntitlements;
+ (bool)supportsAnchorBasedAuthorization;

- (void).cxx_destruct;
- (void)_queue_start;
- (bool)includeTimeZones;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 profile:(id)arg4 delegate:(id)arg5;
- (unsigned long long)limit;
- (id)sortDescriptors;

@end
