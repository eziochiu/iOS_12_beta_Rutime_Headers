/* made by EzioChiu.
 */

@protocol LKLoginControllerProtocol

@required

- (void)chooseUserWithIdentifier:(void *)arg1 inClassWithID:(void *)arg2 password:(void *)arg3 withCompletionHandler:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSNumber *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)loginAppleID:(void *)arg1 password:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)saveClassConfiguration:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: LKClassConfiguration *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
