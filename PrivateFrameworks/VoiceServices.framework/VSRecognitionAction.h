/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSRecognitionAction : NSObject {
    NSString * _resultString;
    VSRecognitionSession * _session;
    /* Warning: unhandled union encoding: '(?="stringValue"@"NSString""attributedStringValue"@"NSAttributedString")' */ union { 
        NSString *stringValue; 
        id attributedStringValue; 
    }  _spokenString;
    unsigned int  _spokenStringIsAttributed;
    NSString * _statusString;
}

- (void)_continueAfterDeferredStart;
- (bool)_hasDeferredStartCallback;
- (id)_session;
- (void)_setSession:(id)arg1;
- (id)cancel;
- (void)completeWithNextAction:(id)arg1 error:(id)arg2;
- (int)completionType;
- (void)dealloc;
- (id)perform;
- (id)resultDisplayString;
- (bool)sensitiveActionsEnabled;
- (void)setResultDisplayString:(id)arg1;
- (void)setSpokenFeedbackAttributedString:(id)arg1;
- (void)setSpokenFeedbackString:(id)arg1;
- (void)setStatusDisplayString:(id)arg1;
- (id)spokenFeedbackAttributedString;
- (id)spokenFeedbackString;
- (id)statusDisplayString;

@end
