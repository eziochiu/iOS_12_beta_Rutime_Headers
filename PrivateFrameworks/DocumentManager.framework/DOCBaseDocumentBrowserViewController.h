/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
 */

@interface DOCBaseDocumentBrowserViewController : UIDocumentBrowserViewController <DOCDocumentBrowserDelegate> {
    DOCBrowserViewController * _effectiveBrowserViewController;
    bool  _requestingDocumentCreation;
    NSArray * _selectedItems;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) DOCBrowserViewController *effectiveBrowserViewController;
@property (readonly) unsigned long long hash;
@property (copy) NSArray *selectedItems;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)browser:(id)arg1 didCommitPreviewOfDocument:(id)arg2;
- (void)browser:(id)arg1 didPickItem:(id)arg2;
- (void)browser:(id)arg1 didResolveShownLocation:(id)arg2 previousLocation:(id)arg3;
- (void)browser:(id)arg1 didSelectItems:(id)arg2;
- (void)browser:(id)arg1 didUpdateCurrentLocationCanSelect:(bool)arg2;
- (void)browser:(id)arg1 didUpdateCurrentLocationIsWritable:(bool)arg2;
- (void)browser:(id)arg1 didUpdateImportSupportInCurrentLocation:(bool)arg2;
- (void)browser:(id)arg1 didUpdateNumberOfSelectableItems:(unsigned long long)arg2;
- (void)browser:(id)arg1 isDisplayingEmptyCollection:(bool)arg2;
- (void)browser:(id)arg1 wantsToShowInfoForItem:(id)arg2;
- (void)browser:(id)arg1 wantsToShowLocation:(id)arg2 forceReplaceLocation:(bool)arg3;
- (void)browserDidFinishGatheringItemsAndThumbnails:(id)arg1;
- (void)browserWantsToCreateNewFile:(id)arg1;
- (void)browserWantsToCreateNewFolder:(id)arg1 maxThumbnailSize:(struct CGSize { double x1; double x2; })arg2;
- (void)clearCurrentOpenInteraction;
- (void)createDocumentAtCurrentLocation;
- (void)createDocumentAtLocation:(id)arg1;
- (void)dismissAllPresentedViewControllers:(bool)arg1 completion:(id /* block */)arg2;
- (void)dismissButtonWasTappedInBrowser:(id)arg1;
- (void)dismissDocumentManager;
- (id)effectiveBrowserViewController;
- (void)importDocumentAtURL:(id)arg1 mode:(unsigned long long)arg2 toCurrentBrowserLocationWithCompletion:(id /* block */)arg3;
- (void)importDocumentAtURL:(id)arg1 mode:(unsigned long long)arg2 toLocation:(id)arg3 completion:(id /* block */)arg4;
- (void)importDocumentAtURL:(id)arg1 nextToDocumentAtURL:(id)arg2 mode:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)locationsButtonWasTappedInBrowser:(id)arg1 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)notifyDelegateOfImportOfURL:(id)arg1 destinationURL:(id)arg2 error:(id)arg3;
- (void)revealDocumentAtURL:(id)arg1 importIfNeeded:(bool)arg2 completion:(id /* block */)arg3;
- (id)selectedItems;
- (void)setSelectedItems:(id)arg1;
- (void)showContentForLocation:(id)arg1;
- (void)showLocation:(id)arg1 animated:(bool)arg2 withCompletionBlock:(id /* block */)arg3;
- (id)transitionControllerForDocumentURL:(id)arg1;
- (void)viewDidLoad;

@end