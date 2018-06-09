/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDUserPushCache : HMFObject {
    HMDDevice * _device;
    NSDate * _expirationDate;
}

@property (nonatomic, readonly) HMDDevice *device;
@property (nonatomic, copy) NSDate *expirationDate;
@property (getter=isExpired, nonatomic, readonly) bool expired;

- (void).cxx_destruct;
- (id)device;
- (id)expirationDate;
- (id)init;
- (id)initWithDevice:(id)arg1;
- (bool)isExpired;
- (void)setExpirationDate:(id)arg1;

@end
