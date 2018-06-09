/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
 */

@interface VTUIAudioHintPlayer : NSObject {
    NSString * _language;
    bool  _shouldSpeakAudioHint;
    VTUISpeechSynthesizer * _synth;
    NSTimer * _timer;
    NSArray * _trainingPageAudioHintFiles;
    NSArray * _trainingPageAudioHintInstructions;
}

@property (nonatomic) bool shouldSpeakAudioHint;
@property (nonatomic, retain) VTUISpeechSynthesizer *synth;
@property (nonatomic, retain) NSArray *trainingPageAudioHintFiles;
@property (nonatomic, retain) NSArray *trainingPageAudioHintInstructions;

- (void).cxx_destruct;
- (bool)_hasValidHints;
- (void)_setupHints;
- (bool)_systemLanguageMatchesSiriLanguage:(id)arg1 siriLanguage:(id)arg2;
- (void)_timerFired;
- (void)cleanup;
- (id)initWithLanguage:(id)arg1;
- (void)setShouldSpeakAudioHint:(bool)arg1;
- (void)setSynth:(id)arg1;
- (void)setTrainingPageAudioHintFiles:(id)arg1;
- (void)setTrainingPageAudioHintInstructions:(id)arg1;
- (bool)shouldSpeakAudioHint;
- (void)speakAudioHint:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)speakConfirmationDialog:(id /* block */)arg1;
- (id)synth;
- (id)trainingPageAudioHintFiles;
- (id)trainingPageAudioHintInstructions;

@end
