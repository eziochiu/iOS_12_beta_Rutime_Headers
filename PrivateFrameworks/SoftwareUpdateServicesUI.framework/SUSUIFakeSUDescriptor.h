/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServicesUI.framework/SoftwareUpdateServicesUI
 */

@interface SUSUIFakeSUDescriptor : SUDescriptor

- (id)documentation;
- (unsigned long long)downloadSize;
- (id)humanReadableUpdateName;
- (unsigned long long)installationSize;
- (bool)isDownloadable;
- (bool)isDownloadableOverCellular;
- (unsigned long long)preparationSize;
- (id)productBuildVersion;
- (id)productSystemName;
- (id)productVersion;
- (id)publisher;
- (int)updateType;

@end
