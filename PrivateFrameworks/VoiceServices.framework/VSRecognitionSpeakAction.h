/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSRecognitionSpeakAction : VSRecognitionAction {
    bool  _shouldTerminate;
}

- (int)completionType;
- (id)initWithSpokenFeedbackString:(id)arg1 willTerminate:(bool)arg2;
- (id)perform;

@end
