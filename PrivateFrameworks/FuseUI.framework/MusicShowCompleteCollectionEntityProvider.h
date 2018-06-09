/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicShowCompleteCollectionEntityProvider : NSObject <MusicEntityProviding> {
    MusicCompleteOfferEntityProvider * _completeOfferEntityProvider;
    NSString * _localizedTitle;
    bool  _shouldIncludeShowCompleteButton;
    MusicShowCompleteCollectionEntityValueProvider * _showCompleteCollectionEntityValueProvider;
}

@property (nonatomic, readonly) MusicCompleteOfferEntityProvider *completeOfferEntityProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *localizedTitle;
@property (nonatomic) bool shouldIncludeStoreCompleteOffer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_completeOfferEntityProviderStoreCompleteOfferAvailableDidChangeNotification:(id)arg1;
- (id)_showCompleteCollectionEntityValueProvider;
- (void)_updateShouldIncludeShowCompleteButton;
- (id)completeOfferEntityProvider;
- (void)configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2;
- (void)configureEntityValueContextOutputForAnyIndexPath:(id)arg1;
- (void)configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)dealloc;
- (id)entityValueProviderAtIndexPath:(id)arg1;
- (bool)hasEntities;
- (bool)hasEntitiesNotInLibrary;
- (id)indexBarEntryAtIndex:(unsigned long long)arg1;
- (id)indexPathForEntityValueContext:(id)arg1;
- (id)initWithCompleteOfferEntityProvider:(id)arg1;
- (id)localizedTitle;
- (unsigned long long)numberOfEntitiesInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfIndexBarEntries;
- (unsigned long long)numberOfSections;
- (unsigned long long)sectionForSectionIndexBarEntryAtIndex:(unsigned long long)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setShouldIncludeStoreCompleteOffer:(bool)arg1;
- (bool)shouldIncludeStoreCompleteOffer;

@end
