/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

@interface CNAutocompleteAggdPerformanceProbe : NSObject <CNAutocompletePerformanceProbe> {
    CNAutocompleteAggdProbe * _aggdProbe;
    NSMutableDictionary * _pendingAddData;
}

@property (nonatomic, retain) CNAutocompleteAggdProbe *aggdProbe;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *pendingAddData;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)aggdProbe;
- (id)init;
- (id)initWithAggdProbe:(id)arg1;
- (id)pendingAddData;
- (void)recordLatency:(double)arg1 forResultCount:(unsigned long long)arg2 forSource:(id)arg3;
- (void)recordNumberOfCalendarServerResults:(unsigned long long)arg1 inTimeInterval:(double)arg2;
- (void)recordNumberOfContactResults:(unsigned long long)arg1 inTimeInterval:(double)arg2;
- (void)recordNumberOfDirectoryServerResults:(unsigned long long)arg1 inTimeInterval:(double)arg2;
- (void)recordNumberOfPredictionResults:(unsigned long long)arg1 inTimeInterval:(double)arg2;
- (void)recordNumberOfRecentResults:(unsigned long long)arg1 inTimeInterval:(double)arg2;
- (void)recordNumberOfResultsReturned:(unsigned long long)arg1 inTimeInterval:(double)arg2 forBatch:(unsigned long long)arg3 includesServers:(bool)arg4;
- (void)recordNumberOfSuggestionResults:(unsigned long long)arg1 inTimeInterval:(double)arg2;
- (void)recordNumberOfSupplementalResults:(unsigned long long)arg1 inTimeInterval:(double)arg2;
- (void)sendData;
- (void)setAggdProbe:(id)arg1;

@end
