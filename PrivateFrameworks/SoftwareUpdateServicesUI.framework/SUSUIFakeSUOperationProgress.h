/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServicesUI.framework/SoftwareUpdateServicesUI
 */

@interface SUSUIFakeSUOperationProgress : SUOperationProgress

- (bool)isDone;
- (float)normalizedPercentComplete;
- (float)percentComplete;
- (id)phase;
- (double)timeRemaining;

@end
