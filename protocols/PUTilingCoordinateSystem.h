/* made by EzioChiu.
 */

@protocol PUTilingCoordinateSystem <NSObject>

@required

- (struct CGPoint { double x1; double x2; })coordinateSystemOrigin;
- (<PUTilingCoordinateSystem> *)parentCoordinateSystem;

@end
