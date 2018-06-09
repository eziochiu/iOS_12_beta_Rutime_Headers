/* made by EzioChiu.
 */

@protocol CNContactHeaderViewDelegate <NSObject>

@required

- (CNContactViewCache *)contactViewCache;
- (void)headerPhotoDidSaveEditsForImageDrop;
- (void)headerPhotoDidUpdate;
- (void)headerViewDidUpdateLabelSizes;
- (UIViewController *)viewControllerForHeaderView:(CNContactHeaderView *)arg1;

@end
