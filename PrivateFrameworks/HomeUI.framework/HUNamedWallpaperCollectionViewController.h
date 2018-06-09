/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUNamedWallpaperCollectionViewController : UICollectionViewController {
    long long  _collectionType;
    <HUNamedWallpaperCollectionViewControllerDelegate> * _delegate;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _edgeInsets;
    NSMutableDictionary * _wallpaperImageCache;
    NSArray * _wallpapers;
}

@property (nonatomic, readonly) long long collectionType;
@property (nonatomic, readonly) <HUNamedWallpaperCollectionViewControllerDelegate> *delegate;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsets;
@property (nonatomic, retain) NSMutableDictionary *wallpaperImageCache;
@property (nonatomic, retain) NSArray *wallpapers;

- (void).cxx_destruct;
- (long long)collectionType;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)delegate;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (id)initWithCollectionType:(long long)arg1 horizontalInset:(double)arg2 delegate:(id)arg3;
- (void)setWallpaperImageCache:(id)arg1;
- (void)setWallpapers:(id)arg1;
- (void)viewDidLoad;
- (id)wallpaperImageCache;
- (id)wallpapers;

@end
