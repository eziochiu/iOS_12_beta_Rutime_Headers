/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUICategoryArtworkLoader : NSObject <SKUIArtworkRequestDelegate> {
    NSMapTable * _artworkRequestIDs;
    SKUIImageDataConsumer * _imageDataConsumer;
    SKUIResourceLoader * _loader;
    NSHashTable * _observers;
    UIImage * _placeholderImage;
}

@property (nonatomic, readonly) SKUIResourceLoader *artworkLoader;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SKUIImageDataConsumer *imageDataConsumer;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic, readonly) UIImage *placeholderImage;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)artworkLoader;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)cachedImageForCategory:(id)arg1;
- (id)imageDataConsumer;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)init;
- (id)initWithArtworkLoader:(id)arg1;
- (void)loadImageForCategory:(id)arg1 reason:(long long)arg2;
- (id)placeholderImage;
- (void)removeObserver:(id)arg1;
- (void)setImageDataConsumer:(id)arg1;

@end
