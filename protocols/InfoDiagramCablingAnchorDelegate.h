/* made by EzioChiu.
 */

@protocol InfoDiagramCablingAnchorDelegate <NSObject>

@required

- (struct CGPoint { double x1; double x2; })broadbandInPoint;
- (struct CGPoint { double x1; double x2; })broadbandOutPoint;
- (struct CGPoint { double x1; double x2; })internetPoint;
- (struct CGPoint { double x1; double x2; })wanConnectedBaseWANPoint;

@optional

- (struct CGPoint { double x1; double x2; })swapArcControlPoint;
- (struct CGPoint { double x1; double x2; })swapArcControlPoint1;
- (struct CGPoint { double x1; double x2; })swapArcControlPoint2;
- (struct CGPoint { double x1; double x2; })swapArcLineEndPoint;
- (struct CGPoint { double x1; double x2; })swapArcLineStartPoint;

@end
