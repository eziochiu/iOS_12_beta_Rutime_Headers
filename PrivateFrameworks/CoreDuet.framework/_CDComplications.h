/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDComplications : NSObject {
    NSDictionary * _activeComplications;
    CDAttribute * attribute;
    NSObject<OS_dispatch_queue> * complicationQueue;
    int  deviceChangeToken;
    NSMutableDictionary * meterTokens;
    NSUserDefaults * pushLimits;
    CDSession * session;
}

@property (copy) NSDictionary *activeComplications;

+ (id)initializeForAdmissionChecking:(bool)arg1;
+ (id)sharedComplication;

- (void).cxx_destruct;
- (id)CDAttributeForComplication:(id)arg1 error:(id*)arg2;
- (id)activeComplications;
- (bool)admissionCheckOnComplication:(id)arg1 forRemote:(bool)arg2 error:(id*)arg3;
- (id)initForComplications;
- (bool)isBundleActiveComplication:(id)arg1;
- (void)meteringStartedOnComplication:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3;
- (void)meteringStoppedOnComplication:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3;
- (void)meteringUpdateOnComplication:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3;
- (void)readOutActiveComplications;
- (int)remainingPushesOnComplication:(id)arg1 andReduceBy:(id)arg2;
- (int)remainingPushesOnComplicationForiOSApplicationWithBundleID:(id)arg1;
- (void)setActiveComplications:(id)arg1;
- (bool)watchIsCharging;

@end
