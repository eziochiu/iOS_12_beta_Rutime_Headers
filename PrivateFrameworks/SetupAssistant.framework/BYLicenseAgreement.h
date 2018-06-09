/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

@interface BYLicenseAgreement : NSObject

+ (void)_clearAcceptedLicenseVersion;
+ (bool)needsToAcceptNewAgreement;
+ (void)recordUserAcceptedAgreementVersion:(unsigned long long)arg1;
+ (unsigned long long)versionOfAcceptedAgreement;
+ (unsigned long long)versionOfOnDiskAgreement;

@end
