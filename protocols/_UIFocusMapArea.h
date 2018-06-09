/* made by EzioChiu.
 */

@protocol _UIFocusMapArea <NSObject>

@required

- (<UICoordinateSpace> *)coordinateSpace;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (_UIFocusRegion *)intersectionWithRegion:(_UIFocusRegion *)arg1;
- (bool)intersectsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)intersectsRegion:(_UIFocusRegion *)arg1;

@end
