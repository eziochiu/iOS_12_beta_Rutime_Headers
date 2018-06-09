/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface RERemoteTrainingServer : NSObject <RERemoteTrainingServerInterface> {
    NSXPCConnection * _connection;
    NSString * _processName;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_clearConnection;
- (void)_queue_setupConnectionIfNeeded;
- (id)initWithQueue:(id)arg1 targetProcessName:(id)arg2;
- (void)performTrainingWithElements:(id)arg1 events:(id)arg2 interactions:(id)arg3 completion:(id /* block */)arg4;
- (void)updateRemoteAttribute:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;

@end
