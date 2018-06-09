/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNTraceHeadingDataRow : NSObject <MNTracePlayerTimelineStreamObjectType> {
    double  _headingAccuracy;
    double  _magneticHeading;
    double  _timestamp;
    double  _trueHeading;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double headingAccuracy;
@property (nonatomic) double magneticHeading;
@property (nonatomic, readonly) double position;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp;
@property (nonatomic) double trueHeading;

- (double)headingAccuracy;
- (double)magneticHeading;
- (double)position;
- (void)setHeadingAccuracy:(double)arg1;
- (void)setMagneticHeading:(double)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setTrueHeading:(double)arg1;
- (double)timestamp;
- (double)trueHeading;

@end
