/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TITypologyStatisticRankCandidatesAccepted : TITypologyStatisticCurrentAutocorrections {
    NSMutableDictionary * _histogram;
    long long  _lengthOfSelectedCandidates;
    long long  _lengthOfSelectedPredictions;
}

@property (nonatomic, readonly) NSDictionary *histogram;
@property (nonatomic, readonly) long long lengthOfSelectedCandidates;
@property (nonatomic, readonly) long long lengthOfSelectedPredictions;

- (void).cxx_destruct;
- (void)addLengthOfSelectedCandidate:(id)arg1;
- (void)addLengthOfSelectedPrediction:(id)arg1;
- (void)countSelectedAutocorrection:(id)arg1;
- (void)countSelectedCandidate:(id)arg1 withRank:(unsigned long long)arg2;
- (void)countSelectedInputString;
- (void)countSelectedInputStringToRejectAutocorrection;
- (void)countSelectedPrediction:(id)arg1 withRank:(unsigned long long)arg2;
- (id)histogram;
- (id)init;
- (bool)isCandidatePrediction:(id)arg1;
- (long long)lengthOfSelectedCandidates;
- (long long)lengthOfSelectedPredictions;
- (void)rankAndCountSelectedCandidate:(id)arg1;
- (unsigned long long)rankOfCandidate:(id)arg1;
- (id)structuredReport;
- (void)visitRecordKeyboardInput:(id)arg1;

@end
