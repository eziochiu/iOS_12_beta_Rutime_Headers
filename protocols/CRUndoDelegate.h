/* made by EzioChiu.
 */

@protocol CRUndoDelegate <NSObject>

@required

- (void)addUndoCommandsForObject:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 6: id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id
- (bool)wantsUndoCommands;

@end
