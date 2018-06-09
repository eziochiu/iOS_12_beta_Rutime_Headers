/* made by EzioChiu.
 */

@protocol MNAudioSession <NSObject>

@required

- (void)beginSession;
- (void)clearAllAnnouncements;
- (id)delegate;
- (void)endSession;
- (void)prepareToAnnounce;
- (void)setDelegate:(id)arg1;
- (void)setVoiceGuidanceLevel:(unsigned long long)arg1;
- (void)speak:(void *)arg1 shortPromptType:(void *)arg2 ignorePromptStyle:(void *)arg3 completionBlock:(void *)arg4; // needs 4 arg types, found 9: NSString *, unsigned long long, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)speak:(void *)arg1 shortPromptType:(void *)arg2 ignorePromptStyle:(void *)arg3 minimumRequiredLevel:(void *)arg4 completionBlock:(void *)arg5; // needs 5 arg types, found 10: NSString *, unsigned long long, bool, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)stop;
- (bool)vibrateForPrompt:(unsigned long long)arg1;
- (unsigned long long)voiceGuidanceLevel;

@end
