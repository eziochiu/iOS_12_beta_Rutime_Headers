/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WirelessCoexManager.framework/WirelessCoexManager
 */

@interface WCMClientProxy : NSObject {
    NSObject<OS_xpc_object> * mConnection;
    <WCMClientCallback> * mDelegate;
    bool  mIsRegistered;
    int  mProcessId;
    NSObject<OS_dispatch_queue> * mQueue;
}

- (bool)connectToServer;
- (void)dealloc;
- (id)init;
- (id)initWithClientProcessId:(int)arg1 delegate:(id)arg2 dispatch:(id)arg3;
- (void)reConnect;
- (void)registerToServer;
- (void)sendMessage:(int)arg1 argument:(id)arg2;

@end
