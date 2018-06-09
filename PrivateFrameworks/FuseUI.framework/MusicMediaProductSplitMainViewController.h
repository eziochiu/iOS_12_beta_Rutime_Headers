/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicMediaProductSplitMainViewController : UIViewController <MusicClientContextConsuming, MusicLibraryBrowseTableViewControllerDelegate, MusicMediaDetailSplitViewController, MusicProductAdditionalMetadataViewControllerDelegate, MusicVerticalScrollingContainerViewControllerDelegate> {
    MusicClientContext * _clientContext;
    <MusicEntityProviding> * _containerEntityProvider;
    MusicEntityValueContext * _containerEntityValueContext;
    unsigned long long  _editableComponents;
    UIImage * _editedContentArtworkImage;
    NSString * _editedContentTitle;
    bool  _forContentCreation;
    UIViewController * _headerContentViewController;
    MusicMediaDetailTintInformation * _mediaDetailTintInformation;
    <MusicMediaDetailSplitViewControllerDelegate> * _mediaSplitViewControllerDelegate;
    long long  _presentationSource;
    MusicProductAdditionalMetadataViewController * _productAdditionalMetadataViewController;
    long long  _productDescriptionTextStyle;
    UIViewController * _relatedContentViewController;
    <MusicEntityProviding> * _tracklistEntityProvider;
    MusicProductTracklistTableViewConfiguration * _tracklistTableViewConfiguration;
    MusicProductTracklistTableViewController * _tracklistTableViewController;
    bool  _trailingSeparatorInsetFollowsLayoutInsets;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _verticalScrollingContainerContentInsetAdditions;
    MusicVerticalScrollingContainerViewController * _verticalScrollingContainerViewController;
}

@property (nonatomic, readonly) MusicEntityValueContext *_containerEntityValueContext;
@property (nonatomic, readonly) MusicProductTracklistTableViewController *_tracklistTableViewController;
@property (nonatomic, readonly) MusicVerticalScrollingContainerViewController *_verticalScrollingContainerViewController;
@property (nonatomic, retain) MusicClientContext *clientContext;
@property (nonatomic, readonly) <MusicEntityProviding> *containerEntityProvider;
@property (nonatomic, readonly) UIScrollView *containerScrollView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long editableComponents;
@property (nonatomic, retain) UIImage *editedContentArtworkImage;
@property (nonatomic, copy) NSString *editedContentTitle;
@property (getter=isForContentCreation, nonatomic, readonly) bool forContentCreation;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIViewController *headerContentViewController;
@property (nonatomic, copy) MusicMediaDetailTintInformation *mediaDetailTintInformation;
@property (nonatomic) <MusicMediaDetailSplitViewControllerDelegate> *mediaSplitViewControllerDelegate;
@property (nonatomic, readonly) long long presentationSource;
@property (nonatomic) long long productDescriptionTextStyle;
@property (nonatomic) long long prominentTrackStoreID;
@property (nonatomic, retain) UIViewController *relatedContentViewController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <MusicEntityProviding> *tracklistEntityProvider;
@property (nonatomic) bool trailingSeparatorInsetFollowsLayoutInsets;

- (void).cxx_destruct;
- (void)_commitEditingWithTracklistEntityProviderChangeRecords:(id)arg1;
- (void)_configureProductAdditionalMetadataViewController:(id)arg1;
- (void)_configureWithTintInformation;
- (void)_containerEntityProviderDidInvalidateNotification:(id)arg1;
- (id)_containerEntityValueContext;
- (id)_loadProductHeaderLockupContentDescriptor;
- (id)_loadProductTracklistTableViewConfigurationWithTracklistEntityProvider:(id)arg1;
- (void)_prepareToCommitEditingWithCompletionHandler:(id /* block */)arg1;
- (id)_productAdditionalMetadataViewController;
- (void)_reloadContainerEntityValueContextProperties;
- (void)_reloadVerticalScrollingContainerItems;
- (void)_setContentOverlayInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)_tracklistTableViewController;
- (id)_verticalScrollingContainerViewController;
- (void)cancelEditing;
- (id)clientContext;
- (void)commitEditing;
- (id)containerEntityProvider;
- (id)containerScrollView;
- (id)contentScrollView;
- (void)dealloc;
- (unsigned long long)editableComponents;
- (id)editedContentArtworkImage;
- (id)editedContentTitle;
- (id)headerContentViewController;
- (id)initWithContainerEntityProvider:(id)arg1 tracklistEntityProvider:(id)arg2 clientContext:(id)arg3 presentationSource:(long long)arg4 forContentCreation:(bool)arg5;
- (bool)isForContentCreation;
- (void)libraryBrowseTableViewControllerDidFinishContentHeightAnimation:(id)arg1;
- (void)libraryBrowseTableViewControllerWillBeginContentHeightAnimation:(id)arg1;
- (id)mediaDetailTintInformation;
- (id)mediaSplitViewControllerDelegate;
- (bool)music_handleUserActivityContext:(id)arg1 containerItem:(id)arg2;
- (long long)presentationSource;
- (void)productAdditionalMetadataViewControllerDidFinishContentHeightAnimation:(id)arg1;
- (void)productAdditionalMetadataViewControllerWillBeginContentHeightAnimation:(id)arg1;
- (long long)productDescriptionTextStyle;
- (long long)prominentTrackStoreID;
- (id)relatedContentViewController;
- (void)setClientContext:(id)arg1;
- (void)setEditableComponents:(unsigned long long)arg1;
- (void)setEditedContentArtworkImage:(id)arg1;
- (void)setEditedContentTitle:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setHeaderContentViewController:(id)arg1;
- (void)setMediaDetailTintInformation:(id)arg1;
- (void)setMediaSplitViewControllerDelegate:(id)arg1;
- (void)setProductDescriptionTextStyle:(long long)arg1;
- (void)setProminentTrackStoreID:(long long)arg1;
- (void)setRelatedContentViewController:(id)arg1;
- (void)setTrailingSeparatorInsetFollowsLayoutInsets:(bool)arg1;
- (id)tracklistEntityProvider;
- (bool)trailingSeparatorInsetFollowsLayoutInsets;
- (void)verticalScrollingContainerViewController:(id)arg1 willEndDraggingWithVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)verticalScrollingContainerViewControllerContentSizeDidChange:(id)arg1;
- (void)verticalScrollingContainerViewControllerDidScroll:(id)arg1;
- (void)viewDidLoad;

@end
