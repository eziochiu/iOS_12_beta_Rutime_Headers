/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSharedAlbumInvitationGadget : UIViewController <PXGadget, PXSharedAlbumInvitationViewDelegate> {
    <PXGadgetDelegate> * _delegate;
    UIView * _divider;
    PXGadgetSpec * _gadgetSpec;
    PXFeedInvitationSectionInfo * _invitationSectionInfo;
    PXSharedAlbumInvitationView * _invitationView;
    bool  _loadedContentData;
    unsigned long long  _priority;
}

@property (nonatomic, readonly) NSString *accessoryButtonTitle;
@property (nonatomic, readonly) unsigned long long accessoryButtonType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXGadgetDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIView *divider;
@property (nonatomic, retain) PXGadgetSpec *gadgetSpec;
@property (nonatomic, readonly) unsigned long long gadgetType;
@property (nonatomic, readonly) bool hasContentToDisplay;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long headerStyle;
@property (nonatomic, retain) PXFeedInvitationSectionInfo *invitationSectionInfo;
@property (nonatomic, retain) PXSharedAlbumInvitationView *invitationView;
@property (nonatomic) bool loadedContentData;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic) unsigned long long priority;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsAssetsDrop;
@property (nonatomic, readonly) bool supportsHighlighting;
@property (nonatomic, readonly) bool supportsSelection;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleContentRect;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (void).cxx_destruct;
- (void)_attemptToNavigateToSharedAlbum:(id)arg1 hostingViewController:(id)arg2;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (struct CGSize { double x1; double x2; })_performLayoutInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 updateSubviewFrames:(bool)arg2;
- (void)_updateInvitationView;
- (struct NSObject { Class x1; }*)contentViewController;
- (void)dealloc;
- (id)delegate;
- (id)divider;
- (id)gadgetSpec;
- (unsigned long long)gadgetType;
- (bool)hasContentToDisplay;
- (bool)hasLoadedContentData;
- (id)init;
- (id)invitationSectionInfo;
- (id)invitationView;
- (void)loadContentData;
- (bool)loadedContentData;
- (unsigned long long)priority;
- (void)setDelegate:(id)arg1;
- (void)setDivider:(id)arg1;
- (void)setGadgetSpec:(id)arg1;
- (void)setInvitationSectionInfo:(id)arg1;
- (void)setInvitationView:(id)arg1;
- (void)setLoadedContentData:(bool)arg1;
- (void)setPriority:(unsigned long long)arg1;
- (void)sharedAlbumInvitationView:(id)arg1 didAccept:(bool)arg2;
- (void)sharedAlbumInvitationView:(id)arg1 presentViewController:(id)arg2;
- (void)sharedAlbumInvitationViewDidReportAsJunk:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)uniqueGadgetIdentifier;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

- (id)px_gridPresentation;
- (id)px_sharePresentation;

@end
