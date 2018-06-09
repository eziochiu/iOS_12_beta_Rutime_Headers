/* made by EzioChiu
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLSheetPlaceViewController : UIViewController <MKMapViewDelegate, SLPlaceDataSourceDelegate, UISearchBarDelegate, UISearchDisplayDelegate, UITableViewDataSource, UITableViewDelegate> {
    ACAccount * _account;
    NSBundle * _effectiveBundle;
    double  _mapHeight;
    MKMapView * _mapView;
    NSObject<SLPlaceDataSource> * _placeDataSource;
    SLSheetPlaceSearchController * _placeSearchController;
    NSArray * _places;
    bool  _searchAnimationComplete;
    UISearchBar * _searchBar;
    UISearchDisplayController * _searchDisplayController;
    bool  _searchEnabled;
    bool  _searchPresented;
    SLPlace * _selectedPlace;
    NSObject<SLSheetPlaceViewControllerDelegate> * _selectionDelegate;
    UITableView * _tableView;
}

@property (retain) ACAccount *account;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSObject<SLPlaceDataSource> *placeDataSource;
@property (retain) NSArray *places;
@property (nonatomic) bool searchEnabled;
@property NSObject<SLSheetPlaceViewControllerDelegate> *selectionDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_calculatePreferredContentSize;
- (void)_centerMapForPlaces;
- (void)_centerMapWithSelectedPlace:(id)arg1;
- (bool)_forceSelectPlace:(id)arg1 setMapAnnotation:(bool)arg2;
- (void)_layoutForSearch;
- (void)_layoutNormal;
- (double)_mapHeightForInterfaceOrientation:(long long)arg1;
- (id)_placeForRow:(long long)arg1;
- (double)_preferredViewHeight;
- (void)_presentSearch;
- (struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })_regionForPlaces:(id)arg1;
- (void)_restoreFromSearch;
- (id)account;
- (void)cancelButtonTapped:(id)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)initWithPlaceDataSource:(id)arg1 effectiveBundle:(id)arg2;
- (void)loadView;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)placeDataSource;
- (void)placeManager:(id)arg1 failedWithError:(id)arg2;
- (void)placeManager:(id)arg1 updatedPlaces:(id)arg2;
- (id)places;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (bool)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (bool)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchDisplayControllerDidBeginSearch:(id)arg1;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (bool)searchEnabled;
- (id)selectionDelegate;
- (void)setAccount:(id)arg1;
- (void)setPlaceDataSource:(id)arg1;
- (void)setPlaces:(id)arg1;
- (void)setSearchEnabled:(bool)arg1;
- (void)setSelectedPlace:(id)arg1;
- (void)setSelectionDelegate:(id)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

@end
