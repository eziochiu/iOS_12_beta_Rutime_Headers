/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUILockupSwooshViewController : SKUISwooshViewController <UICollectionViewDataSource, UICollectionViewDelegate> {
    SKUIItemArtworkContext * _artworkContext;
    UICollectionView * _collectionView;
    struct SKUILockupStyle { 
        long long artworkSize; 
        long long layoutStyle; 
        unsigned long long visibleFields; 
    }  _defaultLockupStyle;
    bool  _delegateWantsWillDisplay;
    bool  _didInitialReload;
    struct CGSize { 
        double width; 
        double height; 
    }  _expectedImageSize;
    NSMutableIndexSet * _hiddenIconIndexSet;
    NSArray * _lockups;
    struct CGSize { 
        double width; 
        double height; 
    }  _maxCellSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _maxImageSize;
    struct { 
        struct CGSize { 
            double width; 
            double height; 
        } iconSize; 
        struct CGSize { 
            double width; 
            double height; 
        } newsstandSize; 
        struct CGSize { 
            double width; 
            double height; 
        } newsstandSwooshSize; 
        struct CGSize { 
            double width; 
            double height; 
        } videoLockupIconSize; 
        struct CGSize { 
            double width; 
            double height; 
        } videoThumbnailSize; 
        double horizontalPadding; 
        double interItemSpacingMixed; 
        double interItemSpacingNewsstand; 
        double interItemSpacingVideoLockup; 
    }  _metrics;
    bool  _seeAllHidden;
    long long  _seeAllStyle;
    NSString * _seeAllTitle;
    NSURL * _seeAllURL;
    long long  _swooshType;
    SKUISwooshView * _swooshView;
    SKUIVideoImageDataConsumer * _videoImageConsumer;
}

@property (nonatomic, readonly) SKUIItemArtworkContext *artworkContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, copy) NSArray *lockups;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } seeAllButtonFrame;
@property (getter=isSeeAllHidden, nonatomic) bool seeAllHidden;
@property (nonatomic, readonly) NSURL *seeAllURL;
@property (readonly) Class superclass;
@property (nonatomic) long long swooshType;
@property (nonatomic, readonly) SKUIVideoImageDataConsumer *videoImageConsumer;

+ (long long)_swooshTypeForLockups:(id)arg1;

- (void).cxx_destruct;
- (struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; struct CGSize { double x_5_1_1; double x_5_1_2; } x5; double x6; double x7; double x8; double x9; })_lockupSwooshMetrics;
- (struct CGSize { double x1; double x2; })_maximumCellSizeForImageSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_newArtworkContextForSwooshType:(long long)arg1;
- (id)_newLockupComponentWithItem:(id)arg1 defaultStyle:(struct SKUILockupStyle { long long x1; long long x2; unsigned long long x3; })arg2;
- (void)_reloadSizes;
- (void)_seeAllAction:(id)arg1;
- (void)_setExpectedImageSize:(struct CGSize { double x1; double x2; })arg1;
- (id)artworkContext;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)dealloc;
- (void)deselectAllItems;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForItemAtIndex:(long long)arg1;
- (id)indexPathsForVisibleItems;
- (id)initWithItemList:(id)arg1;
- (id)initWithSwoosh:(id)arg1;
- (bool)isSeeAllHidden;
- (id)items;
- (void)loadView;
- (id)lockups;
- (id)popImageViewForItemAtIndex:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })seeAllButtonFrame;
- (id)seeAllURL;
- (void)setClientContext:(id)arg1;
- (void)setColorScheme:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setImage:(id)arg1 forItemAtIndex:(long long)arg2;
- (void)setItemsWithLockups:(id)arg1;
- (void)setLockups:(id)arg1;
- (void)setSeeAllHidden:(bool)arg1;
- (void)setSwooshType:(long long)arg1;
- (void)setVideoThumbnail:(id)arg1 forItemAtIndex:(long long)arg2;
- (long long)swooshType;
- (void)unhideImages;
- (id)videoImageConsumer;
- (void)viewWillAppear:(bool)arg1;

@end
