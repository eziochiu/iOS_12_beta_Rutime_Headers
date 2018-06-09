/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

@interface CNAutocompleteAggdUsageMonitorProbe : NSObject <CNAutocompleteUsageMonitorProbe> {
    CNAutocompleteAggdProbe * _aggdProbe;
    NSNumber * _lengthOfSearchString;
    NSNumber * _returnedDuetResults;
    NSNumber * _selectedIndex;
    NSNumber * _selectedPredictionIndex;
    NSNumber * _sourceType;
}

@property (nonatomic, retain) CNAutocompleteAggdProbe *aggdProbe;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSNumber *lengthOfSearchString;
@property (nonatomic, retain) NSNumber *returnedDuetResults;
@property (nonatomic, retain) NSNumber *selectedIndex;
@property (nonatomic, retain) NSNumber *selectedPredictionIndex;
@property (nonatomic, retain) NSNumber *sourceType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)aggdProbe;
- (id)init;
- (id)initWithAggdProbe:(id)arg1;
- (id)lengthOfSearchString;
- (void)recordDuetReturnedResults:(bool)arg1;
- (void)recordUserIgnoredPredictionAfterDelay:(double)arg1;
- (void)recordUserIgnoredPrefixedResultAfterDelay:(double)arg1 batch:(unsigned long long)arg2;
- (void)recordUserSawCuratedResults:(unsigned long long)arg1;
- (void)recordUserSawPredictions;
- (void)recordUserSawResultsConsideredSuggestion:(unsigned long long)arg1;
- (void)recordUserSelectedIndex:(unsigned long long)arg1;
- (void)recordUserSelectedPredictionAtIndex:(unsigned long long)arg1;
- (void)recordUserSelectedResultWithSourceType:(unsigned long long)arg1;
- (void)recordUserTypedInNumberOfCharacters:(unsigned long long)arg1;
- (id)returnedDuetResults;
- (id)selectedIndex;
- (id)selectedPredictionIndex;
- (void)sendData;
- (void)setAggdProbe:(id)arg1;
- (void)setLengthOfSearchString:(id)arg1;
- (void)setReturnedDuetResults:(id)arg1;
- (void)setSelectedIndex:(id)arg1;
- (void)setSelectedPredictionIndex:(id)arg1;
- (void)setSourceType:(id)arg1;
- (id)sourceKeysForSourceType:(unsigned long long)arg1;
- (id)sourceType;

@end
