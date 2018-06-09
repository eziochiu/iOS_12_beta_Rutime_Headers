/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLAuthorSelectionAlertController : UIAlertController <SKUIArtworkRequestDelegate> {
    NSMutableArray * _artworkNotificationObservers;
    UIImage * _placeholderImage;
    SKUIResourceLoader * _resourceLoader;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SKUIResourceLoader *resourceLoader;
@property (readonly) Class superclass;

+ (id)alertControllerWithTitle:(id)arg1 message:(id)arg2 preferredStyle:(long long)arg3;

- (void).cxx_destruct;
- (id)_imageDataConsumer;
- (id)_newArtworkRequestForAuthor:(id)arg1;
- (id)_placeholderImage;
- (id)addActionWithAuthor:(id)arg1 handler:(id /* block */)arg2;
- (void)dealloc;
- (id)resourceLoader;
- (void)setResourceLoader:(id)arg1;

@end