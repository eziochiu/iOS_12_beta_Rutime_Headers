/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHLivePhotoRequestOptions : NSObject <NSCopying> {
    long long  _deliveryMode;
    bool  _networkAccessAllowed;
    id /* block */  _progressHandler;
    bool  _routeToNewImageManager;
    long long  _version;
}

@property (nonatomic) long long deliveryMode;
@property (getter=isNetworkAccessAllowed, nonatomic) bool networkAccessAllowed;
@property (nonatomic, copy) id /* block */ progressHandler;
@property (nonatomic) bool routeToNewImageManager;
@property (nonatomic) long long version;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)deliveryMode;
- (id)init;
- (bool)isNetworkAccessAllowed;
- (id /* block */)progressHandler;
- (bool)routeToNewImageManager;
- (void)setDeliveryMode:(long long)arg1;
- (void)setNetworkAccessAllowed:(bool)arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)setRouteToNewImageManager:(bool)arg1;
- (void)setVersion:(long long)arg1;
- (long long)version;

@end
