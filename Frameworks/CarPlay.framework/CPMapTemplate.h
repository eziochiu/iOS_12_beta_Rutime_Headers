/* made by EzioChiu
   Image: /System/Library/Frameworks/CarPlay.framework/CarPlay
 */

@interface CPMapTemplate : CPTemplate <CPBannerDelegate, CPBarButtonProviding, CPMapButtonDelegate, CPMapClientTemplateDelegate> {
    bool  _automaticallyHidesNavigationBar;
    <CPBannerProviding> * _bannerProvider;
    CPNavigationAlert * _currentNavigationAlert;
    bool  _hidesButtonsWithNavigationBar;
    NSMutableArray * _internalMapButtons;
    <CPMapTemplateDelegate> * _mapDelegate;
    NSMutableDictionary * _postedBannerObjects;
    NSArray * _tripPreviews;
}

@property (nonatomic) bool automaticallyHidesNavigationBar;
@property (nonatomic, retain) <CPBannerProviding> *bannerProvider;
@property (nonatomic, readonly) CPNavigationAlert *currentNavigationAlert;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hidesButtonsWithNavigationBar;
@property (nonatomic, retain) NSMutableArray *internalMapButtons;
@property (nonatomic, retain) NSArray *leadingNavigationBarButtons;
@property (nonatomic, retain) NSArray *mapButtons;
@property (nonatomic) <CPMapTemplateDelegate> *mapDelegate;
@property (nonatomic, retain) NSMutableDictionary *postedBannerObjects;
@property (readonly) Class superclass;
@property (nonatomic, retain) <CPMapTemplateProviding> *templateProvider;
@property (nonatomic, retain) NSArray *trailingNavigationBarButtons;
@property (nonatomic, readonly, copy) NSArray *tripPreviews;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_postBannerIfNecessaryForManeuver:(id)arg1;
- (void)_postBannerIfNecessaryForNavigationAlert:(id)arg1;
- (void)_resolveTrip:(id)arg1 routeChoice:(id)arg2 completion:(id /* block */)arg3;
- (void)_updateBannerIfNecessaryForManeuver:(id)arg1 travelEstimates:(id)arg2;
- (bool)automaticallyHidesNavigationBar;
- (void)bannerDidAppearWithIdentifier:(id)arg1;
- (void)bannerDidDisappearWithIdentifier:(id)arg1;
- (id)bannerProvider;
- (void)bannerTappedWithIdentifier:(id)arg1;
- (void)clientNavigationAlertDidAppear:(id)arg1;
- (void)clientNavigationAlertDidDisappear:(id)arg1 context:(unsigned long long)arg2;
- (void)clientNavigationAlertWillAppear:(id)arg1;
- (void)clientNavigationAlertWillDisappear:(id)arg1 context:(unsigned long long)arg2;
- (void)clientPanBeganWithDirection:(unsigned long long)arg1;
- (void)clientPanEndedWithDirection:(unsigned long long)arg1;
- (void)clientPanViewDidAppear;
- (void)clientPanViewDidDisappear;
- (void)clientPanViewWillDisappear;
- (void)clientPanWithDirection:(unsigned long long)arg1;
- (void)clientTripCanceledByExternalNavigation;
- (id)currentNavigationAlert;
- (void)dismissNavigationAlertAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)dismissPanningInterfaceAnimated:(bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)handleActionForControlIdentifier:(id)arg1;
- (void)hideTripPreviews;
- (bool)hidesButtonsWithNavigationBar;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)internalMapButtons;
- (bool)mapButton:(id)arg1 setFocusedImage:(id)arg2;
- (bool)mapButton:(id)arg1 setHidden:(bool)arg2;
- (bool)mapButton:(id)arg1 setImage:(id)arg2;
- (id)mapButtons;
- (id)mapDelegate;
- (id)postedBannerObjects;
- (void)presentNavigationAlert:(id)arg1 animated:(bool)arg2;
- (void)previewTripIdentifier:(id)arg1 usingRouteIdentifier:(id)arg2;
- (void)setAutomaticallyHidesNavigationBar:(bool)arg1;
- (void)setBannerProvider:(id)arg1;
- (void)setHidesButtonsWithNavigationBar:(bool)arg1;
- (void)setInternalMapButtons:(id)arg1;
- (void)setMapButtons:(id)arg1;
- (void)setMapDelegate:(id)arg1;
- (void)setPostedBannerObjects:(id)arg1;
- (void)showPanningInterfaceAnimated:(bool)arg1;
- (void)showTripPreviews:(id)arg1;
- (id)startNavigationSessionForTrip:(id)arg1;
- (void)startTripIdentifier:(id)arg1 usingRouteIdentifier:(id)arg2;
- (id)tripPreviews;
- (void)updateTravelEstimates:(id)arg1 forTrip:(id)arg2;

@end
