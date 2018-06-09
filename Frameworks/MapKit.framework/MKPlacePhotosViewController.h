/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlacePhotosViewController : UIViewController <MKModuleViewControllerProtocol, MKPlaceAttributionCellDelegate, MKPlacePhotosViewDelegate, UIScrollViewDelegate, _MKInfoCardChildViewControllerAnalyticsDelegate> {
    MKPlaceAttributionCell * _attributionCell;
    bool  _canUseFullscreenViewer;
    bool  _canUseGallery;
    MKPlacePhotosView * _currentPhotoViewer;
    NSLayoutConstraint * _heightConstraint;
    bool  _isRTL;
    double  _lastPhotoScrollOffset;
    bool  _loadAppImageCanceledOrFailed;
    MKMapItem * _mapItem;
    unsigned long long  _mode;
    unsigned long long  _originalMode;
    _MKPlaceViewController * _owner;
    UIScrollView * _parentScrollView;
    bool  _photoLoaded;
    bool  _photoScrollViewScrollingLeft;
    bool  _photoScrollViewScrollingRight;
    NSArray * _photoViews;
    NSArray * _photos;
    UIView * _photosContainer;
    UIScrollView * _photosContainerScrollView;
    <MKPlaceCardPhotosControllerDelegate><MKPlaceCardActionControllerDelegate> * _photosControllerDelegate;
    unsigned long long  _photosCount;
    MKPhotoSmallAttributionView * _photosSmallAttributionsView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) _MKPlaceViewController *owner;
@property (nonatomic) <MKPlaceCardPhotosControllerDelegate><MKPlaceCardActionControllerDelegate> *photosControllerDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_callPhotoDelegateForPhotoAt:(unsigned long long)arg1;
- (void)_cancelLoadPhotos;
- (void)_catchScrollNotification:(id)arg1;
- (void)_createImageViews;
- (void)_didBecomeActive:(id)arg1;
- (void)_loadPhotos;
- (void)_photoSelected:(id)arg1;
- (void)_photoTappedAtIndex:(unsigned long long)arg1;
- (void)_updateAlphaAttribution;
- (void)_updatePhotoBackgroundColor:(id)arg1;
- (void)_willResignActive:(id)arg1;
- (void)addAttributionCell;
- (id)attributionString;
- (void)dealloc;
- (id)infoCardChildPossibleActions;
- (void)infoCardThemeChanged:(id)arg1;
- (id)initWithMapItem:(id)arg1 mode:(unsigned long long)arg2;
- (void)layoutImages;
- (void)openURL;
- (id)owner;
- (id)photosControllerDelegate;
- (void)placePhotoViewerAttributionTappedForPhotoAtIndex:(unsigned long long)arg1 photo:(id)arg2;
- (id)placePhotoViewerViewForPhotoAtIndex:(unsigned long long)arg1;
- (void)placePhotoViewerWillClose:(id)arg1 photo:(id)arg2 onIndex:(unsigned long long)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setOwner:(id)arg1;
- (void)setPhotosControllerDelegate:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForIndex:(unsigned long long)arg1;
- (void)updateAttributionPositionWithOffset:(double)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewLayoutMarginsDidChange;
- (void)viewWillDisappear:(bool)arg1;

@end
