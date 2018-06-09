/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNSizeRange : NSObject {
    unsigned long long  _idealDimension;
    unsigned long long  _maximumDimension;
    unsigned long long  _minimumDimension;
}

@property (nonatomic, readonly) unsigned long long idealDimension;
@property (nonatomic, readonly) unsigned long long maximumDimension;
@property (nonatomic, readonly) unsigned long long minimumDimension;

- (unsigned long long)idealDimension;
- (id)initWithMinimumDimension:(unsigned long long)arg1 maximumDimension:(unsigned long long)arg2 idealDimension:(unsigned long long)arg3;
- (bool)isAllowedDimension:(unsigned long long)arg1;
- (unsigned long long)maximumDimension;
- (unsigned long long)minimumDimension;

@end
