/* made by EzioChiu.
 */

@protocol SXTextSelectionManager <NSObject>

@required

- (void)addTextSelecting:(id <SXTextSelecting>)arg1;
- (void)clearSelection;

@end
