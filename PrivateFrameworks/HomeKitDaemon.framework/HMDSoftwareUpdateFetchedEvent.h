/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDSoftwareUpdateFetchedEvent : HMDLogEvent <HMDAWDLogEvent> {
    bool  _newUpdateFetched;
    bool  _userInitiated;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=wasNewUpdateFetched, nonatomic) bool newUpdateFetched;
@property (readonly) Class superclass;
@property (getter=wasUserInitiated, nonatomic) bool userInitiated;

+ (id)eventWasUserInitiated:(bool)arg1 wasNewUpdateFetched:(bool)arg2;
+ (void)initialize;
+ (id)uuid;

- (unsigned int)AWDMessageType;
- (id)metricForAWD;
- (void)setNewUpdateFetched:(bool)arg1;
- (void)setUserInitiated:(bool)arg1;
- (bool)wasNewUpdateFetched;
- (bool)wasUserInitiated;

@end
