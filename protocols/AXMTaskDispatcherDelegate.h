/* made by EzioChiu.
 */

@protocol AXMTaskDispatcherDelegate <NSObject>

@required

- (void)dispatcher:(AXMTaskDispatcher *)arg1 handleTask:(AXMTask *)arg2;

@end
