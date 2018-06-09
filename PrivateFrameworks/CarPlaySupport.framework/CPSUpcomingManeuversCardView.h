/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

@interface CPSUpcomingManeuversCardView : UIView <CPSNavigationDisplaying> {
    NSMutableArray * _maneuverViewStack;
    NSArray * _maneuvers;
    bool  _minimalMode;
    NSMutableArray * _verticalConstraints;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableArray *maneuverViewStack;
@property (nonatomic, readonly) NSArray *maneuvers;
@property (getter=isMinimalMode, nonatomic) bool minimalMode;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSMutableArray *verticalConstraints;

- (void).cxx_destruct;
- (void)_clearManeuvers;
- (void)_updateVerticalConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isMinimalMode;
- (id)maneuverViewStack;
- (id)maneuvers;
- (void)setMinimalMode:(bool)arg1;
- (void)showManeuvers:(id)arg1;
- (void)updateEstimates:(id)arg1 forManeuver:(id)arg2;
- (id)verticalConstraints;

@end
