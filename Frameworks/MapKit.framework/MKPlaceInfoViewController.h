/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceInfoViewController : MKPlaceSectionViewController <MKModuleViewControllerProtocol, MKOfflineModeViewController, UIGestureRecognizerDelegate, _MKInfoCardChildViewControllerAnalyticsDelegate> {
    <MKPlaceActionManagerProtocol> * _actionDelegate;
    bool  _bottomHairlineHidden;
    UILongPressGestureRecognizer * _longPressRecognizer;
    MKMapItem * _mapItem;
    bool  _offlineMode;
    <_MKPlaceItem> * _placeItem;
    NSMutableArray * _rows;
    MKPlaceSectionRowView * _selectedRow;
}

@property (nonatomic) <MKPlaceActionManagerProtocol> *actionDelegate;
@property (nonatomic) bool bottomHairlineHidden;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasContent;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MKMapItem *mapItem;
@property (nonatomic) bool offlineMode;
@property (nonatomic, retain) <_MKPlaceItem> *placeItem;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addContactRow:(id)arg1 ofType:(unsigned long long)arg2 toViews:(id)arg3 defaultTitle:(id)arg4;
- (id)_addRowForType:(unsigned long long)arg1 withValue:(id)arg2 toViews:(id)arg3;
- (void)_configureRow:(id)arg1 ofType:(unsigned long long)arg2 withValue:(id)arg3;
- (id)_createViewForInfoRow:(unsigned long long)arg1;
- (void)_launchMapsDirectionsWithSource:(id)arg1 destination:(id)arg2 directionsMode:(id)arg3;
- (void)_menuDismissed:(id)arg1;
- (void)_rowLongPressed:(id)arg1;
- (void)_shareAddress:(id)arg1 fromView:(id)arg2;
- (void)_updateViewsAnimated:(bool)arg1;
- (id)actionDelegate;
- (unsigned long long)actionTypeFromRowType:(unsigned long long)arg1;
- (bool)bottomHairlineHidden;
- (id)contact;
- (id)draggableContent;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (bool)hasContent;
- (id)infoCardChildPossibleActions;
- (id)initWithPlaceItem:(id)arg1;
- (id)mapItem;
- (bool)offlineMode;
- (id)placeItem;
- (void)sectionView:(id)arg1 didSelectRow:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setActionDelegate:(id)arg1;
- (void)setBottomHairlineHidden:(bool)arg1;
- (void)setMapItem:(id)arg1;
- (void)setOfflineMode:(bool)arg1;
- (void)setPlaceItem:(id)arg1;
- (bool)shouldShowDetails;
- (void)viewDidLoad;

@end
