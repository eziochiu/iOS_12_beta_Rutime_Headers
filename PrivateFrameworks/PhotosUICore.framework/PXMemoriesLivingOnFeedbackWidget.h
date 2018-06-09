/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMemoriesLivingOnFeedbackWidget : NSObject <PXWidget> {
    struct NSObject { Class x1; } * _contentView;
    PXPhotosDetailsContext * _context;
    NSArray * _featureViews;
    NSArray * _features;
    bool  _hasLoadedContentData;
    PHMemory * _memory;
    <PXWidgetDelegate> * _widgetDelegate;
}

@property (nonatomic, readonly) bool allowUserInteractionWithSubtitle;
@property (nonatomic, readonly) long long contentLayoutStyle;
@property (nonatomic, readonly) PXTilingController *contentTilingController;
@property (nonatomic, readonly) NSObject<PXAnonymousView> *contentView;
@property (nonatomic, readonly) long long contentViewAnchoringType;
@property (nonatomic, retain) PXPhotosDetailsContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFaceModeEnabled, nonatomic) bool faceModeEnabled;
@property (nonatomic, retain) NSArray *featureViews;
@property (nonatomic, retain) NSArray *features;
@property (nonatomic, readonly) bool hasContentForCurrentInput;
@property (nonatomic, readonly) bool hasLoadedContentData;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *localizedCaption;
@property (nonatomic, readonly) NSString *localizedDisclosureTitle;
@property (nonatomic, readonly) NSString *localizedSubtitle;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, retain) PHMemory *memory;
@property (getter=isSelecting, nonatomic) bool selecting;
@property (nonatomic, readonly) PXSectionedSelectionManager *selectionManager;
@property (nonatomic, retain) PXWidgetSpec *spec;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsFaceMode;
@property (nonatomic, readonly) bool supportsSelection;
@property (getter=isUserInteractionEnabled, nonatomic) bool userInteractionEnabled;
@property (nonatomic) <PXWidgetDelegate> *widgetDelegate;
@property (nonatomic) <PXWidgetUnlockDelegate> *widgetUnlockDelegate;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_layoutTokenViewsWithWidth:(double)arg1;
- (void)_loadContentData;
- (struct NSObject { Class x1; }*)_loadContentView;
- (void)_loadFeaturesFromPhotosGraphProperties:(id)arg1;
- (void)_showReportFeedback;
- (id)_tokenViewsWithSuperview:(struct NSObject { Class x1; }*)arg1;
- (bool)allowUserInteractionWithSubtitle;
- (long long)contentLayoutStyle;
- (struct NSObject { Class x1; }*)contentView;
- (long long)contentViewAnchoringType;
- (id)context;
- (id)featureViews;
- (id)features;
- (bool)hasContentForCurrentInput;
- (bool)hasLoadedContentData;
- (bool)isUserInteractionEnabled;
- (void)loadContentData;
- (id)localizedDisclosureTitle;
- (id)localizedTitle;
- (id)memory;
- (double)preferredContentHeightForWidth:(double)arg1;
- (void)setContext:(id)arg1;
- (void)setFeatureViews:(id)arg1;
- (void)setFeatures:(id)arg1;
- (void)setMemory:(id)arg1;
- (void)setWidgetDelegate:(id)arg1;
- (void)unloadContentData;
- (void)userDidSelectDisclosureControl;
- (id)widgetDelegate;

@end
