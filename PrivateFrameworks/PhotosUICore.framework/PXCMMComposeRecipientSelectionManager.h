/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMComposeRecipientSelectionManager : NSObject {
    PXCMMComposeRecipientDataSource * _dataSource;
    <PXCMMComposeRecipientSelectionManagerDelegate> * _delegate;
    NSMutableOrderedSet * _selectedComposeRecipients;
    NSMutableOrderedSet * _selectedRecipients;
    PXCMMComposeRecipientSelectionSnapshot * _selectionSnapshot;
}

@property (nonatomic, readonly) PXCMMComposeRecipientDataSource *dataSource;
@property (nonatomic) <PXCMMComposeRecipientSelectionManagerDelegate> *delegate;
@property (nonatomic, retain) PXCMMComposeRecipientSelectionSnapshot *selectionSnapshot;

+ (id)new;

- (void).cxx_destruct;
- (id)_createComposeRecipientSelectionSnapshotFromCurrentState;
- (void)_invalidateCurrentSelectionSnapshotWithChangedComposeRecipients:(id)arg1;
- (id)_setSelectedState:(bool)arg1 forComposeRecipients:(id)arg2;
- (id)dataSource;
- (id)delegate;
- (id)init;
- (id)initWithDataSource:(id)arg1;
- (void)selectAll;
- (id)selectionSnapshot;
- (void)setDataSource:(id)arg1 changeDetails:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setSelectedState:(bool)arg1 atIndex:(long long)arg2;
- (void)setSelectionSnapshot:(id)arg1;

@end
