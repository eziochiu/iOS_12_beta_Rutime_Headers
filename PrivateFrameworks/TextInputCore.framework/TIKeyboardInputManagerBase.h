/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIKeyboardInputManagerBase : NSObject {
    bool  _hasHandledInput;
    TIInputMode * _inputMode;
    TIKeyboardSecureCandidateRenderer * _secureCandidateRenderer;
}

@property (nonatomic, readonly) NSString *currentInputModeIdentifier;
@property (nonatomic, readonly) bool hasHandledInput;
@property (nonatomic, readonly) TIInputMode *inputMode;
@property (nonatomic, retain) TIKeyboardSecureCandidateRenderer *secureCandidateRenderer;

- (void).cxx_destruct;
- (void)addSynthesizedTouchToInput:(id)arg1;
- (void)adjustPhraseBoundaryInForwardDirection:(bool)arg1;
- (void)adjustPhraseBoundaryInForwardDirection:(bool)arg1 granularity:(int)arg2;
- (void)candidateRejected:(id)arg1;
- (void)clearHumanReadableTrace;
- (id)configurationPropertyList;
- (id)currentInputModeIdentifier;
- (long long)deletionCountForString:(id)arg1;
- (void)generateAutocorrectionsWithKeyboardState:(id)arg1 candidateRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 candidateHandler:(id)arg3;
- (void)generateCandidatesWithKeyboardState:(id)arg1 candidateRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 completionHandler:(id /* block */)arg3;
- (id)generateRefinementsForCandidate:(id)arg1;
- (id)generateReplacementsForString:(id)arg1 keyLayout:(id)arg2;
- (id)handleAcceptedCandidate:(id)arg1 keyboardState:(id)arg2;
- (id)handleKeyboardInput:(id)arg1;
- (bool)hasHandledInput;
- (id)humanReadableTrace;
- (id)init;
- (id)initWithInputMode:(id)arg1;
- (id)inputMode;
- (bool)isHardwareKeyboardAutocorrectionEnabled;
- (id)keyboardConfiguration;
- (void)lastAcceptedCandidateCorrected;
- (long long)performHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2;
- (id)resourceInputModes;
- (void)resume;
- (id)secureCandidateRenderer;
- (void)setOriginalInput:(id)arg1;
- (void)setSecureCandidateRenderer:(id)arg1;
- (void)skipHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2;
- (void)storeLanguageModelDynamicDataIncludingCache;
- (void)suspend;
- (void)syncToKeyboardState:(id)arg1;
- (void)textAccepted:(id)arg1 fromPredictiveInputBar:(bool)arg2;

@end
