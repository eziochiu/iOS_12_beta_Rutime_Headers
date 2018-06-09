/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKPrewarming : NSObject {
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _workQueue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_connection;
- (id)_init;
- (id)init;
- (void)prewarm;

@end
