/* made by EzioChiu.
 */

@protocol CFXFullScreenTextEditViewControllerDelegate <NSObject>

@required

- (void)fullScreenTextEditViewController:(CFXFullScreenTextEditViewController *)arg1 didBeginEditingEffect:(CFXEffect *)arg2;
- (void)fullScreenTextEditViewController:(CFXFullScreenTextEditViewController *)arg1 didFinishEditingByRemovingEffect:(CFXEffect *)arg2;
- (void)fullScreenTextEditViewController:(CFXFullScreenTextEditViewController *)arg1 didFinishEditingEffect:(CFXEffect *)arg2 updatedText:(NSString *)arg3;

@end
