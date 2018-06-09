/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLValidatedExternalCloudResource : PLValidatedExternalResource {
    short  _cloudLocalState;
    NSDate * _dateCreated;
    NSString * _itemIdentifier;
    NSDate * _lastOnDemandDownloadDate;
    NSDate * _lastPrefetchDate;
    short  _prefetchCount;
    NSDate * _prunedAt;
}

@property (nonatomic) short cloudLocalState;
@property (nonatomic, retain) NSDate *dateCreated;
@property (nonatomic, retain) NSString *itemIdentifier;
@property (nonatomic, retain) NSDate *lastOnDemandDownloadDate;
@property (nonatomic, retain) NSDate *lastPrefetchDate;
@property (nonatomic) short prefetchCount;
@property (nonatomic, retain) NSDate *prunedAt;

- (void).cxx_destruct;
- (short)cloudLocalState;
- (id)dateCreated;
- (id)initWithCloudAttributes:(id)arg1;
- (id)initWithCloudResource:(id)arg1;
- (id)itemIdentifier;
- (id)lastOnDemandDownloadDate;
- (id)lastPrefetchDate;
- (short)prefetchCount;
- (id)prunedAt;
- (void)setCloudLocalState:(short)arg1;
- (void)setDateCreated:(id)arg1;
- (void)setItemIdentifier:(id)arg1;
- (void)setLastOnDemandDownloadDate:(id)arg1;
- (void)setLastPrefetchDate:(id)arg1;
- (void)setPrefetchCount:(short)arg1;
- (void)setPrunedAt:(id)arg1;

@end
