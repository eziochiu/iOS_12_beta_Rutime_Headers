/* made by EzioChiu
   Image: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

@interface EAWiFiUnconfiguredAccessoryBrowser : NSObject {
    bool  __debugLog;
    NSPredicate * _accessorySearchPredicate;
    <EAWiFiUnconfiguredAccessoryBrowserDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSSet * _unconfiguredAccessories;
}

@property (retain) NSPredicate *accessorySearchPredicate;
@property (nonatomic) <EAWiFiUnconfiguredAccessoryBrowserDelegate> *delegate;
@property (retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSSet *unconfiguredAccessories;

- (void).cxx_destruct;
- (void)_handleBrowserDidUpdateState:(id)arg1;
- (void)_handleBrowserFinishedConfiguring:(id)arg1;
- (void)_handleNewAccessoriesNotification:(id)arg1;
- (void)_handlePurgeAccessoriesSetNotification:(id)arg1;
- (void)_handleRemovedAccessoriesNotification:(id)arg1;
- (id)accessorySearchPredicate;
- (void)configureAccessory:(id)arg1 withConfigurationUIOnViewController:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (id)init;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)setAccessorySearchPredicate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)startSearchingForUnconfiguredAccessoriesMatchingPredicate:(id)arg1;
- (void)stopSearchingForUnconfiguredAccessories;
- (id)unconfiguredAccessories;

@end
