/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroVideoScrubberCollectionViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout> {
    UIImage * _blackThumbnailImage;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _currentBounds;
    double  _currentDuration;
    <MiroVideoScrubberViewControllerDelegate> * _delegate;
    NSDictionary * _frameGeneratorsForClips;
    UIImage * _placeholderImage;
    long long  _placeholderOffset;
    NSMutableArray * _thumbnails;
    bool  _thumbnailsNeedUpdate;
}

@property (nonatomic, retain) UIImage *blackThumbnailImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } currentBounds;
@property (nonatomic) double currentDuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MiroVideoScrubberViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDictionary *frameGeneratorsForClips;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *placeholderImage;
@property (nonatomic) long long placeholderOffset;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *thumbnails;
@property (nonatomic) bool thumbnailsNeedUpdate;

- (void).cxx_destruct;
- (double)_itemWidth;
- (double)_numberOfThumbnails;
- (id)_thumbnailForIndexPath:(id)arg1;
- (id)blackThumbnailImage;
- (void)buildThumbnails;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })currentBounds;
- (double)currentDuration;
- (id)delegate;
- (void)didReceiveMemoryWarning;
- (id)frameGeneratorsForClips;
- (id)init;
- (void)invalidateDuration:(double)arg1;
- (void)invalidateThumbnails;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)placeholderImage;
- (long long)placeholderOffset;
- (void)setBlackThumbnailImage:(id)arg1;
- (void)setCurrentBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCurrentDuration:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrameGeneratorsForClips:(id)arg1;
- (void)setPlaceholderImage:(id)arg1;
- (void)setPlaceholderOffset:(long long)arg1;
- (void)setThumbnails:(id)arg1;
- (void)setThumbnailsNeedUpdate:(bool)arg1;
- (id)thumbnails;
- (bool)thumbnailsNeedUpdate;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
