/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKAppLibraryCore : NSObject {
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _queue;
    PSSSSubscriptionManagerInternal * _subscriptionManager;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_connection;
- (void)_fetchApplicationsInProcess:(id /* block */)arg1;
- (void)fetchApplications:(id /* block */)arg1;
- (id)init;

@end
