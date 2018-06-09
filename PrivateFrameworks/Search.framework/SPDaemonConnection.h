/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@interface SPDaemonConnection : NSObject {
    SPXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    NSString * _daemonName;
    NSObject<OS_dispatch_queue> * _queue;
    struct __CFDictionary { } * _runningQueries;
}

@property (nonatomic, retain) NSString *daemonName;
@property (nonatomic) struct __CFDictionary { }*runningQueries;

+ (id)sharedBackgroundConnection;
+ (id)sharedConnection;

- (void).cxx_destruct;
- (id)_connection;
- (void)_resetConnection;
- (void)_sendFeedbackMessage:(id)arg1 object:(id)arg2 info:(id)arg3 reply:(id /* block */)arg4;
- (void)_sendMessage:(id)arg1 object:(id)arg2 info:(id)arg3 reply:(id /* block */)arg4;
- (void)activate;
- (void)activate:(id /* block */)arg1;
- (void)cancelQuery:(id)arg1;
- (id)daemonName;
- (void)deactivate;
- (void)dealloc;
- (id)init;
- (id)initWithDaemonName:(id)arg1;
- (void)preheat;
- (void)requestParsecParametersWithReply:(id /* block */)arg1;
- (void)retrieveFirstTimeExperienceTextWithReply:(id /* block */)arg1;
- (struct __CFDictionary { }*)runningQueries;
- (void)sendApps:(id)arg1;
- (void)sendMessageForToken:(id)arg1 withResponse:(id)arg2 isStable:(bool)arg3;
- (void)sendSFFeedback:(id)arg1 type:(long long)arg2 queryId:(unsigned long long)arg3;
- (void)setDaemonName:(id)arg1;
- (void)setRunningQueries:(struct __CFDictionary { }*)arg1;
- (id)startQuery:(id)arg1 withResponse:(id)arg2 isStable:(bool)arg3 queue:(id)arg4 delegate:(id)arg5;

@end
