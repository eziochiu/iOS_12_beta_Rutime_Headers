/* made by EzioChiu.
 */

@protocol PSUISoftwareUpdateManagerDelegate <NSObject>

@required

- (void)manager:(PSUISoftwareUpdateManager *)arg1 didTransitionToState:(int)arg2 fromState:(int)arg3 error:(NSError *)arg4;
- (void)manager:(PSUISoftwareUpdateManager *)arg1 downloadProgressChanged:(SUDownload *)arg2 displayStyle:(int)arg3;
- (void)manager:(void *)arg1 promptForDevicePasscodeWithCompletion:(void *)arg2; // needs 2 arg types, found 7: PSUISoftwareUpdateManager *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*

@optional

- (void)manager:(PSUISoftwareUpdateManager *)arg1 download:(SUDownload *)arg2 failedWithError:(NSError *)arg3;
- (void)manager:(PSUISoftwareUpdateManager *)arg1 downloadFinished:(SUDownload *)arg2;
- (void)manager:(PSUISoftwareUpdateManager *)arg1 installFailedWithError:(NSError *)arg2;
- (void)manager:(PSUISoftwareUpdateManager *)arg1 installStartedForUpdate:(SUDescriptor *)arg2;
- (void)manager:(PSUISoftwareUpdateManager *)arg1 scanFoundUpdate:(SUDescriptor *)arg2 error:(NSError *)arg3;

@end
