/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVURLAssetLoader : NSObject <SVURLAssetLoading> {
    <SVURLAssetFactory> * _URLAssetFactory;
    <SVVideoURLProviding> * _URLProvider;
}

@property (nonatomic, readonly) <SVURLAssetFactory> *URLAssetFactory;
@property (nonatomic, readonly) <SVVideoURLProviding> *URLProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)URLAssetFactory;
- (id /* block */)URLAssetWithCompletionBlock:(id /* block */)arg1;
- (id)URLProvider;
- (id)initWithURLAssetFactory:(id)arg1 URLProvider:(id)arg2;

@end
