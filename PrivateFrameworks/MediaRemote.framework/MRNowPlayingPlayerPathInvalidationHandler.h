/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRNowPlayingPlayerPathInvalidationHandler : NSObject {
    id /* block */  _callback;
    _MRNowPlayingPlayerPathProtobuf * _playerPath;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) id /* block */ callback;
@property (nonatomic, readonly) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id /* block */)callback;
- (id)initWithPlayerPath:(id)arg1 queue:(id)arg2 invalidationCallback:(id /* block */)arg3;
- (id)playerPath;
- (id)queue;

@end
