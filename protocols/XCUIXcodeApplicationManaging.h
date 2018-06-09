/* made by EzioChiu.
 */

@protocol XCUIXcodeApplicationManaging <NSObject>

@required

- (void)launchProcessWithPath:(void *)arg1 bundleID:(void *)arg2 arguments:(void *)arg3 environmentVariables:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 14: NSString *, NSString *, NSArray *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*, inout unsigned short, void*, const const out const void*, void*
- (void)requestLaunchProgressForProcessWithToken:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, float, NSError *, void*
- (void)terminateProcessWithToken:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
