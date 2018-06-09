/* made by EzioChiu
   Image: /System/Library/Frameworks/Network.framework/Network
 */

@interface NWRemoteConnectionActor : NSObject {
    NSMutableDictionary * _browsers;
    NSMutableDictionary * _connections;
    NSObject<NWRemoteConnectionActorDelegate> * _delegate;
}

@property (retain) NSMutableDictionary *browsers;
@property (retain) NSMutableDictionary *connections;
@property NSObject<NWRemoteConnectionActorDelegate> *delegate;

- (void).cxx_destruct;
- (id)browsers;
- (id)connections;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (bool)receiveRemoteCommand:(id)arg1;
- (void)scheduleReadsOnConnection:(id)arg1;
- (void)sendData:(id)arg1 forConnection:(id)arg2;
- (void)setBrowsers:(id)arg1;
- (void)setConnections:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)updateEndpointsForBrowser:(id)arg1;
- (void)updatePathForConnection:(id)arg1;

@end
