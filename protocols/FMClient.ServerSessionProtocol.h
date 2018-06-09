/* made by EzioChiu.
 */

@protocol FMClient.ServerSessionProtocol

@required

- (void)clientConfigurationWithUpdateConfiguration:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: _TtC8FMClient19ClientConfiguration *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _TtC8FMClient19ClientConfiguration *, NSError *, void*
- (void)deviceSearch:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: _TtC8FMClient12SearchFilter *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _TtC8FMClient12SearchResult *, NSError *, void*
- (void)discoverNearbyDevicesWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSError *, void*
- (void)invalidateCacheWithType:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)playSound:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)voiceAssistantSyncWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _TtC8FMClient24VoiceAssistantSyncResult *, NSError *, void*

@end
