/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
 */

@interface DCDocumentEditorViewController : UINavigationController <ICDocCamExtractedDocumentControllerDelegate, ICDocCamViewControllerDelegate, UINavigationControllerDelegate, UIViewControllerTransitioningDelegate> {
    <DCDocumentEditorViewControllerDelegate> * _docCamDelegate;
    ICDocCamDocumentInfoCollection * _docInfoCollection;
    ICDocCamExtractedDocumentViewController * _extractedDocumentController;
    UIImage * _filteredImageForRecrop;
    ICDocCamImageCache * _imageCache;
    NSIndexPath * _indexPathForRecrop;
    long long  _orientationForRecrop;
    DCScannedDocument * _scannedDocument;
    UIView * _sourceViewForZoomTransition;
    UIImage * _unfilteredImageForRecrop;
    bool  _useCustomRecropTransition;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <DCDocumentEditorViewControllerDelegate> *docCamDelegate;
@property (nonatomic, retain) ICDocCamDocumentInfoCollection *docInfoCollection;
@property (nonatomic, retain) ICDocCamExtractedDocumentViewController *extractedDocumentController;
@property (nonatomic, retain) UIImage *filteredImageForRecrop;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ICDocCamImageCache *imageCache;
@property (nonatomic, retain) NSIndexPath *indexPathForRecrop;
@property (nonatomic) long long orientationForRecrop;
@property (nonatomic, retain) DCScannedDocument *scannedDocument;
@property (nonatomic, retain) UIView *sourceViewForZoomTransition;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIImage *unfilteredImageForRecrop;
@property (nonatomic) bool useCustomRecropTransition;

+ (id)activityTypeOrder;
+ (id)docInfoCollectionFromScannedDocument:(id)arg1 imageCache:(id)arg2;
+ (bool)isAvailable;

- (void).cxx_destruct;
- (void)_autoDismiss;
- (void)didReceiveMemoryWarning;
- (id)docCamDelegate;
- (id)docInfoCollection;
- (bool)documentCameraController:(id)arg1 canAddImages:(unsigned long long)arg2;
- (void)documentCameraController:(id)arg1 didFinishWithDocInfoCollection:(id)arg2 imageCache:(id)arg3 warnUser:(bool)arg4;
- (void)documentCameraController:(id)arg1 didFinishWithDocInfoCollection:(id)arg2 imageCache:(id)arg3 warnUser:(bool)arg4 closeViewController:(bool)arg5;
- (id)documentCameraControllerCreateDataCryptorIfNecessary;
- (void)documentCameraControllerDidCancel:(id)arg1;
- (id)documentCameraControllerImageCache;
- (id)extractedDocumentController;
- (void)extractedDocumentController:(id)arg1 didTapRecrop:(id)arg2 index:(long long)arg3;
- (void)extractedDocumentController:(id)arg1 shareDocument:(id)arg2 sender:(id)arg3;
- (void)extractedDocumentControllerDidChangeTitle:(id)arg1;
- (void)extractedDocumentControllerDidSelectCopyFromMenuForDocument:(id)arg1;
- (void)extractedDocumentControllerDidSelectShareFromMenuForDocument:(id)arg1 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 sourceView:(id)arg3;
- (void)extractedDocumentControllerDidTapAddImage;
- (void)extractedDocumentControllerDidTapDone:(unsigned long long)arg1;
- (void)extractedDocumentControllerDidTapDone:(unsigned long long)arg1 scanDataDelegate:(id)arg2;
- (void)extractedDocumentControllerDidTapRetake:(unsigned long long)arg1;
- (void)extractedDocumentControllerDiscardMarkupModelDataForDocument:(id)arg1;
- (id)extractedDocumentControllerMarkupModelDataForDocument:(id)arg1;
- (id)extractedDocumentControllerTitle;
- (id)filteredImageForRecrop;
- (id)imageCache;
- (id)indexPathForRecrop;
- (id)initWithDelegate:(id)arg1 scannedDocument:(id)arg2;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (long long)orientationForRecrop;
- (id)scanDataDelegateWithIdentifier:(id)arg1;
- (id)scannedDocument;
- (void)setDocCamDelegate:(id)arg1;
- (void)setDocInfoCollection:(id)arg1;
- (void)setExtractedDocumentController:(id)arg1;
- (void)setFilteredImageForRecrop:(id)arg1;
- (void)setImageCache:(id)arg1;
- (void)setIndexPathForRecrop:(id)arg1;
- (void)setOrientationForRecrop:(long long)arg1;
- (void)setScannedDocument:(id)arg1;
- (void)setSourceViewForZoomTransition:(id)arg1;
- (void)setUnfilteredImageForRecrop:(id)arg1;
- (void)setUseCustomRecropTransition:(bool)arg1;
- (id)sourceViewForZoomTransition;
- (id)unfilteredImageForRecrop;
- (bool)useCustomRecropTransition;
- (void)viewDidLoad;

@end
