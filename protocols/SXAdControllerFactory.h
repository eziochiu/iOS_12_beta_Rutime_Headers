/* made by EzioChiu.
 */

@protocol SXAdControllerFactory <NSObject>

@required

- (SXAdController *)adControllerForDocument:(SXDocument *)arg1 viewport:(SXViewport *)arg2;

@end
