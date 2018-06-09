/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAccessoryBrowserInjectedSettingsDevice : NSObject <HMDAccessoryBrowserInjectedSettings> {
    NSObject<OS_dispatch_queue> * queue;
}

- (void).cxx_destruct;
- (id)createAuthServerWithDelegate:(id)arg1;
- (id)createBtleAccessoryBrowser;
- (id)createIpAccessoryBrowser;
- (id)createRelayAccessoryBrowser;
- (id)init;
- (id)workQueue;

@end
