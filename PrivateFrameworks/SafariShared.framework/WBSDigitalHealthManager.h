/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSDigitalHealthManager : NSObject {
    <WBSDigitalHealthManagerDelegate> * _delegate;
    DMFWebsitePolicyMonitor * _monitor;
    NSMutableDictionary * _trackedUrlsToUsageState;
}

@property (nonatomic) <WBSDigitalHealthManagerDelegate> *delegate;
@property (getter=isDeviceManagementEnabled, readonly) bool deviceManagementEnabled;

+ (void)_updateWebpageUsage:(id)arg1 withDigitalHealthManagerUsageState:(unsigned long long)arg2;
+ (void)deleteAllUsageHistory;
+ (void)deleteUsageHistoryForURL:(id)arg1;
+ (void)deleteUsageHistoryFromDate:(id)arg1 toDate:(id)arg2;

- (void).cxx_destruct;
- (void)_historyItemsWereRemoved:(id)arg1;
- (void)_historyWasCleared:(id)arg1;
- (void)_requestPoliciesForWebsites:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dealloc;
- (id)delegate;
- (void)getOverlayStateForURLs:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)init;
- (bool)isDeviceManagementEnabled;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setDelegate:(id)arg1;
- (void)startObserving;
- (void)stopObserving;
- (void)stopUsageTrackingForURL:(id)arg1;
- (void)updateUsageTrackingForURL:(id)arg1 toState:(unsigned long long)arg2;

@end
