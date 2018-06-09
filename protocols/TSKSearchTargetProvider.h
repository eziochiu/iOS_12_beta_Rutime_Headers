/* made by EzioChiu.
 */

@protocol TSKSearchTargetProvider <NSObject>

@required

- (unsigned long long)nextRootSearchTargetIndexFromIndex:(unsigned long long)arg1 forString:(NSString *)arg2 options:(unsigned long long)arg3 inDirection:(unsigned long long)arg4;
- (unsigned long long)rootSearchTargetCountThroughIndex:(unsigned long long)arg1;
- (void)withRootSearchTargetAtIndex:(void *)arg1 executeBlock:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <TSKSearchTarget> *, void*

@end
