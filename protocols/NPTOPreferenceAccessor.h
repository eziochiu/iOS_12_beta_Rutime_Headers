/* made by EzioChiu.
 */

@protocol NPTOPreferenceAccessor

@required

- (id)changeObserverInQueue:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 6: NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)removeValue;
- (void)setValue:(id)arg1;
- (id)value;

@end
