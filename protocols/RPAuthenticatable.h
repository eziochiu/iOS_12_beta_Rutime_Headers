/* made by EzioChiu.
 */

@protocol RPAuthenticatable

@required

- (NSObject<OS_dispatch_queue> *)dispatchQueue;
- (id /* block */)hidePasswordHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, unsigned int, void*, id, SEL
- (unsigned int)pairSetupFlags;
- (unsigned int)pairVerifyFlags;
- (NSString *)password;
- (int)passwordType;
- (id /* block */)promptForPasswordHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, unsigned int, int, void*, id, SEL
- (void)setHidePasswordHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned int, void*
- (void)setPairSetupFlags:(unsigned int)arg1;
- (void)setPairVerifyFlags:(unsigned int)arg1;
- (void)setPassword:(NSString *)arg1;
- (void)setPasswordType:(int)arg1;
- (void)setPromptForPasswordHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned int, int, void*
- (void)setShowPasswordHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned int, NSString *, void*
- (id /* block */)showPasswordHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, unsigned int, NSString *, void*, id, SEL
- (void)tryPassword:(NSString *)arg1;

@end
