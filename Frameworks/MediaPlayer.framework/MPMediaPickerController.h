/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaPickerController : UIViewController {
    bool  _allowsPickingMultipleItems;
    _UIAsyncInvocation * _cancelRequest;
    <MPMediaPickerControllerDelegate> * _delegate;
    unsigned long long  _mediaTypes;
    id  _modalContext;
    bool  _picksSingleCollectionEntity;
    NSString * _prompt;
    MPRemoteMediaPickerController * _remoteViewController;
    bool  _showsCloudItems;
    bool  _showsItemsWithProtectedAssets;
    unsigned int  _watchCompatibilityVersion;
}

@property (nonatomic) bool allowsPickingMultipleItems;
@property (nonatomic) <MPMediaPickerControllerDelegate> *delegate;
@property (nonatomic, readonly) unsigned long long mediaTypes;
@property (nonatomic, copy) NSString *prompt;
@property (nonatomic) bool showsCloudItems;
@property (nonatomic) bool showsItemsWithProtectedAssets;

+ (void)preheatMediaPicker;

- (void).cxx_destruct;
- (void)_addRemoteView;
- (void)_forceDismissal;
- (bool)_hasAddedRemoteView;
- (void)_pickerDidCancel;
- (void)_pickerDidPickItems:(id)arg1;
- (void)_requestRemoteViewController;
- (void)_resetRemoteViewController;
- (void)_sendSettingsToService;
- (id)_serviceViewControllerProxy;
- (bool)allowsPickingMultipleItems;
- (void)dealloc;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaTypes:(unsigned long long)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (unsigned long long)mediaTypes;
- (bool)picksSingleCollectionEntity;
- (id)prompt;
- (void)remoteMediaPickerDidCancel;
- (void)remoteMediaPickerDidPickMediaItems:(id)arg1;
- (void)setAllowsPickingMultipleItems:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPicksSingleCollectionEntity:(bool)arg1;
- (void)setPrompt:(id)arg1;
- (void)setShowsCloudItems:(bool)arg1;
- (void)setShowsItemsWithProtectedAssets:(bool)arg1;
- (void)setWatchCompatibilityVersion:(unsigned int)arg1;
- (bool)showsCloudItems;
- (bool)showsItemsWithProtectedAssets;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (unsigned int)watchCompatibilityVersion;
- (void)willMoveToParentViewController:(id)arg1;

@end
