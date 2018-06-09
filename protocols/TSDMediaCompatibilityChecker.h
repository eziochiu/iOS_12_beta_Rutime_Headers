/* made by EzioChiu.
 */

@protocol TSDMediaCompatibilityChecker <NSObject>

@required

- (void)cancel;
- (void)checkCompatibilityUpToLevel:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (long long)compatibilityLevel;
- (NSError *)error;
- (bool)isCancelled;

@end
