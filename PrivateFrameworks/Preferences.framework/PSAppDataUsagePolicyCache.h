/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSAppDataUsagePolicyCache : NSObject {
    struct __CTServerConnection { } * _ctServerConnection;
    NSCache * _policyCache;
    NSObject<OS_dispatch_queue> * _policyPrefetchQueue;
}

@property (nonatomic, retain) struct __CTServerConnection { }*ctServerConnection;
@property (nonatomic, retain) NSCache *policyCache;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *policyPrefetchQueue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (struct __CTServerConnection { }*)ctServerConnection;
- (void)dealloc;
- (id)fetchUsagePolicyFor:(id)arg1;
- (id)init;
- (id)initPrivate;
- (id)policyCache;
- (id)policyPrefetchQueue;
- (void)prefetchUsagePolicyFor:(id)arg1;
- (bool)setCellularUsagePolicy:(id)arg1 forBundle:(id)arg2;
- (void)setCtServerConnection:(struct __CTServerConnection { }*)arg1;
- (void)setPolicyCache:(id)arg1;
- (void)setPolicyPrefetchQueue:(id)arg1;
- (bool)setUsagePoliciesForBundle:(id)arg1 cellular:(bool)arg2 wifi:(bool)arg3;
- (id)usagePolicyFor:(id)arg1;
- (void)willEnterForeground;

@end
