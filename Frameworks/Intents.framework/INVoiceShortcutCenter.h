/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INVoiceShortcutCenter : NSObject {
    VCVoiceShortcutClient * _voiceShortcutClient;
}

@property (setter=_setVoiceShortcutClient:, nonatomic, retain) VCVoiceShortcutClient *voiceShortcutClient;

+ (void)initialize;
+ (id)sharedCenter;

- (void).cxx_destruct;
- (id)_initWithVoiceShortcutClient:(id)arg1;
- (void)_setVoiceShortcutClient:(id)arg1;
- (void)getAllVoiceShortcutsWithCompletion:(id /* block */)arg1;
- (void)getVoiceShortcutWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)setShortcutSuggestions:(id)arg1;
- (id)voiceShortcutClient;

@end
