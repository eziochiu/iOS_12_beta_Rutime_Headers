/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PCFxLightWrapOptions : PCFxBlendOptions <NSCopying> {
    float  _amount;
    float  _intensity;
    int  _lrMode;
    float  _lrOpacity;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)getAmount;
- (float)getIntensity;
- (int)getLRBlendMode;
- (float)getOpacity;
- (id)initWithLRBlendOptions:(id)arg1;
- (void)setAmount:(float)arg1;
- (void)setIntensity:(float)arg1;
- (void)setLRBlendMode:(int)arg1;
- (void)setOpacity:(float)arg1;

@end
