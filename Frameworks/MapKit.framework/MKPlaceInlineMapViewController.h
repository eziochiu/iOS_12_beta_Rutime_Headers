/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceInlineMapViewController : UIViewController <MKModuleViewControllerProtocol> {
    bool  _bottomHairlineHidden;
    _MKPlaceInlineMapContentView * _contentView;
    MKMapCamera * _mapCamera;
    MKMapItem * _mapItem;
    _MKPlaceViewController * _owner;
    MKMapItem * _updatingInlineMapItem;
}

@property (getter=isBottomHairlineHidden, nonatomic) bool bottomHairlineHidden;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MKMapCamera *mapCamera;
@property (nonatomic, retain) MKMapItem *mapItem;
@property (nonatomic) _MKPlaceViewController *owner;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *visibleMapItems;

+ (id)inlineMapWithMapItem:(id)arg1;

- (void).cxx_destruct;
- (void)_handleTapOnMap;
- (void)_launchMaps;
- (struct CGSize { double x1; double x2; })_mapSize;
- (void)_updateInlineMapWithRefinedMapItems;
- (void)_updateMap;
- (void)_updateSnapshotImage:(id)arg1;
- (id)initWithMKMapItem:(id)arg1;
- (bool)isBottomHairlineHidden;
- (void)loadView;
- (id)mapCamera;
- (id)mapItem;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })mapRectContainingMapItems;
- (id)owner;
- (void)setBottomHairlineHidden:(bool)arg1;
- (void)setMapCamera:(id)arg1;
- (void)setMapItem:(id)arg1;
- (void)setOwner:(id)arg1;
- (id)snapshot;
- (void)updateInlineMapWithRefinedMapItems;
- (void)viewDidLoad;
- (id)visibleMapItems;

@end
