/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIMediaEntityDownloadViewController : UIViewController <VUIMediaEntityAssetControllerDelegate, VUIMediaEntityDownloadViewDelegate> {
    NSObject<VUIMediaEntityAssetController> * _assetController;
    <VUIMediaEntityDownloadViewControllerDelegate> * _delegate;
    VUIMediaEntityDownloadView * _downloadView;
    bool  _leftJustifiedImageEnabled;
}

@property (nonatomic, retain) NSObject<VUIMediaEntityAssetController> *assetController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VUIMediaEntityDownloadViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) VUIMediaEntityDownloadView *downloadView;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool leftJustifiedImageEnabled;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_startDownloadIfPossible;
- (void)_updateView;
- (id)assetController;
- (void)dealloc;
- (id)delegate;
- (id)downloadView;
- (void)downloadViewDidRequestCancelDownload:(id)arg1;
- (void)downloadViewDidRequestRemoveDownload:(id)arg1;
- (void)downloadViewDidRequestStartDownload:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaEntityAssetController:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)leftJustifiedImageEnabled;
- (void)loadView;
- (void)mediaEntityAssetController:(id)arg1 stateDidChange:(unsigned long long)arg2 downloadProgress:(double)arg3;
- (void)setAssetController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDownloadView:(id)arg1;
- (void)setLeftJustifiedImageEnabled:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
