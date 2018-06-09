/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDProcessQueryCollection : NSObject {
    NSString * _processBundleIdentifier;
    bool  _processSuspended;
    NSMutableDictionary * _queryServersByUUID;
}

@property (nonatomic, readonly) bool hasQueryServers;
@property (nonatomic, readonly, copy) NSString *processBundleIdentifier;
@property (getter=isProcessSuspended, nonatomic) bool processSuspended;
@property (nonatomic, readonly, copy) NSArray *queryServers;

- (void).cxx_destruct;
- (void)addQueryServer:(id)arg1;
- (bool)hasQueryServers;
- (id)initWithProcessBundleIdentifier:(id)arg1;
- (bool)isProcessSuspended;
- (id)processBundleIdentifier;
- (id)queryServers;
- (void)removeQueryServer:(id)arg1;
- (void)setProcessSuspended:(bool)arg1;

@end
