/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCMediaRemoteMiddlewareCommandsOperation : MPAsyncOperation <MPMiddlewareOperation> {
    id /* block */  _invalidationHandler;
    NSArray * _invalidationObservers;
    MPCMediaRemoteMiddleware * _middleware;
    MPCPlayerRequest * _playerRequest;
    MPCFuture * _supportedCommandsFuture;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, readonly) NSArray *invalidationObservers;
@property (nonatomic, retain) MPCMediaRemoteMiddleware *middleware;
@property (nonatomic, retain) MPCPlayerRequest *playerRequest;
@property (readonly) Class superclass;
@property (nonatomic, retain) MPCFuture *supportedCommandsFuture;

- (void).cxx_destruct;
- (void)execute;
- (id)initWithMiddleware:(id)arg1 playerRequest:(id)arg2;
- (id /* block */)invalidationHandler;
- (id)invalidationObservers;
- (id)middleware;
- (id)playerRequest;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setMiddleware:(id)arg1;
- (void)setPlayerRequest:(id)arg1;
- (void)setSupportedCommandsFuture:(id)arg1;
- (id)supportedCommandsFuture;
- (id)timeoutDescription;

@end
