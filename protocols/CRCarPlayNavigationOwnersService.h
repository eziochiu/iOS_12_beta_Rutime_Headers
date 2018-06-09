/* made by EzioChiu.
 */

@protocol CRCarPlayNavigationOwnersService <NSObject>

@required

- (void)addNavigationOwnerWithIdentifier:(NSString *)arg1;
- (void)fetchNavigationOwnerWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)removeNavigationOwnerWithIdentifier:(NSString *)arg1;

@end
