/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAlbumGadget : NSObject <PXGadget> {
    <PUAlbumGadgetDelegate> * _albumGadgetDelegate;
    PUAlbumListCellContentView * _albumListCellContentView;
    PHCollection * _collection;
    bool  _contentViewVisible;
    <PXGadgetDelegate> * _delegate;
    PXGadgetSpec * _gadgetSpec;
    NSIndexSet * _indexesOfHiddenStackItems;
    bool  _needsUpdate;
}

@property (nonatomic, readonly) NSString *accessoryButtonTitle;
@property (nonatomic, readonly) unsigned long long accessoryButtonType;
@property (nonatomic) <PUAlbumGadgetDelegate> *albumGadgetDelegate;
@property (nonatomic, readonly) PUAlbumListCellContentView *albumListCellContentView;
@property (nonatomic, readonly) PUAlbumListCellContentViewHelper *albumListCellContentViewHelper;
@property (nonatomic, retain) PHCollection *collection;
@property (getter=isContentViewVisible, nonatomic) bool contentViewVisible;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXGadgetDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PXGadgetSpec *gadgetSpec;
@property (nonatomic, readonly) unsigned long long gadgetType;
@property (nonatomic, readonly) bool hasContentToDisplay;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long headerStyle;
@property (nonatomic, copy) NSIndexSet *indexesOfHiddenStackItems;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic) bool needsUpdate;
@property (nonatomic) unsigned long long priority;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsAssetsDrop;
@property (nonatomic, readonly) bool supportsHighlighting;
@property (nonatomic, readonly) bool supportsSelection;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleContentRect;

- (void).cxx_destruct;
- (void)_updateContent;
- (id)albumGadgetDelegate;
- (id)albumListCellContentView;
- (id)albumListCellContentViewHelper;
- (id)collection;
- (struct NSObject { Class x1; }*)contentView;
- (void)contentViewDidDisappear;
- (void)contentViewWillAppear;
- (id)delegate;
- (id)description;
- (long long)estimatedIndexInCollection:(id)arg1 ofAssetForStackItemAtIndex:(long long)arg2;
- (id)gadgetSpec;
- (unsigned long long)gadgetType;
- (bool)hasContentToDisplay;
- (id)indexesOfHiddenStackItems;
- (id)init;
- (id)initWithCollection:(id)arg1 albumGadgetDelegate:(id)arg2;
- (bool)isContentViewVisible;
- (bool)needsUpdate;
- (void)reconfigure;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForStackItemAtIndex:(long long)arg1 inCoordinateSpace:(id)arg2;
- (void)setAlbumGadgetDelegate:(id)arg1;
- (void)setCollection:(id)arg1;
- (void)setContentViewVisible:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGadgetSpec:(id)arg1;
- (void)setIndexesOfHiddenStackItems:(id)arg1;
- (void)setNeedsUpdate:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)supportsAssetsDrop;
- (id)title;

@end
