/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSDeviceEligibilityInformation : NSObject {
    NSDate * _dateOfLatestDAVAccessByIneligibleWindowsDevice;
    NSArray * _devices;
    bool  _hasWindowsDevices;
}

@property (nonatomic, readonly) NSDate *dateOfLatestDAVAccessByIneligibleWindowsDevice;
@property (nonatomic, readonly) NSArray *devices;
@property (nonatomic, readonly) bool hasWindowsDevices;

- (void).cxx_destruct;
- (id)dateOfLatestDAVAccessByIneligibleWindowsDevice;
- (id)description;
- (id)devices;
- (bool)hasWindowsDevices;
- (id)initWithDateOfLatestDAVAccessByIneligibleWindowsDevice:(id)arg1 devices:(id)arg2 hasWindowsDevices:(bool)arg3;
- (id)initWithDeviceListResponseDictionary:(id)arg1;
- (struct { unsigned long long x1; unsigned long long x2; })potentiallyEligibleDevicesWithEligibleOperatingSystemVersionRanges:(id)arg1;

@end
