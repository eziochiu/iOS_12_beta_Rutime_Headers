/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMTranscriptBubbleViewController : PXTranscriptBubbleViewController <PXChangeObserver, PXPhotoLibraryUIChangeObserver, PXTouchingUIGestureRecognizerDelegate> {
    PHFetchResult * _assetFetch;
    PHFetchResult * _backingFetchResult;
    long long  _bubbleState;
    PXCMMTranscriptBubbleView * _bubbleView;
    NSError * _error;
    PXCMMTranscriptBubbleStatusView * _errorStatusView;
    bool  _highlighted;
    bool  _isMomentShareBacked;
    bool  _isPending;
    bool  _isSender;
    PHFetchResult * _keyAssetFetch;
    PXCMMTranscriptBubbleStatusView * _loadingStatusView;
    <PXUIImageProvider> * _mediaProvider;
    PHPhotoLibrary * _photoLibrary;
    PXCMMPreviewAsset * _previewAsset;
    PXCMMPreviewUIImageProvider * _previewImageProvider;
    PXCMMAssetsProgressListener * _progressListener;
    bool  _readyForBubbleStateTransitions;
    long long  _saveInProgressTotal;
    PXCMMSpecManager * _specManager;
    long long  _targetState;
    <PXCMMTranscriptBubbleTouchDelegate> * _touchDelegate;
    NSURL * _url;
}

@property (nonatomic) long long bubbleState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSError *error;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic, readonly) bool isPending;
@property (nonatomic, readonly) bool isSender;
@property (nonatomic, retain) PXCMMAssetsProgressListener *progressListener;
@property (readonly) Class superclass;
@property (nonatomic) long long targetState;
@property (nonatomic) <PXCMMTranscriptBubbleTouchDelegate> *touchDelegate;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (void)_acceptMomentShareIfNeeded:(id)arg1;
- (void)_autoAcceptMomentShareIfNeeded:(id)arg1;
- (bool)_canFetchAssetsFromMomentShare:(id)arg1;
- (id)_debugStatusDescription;
- (void)_doubleTapGesture:(id)arg1;
- (void)_ensureBubbleStateTransition;
- (id)_fetchAssetsFromBackingCollection;
- (id)_fetchKeyAssetsFromBackingCollection;
- (void)_fetchMomentShareFromNetworkURL:(id)arg1;
- (void)_longPressGesture:(id)arg1;
- (id)_momentShareSubtitle;
- (id)_momentShareTitle;
- (void)_panGesture:(id)arg1;
- (id)_primaryDescription;
- (void)_readyForStateTransition;
- (id)_secondaryDescription;
- (bool)_shouldNavigateToContent;
- (bool)_shouldShowContent;
- (void)_tapGesture:(id)arg1;
- (void)_updateBubbleState;
- (void)_updateBubbleView;
- (void)_updateContent;
- (void)_updateProgressListener;
- (long long)bubbleState;
- (struct CGSize { double x1; double x2; })contentSizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)dealloc;
- (id)description;
- (id)error;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithURL:(id)arg1 isSender:(bool)arg2 isPending:(bool)arg3;
- (bool)isHighlighted;
- (bool)isPending;
- (bool)isSender;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (id)progressListener;
- (void)setBubbleState:(long long)arg1;
- (void)setError:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setProgressListener:(id)arg1;
- (void)setTargetState:(long long)arg1;
- (void)setTouchDelegate:(id)arg1;
- (long long)targetState;
- (id)touchDelegate;
- (void)touchingUIGestureRecognizerDidBeginTouching:(id)arg1;
- (void)touchingUIGestureRecognizerDidEndTouching:(id)arg1;
- (id)url;
- (void)viewDidLoad;

@end
