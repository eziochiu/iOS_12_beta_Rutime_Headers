/* made by EzioChiu.
 */

@protocol _MKPlaceViewControllerDelegate <NSObject, UIScrollViewDelegate>

@optional

- (MKActivityViewController *)activityViewControllerForPlaceViewController:(_MKPlaceViewController *)arg1;
- (int)mapTypeForPlaceViewController:(_MKPlaceViewController *)arg1;
- (void)placeViewController:(void *)arg1 addFavoriteForPlaceItem:(void *)arg2 result:(void *)arg3; // needs 3 arg types, found 9: _MKPlaceViewController *, <_MKPlaceItem> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)placeViewController:(_MKPlaceViewController *)arg1 didBecomeContact:(CNContact *)arg2;
- (void)placeViewController:(_MKPlaceViewController *)arg1 didSelectActivityOfType:(NSString *)arg2 completed:(bool)arg3;
- (void)placeViewController:(_MKPlaceViewController *)arg1 didSelectParent:(MKMapItem *)arg2;
- (void)placeViewController:(_MKPlaceViewController *)arg1 didSelectReroute:(GEOTransitSuggestedRoute *)arg2 withDecoderData:(GEOTransitDecoderData *)arg3 withOrigin:(GEOComposedWaypoint *)arg4;
- (void)placeViewController:(_MKPlaceViewController *)arg1 didSelectRouteToCurrentSearchResultWithMode:(unsigned long long)arg2;
- (void)placeViewController:(_MKPlaceViewController *)arg1 didSelectRouteToCurrentSearchResultWithTransportTypePreference:(NSNumber *)arg2;
- (void)placeViewController:(_MKPlaceViewController *)arg1 didSelectSearchCategory:(GEOSearchCategory *)arg2;
- (void)placeViewController:(_MKPlaceViewController *)arg1 didSelectTransitConnectionInformation:(id <GEOTransitConnectionInfo>)arg2;
- (void)placeViewController:(_MKPlaceViewController *)arg1 didSelectTransitLine:(id <MKTransitLineMarker>)arg2;
- (void)placeViewController:(void *)arg1 hasFavoriteForPlaceItem:(void *)arg2 result:(void *)arg3; // needs 3 arg types, found 8: _MKPlaceViewController *, <_MKPlaceItem> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)placeViewController:(void *)arg1 removeFavoriteForPlaceItem:(void *)arg2 result:(void *)arg3; // needs 3 arg types, found 9: _MKPlaceViewController *, <_MKPlaceItem> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)placeViewController:(void *)arg1 requestPasscodeUnlockWithCompletion:(void *)arg2; // needs 2 arg types, found 7: _MKPlaceViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (bool)placeViewController:(_MKPlaceViewController *)arg1 shouldOpenHomePage:(CNLabeledValue *)arg2;
- (void)placeViewController:(_MKPlaceViewController *)arg1 showTransitIncidents:(NSArray *)arg2;
- (void)placeViewControllerDidDismiss:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectDisplayedAddress:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectDisplayedHomePage:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectDisplayedPhoneNumber:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectFlyover:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectInlineMap:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectMoreInfo:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectOnePhoto:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectOneReview:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectRemoveMarker:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectReportAProblem:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectShareLocation:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectShowBrandCard:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectWriteAReview:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidUpdateHeight:(_MKPlaceViewController *)arg1;
- (double)placeViewControllerPlaceCardHeaderTitleTrailingConstant:(_MKPlaceViewController *)arg1;
- (GEOMapServiceTraits *)traitsForPlaceViewController:(_MKPlaceViewController *)arg1;

@end
