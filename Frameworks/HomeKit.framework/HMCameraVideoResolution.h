/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMCameraVideoResolution : NSObject <NSSecureCoding> {
    unsigned long long  _videoResolution;
}

@property (nonatomic, readonly) unsigned long long videoResolution;

+ (bool)isValid:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVideoResolutionType:(unsigned long long)arg1;
- (unsigned long long)videoResolution;

@end
