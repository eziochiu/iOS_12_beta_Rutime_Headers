/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMSharedAlbumsInvitationsDataSource : PXCMMInvitationsDataSource {
    PXCMMSharedAlbumsInvitationsDataSourceState * __state;
}

@property (nonatomic, readonly) PXCMMSharedAlbumsInvitationsDataSourceState *_state;

- (void).cxx_destruct;
- (id)_state;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })indexPathForObjectReference:(id)arg1;
- (id)initWithState:(id)arg1;
- (id)invitationAtItemIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)invitationForObjectID:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)objectIDAtItemIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;

@end
