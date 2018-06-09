/* made by EzioChiu.
 */

@protocol AVAsynchronousKeyValueLoading

@required

- (void)loadValuesAsynchronouslyForKeys:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (long long)statusOfValueForKey:(NSString *)arg1 error:(id*)arg2;

@end
