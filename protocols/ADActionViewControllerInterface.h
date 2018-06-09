/* made by EzioChiu.
 */

@protocol ADActionViewControllerInterface <NSObject>

@required

- (ADAdSpace *)adSpace;
- (void)clientApplicationCancelledAction;
- (void)clientApplicationDidEnterBackground;
- (void)dismiss;
- (bool)readyForPresentation;

@end
