/* made by EzioChiu.
 */

@protocol PKToolPickerDelegate <NSObject>

@required

- (PKCanvasView *)canvasViewForToolPicker:(PKToolPicker *)arg1;
- (PKInk *)selectedInkForToolPicker:(PKToolPicker *)arg1;
- (void)toolPicker:(PKToolPicker *)arg1 setSelectedInk:(PKInk *)arg2;
- (NSUndoManager *)undoManagerForToolPicker:(PKToolPicker *)arg1;

@end
