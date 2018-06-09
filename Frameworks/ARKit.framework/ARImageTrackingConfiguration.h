/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARImageTrackingConfiguration : ARConfiguration {
    long long  _maximumNumberOfTrackedImages;
    NSSet * _trackingImages;
}

@property (getter=isAutoFocusEnabled, nonatomic) bool autoFocusEnabled;
@property (nonatomic) long long maximumNumberOfTrackedImages;
@property (nonatomic, copy) NSSet *trackingImages;

+ (bool)isSupported;
+ (id)new;
+ (id)supportedVideoFormats;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (bool)isEqual:(id)arg1;
- (long long)maximumNumberOfTrackedImages;
- (void)setMaximumNumberOfTrackedImages:(long long)arg1;
- (void)setTrackingImages:(id)arg1;
- (id)techniques;
- (id)trackingImages;

@end
