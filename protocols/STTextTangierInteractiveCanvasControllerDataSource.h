/* made by EzioChiu.
 */

@protocol STTextTangierInteractiveCanvasControllerDataSource <NSObject>

@required

- (NSSet *)topLevelLayersForInteractiveCanvasController:(STTextTangierInteractiveCanvasController *)arg1;
- (NSArray *)topLevelRepsForInteractiveCanvasController:(STTextTangierInteractiveCanvasController *)arg1;

@optional

- (NSString *)stringForLookupItemForInteractiveCanvasController:(STTextTangierInteractiveCanvasController *)arg1;

@end
