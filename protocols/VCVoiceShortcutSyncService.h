/* made by EzioChiu.
 */

@protocol VCVoiceShortcutSyncService <NSObject>

@required

- (bool)hasBeenStarted;
- (void)requestFullResync;
- (void)requestSync;
- (bool)startSyncService:(id*)arg1;
- (NSString *)syncServiceIdentifier;
- (void)voiceShortcutsDidChange;

@end
