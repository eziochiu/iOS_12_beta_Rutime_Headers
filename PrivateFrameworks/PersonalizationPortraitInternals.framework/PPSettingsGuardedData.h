/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPSettingsGuardedData : NSObject {
    bool  _appConnectionsLocationsEnabled;
    double  _cachedWeightMultiplier;
    NSSet * _cloudKitDisabledBundleIdentifiers;
    NSSet * _donationDisabledBundleIdentifiers;
    NSMutableDictionary * _donationDisabledChangeHandlers;
    int  _nextChangeHandlerToken;
}

- (void).cxx_destruct;

@end
