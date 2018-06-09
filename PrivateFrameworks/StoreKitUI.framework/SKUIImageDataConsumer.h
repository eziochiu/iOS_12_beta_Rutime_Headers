/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIImageDataConsumer : SSVURLDataConsumer

@property (getter=isImagePlaceholderAvailable, nonatomic, readonly) bool imagePlaceholderAvailable;

- (id)imageForColor:(id)arg1;
- (id)imageForColor:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)imageForImage:(id)arg1;
- (id)imagePlaceholderForColor:(id)arg1;
- (bool)isImagePlaceholderAvailable;
- (id)objectForData:(id)arg1 response:(id)arg2 error:(id*)arg3;

@end
