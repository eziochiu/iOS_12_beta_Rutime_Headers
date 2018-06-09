/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVDisplayCriteria : NSObject <NSCopying> {
    AVDisplayCriteriaInternal * _displayCriteria;
}

@property (nonatomic, readonly) float refreshRate;
@property (readonly) int videoDynamicRange;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithRefreshRate:(float)arg1 videoDynamicRange:(int)arg2;
- (bool)isEqual:(id)arg1;
- (float)refreshRate;
- (int)videoDynamicRange;

@end
