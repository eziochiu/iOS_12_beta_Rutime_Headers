/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKSyncType : NSObject {
    bool  _didActivatePeer;
    bool  _didAddSyncedEvents;
    bool  _didDeleteSyncedEvents;
    bool  _didReceivePush;
    NSSet * _disabledFeatures;
    bool  _forceSync;
    bool  _isInitialSync;
    bool  _isPeriodicSync;
    bool  _isSingleDevice;
    bool  _isTriggeredSync;
    unsigned long long  _urgency;
}

@property (nonatomic) bool didActivatePeer;
@property (nonatomic) bool didAddSyncedEvents;
@property (nonatomic) bool didDeleteSyncedEvents;
@property (nonatomic) bool didReceivePush;
@property (nonatomic, retain) NSSet *disabledFeatures;
@property (nonatomic) bool forceSync;
@property (nonatomic) bool isInitialSync;
@property (nonatomic) bool isPeriodicSync;
@property (nonatomic, readonly) bool isSingleDevice;
@property (nonatomic) bool isTriggeredSync;
@property (nonatomic) unsigned long long urgency;

- (void).cxx_destruct;
- (id)description;
- (bool)didActivatePeer;
- (bool)didAddSyncedEvents;
- (bool)didDeleteSyncedEvents;
- (bool)didReceivePush;
- (id)disabledFeatures;
- (bool)forceSync;
- (id)init;
- (id)initWithIsSingleDevice:(bool)arg1;
- (bool)isInitialSync;
- (bool)isPeriodicSync;
- (bool)isSingleDevice;
- (bool)isTriggeredSync;
- (void)setDidActivatePeer:(bool)arg1;
- (void)setDidAddSyncedEvents:(bool)arg1;
- (void)setDidDeleteSyncedEvents:(bool)arg1;
- (void)setDidReceivePush:(bool)arg1;
- (void)setDisabledFeatures:(id)arg1;
- (void)setForceSync:(bool)arg1;
- (void)setIsInitialSync:(bool)arg1;
- (void)setIsPeriodicSync:(bool)arg1;
- (void)setIsTriggeredSync:(bool)arg1;
- (void)setUrgency:(unsigned long long)arg1;
- (void)unionType:(id)arg1;
- (unsigned long long)urgency;

@end
