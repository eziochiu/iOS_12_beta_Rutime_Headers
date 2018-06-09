/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSAppCellularUsageTernaryControlSpecifier : PSAppCellularUsageSpecifier {
    bool  _fullyInitialized;
}

- (id)cellularUsagePolicy;
- (void)finishInitializing:(unsigned long long)arg1;
- (id)initWithName:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4;
- (void)prefetchCellularUsagePolicy;
- (bool)setCellularUsagePolicy:(id)arg1;

@end