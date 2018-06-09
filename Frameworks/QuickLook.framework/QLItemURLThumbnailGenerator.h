/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLItemURLThumbnailGenerator : NSObject {
    id /* block */  _completionHandler;
}

@property (nonatomic, copy) id /* block */ completionHandler;

- (void).cxx_destruct;
- (void)_executeCompletionHandlerWithImage:(id)arg1;
- (id /* block */)completionHandler;
- (void)generateThumbnailWithURL:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 completionBlock:(id /* block */)arg4;
- (void)setCompletionHandler:(id /* block */)arg1;

@end
