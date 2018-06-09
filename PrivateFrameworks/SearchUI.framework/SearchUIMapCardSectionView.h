/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIMapCardSectionView : SearchUICardSectionView <MKMapViewDelegate> {
    CLPlacemark * _currentPlacemark;
    UILabel * _footnoteDescriptorLabel;
    UILabel * _footnoteLabel;
    CLGeocoder * _geocoder;
    UIButton * _mapButton;
    MKMapView * _mapView;
    bool  _needsToNotifyDelegateOfLocationUpdate;
    MKPinAnnotationView * _pinAnnotationView;
}

@property (nonatomic, retain) CLPlacemark *currentPlacemark;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UILabel *footnoteDescriptorLabel;
@property (nonatomic, retain) UILabel *footnoteLabel;
@property (nonatomic, retain) CLGeocoder *geocoder;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIButton *mapButton;
@property (nonatomic, retain) MKMapView *mapView;
@property (nonatomic) bool needsToNotifyDelegateOfLocationUpdate;
@property (nonatomic, retain) MKPinAnnotationView *pinAnnotationView;
@property (nonatomic, readonly) SFMapCardSection *section;
@property (readonly) Class superclass;

+ (id)_postalAddressFromAddressBookDictionaryAddress:(id)arg1;

- (void).cxx_destruct;
- (id)_clLocationFromSFLatLng:(id)arg1;
- (id)_configuredFootnoteDescriptorLabel;
- (id)_configuredFootnoteLabel;
- (id)_configuredLabel;
- (void)_mapButtonPressed:(id)arg1;
- (void)_notifyDelegateOfLocationUpdateIfNeededWithPlacemark:(id)arg1;
- (bool)_pinShouldFloat;
- (id)_uiColorFromSFColor:(id)arg1;
- (id)currentPlacemark;
- (double)desiredHeight;
- (id)footnoteDescriptorLabel;
- (id)footnoteLabel;
- (id)geocoder;
- (id)initWithRowModel:(id)arg1 style:(unsigned long long)arg2 feedbackDelegate:(id)arg3;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)mapButton;
- (id)mapView;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(bool)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (bool)needsToNotifyDelegateOfLocationUpdate;
- (id)pinAnnotationView;
- (void)prepareForDismissal;
- (void)reloadData;
- (void)setCurrentPlacemark:(id)arg1;
- (void)setFootnoteDescriptorLabel:(id)arg1;
- (void)setFootnoteLabel:(id)arg1;
- (void)setGeocoder:(id)arg1;
- (void)setMapButton:(id)arg1;
- (void)setMapView:(id)arg1;
- (void)setNeedsToNotifyDelegateOfLocationUpdate:(bool)arg1;
- (void)setPinAnnotationView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;

@end
