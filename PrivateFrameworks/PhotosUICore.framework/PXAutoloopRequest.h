/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXAutoloopRequest : NSObject {
    NSString * _assetUUID;
    id /* block */  _completionHandler;
    unsigned long long  _state;
}

@property (nonatomic, readonly, copy) NSString *assetUUID;
@property (setter=setCompletionHandler:, nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic) unsigned long long state;

- (void).cxx_destruct;
- (void)_handleTimeout;
- (id)assetUUID;
- (void)cancel;
- (id /* block */)completionHandler;
- (id)description;
- (id)initWithAssetUUID:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)startRequestWithCompletionHandler:(id /* block */)arg1;
- (unsigned long long)state;

@end
