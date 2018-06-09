/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUVideoViewControllerQueueFactory : NSObject <NUVideoViewControllerQueueFactory> {
    NUVideoViewControllerAdConfiguration * _adConfiguration;
    <NUVideoAdProviderFactory> * _videoAdProviderFactory;
    <NUVideoProviderFactory> * _videoProviderFactory;
}

@property (nonatomic, readonly) NUVideoViewControllerAdConfiguration *adConfiguration;
@property (nonatomic, readonly) <NUVideoAdProviderFactory> *videoAdProviderFactory;
@property (nonatomic, readonly) <NUVideoProviderFactory> *videoProviderFactory;

- (void).cxx_destruct;
- (id)adConfiguration;
- (id)createQueueWithVideoItems:(id)arg1;
- (id)init;
- (id)initWithAdConfiguration:(id)arg1 videoProviderFactory:(id)arg2 videoAdProviderFactory:(id)arg3;
- (id)videoAdProviderFactory;
- (id)videoProviderFactory;

@end