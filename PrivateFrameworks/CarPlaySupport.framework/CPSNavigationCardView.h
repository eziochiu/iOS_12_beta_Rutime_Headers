/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

@interface CPSNavigationCardView : UIView <CPSNavigationDisplaying> {
    CPSUpcomingManeuversCardView * _maneuversView;
    UIView * _pausedView;
    CPSCardPlatterView * _platterView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CPSUpcomingManeuversCardView *maneuversView;
@property (getter=isMinimalMode, nonatomic) bool minimalMode;
@property (nonatomic, retain) UIView *pausedView;
@property (nonatomic, readonly) CPSCardPlatterView *platterView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_showManeuversView;
- (void)_showPausedViewForReason:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isMinimalMode;
- (id)maneuversView;
- (void)navigator:(id)arg1 pausedTripForReason:(unsigned long long)arg2;
- (id)pausedView;
- (id)platterView;
- (void)setManeuversView:(id)arg1;
- (void)setMinimalMode:(bool)arg1;
- (void)setPausedView:(id)arg1;
- (void)showManeuvers:(id)arg1;
- (void)updateEstimates:(id)arg1 forManeuver:(id)arg2;

@end
