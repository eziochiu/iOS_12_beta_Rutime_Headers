/* made by EzioChiu.
 */

@protocol BYDaemonCloudSyncProtocol <NSObject>

@required

- (void)needsToSync:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)startSync;

@end
