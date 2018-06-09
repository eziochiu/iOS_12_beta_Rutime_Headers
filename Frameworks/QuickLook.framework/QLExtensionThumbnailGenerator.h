/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLExtensionThumbnailGenerator : NSObject {
    QLExtensionManager * _extensionManager;
}

@property (nonatomic, retain) QLExtensionManager *extensionManager;

- (void).cxx_destruct;
- (id)_generateImageFromRawData:(id)arg1 withContextSize:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3;
- (id)_generateImageFromURL:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3;
- (id)extensionManager;
- (void)generateThumbnailWithItem:(id)arg1 ofSize:(struct CGSize { double x1; double x2; })arg2 minimumSize:(double)arg3 scale:(double)arg4 badgeType:(unsigned long long)arg5 completionBlock:(id /* block */)arg6;
- (id)init;
- (void)setExtensionManager:(id)arg1;

@end
