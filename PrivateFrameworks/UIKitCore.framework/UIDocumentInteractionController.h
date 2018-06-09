/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIDocumentInteractionController : NSObject <QLPreviewControllerDelegate, UIActionSheetDelegate, _UIDICActivityViewControllerDelegate> {
    _UIDICActivityViewController * _activityViewController;
    id  _annotation;
    id /* block */  _completionWithItemsHandler;
    NSURL * _decompressedArchiveDocumentURL;
    <UIDocumentInteractionControllerDelegate> * _delegate;
    struct { 
        unsigned int delegateViewControllerForPreview : 1; 
        unsigned int delegateRectForPreview : 1; 
        unsigned int delegateViewForPreview : 1; 
        unsigned int delegateWillBeginPreview : 1; 
        unsigned int delegateDidEndPreviewPreview : 1; 
        unsigned int delegateWillPresentOptionsMenu : 1; 
        unsigned int delegateDidDismissOptionsMenu : 1; 
        unsigned int delegateWillPresentOpenInMenu : 1; 
        unsigned int delegateDidDismissOpenInMenu : 1; 
        unsigned int delegateWillBeginSendingToApplication : 1; 
        unsigned int delegateDidEndSendingToApplication : 1; 
        unsigned int delegateCanPerformAction : 1; 
        unsigned int delegatePerformAction : 1; 
        unsigned int delegateArchiveDecompressionRootURL : 1; 
        unsigned int delegateExcludesActivities : 1; 
        unsigned int delegateAddsActivities : 1; 
        unsigned int delegateProvidesActivityItem : 1; 
        unsigned int delegateProvidesPrintInfo : 1; 
        unsigned int transitionImageForPreview : 1; 
        unsigned int documentProxyForPreview : 1; 
        unsigned int showingOptionsMenu : 1; 
        unsigned int showingOpenInMenu : 1; 
    }  _documentInteractionControllerFlags;
    bool  _excludeDotFilesFromArchiveListings;
    NSArray * _gestureRecognizers;
    NSArray * _icons;
    UIPopoverController * _popoverController;
    UIBarButtonItem * _presentItem;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _presentRect;
    UIView * _presentView;
    UIViewController * _presentingViewController;
    QLPreviewController * _previewController;
    _UIDICPreviewItem * _previewControllerItem;
    bool  _previewsPresentWithMarkup;
    bool  _shouldDecompressArchiveIfNecessary;
    bool  _sourceIsManaged;
    NSURL * _tmpURLToDeleteOnDealloc;
    NSString * _uniqueIdentifier;
}

@property (retain) NSURL *URL;
@property (nonatomic, copy) NSString *UTI;
@property (getter=_completionWithItemsHandler, setter=_setCompletionWithItemsHandler:, nonatomic, copy) id /* block */ _completionWithItemsHandler;
@property (nonatomic, retain) _UIDICActivityViewController *activityViewController;
@property (nonatomic, retain) id annotation;
@property (getter=isArchive, nonatomic, readonly) bool archive;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIDocumentInteractionControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool excludeDotFilesFromArchiveListings;
@property (nonatomic, readonly) NSArray *gestureRecognizers;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *icons;
@property (copy) NSString *name;
@property (nonatomic, retain) UIPopoverController *popoverController;
@property (nonatomic, readonly) QLPreviewController *previewController;
@property (nonatomic, readonly) _UIDICPreviewItem *previewControllerItem;
@property (nonatomic) bool previewsPresentWithMarkup;
@property (nonatomic) bool shouldUnzipDocument;
@property (nonatomic) bool sourceIsManaged;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *uniqueIdentifier;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)_UTIForFileURL:(id)arg1;
+ (id)_archiveDecompressQueue;
+ (id)interactionControllerWithURL:(id)arg1;

- (void).cxx_destruct;
- (id)URL;
- (id)UTI;
- (id)__decompressArchiveAndSetupPayload:(id)arg1 completion:(id /* block */)arg2;
- (void)__openUsingDefaultCopyMechanismToTransferDocumentToApplication:(id)arg1;
- (void)__openUsingInPlaceMechanismToTransferDocumentToApplication:(id)arg1;
- (void)__performLaunchServiceDocumentOpenWithApplication:(id)arg1 launchServiceOptions:(id)arg2;
- (bool)__presentPreviewAnimated:(bool)arg1;
- (unsigned long long)_archiveExtractionOptions;
- (bool)_canPreviewDecompressedArchive;
- (bool)_canSaveToCameraRollForType;
- (void)_clearPreviousPresentationContext;
- (id /* block */)_completionWithItemsHandler;
- (void)_decompressArchiveAndSetupPayload:(id /* block */)arg1;
- (id)_decompressedArchiveDocumentURL;
- (id)_defaultApplication;
- (bool)_delegateCanPerformAction:(SEL)arg1;
- (bool)_delegateExistsAndImplementsRequiredMethods:(id*)arg1;
- (bool)_delegateImplementsLegacyActions;
- (bool)_delegatePerformAction:(SEL)arg1;
- (void)_dismissEverythingWithExtremePrejudiceAnimated:(bool)arg1;
- (bool)_documentNeedsHelpDecompressingArchiveForPreview;
- (id)_documentProxy;
- (id)_documentProxySourceIsManaged:(bool)arg1;
- (void)_fixupFileExtensionIfNeeded;
- (void)_invalidate;
- (void)_invokeDelegateDidFinishOpenWithApplicationIdentifier:(id)arg1;
- (void)_invokeDelegateWillBeginOpenWithApplicationIdentifier:(id)arg1;
- (bool)_isFilenameValidForDecompressing:(id)arg1 allowsPreviewingArchive:(bool)arg2;
- (bool)_isImage;
- (bool)_isPackageArchive:(id)arg1;
- (bool)_isValidURL:(id)arg1;
- (id)_newActivityIfNecessaryForLegacyActionDelegatingWithAction:(SEL)arg1;
- (id)_newPreviewActivity;
- (void)_openDocumentInPlaceWithApplication:(id)arg1;
- (void)_openDocumentWithApplication:(id)arg1;
- (id)_pathsInArchive:(id /* block */)arg1;
- (id)_preferredApplicationForDocumentOpening;
- (id)_preparedActivityViewControllerWithItems:(id)arg1 activities:(id)arg2 options:(unsigned long long)arg3;
- (bool)_presentOpenInMenuAnimated:(bool)arg1 willPresentBlock:(id /* block */)arg2;
- (void)_presentOptionsMenu:(id)arg1;
- (bool)_presentOptionsMenuAnimated:(bool)arg1 willPresentBlock:(id /* block */)arg2;
- (void)_presentPreview:(id)arg1;
- (void)_setCompletionWithItemsHandler:(id /* block */)arg1;
- (void)_setDecompressedArchiveDocumentURL:(id)arg1;
- (bool)_setupForOpenInMenu;
- (bool)_setupForOptionsMenu;
- (bool)_setupPreviewController;
- (bool)_shouldAutoDecompressIfArchive;
- (bool)_shouldAutoDecompressIfArchiveForPreview;
- (bool)_shouldIncludeActivityForLegacyDelegatingWithAction:(SEL)arg1;
- (bool)_shouldIncludePreviewActivity;
- (bool)_shouldReturnDefaultApplication;
- (void)_updateURLSourceIsManaged;
- (id)activityViewController;
- (void)activityViewController:(id)arg1 didFinishPerformingActivityType:(id)arg2 completed:(bool)arg3 items:(id)arg4 error:(id)arg5;
- (void)activityViewController:(id)arg1 didFinishPresentingActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 mailSubjectForActivityType:(id)arg2;
- (void)activityViewController:(id)arg1 openActivityDidEndSendingToApplication:(id)arg2;
- (void)activityViewController:(id)arg1 openActivityWillBeginSendingToApplication:(id)arg2;
- (id)annotation;
- (void)dealloc;
- (id)delegate;
- (id)dismissActionsForPreviewController:(id)arg1;
- (void)dismissMenuAnimated:(bool)arg1;
- (void)dismissPreviewAnimated:(bool)arg1;
- (bool)excludeDotFilesFromArchiveListings;
- (id)excludedActivityTypesForPreviewController:(id)arg1;
- (id)extractSubitemFromArchive:(id)arg1 completion:(id /* block */)arg2;
- (id)gestureRecognizers;
- (id)icons;
- (id)initWithURL:(id)arg1;
- (bool)isArchive;
- (void)markupAction:(id)arg1;
- (id)name;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
- (void)openDocumentWithDefaultApplication;
- (void)openResourceOperation:(id)arg1 didFinishCopyingResource:(id)arg2;
- (id)popoverController;
- (void)popoverController:(id)arg1 animationCompleted:(long long)arg2;
- (bool)presentOpenInMenuFromBarButtonItem:(id)arg1 animated:(bool)arg2;
- (bool)presentOpenInMenuFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2 animated:(bool)arg3;
- (bool)presentOptionsMenuFromBarButtonItem:(id)arg1 animated:(bool)arg2;
- (bool)presentOptionsMenuFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2 animated:(bool)arg3;
- (bool)presentPreviewAnimated:(bool)arg1;
- (id)presentingNavigationController;
- (id)previewController;
- (bool)previewController:(id)arg1 canEditItem:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id*)arg3;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (bool)previewController:(id)arg1 shouldSaveEditedItem:(id)arg2;
- (id)previewController:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3;
- (void)previewController:(id)arg1 updatedContentsURL:(id)arg2 forEditedItem:(id)arg3;
- (void)previewControllerDidDismiss:(id)arg1;
- (id)previewControllerItem;
- (bool)previewsPresentWithMarkup;
- (void)setActivityViewController:(id)arg1;
- (void)setAnnotation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExcludeDotFilesFromArchiveListings:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setPopoverController:(id)arg1;
- (void)setPreviewURLOverride:(id)arg1;
- (void)setPreviewsPresentWithMarkup:(bool)arg1;
- (void)setShouldUnzipDocument:(bool)arg1;
- (void)setSourceIsManaged:(bool)arg1;
- (void)setURL:(id)arg1;
- (void)setUTI:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (bool)shouldUnzipDocument;
- (bool)sourceIsManaged;
- (id)subitemsInArchive:(id /* block */)arg1;
- (id)uniqueIdentifier;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

+ (id)_sf_interactionControllerWithDocumentURL:(id)arg1 sourceURL:(id)arg2;

@end
