/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONotificationPreferenceManager : NSObject {
    NSMutableDictionary * _enableFlags;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)init;
- (bool)isEnabledForSubTestWithName:(id)arg1;
- (void)reset;
- (void)setEnabled:(bool)arg1 forSubTestWithName:(id)arg2;

@end