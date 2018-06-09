/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

@interface SAAuxiliaryData : NSObject {
    SAFanSpeed * _fanSpeed;
    struct { /* ? */ } ** _mountStatus;
    SATimestamp * _timestamp;
}

@property (retain) SAFanSpeed *fanSpeed;
@property struct { /* ? */ }**mountStatus;
@property (retain) SATimestamp *timestamp;

+ (id)auxiliaryDataForTimestamp:(id)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)fanSpeed;
- (struct { /* ? */ }**)mountStatus;
- (void)setFanSpeed:(id)arg1;
- (void)setMountStatus:(struct { /* ? */ }**)arg1;
- (void)setTimestamp:(id)arg1;
- (id)timestamp;

@end
