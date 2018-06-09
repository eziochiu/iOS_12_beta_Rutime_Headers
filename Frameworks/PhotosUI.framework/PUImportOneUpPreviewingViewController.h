/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUImportOneUpPreviewingViewController : UIViewController {
    PUImportItemViewModel * _importItemViewModel;
    PUImportMediaProvider * _mediaProvider;
    PUImportOneUpTransitionView * _previewView;
}

@property (nonatomic, retain) PUImportItemViewModel *importItemViewModel;
@property (nonatomic, retain) PUImportMediaProvider *mediaProvider;
@property (nonatomic, retain) PUImportOneUpTransitionView *previewView;

- (void).cxx_destruct;
- (id)importItemViewModel;
- (id)initWithImportItemViewModel:(id)arg1 mediaProvider:(id)arg2;
- (id)mediaProvider;
- (id)previewView;
- (void)setImportItemViewModel:(id)arg1;
- (void)setMediaProvider:(id)arg1;
- (void)setPreviewView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForImportItemViewModel:(id)arg1;
- (void)updatePreferredContentSize;
- (void)viewDidLoad;

@end
