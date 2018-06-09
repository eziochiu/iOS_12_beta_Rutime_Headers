/* made by EzioChiu.
 */

@protocol _TVInterfaceCreatingPrivate <TVInterfaceCreating>

@optional

- (TVImageProxy *)_imageProxyForElement:(TVViewElement *)arg1;
- (UINavigationController *)_navigationControllerForTabIdentifier:(NSString *)arg1;
- (void)_parseAppConfigurationForElement:(TVViewElement *)arg1;
- (NSURL *)_styleSheetURLForTemplate:(NSString *)arg1;

@end
