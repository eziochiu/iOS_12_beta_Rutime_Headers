/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
 */

@interface SPUIResultViewController : SearchUIResultViewController <SPSearchAgentDelegate, SPUIResultsViewTestingDelegate> {
    bool  _hasResultsWaitingToUpdate;
    NSArray * _resultSections;
    SFResultSection * _searchThroughSection;
    unsigned long long  _startTime;
    SFResultSection * _suggestionsSection;
    id /* block */  didFinishGettingAllResultsHandler;
}

@property (readonly) SFSearchResult *actualSearchSuggestionResult;
@property (nonatomic) <SPUIResultViewDelegate> *delegate;
@property (nonatomic, copy) id /* block */ didFinishGettingAllResultsHandler;
@property bool hasResultsWaitingToUpdate;
@property (retain) NSArray *resultSections;
@property (retain) SFResultSection *searchThroughSection;
@property (retain) SFResultSection *suggestionsSection;

+ (unsigned long long)defaultStyle;

- (void).cxx_destruct;
- (bool)_hasRealSuggestions;
- (void)_pushSectionsUpdate;
- (void)_truncateResultsSectionToFit;
- (void)_updateCombinedSections;
- (id)actualSearchSuggestionResult;
- (void)clearSuggestionSection;
- (id /* block */)didFinishGettingAllResultsHandler;
- (bool)hasResultsWaitingToUpdate;
- (id)initWithSearchModel:(id)arg1;
- (bool)isResultOriginalSearchSuggestion:(id)arg1;
- (id)resultSections;
- (void)searchAgentClearedResults:(id)arg1;
- (void)searchAgentUpdatedResults:(id)arg1;
- (void)searchStringUpdated:(id)arg1 wantsCompletions:(bool)arg2;
- (id)searchThroughSection;
- (void)setDidFinishGettingAllResultsHandler:(id /* block */)arg1;
- (void)setHasResultsWaitingToUpdate:(bool)arg1;
- (void)setResultSections:(id)arg1;
- (void)setSearchThroughSection:(id)arg1;
- (void)setSuggestionsSection:(id)arg1;
- (id)suggestionsSection;

@end
