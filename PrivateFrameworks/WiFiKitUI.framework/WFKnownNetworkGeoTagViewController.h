/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

@interface WFKnownNetworkGeoTagViewController : UIViewController <MKMapViewDelegate> {
    NSMutableArray * _annotations;
    NSDateFormatter * _dateFormatter;
    NSArray * _geoTags;
    MKMapView * _mapView;
}

@property (nonatomic, retain) NSMutableArray *annotations;
@property (nonatomic, retain) NSDateFormatter *dateFormatter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *geoTags;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MKMapView *mapView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addAnnotationForGeotag:(id)arg1;
- (void)addAnnotations;
- (void)addMap;
- (id)annotations;
- (id)dateFormatter;
- (id)geoTags;
- (id)mapView;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)setAnnotations:(id)arg1;
- (void)setDateFormatter:(id)arg1;
- (void)setGeoTags:(id)arg1;
- (void)setMapView:(id)arg1;
- (void)setVisibleMapRegion;
- (void)showPinsOnMap;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
