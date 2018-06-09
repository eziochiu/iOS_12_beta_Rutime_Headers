/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIDictationConnection : NSObject <AFDictationDelegate> {
    NSObject<OS_dispatch_queue> * _analyticsQueue;
    AFDictationConnection * _connection;
    <UIDictationConnectionDelegate> * _delegate;
    bool  _offlineOnly;
    <UIDictationConnectionTokenFilterProtocol> * _tokenFilter;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *analyticsQueue;
@property (nonatomic, retain) AFDictationConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIDictationConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool offlineOnly;
@property (readonly) Class superclass;
@property (nonatomic) <UIDictationConnectionTokenFilterProtocol> *tokenFilter;

+ (void)_updateFromGlobalOptions:(id)arg1;
+ (void)afDelegate:(id)arg1 didReceiveSearchResults:(id)arg2 recognizedText:(id)arg3 stable:(bool)arg4 final:(bool)arg5;
+ (id)analytics;
+ (void)cacheSupportedDictationLanguages;
+ (bool)dictationIsSupportedForLanguageCode:(id)arg1 error:(id*)arg2;
+ (bool)dictationRestricted;
+ (id)interpretationFromSpeechTokens:(id)arg1 startIndex:(unsigned long long)arg2 filterBlock:(id /* block */)arg3;
+ (bool)isDictationAvailable;

- (void).cxx_destruct;
- (id)_createConnectionOptions;
- (id)_dictationOptions:(id)arg1;
- (id)_initializeWithOptions:(id)arg1;
- (id)_speechOptions:(id)arg1;
- (void)_startWithOptions:(id)arg1;
- (id)analyticsQueue;
- (float)averagePower;
- (void)beginAvailabilityMonitoring;
- (void)cancelAvailabilityMonitoring;
- (void)cancelSpeech;
- (id)connection;
- (id)delegate;
- (void)dictationConnection:(id)arg1 didReceiveSearchResults:(id)arg2 recognizedText:(id)arg3 stable:(bool)arg4 final:(bool)arg5;
- (void)dictationConnection:(id)arg1 didRecognizePhrases:(id)arg2 languageModel:(id)arg3 correctionIdentifier:(id)arg4;
- (void)dictationConnection:(id)arg1 didRecognizeTokens:(id)arg2 languageModel:(id)arg3;
- (void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2;
- (void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2;
- (void)dictationConnectionSpeechRecognitionDidSucceed:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidBegin:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidCancel:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidEnd:(id)arg1;
- (void)dictationConnectionSpeechRecordingWillBegin:(id)arg1;
- (void)dictationConnnectionDidChangeAvailability:(id)arg1;
- (bool)dictationIsAvailableForLanguage:(id)arg1;
- (void)endSession;
- (void)logDidAcceptDictationResult:(id)arg1 reason:(id)arg2 result:(id)arg3 correctionIdentifier:(id)arg4;
- (void)logDidSelectAlternative:(id)arg1 correctionIdentifier:(id)arg2;
- (void)logDidShowAlternatives:(id)arg1 correctionIdentifier:(id)arg2;
- (bool)offlineOnly;
- (void)preheat;
- (void)restartDictation;
- (void)sendSpeechCorrection:(id)arg1 forIdentifier:(id)arg2;
- (void)setAnalyticsQueue:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setOfflineOnly:(bool)arg1;
- (void)setTokenFilter:(id)arg1;
- (void)start;
- (void)startForFileAtURL:(id)arg1 forLanguage:(id)arg2;
- (void)stopSpeech:(id)arg1 result:(id)arg2 suppressAlert:(bool)arg3;
- (id)tokenFilter;

@end
