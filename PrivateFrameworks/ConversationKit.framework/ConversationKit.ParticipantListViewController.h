/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
 */

@interface ConversationKit.ParticipantListViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDragDelegate> {
    void collectionViewDataSource;
    void lastLayedOutViewSize;
    void participantsViewControllerDelegate;
    void viewContent;
}

- (id /* block */).cxx_destruct;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (bool)collectionView:(id)arg1 dragSessionIsRestrictedToDraggingApplication:(id)arg2;
- (id)collectionView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
