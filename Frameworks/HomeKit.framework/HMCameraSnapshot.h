/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMCameraSnapshot : HMCameraSource {
    _HMCameraSnapshot * _snapshot;
}

@property (nonatomic, readonly, copy) NSDate *captureDate;
@property (nonatomic, readonly) NSString *hf_localizedAge;
@property (nonatomic, retain) _HMCameraSnapshot *snapshot;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

- (void).cxx_destruct;
- (id)captureDate;
- (id)initWithSnapshot:(id)arg1;
- (void)setSnapshot:(id)arg1;
- (id)snapshot;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)hf_localizedAgeForCaptureDate:(id)arg1;

- (id)hf_localizedAge;

@end
