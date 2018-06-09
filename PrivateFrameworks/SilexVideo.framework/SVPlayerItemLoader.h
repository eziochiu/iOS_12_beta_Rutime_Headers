/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVPlayerItemLoader : NSObject <SVPlayerItemLoading> {
    <SVURLAssetLoading> * _URLAssetLoader;
    id /* block */  _cancellationBlock;
    NSError * _error;
    AVPlayerItem * _item;
    NSMutableArray * _loadingStateChangeBlocks;
    <SVVideoMetadataProviding> * _metadataProvider;
    <SVPlayerItemFactory> * _playerItemFactory;
    unsigned long long  _state;
    NFStateMachine * _stateMachine;
}

@property (nonatomic, readonly) <SVURLAssetLoading> *URLAssetLoader;
@property (nonatomic, copy) id /* block */ cancellationBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AVPlayerItem *item;
@property (nonatomic, readonly) NSMutableArray *loadingStateChangeBlocks;
@property (nonatomic, readonly) <SVVideoMetadataProviding> *metadataProvider;
@property (nonatomic, readonly) <SVPlayerItemFactory> *playerItemFactory;
@property (nonatomic) unsigned long long state;
@property (nonatomic, readonly) NFStateMachine *stateMachine;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)URLAssetLoader;
- (id /* block */)cancellationBlock;
- (void)dealloc;
- (id)error;
- (id)initWithPlayerItemFactory:(id)arg1 URLAssetLoader:(id)arg2 metadataProvider:(id)arg3;
- (id)item;
- (void)load;
- (void)loadPlayerItemWithCompletionBlock:(id /* block */)arg1;
- (id)loadingStateChangeBlocks;
- (id)metadataProvider;
- (void)onLoadingStateChange:(id /* block */)arg1;
- (id)playerItemFactory;
- (void)setCancellationBlock:(id /* block */)arg1;
- (void)setError:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;
- (id)stateMachine;

@end
