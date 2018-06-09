/* made by EzioChiu.
 */

@protocol SVVideoGravityProviding <NSObject>

@required

- (id /* block */)changeBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, <SVVideoGravityProviding> *, void*, id, SEL
- (NSString *)landscapeVideoGravity;
- (void)onChange:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SVVideoGravityProviding> *, void*
- (NSString *)portraitVideoGravity;
- (NSString *)videoGravity;

@end
