/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUImportPowerController : NSObject {
    unsigned int  _assertionID;
    int  _assertionIdentifierGenerator;
    NSMutableDictionary * _assertionReasonsByIdentifier;
    unsigned long long  _backgroundTaskIdentifier;
    bool  _backgrounded;
    double  _powerAssertionStartTime;
    NSObject<OS_dispatch_queue> * _powerControllerQueue;
}

@property (nonatomic) unsigned int assertionID;
@property (nonatomic, readonly) int assertionIdentifierGenerator;
@property (nonatomic, readonly) NSMutableDictionary *assertionReasonsByIdentifier;
@property (nonatomic) unsigned long long backgroundTaskIdentifier;
@property (getter=isBackgrounded, nonatomic) bool backgrounded;
@property (nonatomic, readonly) bool hasPowerAssertion;
@property (nonatomic) double powerAssertionStartTime;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *powerControllerQueue;

+ (id)sharedController;

- (void).cxx_destruct;
- (void)addPowerAssertionForIdentifier:(unsigned int)arg1 withReason:(unsigned int)arg2;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (unsigned int)assertionID;
- (int)assertionIdentifierGenerator;
- (id)assertionReasonsByIdentifier;
- (unsigned long long)backgroundTaskIdentifier;
- (void)dealloc;
- (id)description;
- (void)endBackgroundTaskIfNeeded;
- (unsigned int)generateAssertionIdentifier;
- (bool)hasPowerAssertion;
- (id)init;
- (bool)isBackgrounded;
- (double)powerAssertionStartTime;
- (id)powerControllerQueue;
- (void)releasePowerAssertion;
- (void)releasePowerAssertionIfNeeded;
- (void)removePowerAssertionForIdentifier:(unsigned int)arg1 withReason:(unsigned int)arg2;
- (void)setAssertionID:(unsigned int)arg1;
- (void)setBackgroundTaskIdentifier:(unsigned long long)arg1;
- (void)setBackgrounded:(bool)arg1;
- (void)setPowerAssertionStartTime:(double)arg1;
- (void)startBackgroundTaskIfNeeded;
- (void)takePowerAssertion;
- (void)takePowerAssertionIfNeeded;

@end
