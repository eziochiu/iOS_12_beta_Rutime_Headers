/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPPeopleSuggester : PPContactSuggester {
    id /* block */  _mockBlock;
    unsigned char  _numberOfContactsToSuggest;
    NSObject<OS_dispatch_source> * _timer;
}

- (void).cxx_destruct;
- (id)_makeDuetPeopleSuggester;
- (void)_processPeopleSuggestions:(id)arg1 favorites:(id)arg2 doRetry:(bool)arg3;
- (void)_refreshPeopleSuggestionsAndRetryIfNoResults:(bool)arg1;
- (void)clearCaches;
- (void)clearCachesWithoutRefreshing;
- (id)initWithMock:(id /* block */)arg1;
- (id)initWithNumberOfContactsToSuggest:(unsigned char)arg1;
- (unsigned char)numberOfContactsToSuggest;
- (void)refreshMockPeopleSuggestions;
- (void)setNumberOfContactsToSuggest:(unsigned char)arg1;
- (void)waitForData;

@end
