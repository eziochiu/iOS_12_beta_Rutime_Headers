/* made by EzioChiu.
 */

@protocol PLAssetsdServiceProtocol <PLAssetsdServiceCreating>

@required

- (void)runDaemonJob:(PLDaemonJob *)arg1 serially:(bool)arg2;
- (void)runDaemonJob:(void *)arg1 serially:(void *)arg2 withReply:(void *)arg3; // needs 3 arg types, found 9: PLDaemonJob *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, PLDaemonJobReply *, void*

@end
