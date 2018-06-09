/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

@interface SiriCoreNetworkActivity : NSObject {
    NSObject<OS_nw_activity> * _activity;
    NSMutableSet * _connections;
    long long  _parentLabel;
    long long  _state;
}

- (void).cxx_destruct;
- (void)_networkActivityAbort;
- (void)_networkActivityRestart;
- (void)_networkActivityState:(long long)arg1;
- (void)activate;
- (void)addConnection:(id)arg1;
- (id)initWithLabel:(long long)arg1 parent:(id)arg2;
- (id)nwActivity;
- (long long)parentLabel;
- (void)removeConnection:(id)arg1;
- (void)stop;

@end
