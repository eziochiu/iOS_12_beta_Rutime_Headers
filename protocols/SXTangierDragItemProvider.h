/* made by EzioChiu.
 */

@protocol SXTangierDragItemProvider <NSObject>

@required

- (UIDragItem *)dragItemForSmartField:(TSWPSmartField *)arg1 interaction:(UIDragInteraction *)arg2 session:(id <UIDragSession>)arg3;

@end
