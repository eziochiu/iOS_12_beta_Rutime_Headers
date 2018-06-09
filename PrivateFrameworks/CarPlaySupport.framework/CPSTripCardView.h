/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

@interface CPSTripCardView : UIView <CPSAlternateRouteSelecting> {
    NSLayoutConstraint * _alternateRoutesHeightConstraint;
    CPSAlternateRoutesView * _alternatesView;
    UIButton * _goButton;
    NSLayoutConstraint * _moreRoutesButtonBottomAnchor;
    NSLayoutConstraint * _overviewBottomConstraint;
    NSLayoutConstraint * _overviewCollapsedHeightConstraint;
    NSLayoutConstraint * _overviewTopConstraint;
    CPSRouteOverviewView * _overviewView;
    CPSCardPlatterView * _platterView;
    NSLayoutConstraint * _platterWidthConstraint;
    CPRouteChoice * _selectedRouteChoice;
    bool  _showMoreRoutes;
    UIButton * _toggleMoreRoutesButton;
    CPTrip * _trip;
    <CPSTripInitiating> * _tripDelegate;
}

@property (nonatomic, retain) NSLayoutConstraint *alternateRoutesHeightConstraint;
@property (nonatomic, readonly) CPSAlternateRoutesView *alternatesView;
@property (nonatomic, retain) CPTravelEstimates *currentTravelEstimates;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIButton *goButton;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSLayoutConstraint *moreRoutesButtonBottomAnchor;
@property (nonatomic, retain) NSLayoutConstraint *overviewBottomConstraint;
@property (nonatomic, retain) NSLayoutConstraint *overviewCollapsedHeightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *overviewTopConstraint;
@property (nonatomic, readonly) CPSRouteOverviewView *overviewView;
@property (nonatomic, readonly) CPSCardPlatterView *platterView;
@property (nonatomic, retain) NSLayoutConstraint *platterWidthConstraint;
@property (nonatomic) CPRouteChoice *selectedRouteChoice;
@property (nonatomic) bool showMoreRoutes;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIButton *toggleMoreRoutesButton;
@property (nonatomic, readonly) CPTrip *trip;
@property (nonatomic) <CPSTripInitiating> *tripDelegate;

- (void).cxx_destruct;
- (void)_setOverviewCollapsed:(bool)arg1;
- (void)_startTripButtonPressed:(id)arg1;
- (void)_toggleMoreRoutesButtonPressed:(id)arg1;
- (id)alternateRoutesHeightConstraint;
- (void)alternateRoutesView:(id)arg1 didSelectRouteChoice:(id)arg2;
- (id)alternatesView;
- (id)currentTravelEstimates;
- (id)goButton;
- (id)initWithTrip:(id)arg1;
- (id)moreRoutesButtonBottomAnchor;
- (id)overviewBottomConstraint;
- (id)overviewCollapsedHeightConstraint;
- (id)overviewTopConstraint;
- (id)overviewView;
- (id)platterView;
- (id)platterWidthConstraint;
- (id)selectedRouteChoice;
- (void)setAlternateRoutesHeightConstraint:(id)arg1;
- (void)setCurrentTravelEstimates:(id)arg1;
- (void)setMoreRoutesButtonBottomAnchor:(id)arg1;
- (void)setOverviewBottomConstraint:(id)arg1;
- (void)setOverviewCollapsedHeightConstraint:(id)arg1;
- (void)setOverviewTopConstraint:(id)arg1;
- (void)setPlatterWidthConstraint:(id)arg1;
- (void)setSelectedRouteChoice:(id)arg1;
- (void)setShowMoreRoutes:(bool)arg1;
- (void)setTripDelegate:(id)arg1;
- (bool)showMoreRoutes;
- (id)toggleMoreRoutesButton;
- (id)trip;
- (id)tripDelegate;

@end
