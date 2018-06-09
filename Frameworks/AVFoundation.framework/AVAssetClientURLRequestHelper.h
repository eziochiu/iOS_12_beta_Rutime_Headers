/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetClientURLRequestHelper : NSObject {
    void * _URLRequestOriginator;
    id /* block */  _figAssetProvider;
    AVCMNotificationDispatcher * _figNotificationDispatcher;
    AVWeakReference * _weakReferenceToAsset;
    AVWeakReference * _weakReferenceToResourceLoader;
    AVWeakReference * _weakReferenceToSelf;
}

@property (nonatomic, retain) const void*URLRequestOriginator;
@property (nonatomic, readonly) const struct OpaqueFigAsset { }*figAsset;
@property (nonatomic, copy) id /* block */ figAssetProvider;
@property (nonatomic) AVAssetResourceLoader *resourceLoader;

- (id)URLAsset;
- (const void*)URLRequestOriginator;
- (void)_finishLoadingCustomURLProviderRequestWithResponseProperties:(id)arg1 context:(id)arg2;
- (void)_handleRequestForAsset:(id)arg1 contentKeySession:(id)arg2 request:(id)arg3 identifier:(id)arg4;
- (void)_onUnhandledContentKeyRequest:(id)arg1;
- (void)_startHandlingURLRequestsFromRequestOriginator:(void*)arg1;
- (void)_stopHandlingURLRequestsFromRequestOriginator:(void*)arg1;
- (void)dealloc;
- (const struct OpaqueFigAsset { }*)figAsset;
- (id /* block */)figAssetProvider;
- (void)finalize;
- (void)handleURLRequest:(id)arg1;
- (id)initWithAsset:(id)arg1;
- (id)resourceLoader;
- (void)setFigAssetProvider:(id /* block */)arg1;
- (void)setResourceLoader:(id)arg1;
- (void)setURLRequestOriginator:(void*)arg1;

@end
