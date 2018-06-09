/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedViewportExpandGapOperation : FCOperation {
    FCFeedViewportBookmark * _bookmark;
    bool  _cachedOnly;
    <FCCoreConfiguration> * _configuration;
    FCCloudContext * _context;
    unsigned long long  _desiredHeadlineCount;
    id /* block */  _expandGapCompletionHandler;
    FCFeedDescriptor * _feedDescriptor;
    <FCFeedElement> * _gapElement;
    unsigned long long  _gapExpansionDirection;
    long long  _gapExpansionPolicy;
    bool  _lightweightOnly;
    bool  _offlineMode;
    FCFeedViewportDiff * _resultDiff;
    FCFeedViewport * _resultViewport;
    FCFeedViewport * _viewport;
}

@property (nonatomic, copy) FCFeedViewportBookmark *bookmark;
@property (nonatomic) bool cachedOnly;
@property (nonatomic, copy) <FCCoreConfiguration> *configuration;
@property (nonatomic, retain) FCCloudContext *context;
@property (nonatomic) unsigned long long desiredHeadlineCount;
@property (nonatomic, copy) id /* block */ expandGapCompletionHandler;
@property (nonatomic, retain) FCFeedDescriptor *feedDescriptor;
@property (nonatomic, copy) <FCFeedElement> *gapElement;
@property (nonatomic) unsigned long long gapExpansionDirection;
@property (nonatomic) long long gapExpansionPolicy;
@property bool lightweightOnly;
@property bool offlineMode;
@property (nonatomic, retain) FCFeedViewportDiff *resultDiff;
@property (nonatomic, retain) FCFeedViewport *resultViewport;
@property (nonatomic, retain) FCFeedViewport *viewport;

- (void).cxx_destruct;
- (id)_groupEmitterWithIdentifier:(id)arg1;
- (id)bookmark;
- (bool)cachedOnly;
- (id)configuration;
- (id)context;
- (unsigned long long)desiredHeadlineCount;
- (id /* block */)expandGapCompletionHandler;
- (id)feedDescriptor;
- (id)gapElement;
- (unsigned long long)gapExpansionDirection;
- (long long)gapExpansionPolicy;
- (id)init;
- (bool)lightweightOnly;
- (bool)offlineMode;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)resultDiff;
- (id)resultViewport;
- (void)setBookmark:(id)arg1;
- (void)setCachedOnly:(bool)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDesiredHeadlineCount:(unsigned long long)arg1;
- (void)setExpandGapCompletionHandler:(id /* block */)arg1;
- (void)setFeedDescriptor:(id)arg1;
- (void)setGapElement:(id)arg1;
- (void)setGapExpansionDirection:(unsigned long long)arg1;
- (void)setGapExpansionPolicy:(long long)arg1;
- (void)setLightweightOnly:(bool)arg1;
- (void)setOfflineMode:(bool)arg1;
- (void)setResultDiff:(id)arg1;
- (void)setResultViewport:(id)arg1;
- (void)setViewport:(id)arg1;
- (bool)validateOperation;
- (id)viewport;

@end
