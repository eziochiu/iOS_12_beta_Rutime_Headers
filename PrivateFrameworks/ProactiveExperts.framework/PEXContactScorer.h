/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
 */

@interface PEXContactScorer : NSObject {
    PEXAutocompleteDelegate * _autocompleteDelegate;
    PEXDiscoverySuggester * _discoverySuggester;
    NSObject<OS_dispatch_queue> * _memoryPressureQueue;
    NSObject<OS_dispatch_source> * _memoryPressureSource;
    unsigned long long  _memoryPressureStatus;
    PEXPeopleSuggester * _peopleSuggester;
}

+ (id)createNewSharedScorer;
+ (id)sharedInstance;
+ (void)unsetSharedScorer;

- (void).cxx_destruct;
- (id)_contactsFromSuggester:(id)arg1 matchingPrefix:(id)arg2;
- (void)_setupMemoryPressureNotification;
- (id)bestContactsWithLimit:(unsigned long long)arg1;
- (id)contactsForDetailString:(id)arg1;
- (id)contactsForNamePrefix:(id)arg1 recipients:(id)arg2;
- (void)dealloc;
- (void)discoveredEvents:(id)arg1 store:(id)arg2;
- (void)discoveredRecipients:(id)arg1;
- (id)init;
- (double)scoreForContact:(id)arg1 namePrefix:(id)arg2 recipients:(id)arg3;
- (double)scoreForContactIdentifier:(id)arg1 namePrefix:(id)arg2 recipients:(id)arg3;
- (double)scoreForFoundOnDeviceContact:(id)arg1 namePrefix:(id)arg2 recipients:(id)arg3;
- (double)scoreFromRankPercentage:(double)arg1 acBoost:(double)arg2;
- (double)scoreMergedNameItem:(id)arg1;
- (double)scoreNamedEntityItem:(id)arg1 dupCount:(unsigned long long)arg2;
- (void)waitForDiscoveriesToProcess;
- (void)waitForScoringData;

@end
