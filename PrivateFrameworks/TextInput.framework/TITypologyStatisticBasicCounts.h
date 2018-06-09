/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TITypologyStatisticBasicCounts : TITypologyStatisticCurrentAutocorrections {
    long long  _autocorrectionCount;
    long long  _backspaceCount;
    long long  _backspaceIntoAutocorrectionCount;
    bool  _backspacedIntoAutocorrection;
    long long  _characterCount;
    long long  _falseBackspaceCount;
    long long  _falseBackspaceIntoAutocorrectionCount;
    long long  _predictedCharacterCount;
    long long  _predictiveSelectionCount;
    NSMutableArray * _recentAutocorrectionLocations;
    NSMutableString * _recentText;
    NSMutableString * _recentTextAfterBackspace;
    NSMutableString * _recentTextBeforeBackspace;
    long long  _rejectedCandidateCount;
    long long  _touchCount;
}

@property (nonatomic, readonly) long long autocorrectionCount;
@property (nonatomic, readonly) long long backspaceCount;
@property (nonatomic, readonly) long long backspaceIntoAutocorrectionCount;
@property (nonatomic) bool backspacedIntoAutocorrection;
@property (nonatomic, readonly) long long characterCount;
@property (nonatomic, readonly) long long falseBackspaceCount;
@property (nonatomic, readonly) long long falseBackspaceIntoAutocorrectionCount;
@property (nonatomic, readonly) long long predictedCharacterCount;
@property (nonatomic, readonly) long long predictiveSelectionCount;
@property (nonatomic, readonly) NSMutableArray *recentAutocorrectionLocations;
@property (nonatomic, readonly) NSMutableString *recentText;
@property (nonatomic, readonly) NSMutableString *recentTextAfterBackspace;
@property (nonatomic, readonly) NSMutableString *recentTextBeforeBackspace;
@property (nonatomic, readonly) long long rejectedCandidateCount;
@property (nonatomic, readonly) long long touchCount;

- (void).cxx_destruct;
- (id)aggregateReport;
- (long long)autocorrectionCount;
- (long long)backspaceCount;
- (long long)backspaceIntoAutocorrectionCount;
- (bool)backspacedIntoAutocorrection;
- (long long)characterCount;
- (long long)falseBackspaceCount;
- (long long)falseBackspaceIntoAutocorrectionCount;
- (void)handleTouch:(id)arg1;
- (id)init;
- (long long)predictedCharacterCount;
- (long long)predictiveSelectionCount;
- (id)recentAutocorrectionLocations;
- (id)recentText;
- (id)recentTextAfterBackspace;
- (id)recentTextBeforeBackspace;
- (long long)rejectedCandidateCount;
- (void)setBackspacedIntoAutocorrection:(bool)arg1;
- (id)structuredReport;
- (long long)touchCount;
- (void)updateTextWithAcceptedCandidate:(id)arg1;
- (void)visitRecordCandidateRejected:(id)arg1;
- (void)visitRecordHitTest:(id)arg1;
- (void)visitRecordKeyboardInput:(id)arg1;
- (void)visitRecordSkipHitTest:(id)arg1;
- (void)visitRecordSync:(id)arg1;
- (void)visitRecordTextAccepted:(id)arg1;

@end