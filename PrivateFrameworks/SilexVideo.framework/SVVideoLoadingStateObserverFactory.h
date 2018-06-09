/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoLoadingStateObserverFactory : NSObject <SVVideoLoadingStateObserverFactory> {
    <SVPlayerItemLoaderProviding> * _playerItemLoaderProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SVPlayerItemLoaderProviding> *playerItemLoaderProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createLoadingStateObserverForVideo:(id)arg1;
- (id)initWithPlayeryItemLoaderProvider:(id)arg1;
- (id)playerItemLoaderProvider;

@end
