/* made by EzioChiu.
 */

@protocol HMSoftwareUpdateControllerDelegate <NSObject>

@optional

- (void)softwareUpdateController:(HMSoftwareUpdateController *)arg1 didUpdateAvailableUpdate:(HMSoftwareUpdate *)arg2;

@end
