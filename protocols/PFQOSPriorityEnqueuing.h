/* made by EzioChiu.
 */

@protocol PFQOSPriorityEnqueuing <PFPriorityEnqueuing>

@required

- (void)enqueueWithCurrentQOSPriority:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)enqueueWithQOSPriority:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 6: unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
