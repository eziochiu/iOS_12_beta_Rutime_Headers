/* made by EzioChiu.
 */

@protocol MiroMemoryEditorToolbarDelegate <NSObject>

@required

- (void)cancel;
- (void)deferredPlay;
- (void)done;
- (UIViewController *)viewController;

@end
