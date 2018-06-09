/* made by EzioChiu.
 */

@protocol IMADockViewControllerDelegate <NSObject>

@required

- (void)addSticker:(IMASticker *)arg1;
- (void)addSticker:(IMASticker *)arg1 atDropTarget:(IMADropTarget *)arg2;
- (UIViewController *)dockPresentationViewController;

@optional

- (void)didBeginDraggingSticker;
- (void)didDragStickerToTarget:(IMADropTarget *)arg1;
- (void)didEndDraggingSticker;
- (void)didSelectAppWithBundleIdentifier:(NSString *)arg1;
- (void)dockDidMagnify:(bool)arg1;
- (bool)isDropTargetValid:(IMADropTarget *)arg1;

@end
