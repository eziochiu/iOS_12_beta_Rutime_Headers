/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPSectionedIdentifierListEntry : NSObject <MPSectionedIdentifierListEnumerationResult> {
    long long  _branchDepth;
    bool  _dataSourceRemoved;
    NSString * _hostedSectionIdentifier;
    NSMutableArray * _nextEntries;
    MPSectionedIdentifierListEntryPositionKey * _positionKey;
    MPSectionedIdentifierListEntry * _previousEntry;
    NSString * _sectionIdentifier;
}

@property (nonatomic) long long branchDepth;
@property (getter=isDataSourceRemoved, nonatomic, readonly) bool dataSourceRemoved;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long entryType;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *hostedSectionIdentifier;
@property (nonatomic, readonly) NSMutableArray *nextEntries;
@property (nonatomic, readonly) MPSectionedIdentifierListEntryPositionKey *positionKey;
@property (nonatomic) MPSectionedIdentifierListEntry *previousEntry;
@property (nonatomic, readonly) NSString *sectionIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addBranch:(id)arg1;
- (long long)branchDepth;
- (long long)entryType;
- (id)hostedSectionIdentifier;
- (id)initWithPositionKey:(id)arg1 sectionIdentifier:(id)arg2;
- (bool)isDataSourceRemoved;
- (id)itemResult;
- (id)nextEntries;
- (id)positionKey;
- (id)previousEntry;
- (id)sectionIdentifier;
- (void)setBranchDepth:(long long)arg1;
- (void)setDataSourceRemoved;
- (void)setHostedSectionIdentifier:(id)arg1;
- (void)setPreviousEntry:(id)arg1;
- (id)trackingEntryResult;

@end
