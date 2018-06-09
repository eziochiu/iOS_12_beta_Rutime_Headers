/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicMediaEntityProvider : NSObject <MusicEntityProviding, NSCoding> {
    NSArray * _localizedSectionIndexTitles;
    long long  _maximumItemCount;
    MusicMediaQueryDataSource * _mediaQueryDataSource;
    NSSet * _requiredVisibilityPrioritySectionIndexTitles;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long maximumItemCount;
@property (nonatomic, retain) MPMediaQuery *mediaQuery;
@property (nonatomic, readonly) MusicMediaQueryDataSource *mediaQueryDataSource;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long totalEntityCount;

- (void).cxx_destruct;
- (void)_configureEntityValueContextOutput:(id)arg1 forGlobalIndex:(unsigned long long)arg2;
- (void)_dataSourceWasInvalidated:(id)arg1;
- (void)_handleMediaQueryDataSourceDidInvalidate;
- (void)_loadSectionIndexTitleDataIfNeeded;
- (id)_localizedSectionIndexTitles;
- (id)_requiredVisibilityPrioritySectionIndexTitles;
- (id)additionalPropertiesToFetchSynchronouslyForEntityValueContext:(id)arg1;
- (void)configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2;
- (void)configureEntityValueContextOutputForAnyIndexPath:(id)arg1;
- (void)configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)entityValueProviderAtIndexPath:(id)arg1;
- (void)handleDeleteChangeRecord:(id)arg1;
- (bool)hasEntities;
- (bool)hasEntitiesNotInLibrary;
- (bool)hasExplicitContent;
- (bool)hasMultipleEntitiesIncludingStoreContent;
- (id)indexBarEntryAtIndex:(unsigned long long)arg1;
- (id)indexPathForEntityValueContext:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaQuery:(id)arg1;
- (id)initWithMediaQueryDataSource:(id)arg1;
- (long long)maximumItemCount;
- (id)mediaQuery;
- (id)mediaQueryDataSource;
- (unsigned long long)numberOfEntitiesInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfIndexBarEntries;
- (unsigned long long)numberOfSections;
- (unsigned long long)sectionForSectionIndexBarEntryAtIndex:(unsigned long long)arg1;
- (bool)setEditing:(bool)arg1;
- (void)setMaximumItemCount:(long long)arg1;
- (void)setMediaQuery:(id)arg1;
- (unsigned long long)totalEntityCount;

@end
