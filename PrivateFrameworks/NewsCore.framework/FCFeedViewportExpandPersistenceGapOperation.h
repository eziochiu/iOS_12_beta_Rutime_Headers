/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedViewportExpandPersistenceGapOperation : FCOperation {
    FCFeedViewportBookmark * _bookmark;
    bool  _cachedOnly;
    <FCCoreConfiguration> * _configuration;
    FCCloudContext * _context;
    id /* block */  _expandGapCompletionHandler;
    FCFeedDescriptor * _feedDescriptor;
    FCFeedViewportPersistenceGap * _gap;
    unsigned long long  _gapExpansionDirection;
    long long  _gapExpansionPolicy;
    FCDeflatedFeedGroup * _groupToInflate;
    unsigned long long  _indexOfGroupToInflate;
    FCFeedGroup * _inflatedGroup;
    FCFeedViewport * _viewport;
}

@property (nonatomic, copy) FCFeedViewportBookmark *bookmark;
@property (nonatomic) bool cachedOnly;
@property (nonatomic, copy) <FCCoreConfiguration> *configuration;
@property (nonatomic, retain) FCCloudContext *context;
@property (nonatomic, copy) id /* block */ expandGapCompletionHandler;
@property (nonatomic, retain) FCFeedDescriptor *feedDescriptor;
@property (nonatomic, copy) FCFeedViewportPersistenceGap *gap;
@property (nonatomic) unsigned long long gapExpansionDirection;
@property (nonatomic) long long gapExpansionPolicy;
@property (nonatomic, retain) FCDeflatedFeedGroup *groupToInflate;
@property (nonatomic) unsigned long long indexOfGroupToInflate;
@property (nonatomic, retain) FCFeedGroup *inflatedGroup;
@property (nonatomic, retain) FCFeedViewport *viewport;

- (void).cxx_destruct;
- (id)bookmark;
- (bool)cachedOnly;
- (id)configuration;
- (id)context;
- (id /* block */)expandGapCompletionHandler;
- (id)feedDescriptor;
- (id)gap;
- (unsigned long long)gapExpansionDirection;
- (long long)gapExpansionPolicy;
- (id)groupToInflate;
- (unsigned long long)indexOfGroupToInflate;
- (id)inflatedGroup;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)setBookmark:(id)arg1;
- (void)setCachedOnly:(bool)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setExpandGapCompletionHandler:(id /* block */)arg1;
- (void)setFeedDescriptor:(id)arg1;
- (void)setGap:(id)arg1;
- (void)setGapExpansionDirection:(unsigned long long)arg1;
- (void)setGapExpansionPolicy:(long long)arg1;
- (void)setGroupToInflate:(id)arg1;
- (void)setIndexOfGroupToInflate:(unsigned long long)arg1;
- (void)setInflatedGroup:(id)arg1;
- (void)setViewport:(id)arg1;
- (bool)validateOperation;
- (id)viewport;

@end
