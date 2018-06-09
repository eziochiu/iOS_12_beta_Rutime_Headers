/* made by EzioChiu.
 */

@protocol _SFBookmarkInfoViewControllerDelegate <NSObject>

@optional

- (void)bookmarkInfoViewController:(_SFBookmarkInfoViewController *)arg1 didFinishWithResult:(bool)arg2;
- (bool)bookmarkInfoViewControllerCanSaveBookmarkChanges:(_SFBookmarkInfoViewController *)arg1;
- (bool)bookmarkInfoViewControllerShouldUseTranslucentAppearance:(_SFBookmarkInfoViewController *)arg1;

@end
