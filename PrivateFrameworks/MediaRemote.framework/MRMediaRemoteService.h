/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRMediaRemoteService : NSObject {
    NSObject<OS_dispatch_queue> * _agentQueue;
    NSObject<OS_dispatch_queue> * _browsableContentQueue;
    NSObject<OS_dispatch_queue> * _clientCallbackPriorityQueue;
    NSObject<OS_dispatch_queue> * _clientCallbackQueue;
    NSObject<OS_xpc_object> * _connection;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    bool  _isRunning;
    MRXPCConnection * _mrXPCConnection;
    NSObject<OS_dispatch_queue> * _televisionQueue;
    NSObject<OS_dispatch_queue> * _voiceInputQueue;
    const struct { void *x1; int (*x2)(); } * agentEndpoint;
    const struct { void *x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); } * browsableContentEndpoint;
    const struct { int (*x1)(); int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); void *x10; } * clientModule;
    const struct { void *x1; id /* block */ x2; } * televisionEndpoint;
    const struct { void *x1; int (*x2)(); int (*x3)(); int (*x4)(); } * voiceRecordingEndpoint;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *agentQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *browsableContentQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientCallbackPriorityQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientCallbackQueue;
@property (nonatomic, retain) NSObject<OS_xpc_object> *connection;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *connectionQueue;
@property (nonatomic) bool isRunning;
@property (nonatomic, retain) MRXPCConnection *mrXPCConnection;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *televisionQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *voiceInputQueue;

- (void).cxx_destruct;
- (id)agentQueue;
- (id)browsableContentQueue;
- (id)clientCallbackPriorityQueue;
- (id)clientCallbackQueue;
- (id)connection;
- (id)connectionQueue;
- (bool)isRunning;
- (id)mrXPCConnection;
- (void)setAgentQueue:(id)arg1;
- (void)setBrowsableContentQueue:(id)arg1;
- (void)setClientCallbackPriorityQueue:(id)arg1;
- (void)setClientCallbackQueue:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setConnectionQueue:(id)arg1;
- (void)setIsRunning:(bool)arg1;
- (void)setMrXPCConnection:(id)arg1;
- (void)setTelevisionQueue:(id)arg1;
- (void)setVoiceInputQueue:(id)arg1;
- (id)televisionQueue;
- (id)voiceInputQueue;

@end
