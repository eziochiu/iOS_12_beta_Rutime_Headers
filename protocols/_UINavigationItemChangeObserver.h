/* made by EzioChiu.
 */

@protocol _UINavigationItemChangeObserver

@required

- (void)navigationItemUpdatedBackButtonContent:(UINavigationItem *)arg1 animated:(bool)arg2;
- (void)navigationItemUpdatedBackgroundAppearance:(UINavigationItem *)arg1 animated:(bool)arg2;
- (void)navigationItemUpdatedCanvasView:(UINavigationItem *)arg1 animated:(bool)arg2;
- (void)navigationItemUpdatedLeftBarButtonItems:(UINavigationItem *)arg1 animated:(bool)arg2;
- (void)navigationItemUpdatedPromptContent:(UINavigationItem *)arg1 animated:(bool)arg2;
- (void)navigationItemUpdatedRightBarButtonItems:(UINavigationItem *)arg1 animated:(bool)arg2;
- (void)navigationItemUpdatedSearchController:(UINavigationItem *)arg1 oldSearchController:(UISearchController *)arg2 animated:(bool)arg3;
- (void)navigationItemUpdatedTitleContent:(UINavigationItem *)arg1 animated:(bool)arg2;

@end
