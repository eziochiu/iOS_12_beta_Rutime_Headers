/* made by EzioChiu.
 */

@protocol SXLayoutOperationFactory <NSObject>

@required

- (SXLayoutOperation *)layoutOperationWithViewportSize:(struct CGSize { double x1; double x2; })arg1 constrainedToWidth:(double)arg2 layoutDataProvider:(SXLayoutDataProvider *)arg3;

@end
