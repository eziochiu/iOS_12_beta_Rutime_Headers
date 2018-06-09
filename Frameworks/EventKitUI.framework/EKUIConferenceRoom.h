/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUIConferenceRoom : NSObject {
    long long  _availability;
    bool  _availabilityRequestInProgress;
    EKDirectoryLocation * _location;
    bool  _supportsAvailability;
}

@property (nonatomic) long long availability;
@property (nonatomic) bool availabilityRequestInProgress;
@property (nonatomic, retain) EKDirectoryLocation *location;
@property (nonatomic) bool supportsAvailability;

- (void).cxx_destruct;
- (long long)availability;
- (bool)availabilityRequestInProgress;
- (id)init;
- (id)location;
- (void)setAvailability:(long long)arg1;
- (void)setAvailabilityRequestInProgress:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setSupportsAvailability:(bool)arg1;
- (bool)supportsAvailability;

@end
