/* made by EzioChiu.
 */

@protocol CNContactListViewControllerDelegate <NSObject>

@optional

- (bool)contactListViewController:(CNContactListViewController *)arg1 canSelectContact:(CNContact *)arg2;
- (void)contactListViewController:(CNContactListViewController *)arg1 didSelectContact:(CNContact *)arg2;
- (void)contactListViewController:(CNContactListViewController *)arg1 shouldPresentContact:(CNContact *)arg2 shouldScrollToContact:(bool)arg3;
- (bool)contactListViewController:(CNContactListViewController *)arg1 shouldSelectContact:(CNContact *)arg2 atIndexPath:(NSIndexPath *)arg3;

@end
