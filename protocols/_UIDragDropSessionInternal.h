/* made by EzioChiu.
 */

@protocol _UIDragDropSessionInternal <_UIDragDropSessionPrivate>

@required

- (bool)_allowsItemsToUpdate;
- (_UIDraggingSession *)_draggingSession;

@end
