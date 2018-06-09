/* made by EzioChiu.
 */

@protocol DOCSourceViewControllerDelegate <NSObject>

@optional

- (void)sourceViewController:(DOCSourceViewController *)arg1 didPickItem:(DOCItem *)arg2;
- (void)sourceViewController:(DOCSourceViewController *)arg1 didSelectLocation:(DOCConcreteLocation *)arg2;
- (bool)sourceViewControllerIsCollapsed:(DOCSourceViewController *)arg1;

@end
