/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECDeviceInfo : NSObject {
    int  _batterySaverModeToken;
}

+ (bool)isBatterySaverEnabled;
+ (bool)isBetaBuild;
+ (bool)isDemoModeEnabled;
+ (bool)isInternalBuild;
+ (bool)isLowEndHardware;
+ (id)sharedInstance;
+ (bool)shouldIncludePredictionLogs;

- (void)dealloc;
- (id)init;

@end
