/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXHorizontalCollectionGadget : PXGadgetViewController <PXGadget, PXMutableHorizontalCollectionGadget> {
    id /* block */  _accessoryButtonAction;
    struct CGSize { 
        double width; 
        double height; 
    }  _cachedMaxHeightForColumnWidth;
    unsigned long long  _collectionAccessoryButtonType;
    double  _collectionHeight;
    NSString * _collectionTitle;
    NSDictionary * _columnSpans;
    long long  _currentColumnSpan;
    long long  _defaultColumnSpan;
    <PXGadgetDelegate> * _delegate;
    PXGadgetSpec * _gadgetSpec;
    unsigned long long  _gadgetType;
    unsigned long long  _headerStyle;
    <PXHorizontalCollectionGadgetDelegate> * _horizontalGadgetDelegate;
    bool  _isPerformingChanges;
    PXGadgetOrbContext * _previewOrbContext;
    unsigned long long  _priority;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visibleContentRect;
    bool  _visibleGadgetsLoaded;
}

@property (nonatomic, copy) id /* block */ accessoryButtonAction;
@property (nonatomic, readonly) NSString *accessoryButtonTitle;
@property (nonatomic, readonly) unsigned long long accessoryButtonType;
@property (nonatomic) struct CGSize { double x1; double x2; } cachedMaxHeightForColumnWidth;
@property (nonatomic, readonly) unsigned long long collectionAccessoryButtonType;
@property (nonatomic, readonly) double collectionHeight;
@property (nonatomic, readonly, copy) NSString *collectionTitle;
@property (nonatomic, copy) NSDictionary *columnSpans;
@property (nonatomic) long long currentColumnSpan;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long defaultColumnSpan;
@property (nonatomic) <PXGadgetDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PXGadgetSpec *gadgetSpec;
@property (nonatomic) unsigned long long gadgetType;
@property (nonatomic, readonly) bool hasContentToDisplay;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long headerStyle;
@property (nonatomic) <PXHorizontalCollectionGadgetDelegate> *horizontalGadgetDelegate;
@property (nonatomic) bool isPerformingChanges;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, retain) PXGadgetOrbContext *previewOrbContext;
@property (nonatomic) unsigned long long priority;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsAssetsDrop;
@property (nonatomic, readonly) bool supportsHighlighting;
@property (nonatomic, readonly) bool supportsSelection;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleContentRect;
@property (nonatomic) bool visibleGadgetsLoaded;

- (void).cxx_destruct;
- (long long)_columnSpanForTraitCollection:(id)arg1;
- (struct CGSize { double x1; double x2; })_ensureCachedHeightForColumnWidth:(double)arg1;
- (void)_updateColumnSettings;
- (id /* block */)accessoryButtonAction;
- (unsigned long long)accessoryButtonType;
- (struct CGSize { double x1; double x2; })cachedMaxHeightForColumnWidth;
- (unsigned long long)collectionAccessoryButtonType;
- (double)collectionHeight;
- (id)collectionTitle;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)columnSpans;
- (void)commitPreviewViewController:(id)arg1;
- (struct NSObject { Class x1; }*)contentViewController;
- (void)contentViewDidDisappear;
- (void)contentViewWillAppear;
- (long long)currentColumnSpan;
- (id)debugURLsForDiagnostics;
- (long long)defaultColumnSpan;
- (id)delegate;
- (void)didDismissPreviewViewController:(id)arg1 committing:(bool)arg2;
- (void)extendedTraitCollectionDidChange:(unsigned long long)arg1;
- (void)gadget:(id)arg1 didChange:(unsigned long long)arg2;
- (bool)gadget:(id)arg1 transitionToViewController:(struct NSObject { Class x1; }*)arg2 animated:(bool)arg3;
- (void)gadgetControllerFinishedUpdatingDataSource;
- (void)gadgetControllerHasAppeared;
- (id)gadgetSpec;
- (unsigned long long)gadgetType;
- (id)gridPresentation;
- (bool)hasContentToDisplay;
- (bool)hasLoadedContentData;
- (unsigned long long)headerStyle;
- (id)horizontalGadgetDelegate;
- (id)initWithDataSourceManager:(id)arg1;
- (id)initWithProviders:(id)arg1;
- (bool)isPerformingChanges;
- (bool)isRootGadgetViewController;
- (void)loadContentData;
- (id)localizedTitle;
- (id)oneUpPresentation;
- (void)performChanges:(id /* block */)arg1;
- (id)previewOrbContext;
- (struct NSObject { Class x1; }*)previewViewControllerAtLocation:(struct CGPoint { double x1; double x2; })arg1 fromSourceView:(struct NSObject { Class x1; }*)arg2 outSourceRect:(out struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3;
- (unsigned long long)priority;
- (void)setAccessoryButtonAction:(id /* block */)arg1;
- (void)setCachedMaxHeightForColumnWidth:(struct CGSize { double x1; double x2; })arg1;
- (void)setCollectionAccessoryButtonType:(unsigned long long)arg1;
- (void)setCollectionHeight:(double)arg1;
- (void)setCollectionTitle:(id)arg1;
- (void)setColumnSpans:(id)arg1;
- (void)setCurrentColumnSpan:(long long)arg1;
- (void)setDefaultColumnSpan:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGadgetSpec:(id)arg1;
- (void)setGadgetType:(unsigned long long)arg1;
- (void)setHeaderStyle:(unsigned long long)arg1;
- (void)setHorizontalGadgetDelegate:(id)arg1;
- (void)setIsPerformingChanges:(bool)arg1;
- (void)setPreviewOrbContext:(id)arg1;
- (void)setPriority:(unsigned long long)arg1;
- (void)setVisibleContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setVisibleGadgetsLoaded:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)updateIfNeeded;
- (void)userDidSelectAccessoryButton:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleContentRect;
- (bool)visibleGadgetsLoaded;

@end
