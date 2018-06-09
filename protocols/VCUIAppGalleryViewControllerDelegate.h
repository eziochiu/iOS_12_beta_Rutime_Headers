/* made by EzioChiu.
 */

@protocol VCUIAppGalleryViewControllerDelegate <NSObject>

@required

- (void)appGalleryViewControllerDidFinish:(VCUIAppGalleryViewController *)arg1;

@optional

- (void)appGalleryViewControllerDidEnterStateSiriUnavailable:(VCUIAppGalleryViewController *)arg1 withCreateVoiceShortcutViewController:(VCUICreateVoiceShortcutViewController *)arg2;

@end
