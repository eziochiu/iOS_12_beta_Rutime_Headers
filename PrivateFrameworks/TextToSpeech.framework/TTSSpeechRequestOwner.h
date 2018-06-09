/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
 */

@interface TTSSpeechRequestOwner : NSObject <TTSSpeechRequestDelegate> {
    <TTSSpeechConnectionDelegate> * _delegate;
    TTSSpeechRequest * _request;
    <TTSSpeechService> * _speechService;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TTSSpeechConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) TTSSpeechRequest *request;
@property (nonatomic) <TTSSpeechService> *speechService;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setRequest:(id)arg1;
- (id)availableVoicesForLanguageCode:(id)arg1;
- (void)continueCurrentSpeechRequest;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithSpeechService:(id)arg1;
- (bool)isSystemSpeaking;
- (bool)isSystemSpeakingOnBehalfOfCurrentConnection;
- (void)pauseCurrentSpeechRequestAtMark:(long long)arg1 waitUntilPaused:(bool)arg2;
- (id)request;
- (void)setDelegate:(id)arg1;
- (void)setSpeechService:(id)arg1;
- (oneway void)speechRequest:(id)arg1 didStopWithSuccess:(bool)arg2 phonemesSpoken:(id)arg3 forService:(id)arg4 error:(id)arg5;
- (oneway void)speechRequest:(id)arg1 withMark:(long long)arg2 didStartForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 forService:(id)arg4;
- (oneway void)speechRequestDidContinue:(id)arg1 forService:(id)arg2;
- (oneway void)speechRequestDidPause:(id)arg1 forService:(id)arg2;
- (oneway void)speechRequestDidStart:(id)arg1 forService:(id)arg2;
- (id)speechService;
- (void)startSpeechRequest:(id)arg1;
- (void)stopCurrentSpeechRequestAtMark:(long long)arg1 waitUntilStopped:(bool)arg2;

@end
