/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUCameraImportItemCell : UICollectionViewCell <PXChangeObserver> {
    UIImageView * _badgeImageView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _badgeTapZone;
    long long  _badgeType;
    UITextField * _debugTextField;
    <PUImportDisplayDelegate> * _displayDelegate;
    bool  _needsBadgeUpdate;
    bool  _needsThumbnailRefresh;
    PUPhotoView * _photoView;
    PUImportItemViewModel * _representedImportItem;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _scaledDisplayRect;
    bool  _selectable;
    UIActivityIndicatorView * _spinner;
    long long  _thumbnailRequestID;
}

@property (nonatomic, retain) UIImageView *badgeImageView;
@property (nonatomic) long long badgeType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) UITextField *debugTextField;
@property (readonly, copy) NSString *description;
@property (nonatomic) <PUImportDisplayDelegate> *displayDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool needsBadgeUpdate;
@property (nonatomic, readonly) bool needsThumbnailRefresh;
@property (nonatomic, retain) PUPhotoView *photoView;
@property (nonatomic, retain) PUImportItemViewModel *representedImportItem;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } scaledDisplayRect;
@property (nonatomic) bool selectable;
@property (nonatomic, retain) UIActivityIndicatorView *spinner;
@property (readonly) Class superclass;
@property (nonatomic) long long thumbnailRequestID;

- (void).cxx_destruct;
- (void)_enterOneUpAction;
- (void)_fetchThumbnailReady;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_filledPhotosRectForImage:(id)arg1;
- (void)_selectAction;
- (id)accessibilityCustomActions;
- (void)accessibilityElementDidBecomeFocused;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)badgeImageView;
- (long long)badgeType;
- (id)badgeView;
- (void)cancelThumbnailLoadIfActive;
- (void)clearImage;
- (void)dealloc;
- (id)debugTextField;
- (id)displayDelegate;
- (long long)dragState;
- (void)handleTapGesture:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAccessibilityElement;
- (void)layoutSubviews;
- (bool)needsBadgeUpdate;
- (bool)needsThumbnailRefresh;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)photoView;
- (void)prepareForReuse;
- (void)refreshThumbnail;
- (id)representedImportItem;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scaledDisplayRect;
- (bool)selectable;
- (void)setBadgeImageView:(id)arg1;
- (void)setBadgeType:(long long)arg1;
- (void)setCachedImage:(id)arg1;
- (void)setDebugTextField:(id)arg1;
- (void)setDisplayDelegate:(id)arg1;
- (void)setNeedsBadgeUpdate:(bool)arg1;
- (void)setPhotoImage:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2 fillMode:(long long)arg3 videoDuration:(double)arg4;
- (void)setPhotoView:(id)arg1;
- (void)setRepresentedImportItem:(id)arg1;
- (void)setScaledDisplayRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSelectable:(bool)arg1;
- (void)setSpinner:(id)arg1;
- (void)setThumbnailRequestID:(long long)arg1;
- (bool)shouldBeginGestureForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)showActivityBadge:(bool)arg1;
- (id)spinner;
- (long long)thumbnailRequestID;
- (void)updateBadgeUIIfNeeded;
- (void)updateDebugLabel:(id)arg1;

@end
