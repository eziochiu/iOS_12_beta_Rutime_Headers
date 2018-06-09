/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoImpressionThresholdProvider : NSObject <SVVideoImpressionThresholdProviding> {
    double  _impressionThreshold;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double impressionThreshold;
@property (readonly) Class superclass;

- (double)impressionThreshold;
- (id)initWithImpressionThreshold:(double)arg1;

@end
