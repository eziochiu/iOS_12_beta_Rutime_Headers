/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMClient.framework/FMClient
 */

@interface FMClient.ClientConfiguration : NSObject <NSSecureCoding> {
    void deviceNameSyncInterval;
    void nearbyScanDuration;
    void nearbyScanWhileAuthenticated;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSDateComponents *deviceNameSyncInterval;
@property (nonatomic, readonly) double nearbyScanDuration;
@property (nonatomic, readonly) bool nearbyScanWhileAuthenticated;

+ (bool)supportsSecureCoding;

- (id /* block */).cxx_destruct;
- (id)description;
- (id)deviceNameSyncInterval;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNearbyScanDuration:(double)arg1 deviceNameSyncInterval:(id)arg2 nearbyScanWhileAuthenticated:(bool)arg3;
- (double)nearbyScanDuration;
- (bool)nearbyScanWhileAuthenticated;

@end
