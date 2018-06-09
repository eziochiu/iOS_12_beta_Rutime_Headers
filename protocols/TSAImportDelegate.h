/* made by EzioChiu.
 */

@protocol TSAImportDelegate <NSObject>

@optional

- (bool)areNewExternalReferencesToDataAllowedForImportController:(TSAImportController *)arg1;
- (void)importController:(TSAImportController *)arg1 documentDidMoveToURL:(NSURL *)arg2;
- (void)importController:(TSAImportController *)arg1 willBeginResourceAccessWithProgress:(NSProgress *)arg2 title:(NSString *)arg3 estimatedMissingResourcesSize:(unsigned long long)arg4;
- (void)importControllerDidFinishResourceAccess:(TSAImportController *)arg1;
- (void)importControllerDidRunOutOfSpace:(TSAImportController *)arg1;
- (void)willSaveImportedDocument:(TSAImportController *)arg1;

@end
