/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PSIGroupResult : NSObject <NSCopying> {
    const struct __CFArray { } * _assetIds;
    NSMutableArray * _assetUUIDs;
    const struct __CFArray { } * _collectionIds;
    NSMutableArray * _collectionResults;
    <PSIGroupResultDelegate> * _delegate;
    bool  _didFetchOwningContentString;
    NSArray * _groups;
    NSString * _owningContentString;
    NSObject<OS_dispatch_queue> * _queue;
    float  _score;
    NSString * _transientToken;
    const struct __CFArray { } * _tripIds;
    NSMutableArray * _tripResults;
}

@property (nonatomic, retain) const struct __CFArray { }*assetIds;
@property (nonatomic, readonly) unsigned long long assetMatchCount;
@property (readonly) NSArray *assetUUIDs;
@property (nonatomic, retain) const struct __CFArray { }*collectionIds;
@property (nonatomic, readonly) unsigned long long collectionMatchCount;
@property (readonly) NSArray *collectionResults;
@property (nonatomic, readonly, retain) NSArray *contentStrings;
@property (nonatomic) <PSIGroupResultDelegate> *delegate;
@property (nonatomic, copy) NSArray *groups;
@property (nonatomic, readonly, retain) NSArray *groupsMatchRanges;
@property (nonatomic, readonly, retain) NSArray *groupsSearchTokens;
@property (nonatomic, readonly, retain) NSArray *lookupIdentifiers;
@property (nonatomic, readonly) unsigned long long matchCount;
@property (readonly) NSString *owningContentString;
@property (nonatomic) float score;
@property (nonatomic, copy) NSString *transientToken;
@property (nonatomic, retain) const struct __CFArray { }*tripIds;
@property (nonatomic, readonly) unsigned long long tripMatchCount;
@property (readonly) NSArray *tripResults;

- (void).cxx_destruct;
- (id)_prepareForFetchWithAssetCountLimit:(unsigned long long)arg1 collectionCountLimit:(unsigned long long)arg2 tripCountLimit:(unsigned long long)arg3 outAssetRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg4 outCollectionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg5 outTripRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg6 outFetchOwningContentString:(bool*)arg7;
- (const struct __CFArray { }*)assetIds;
- (unsigned long long)assetMatchCount;
- (id)assetUUIDs;
- (long long)categoryAtIndex:(long long)arg1;
- (const struct __CFArray { }*)collectionIds;
- (unsigned long long)collectionMatchCount;
- (id)collectionResults;
- (id)contentStringAtIndex:(long long)arg1;
- (id)contentStrings;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (id)description;
- (void)fetchNextAssetUUIDs:(bool)arg1 collectionResults:(bool)arg2 tripResults:(bool)arg3 assetCountLimit:(unsigned long long)arg4 collectionCountLimit:(unsigned long long)arg5 tripCountLimit:(unsigned long long)arg6 completionHandler:(id /* block */)arg7;
- (void)fetchNextAssetUUIDs:(bool)arg1 collectionResults:(bool)arg2 tripResults:(bool)arg3 count:(unsigned long long)arg4 completionHandler:(id /* block */)arg5;
- (void)fetchNextAssetUUIDs:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (unsigned long long)groupCount;
- (id)groups;
- (id)groupsMatchRanges;
- (id)groupsSearchTokens;
- (id)initWithQueue:(id)arg1;
- (bool)isContentStringTextSearchableAtIndex:(long long)arg1;
- (bool)isMatchedByIdentifierAtIndex:(long long)arg1;
- (id)lookupIdentifiers;
- (unsigned long long)matchCount;
- (id)matchRangesAtIndex:(long long)arg1;
- (id)owningContentString;
- (float)score;
- (void)setAssetIds:(const struct __CFArray { }*)arg1;
- (void)setCollectionIds:(const struct __CFArray { }*)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGroups:(id)arg1;
- (void)setScore:(float)arg1;
- (void)setTransientToken:(id)arg1;
- (void)setTripIds:(const struct __CFArray { }*)arg1;
- (id)tokensAtIndex:(long long)arg1;
- (id)transientToken;
- (const struct __CFArray { }*)tripIds;
- (unsigned long long)tripMatchCount;
- (id)tripResults;
- (id)unitTestDescription;

@end
