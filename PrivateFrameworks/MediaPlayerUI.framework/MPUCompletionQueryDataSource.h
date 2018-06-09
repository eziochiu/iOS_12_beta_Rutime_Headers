/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUCompletionQueryDataSource : MPUQueryDataSource {
    <MPUCompletionQueryDataSourceDelegate> * _completionDelegate;
    NSMutableDictionary * _completions;
    bool  _hasAutomaticallyLoadedCompletions;
    NSMutableSet * _overlayedSectionEntityPIDs;
    bool  _shouldAutomaticallyLoadCompletions;
    bool  _shouldShowCompletions;
    NSMutableDictionary * _statuses;
    NSMutableDictionary * _tokens;
    NSMutableDictionary * _variants;
}

@property (nonatomic) <MPUCompletionQueryDataSourceDelegate> *completionDelegate;
@property (nonatomic) bool shouldAutomaticallyLoadCompletions;
@property (nonatomic, readonly) bool shouldLoadCompletionArtwork;
@property (nonatomic) bool shouldShowCompletions;

- (void).cxx_destruct;
- (void)_didInvalidateWithContext:(id)arg1;
- (long long)_pidForSectionAtIndex:(long long)arg1;
- (void)_setCompletion:(id)arg1 forSectionAtIndex:(long long)arg2;
- (void)_setToken:(unsigned long long)arg1 forSectionAtIndex:(long long)arg2;
- (long long)_tokenForSectionAtIndex:(long long)arg1;
- (void)_willInvalidateWithContext:(id)arg1;
- (void)cancelCompletionOfferingWithToken:(unsigned long long)arg1;
- (id)completionDelegate;
- (long long)completionOfferStatusForSectionAtIndex:(long long)arg1;
- (id)completionOfferingForSectionAtIndex:(unsigned long long)arg1;
- (bool)hasCompletionOfferForSectionAtIndex:(unsigned long long)arg1;
- (bool)hasVariantsForSectionAtIndex:(long long)arg1;
- (unsigned long long)indexOfSectionForCompletionOffering:(id)arg1;
- (bool)isShowingCompletionOverlayForSectionAtIndex:(unsigned long long)arg1;
- (void)loadCompletionOfferingForSectionAtIndex:(unsigned long long)arg1;
- (void)loadCompletionOfferings;
- (void)overlayCompletionForSectionAtIndex:(unsigned long long)arg1;
- (void)removeAllCompletionOverlays;
- (void)removeOverlayCompletionForSectionAtIndex:(unsigned long long)arg1;
- (id)sectionEntityAtIndex:(unsigned long long)arg1;
- (id)sectionEntityWithoutOverlayAtIndex:(unsigned long long)arg1;
- (void)setCompletionDelegate:(id)arg1;
- (void)setCompletionOfferStatus:(long long)arg1 forSectionAtIndex:(long long)arg2;
- (void)setShouldAutomaticallyLoadCompletions:(bool)arg1;
- (void)setShouldShowCompletions:(bool)arg1;
- (void)setVariant:(long long)arg1 forSectionAtIndex:(long long)arg2;
- (bool)shouldAutomaticallyLoadCompletions;
- (bool)shouldLoadCompletionArtwork;
- (bool)shouldShowCompletions;
- (long long)variantForSectionAtIndex:(long long)arg1;

@end
