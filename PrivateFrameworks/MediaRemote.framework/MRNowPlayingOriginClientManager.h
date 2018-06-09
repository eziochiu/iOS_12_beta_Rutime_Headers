/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRNowPlayingOriginClientManager : NSObject <MRNowPlayingClientState> {
    NSMutableDictionary * _originClientRequests;
    NSMutableDictionary * _originClients;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)clientForPlayerPath:(id)arg1;
- (id)clientRequestsForPlayerPath:(id)arg1;
- (id)debugDescription;
- (id)existingClientForPlayerPath:(id)arg1;
- (id)existingClientRequestsForPlayerPath:(id)arg1;
- (id)existingOriginClientForPlayerPath:(id)arg1;
- (id)existingOriginClientRequestsForPlayerPath:(id)arg1;
- (id)existingPlayerClientRequestsForPlayerPath:(id)arg1;
- (id)init;
- (id)localOriginClient;
- (id)originClientForOrigin:(id)arg1;
- (id)originClientForPlayerPath:(id)arg1;
- (id)originClientRequestsForPlayerPath:(id)arg1;
- (id)playerClientForPlayerPath:(id)arg1;
- (id)playerClientRequestsForPlayerPath:(id)arg1;
- (void)removeClient:(id)arg1;
- (void)removeOrigin:(id)arg1;
- (void)removeOriginRequests:(id)arg1;
- (void)removePlayer:(id)arg1;
- (void)restoreNowPlayingClientState;

@end
