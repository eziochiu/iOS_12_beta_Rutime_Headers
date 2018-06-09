/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXForYouSuggestionGadget : NSObject <PXGadget, PXPhotoLibraryUIChangeObserver> {
    bool  _blursDegradedContent;
    struct CGSize { 
        double width; 
        double height; 
    }  _cachedHeightForWidth;
    bool  _contentHidden;
    PXForYouSuggestionGadgetContentView * _contentView;
    <PXForYouSuggestionGadgetDelegate> * _delegate;
    PXGadgetSpec * _gadgetSpec;
    <PXDisplayAsset> * _keyAsset;
    PXUIMediaProvider * _mediaProvider;
    unsigned long long  _priority;
    <PXDisplaySuggestion> * _suggestion;
}

@property (nonatomic, readonly) NSString *accessoryButtonTitle;
@property (nonatomic, readonly) unsigned long long accessoryButtonType;
@property (nonatomic) bool blursDegradedContent;
@property (nonatomic) struct CGSize { double x1; double x2; } cachedHeightForWidth;
@property (getter=isContentHidden, nonatomic) bool contentHidden;
@property (nonatomic, retain) PXForYouSuggestionGadgetContentView *contentView;
@property (nonatomic, readonly) UIImage *currentImage;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXForYouSuggestionGadgetDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PXGadgetSpec *gadgetSpec;
@property (nonatomic, readonly) unsigned long long gadgetType;
@property (nonatomic, readonly) bool hasContentToDisplay;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long headerStyle;
@property (nonatomic, retain) <PXDisplayAsset> *keyAsset;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, retain) PXUIMediaProvider *mediaProvider;
@property (nonatomic) unsigned long long priority;
@property (nonatomic, retain) <PXDisplaySuggestion> *suggestion;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsAssetsDrop;
@property (nonatomic, readonly) bool supportsHighlighting;
@property (nonatomic, readonly) bool supportsSelection;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleContentRect;

+ (id)fetchQueue;
+ (id)placeholderFilters;
+ (void)preloadResources;

- (void).cxx_destruct;
- (void)_handleContentViewTap:(id)arg1;
- (void)_handleDismiss;
- (void)_markSuggestionAsActive;
- (void)_markSuggestionAsDeclined;
- (bool)blursDegradedContent;
- (struct CGSize { double x1; double x2; })cachedHeightForWidth;
- (void)commitPreviewViewController:(id)arg1;
- (void)contentHasBeenSeen;
- (id)contentView;
- (id)currentImage;
- (void)dealloc;
- (id)debugDictionary;
- (id)debugURLsForDiagnostics;
- (id)delegate;
- (void)didDismissPreviewViewController:(id)arg1 committing:(bool)arg2;
- (void)gadgetControllerHasAppeared;
- (id)gadgetSpec;
- (unsigned long long)gadgetType;
- (bool)hasContentToDisplay;
- (id)init;
- (id)initWithSuggestion:(id)arg1;
- (bool)isContentHidden;
- (id)keyAsset;
- (id)mediaProvider;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (struct NSObject { Class x1; }*)previewViewControllerAtLocation:(struct CGPoint { double x1; double x2; })arg1 fromSourceView:(struct NSObject { Class x1; }*)arg2 outSourceRect:(out struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3;
- (unsigned long long)priority;
- (id)regionOfInterestForOneUpTransitionInCoordinateSpace:(id)arg1;
- (void)setBlursDegradedContent:(bool)arg1;
- (void)setCachedHeightForWidth:(struct CGSize { double x1; double x2; })arg1;
- (void)setContentHidden:(bool)arg1;
- (void)setContentView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGadgetSpec:(id)arg1;
- (void)setKeyAsset:(id)arg1;
- (void)setMediaProvider:(id)arg1;
- (void)setPriority:(unsigned long long)arg1;
- (void)setSuggestion:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)suggestion;
- (id)uniqueGadgetIdentifier;

@end
