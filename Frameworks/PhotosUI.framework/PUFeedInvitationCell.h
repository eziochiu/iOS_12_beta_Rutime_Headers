/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUFeedInvitationCell : PUFeedCell <PXSharedAlbumInvitationViewDelegate> {
    PXFeedInvitationSectionInfo * _invitationSectionInfo;
    PXSharedAlbumInvitationView * _invitationView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXFeedInvitationSectionInfo *invitationSectionInfo;
@property (nonatomic, retain) PXSharedAlbumInvitationView *invitationView;
@property (readonly) Class superclass;
@property (nonatomic) bool usePopoverColors;

- (void).cxx_destruct;
- (id)_delegate;
- (struct CGSize { double x1; double x2; })_performLayoutInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 updateSubviewFrames:(bool)arg2;
- (void)_updateInvitationView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)invitationSectionInfo;
- (id)invitationView;
- (void)layoutSubviews;
- (void)setInvitationSectionInfo:(id)arg1;
- (void)setInvitationView:(id)arg1;
- (void)setUsePopoverColors:(bool)arg1;
- (void)sharedAlbumInvitationView:(id)arg1 didAccept:(bool)arg2;
- (void)sharedAlbumInvitationView:(id)arg1 presentViewController:(id)arg2;
- (void)sharedAlbumInvitationViewDidReportAsJunk:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)usePopoverColors;

@end
