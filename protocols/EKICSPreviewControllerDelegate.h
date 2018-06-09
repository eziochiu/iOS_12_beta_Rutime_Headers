/* made by EzioChiu.
 */

@protocol EKICSPreviewControllerDelegate <NSObject>

@optional

- (void)icsPreviewController:(EKICSPreviewController *)arg1 importDidImportEvents:(NSArray *)arg2;
- (void)icsPreviewControllerImportDidFail:(EKICSPreviewController *)arg1;
- (void)icsPreviewControllerImportDidStart:(EKICSPreviewController *)arg1;
- (void)icsPreviewControllerWantsDismissal:(EKICSPreviewController *)arg1;

@end
