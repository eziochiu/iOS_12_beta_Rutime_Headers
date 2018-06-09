/* made by EzioChiu.
 */

@protocol VCUIGalleryViewControllerDelegate <NSObject>

@optional

- (void)galleryViewControllerDidCancel:(VCUIGalleryViewController *)arg1;
- (void)galleryViewControllerDidEnterStateSiriUnavailable:(VCUIGalleryViewController *)arg1 withCreateVoiceShortcutViewController:(VCUICreateVoiceShortcutViewController *)arg2;
- (void)galleryViewControllerDidFinish:(VCUIGalleryViewController *)arg1;

@end
