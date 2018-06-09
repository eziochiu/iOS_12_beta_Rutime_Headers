/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSAppCellularUsageSwitchSpecifier : PSAppCellularUsageSpecifier

- (bool)canEnable;
- (id)cellularUsagePolicy;
- (id)initWithName:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4;
- (void)prefetchCellularUsagePolicy;
- (bool)setCellularUsagePolicy:(id)arg1;
- (void)setShouldShowUsage:(bool)arg1;

@end