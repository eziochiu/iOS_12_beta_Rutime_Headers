/* made by EzioChiu.
 */

@protocol CNVCardImportControllerDelegate <NSObject>

@optional

- (void)vCardImportController:(CNVCardImportController *)arg1 didSaveContacts:(NSArray *)arg2;
- (void)vCardImportControllerDidCompleteQueue:(CNVCardImportController *)arg1;

@end
