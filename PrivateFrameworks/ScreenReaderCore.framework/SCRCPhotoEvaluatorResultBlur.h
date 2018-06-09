/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCPhotoEvaluatorResultBlur : SCRCPhotoEvaluatorResult {
    double  _blurLevel;
}

@property (nonatomic, readonly) double blurLevel;

- (double)blurLevel;
- (id)humanReadableResult;
- (id)initWithBlurLevel:(double)arg1;

@end
