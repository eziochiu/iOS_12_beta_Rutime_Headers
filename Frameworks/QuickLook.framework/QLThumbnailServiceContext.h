/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLThumbnailServiceContext : NSExtensionContext <QLThumbnailHost> {
    QLThumbnailProvider * _thumbnailProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) QLThumbnailProvider *thumbnailProvider;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (id)_thumbnailGenerationQueue;
- (void)generateThumbnailOfSize:(struct CGSize { double x1; double x2; })arg1 minimumSize:(double)arg2 scale:(double)arg3 badgeType:(unsigned long long)arg4 withContents:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)generateThumbnailOfSize:(struct CGSize { double x1; double x2; })arg1 minimumSize:(double)arg2 scale:(double)arg3 badgeType:(unsigned long long)arg4 withFileURLHandler:(id)arg5 completionHandler:(id /* block */)arg6;
- (id)protocolHost;
- (void)setThumbnailProvider:(id)arg1;
- (id)thumbnailProvider;

@end
