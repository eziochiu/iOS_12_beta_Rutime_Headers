/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPictureItemContainerViewController : UIViewController <MKPlacePhotosViewDelegate, UIScrollViewDelegate> {
    GEOMapItemAttribution * _attribution;
    <GEOPictureItemContainer> * _pictureItemContainer;
    UIScrollView * _scrollView;
    UIStackView * _stackView;
}

@property (nonatomic, readonly) GEOMapItemAttribution *attribution;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <GEOPictureItemContainer> *pictureItemContainer;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (nonatomic, retain) UIStackView *stackView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)attribution;
- (void)didTapOnPictureItemView:(id)arg1;
- (void)downloadImageForVisiblePictureItemViews;
- (void)infoCardThemeChanged:(id)arg1;
- (id)initWithPictureItemContainer:(id)arg1 attribution:(id)arg2;
- (id)pictureItemContainer;
- (void)placePhotoViewerAttributionTappedForPhotoAtIndex:(unsigned long long)arg1 photo:(id)arg2;
- (id)placePhotoViewerViewForPhotoAtIndex:(unsigned long long)arg1;
- (id)scrollView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)setStackView:(id)arg1;
- (id)stackView;
- (void)updateUIForTheme:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)visiblePictureItemViews;

@end
