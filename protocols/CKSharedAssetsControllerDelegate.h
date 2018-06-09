/* made by EzioChiu.
 */

@protocol CKSharedAssetsControllerDelegate <NSObject>

@required

- (void)sharedAssetsController:(id <CKSharedAssetsControllerProtocol>)arg1 didDeleteAttachmentItems:(NSArray *)arg2;
- (void)sharedAssetsControllerContentSizeDidChange:(id <CKSharedAssetsControllerProtocol>)arg1;

@end
