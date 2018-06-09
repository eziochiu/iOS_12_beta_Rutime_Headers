/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUICommentImageDataConsumer : SKUIStyledImageDataConsumer {
    id /* block */  _completionBlock;
}

@property (copy) id /* block */ completionBlock;

- (void).cxx_destruct;
- (id)_scaledImageWithBounds:(struct CGSize { double x1; double x2; })arg1 contentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 drawBlock:(id /* block */)arg3;
- (id /* block */)completionBlock;
- (id)imageForImage:(id)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;

@end
