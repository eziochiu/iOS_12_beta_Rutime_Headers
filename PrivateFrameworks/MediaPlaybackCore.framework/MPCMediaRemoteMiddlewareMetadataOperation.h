/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCMediaRemoteMiddlewareMetadataOperation : MPAsyncOperation <MPCMediaRemoteMiddlewareModelObjectsProviding, MPMiddlewareAutomaticDependencyOperation> {
    struct NSMapTable { Class x1; } * _inputOperations;
    id /* block */  _invalidationHandler;
    NSArray * _invalidationObservers;
    MPCMediaRemoteMiddleware * _middleware;
    MPCFuture * _playQueueIdentifiersFuture;
    MPCPlayerRequest * _playerRequest;
    MPCFuture * _playingIdentifierFuture;
    MPCFuture * _queueIdentifierFuture;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMapTable *inputOperations;
@property (nonatomic, readonly) NSArray *inputsProtocols;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, readonly) NSArray *invalidationObservers;
@property (nonatomic, retain) MPCMediaRemoteMiddleware *middleware;
@property (nonatomic, readonly) MPSectionedCollection *modelObjects;
@property (nonatomic, readonly) NSArray *outputProtocols;
@property (nonatomic, retain) MPCFuture *playQueueIdentifiersFuture;
@property (nonatomic, retain) MPCPlayerRequest *playerRequest;
@property (nonatomic, retain) MPCFuture *playingIdentifierFuture;
@property (nonatomic, readonly, copy) NSIndexPath *playingIndexPath;
@property (nonatomic, retain) MPCFuture *queueIdentifierFuture;
@property (nonatomic, readonly) MPSectionedCollection *sourceContentItems;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_genericObjectPropertySetForContentItem:(id)arg1 preferredRelationships:(id)arg2 propertySet:(id)arg3;
- (id)_itemGenericObjectPropertySetForContentItem:(id)arg1 propertySet:(id)arg2;
- (void)_loadItemsWithCompletion:(id /* block */)arg1;
- (void)_loadPlayingIdentifierWithCompletion:(id /* block */)arg1;
- (id)_sectionGenericObjectPropertySetForContentItem:(id)arg1 propertySet:(id)arg2;
- (void)execute;
- (id)initWithMiddleware:(id)arg1 playerRequest:(id)arg2;
- (struct NSMapTable { Class x1; }*)inputOperations;
- (id)inputsProtocols;
- (id /* block */)invalidationHandler;
- (id)invalidationObservers;
- (id)middleware;
- (id)modelObjects;
- (id)outputProtocols;
- (id)playQueueIdentifiersFuture;
- (id)playerRequest;
- (id)playingIdentifierFuture;
- (id)playingIndexPath;
- (id)queueIdentifierFuture;
- (struct _MSVSignedRange { long long x1; long long x2; })rangeFromTracklistRange:(struct { long long x1; long long x2; })arg1;
- (void)setInputOperations:(struct NSMapTable { Class x1; }*)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setMiddleware:(id)arg1;
- (void)setPlayQueueIdentifiersFuture:(id)arg1;
- (void)setPlayerRequest:(id)arg1;
- (void)setPlayingIdentifierFuture:(id)arg1;
- (void)setQueueIdentifierFuture:(id)arg1;
- (id)sourceContentItems;
- (id)timeoutDescription;

@end
