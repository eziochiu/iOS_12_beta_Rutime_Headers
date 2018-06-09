/* made by EzioChiu.
 */

@protocol MPAVQueueCoordinatorDataSource <NSObject>

@required

- (MPAVItem *)queueCoordinator:(MPAVQueueCoordinator *)arg1 itemToFollowItem:(MPAVItem *)arg2;

@optional

- (void)queueCoordinator:(MPAVQueueCoordinator *)arg1 failedToLoadItem:(MPAVItem *)arg2;
- (void)queueCoordinator:(MPAVQueueCoordinator *)arg1 willInsertItem:(MPAVItem *)arg2 afterItem:(MPAVItem *)arg3;
- (void)queueCoordinatorDidChangeItems:(MPAVQueueCoordinator *)arg1;

@end
