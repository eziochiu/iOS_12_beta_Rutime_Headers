/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLItemThumbnailGenerator : NSObject <QLItemThumbnailGeneratorProtocol> {
    QLItemDataThumbnailGenerator * _dataGenerator;
    QLExtensionThumbnailGenerator * _extensionGenerator;
    QLItemURLThumbnailGenerator * _urlGenerator;
}

@property (nonatomic, retain) QLItemDataThumbnailGenerator *dataGenerator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) QLExtensionThumbnailGenerator *extensionGenerator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) QLItemURLThumbnailGenerator *urlGenerator;

+ (bool)hasThirdPartyThumbnailGeneratorForItem:(id)arg1;

- (void).cxx_destruct;
- (id)_fetcherClassesForPreviewItem:(id)arg1;
- (id)dataGenerator;
- (id)extensionGenerator;
- (void)generateThumbnailForItem:(id)arg1 ofSize:(struct CGSize { double x1; double x2; })arg2 minimumSize:(double)arg3 scale:(double)arg4 badgeType:(unsigned long long)arg5 completionBlock:(id /* block */)arg6;
- (void)generateThumbnailForItem:(id)arg1 ofSize:(struct CGSize { double x1; double x2; })arg2 minimumSize:(double)arg3 scale:(double)arg4 completionBlock:(id /* block */)arg5;
- (void)setDataGenerator:(id)arg1;
- (void)setExtensionGenerator:(id)arg1;
- (void)setUrlGenerator:(id)arg1;
- (id)urlGenerator;

@end