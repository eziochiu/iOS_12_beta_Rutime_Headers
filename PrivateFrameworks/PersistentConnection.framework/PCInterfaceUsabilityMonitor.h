/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@interface PCInterfaceUsabilityMonitor : NSObject <PCInterfaceUsabilityMonitorProtocol> {
    NSObject<OS_dispatch_queue> * _delegateQueue;
    CUTWeakReference * _delegateReference;
    void * _dynamicStore;
    long long  _interfaceIdentifier;
    NSString * _interfaceName;
    bool  _isInternetReachable;
    NSObject<OS_dispatch_queue> * _ivarQueue;
    int  _linkQuality;
    struct __CFRunLoopSource { } * _linkQualitySource;
    struct __CFString { } * _lqKey;
    NSMutableArray * _offTransitions;
    void * _reachability;
    unsigned long long  _thresholdOffTransitionCount;
    bool  _trackUsability;
    double  _trackedTimeInterval;
}

@property (nonatomic, readonly) int currentRAT;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PCInterfaceUsabilityMonitorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long interfaceIdentifier;
@property (nonatomic, readonly) bool isBadLinkQuality;
@property (nonatomic, readonly) bool isInterfaceHistoricallyUsable;
@property (nonatomic, readonly) bool isInterfaceUsable;
@property (nonatomic, readonly) bool isInternetReachable;
@property (nonatomic, readonly) bool isLTEWithCDRX;
@property (nonatomic, readonly) bool isNetworkingPowerExpensiveToUse;
@property (nonatomic, readonly) bool isPoorLinkQuality;
@property (nonatomic, readonly) bool isRadioHot;
@property (nonatomic, readonly) int linkQuality;
@property (nonatomic, readonly, retain) NSString *linkQualityString;
@property (nonatomic, readonly) NSString *networkCode;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct __CFString { }*wwanInterfaceName;

+ (bool)isBadLinkQuality:(int)arg1;
+ (bool)isPoorLinkQuality:(int)arg1;
+ (id)stringForLinkQuality:(int)arg1;

- (void).cxx_destruct;
- (void)_callDelegateOnIvarQueueWithBlock:(id /* block */)arg1;
- (void)_createLinkQualityMonitor;
- (void)_createLinkQualityMonitorOnIvarQueue;
- (void)_createReachabilityMonitor;
- (void)_createReachabilityMonitorOnIvarQueue;
- (void)_dynamicStoreCallback:(id)arg1;
- (void)_dynamicStoreCallbackOnIvarQueue:(id)arg1;
- (void)_flushStaleTransitionsOnIvarQueue;
- (bool)_isInterfaceHistoricallyUsableOnIvarQueue;
- (bool)_isInterfaceUsableOnIvarQueue;
- (void)_processLinkQualityUpdateOnIvarQueueWithUpdatedLinkQuality:(int)arg1;
- (void)_reachabilityCallback:(unsigned int)arg1;
- (void)_reachabilityCallbackOnIvarQueue:(unsigned int)arg1;
- (void)_unscheduleLinkQualityMonitorOnIvarQueue;
- (void)_unscheduleReachabilityMonitorOnIvarQueue;
- (void)_updateOffTransitionsForLinkQualityChangeOnIvarQueue;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithInterfaceName:(id)arg1 interfaceIdentifier:(long long)arg2 delegateQueue:(id)arg3;
- (long long)interfaceIdentifier;
- (bool)isBadLinkQuality;
- (bool)isInterfaceHistoricallyUsable;
- (bool)isInterfaceUsable;
- (bool)isInternetReachable;
- (bool)isNetworkingPowerExpensiveToUse;
- (bool)isPoorLinkQuality;
- (bool)isRadioHot;
- (int)linkQuality;
- (id)linkQualityString;
- (void)setDelegate:(id)arg1;
- (void)setThresholdOffTransitionCount:(unsigned long long)arg1;
- (void)setTrackUsability:(bool)arg1;
- (void)setTrackedTimeInterval:(double)arg1;

@end
