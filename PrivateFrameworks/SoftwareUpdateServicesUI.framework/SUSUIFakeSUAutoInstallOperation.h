/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServicesUI.framework/SoftwareUpdateServicesUI
 */

@interface SUSUIFakeSUAutoInstallOperation : SUAutoInstallOperation {
    bool  _cancelled;
    NSUUID * _uuid;
}

- (void).cxx_destruct;
- (void)cancel;
- (id)forecast;
- (id)id;
- (bool)isCanceled;
- (bool)isExpired;

@end
