/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

@interface MSPowerAssertionManager : NSObject {
    int  _UIBusyCount;
    unsigned int  _assertionID;
    int  _busyCount;
    bool  _isAssertingPowerAssertion;
    bool  _isBusy;
}

@property (nonatomic) int UIBusyCount;
@property (nonatomic) unsigned int assertionID;
@property (nonatomic) int busyCount;
@property (nonatomic) bool isAssertingPowerAssertion;
@property (nonatomic) bool isBusy;

+ (id)sharedManager;

- (int)UIBusyCount;
- (void)_assertPowerAssertion;
- (void)_deassertPowerAssertion;
- (void)_recomputePowerAssertion;
- (unsigned int)assertionID;
- (int)busyCount;
- (bool)isAssertingPowerAssertion;
- (bool)isBusy;
- (void)releaseBusy;
- (void)releaseUIBusy;
- (void)retainBusy;
- (void)retainUIBusy;
- (void)setAssertionID:(unsigned int)arg1;
- (void)setBusyCount:(int)arg1;
- (void)setIsAssertingPowerAssertion:(bool)arg1;
- (void)setIsBusy:(bool)arg1;
- (void)setUIBusyCount:(int)arg1;
- (void)toggleAssertion;

@end
