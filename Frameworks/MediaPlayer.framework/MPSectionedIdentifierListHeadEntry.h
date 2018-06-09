/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPSectionedIdentifierListHeadEntry : MPSectionedIdentifierListEntry <MPSectionedIdentifierListEnumerationTrackingEntry> {
    <MPSectionedIdentifierListDataSource> * _dataSource;
    NSMutableDictionary * _identifiersItemEntryMap;
    MPSectionedIdentifierListItemEntry * _lastItemEntry;
}

@property (nonatomic, readonly) long long branchDepth;
@property (nonatomic, retain) <MPSectionedIdentifierListDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long entryType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *identifiersItemEntryMap;
@property (nonatomic, retain) MPSectionedIdentifierListItemEntry *lastItemEntry;
@property (nonatomic, readonly) NSString *sectionIdentifier;
@property (readonly) Class superclass;

+ (id)headEntryWithSectionIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)dataSource;
- (long long)entryType;
- (id)identifiersItemEntryMap;
- (id)initWithPositionKey:(id)arg1 sectionIdentifier:(id)arg2;
- (id)lastItemEntry;
- (void)setDataSource:(id)arg1;
- (void)setLastItemEntry:(id)arg1;

@end
