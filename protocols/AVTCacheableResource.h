/* made by EzioChiu.
 */

@protocol AVTCacheableResource <NSObject>

@required

- (unsigned long long)costForScope:(id <AVTCacheableResourceScope>)arg1;
- (NSString *)volatileIdentifierForScope:(id <AVTCacheableResourceScope>)arg1;

@optional

- (NSString *)persistentIdentifierForScope:(id <AVTCacheableResourceScope>)arg1;
- (<AVTCacheableResourceChangeToken> *)tokenForObservingChangesWithHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
