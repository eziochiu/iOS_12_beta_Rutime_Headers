/* made by EzioChiu.
 */

@protocol PFPriorityEnqueuing

@required

- (void)enqueueEmptyNotification:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)enqueueWithPriority:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 6: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)enqueueWithPriority:(void *)arg1 qos:(void *)arg2 block:(void *)arg3; // needs 3 arg types, found 7: unsigned long long, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)resumeScheduling;
- (unsigned long long)schedulingLimitForPriorityLevel:(unsigned long long)arg1;
- (void)suspendScheduling;

@end
