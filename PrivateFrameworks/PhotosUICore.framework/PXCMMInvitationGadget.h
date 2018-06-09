/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMInvitationGadget : NSObject <PXChangeObserver, PXGadget> {
    PXCMMAssetsProgressListener * _assetsProgressListener;
    UIColor * _backgroundColor;
    <PXGadgetDelegate> * _delegate;
    bool  _didLoadContentData;
    PXGadgetSpec * _gadgetSpec;
    <PXCMMInvitation> * _invitation;
    <PXCMMInvitationGadgetDelegate> * _invitationGadgetDelegate;
    PXCMMInvitationView * _invitationView;
    NSManagedObjectID * _objectID;
    <PXCMMInvitation> * _pendingInvitation;
}

@property (nonatomic, readonly) NSString *accessoryButtonTitle;
@property (nonatomic, readonly) unsigned long long accessoryButtonType;
@property (nonatomic, retain) PXCMMAssetsProgressListener *assetsProgressListener;
@property (nonatomic, copy) UIColor *backgroundColor;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXGadgetDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PXGadgetSpec *gadgetSpec;
@property (nonatomic, readonly) unsigned long long gadgetType;
@property (nonatomic, readonly) bool hasContentToDisplay;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long headerStyle;
@property (nonatomic, retain) <PXCMMInvitation> *invitation;
@property (nonatomic) <PXCMMInvitationGadgetDelegate> *invitationGadgetDelegate;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, retain) NSManagedObjectID *objectID;
@property (nonatomic) unsigned long long priority;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsAssetsDrop;
@property (nonatomic, readonly) bool supportsHighlighting;
@property (nonatomic, readonly) bool supportsSelection;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleContentRect;

- (void).cxx_destruct;
- (void)_loadInvitation:(id)arg1;
- (void)_registerAssetsProgressListener;
- (void)_tapGesture:(id)arg1;
- (void)_updateStatusString;
- (id)assetsProgressListener;
- (id)backgroundColor;
- (struct NSObject { Class x1; }*)contentView;
- (id)delegate;
- (id)gadgetSpec;
- (unsigned long long)gadgetType;
- (bool)hasContentToDisplay;
- (bool)hasLoadedContentData;
- (id)invitation;
- (id)invitationGadgetDelegate;
- (void)loadContentData;
- (id)objectID;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)ppt_presentDetailView;
- (void)presentInvitation;
- (void)setAssetsProgressListener:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGadgetSpec:(id)arg1;
- (void)setInvitation:(id)arg1;
- (void)setInvitationGadgetDelegate:(id)arg1;
- (void)setObjectID:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)supportsHighlighting;
- (bool)supportsSelection;
- (id)uniqueGadgetIdentifier;

@end
