/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARRollingNumberSeries : NSObject {
    NSMutableArray * _series;
    unsigned long long  _windowSize;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) double max;
@property (nonatomic, readonly) double min;
@property (nonatomic, readonly) unsigned long long windowSize;

- (void).cxx_destruct;
- (void)appendNumber:(double)arg1;
- (void)clear;
- (unsigned long long)count;
- (id)init;
- (id)initWithWindowSize:(unsigned long long)arg1;
- (double)max;
- (double)min;
- (unsigned long long)windowSize;

@end
