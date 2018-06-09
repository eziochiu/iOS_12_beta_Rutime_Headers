/* made by EzioChiu.
 */

@protocol HLPHelpTableOfContentViewControllerDelegate <NSObject>

@required

- (HLPHelpTopicItem *)currentHelpTopicItemForTableOfContentViewController:(HLPHelpTableOfContentViewController *)arg1;
- (void)tableOfContentViewController:(HLPHelpTableOfContentViewController *)arg1 showHelpTopicItem:(HLPHelpTopicItem *)arg2;
- (void)tableOfContentViewControllerShowHelpBookInfo:(HLPHelpTableOfContentViewController *)arg1;

@end
