/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWStillImageConditionalRouterTelephotoDisparityConfiguration : BWStillImageConditionalRouterConfiguration

@property (nonatomic, readonly) unsigned int defaultOutputIndex;
@property (nonatomic, readonly) unsigned int disparityFromReferenceFramesTelephotoFusedOutputIndex;

+ (id)telephotoDisparityConfiguration;

- (unsigned int)defaultOutputIndex;
- (unsigned int)disparityFromReferenceFramesTelephotoFusedOutputIndex;
- (id)init;

@end
