/* made by EzioChiu.
 */

@protocol FBSOrientationObserverClientDelegate <NSObject>

@required

- (void)client:(FBSOrientationObserverClient *)arg1 handleOrientationUpdate:(FBSOrientationUpdate *)arg2;

@end
