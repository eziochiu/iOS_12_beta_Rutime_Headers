/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDVideoAttributes : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding> {
    NSNumber * _framerate;
    NSNumber * _imageHeight;
    NSNumber * _imageWidth;
    HMDVideoResolution * _videoResolution;
}

@property (nonatomic, readonly, copy) NSNumber *framerate;
@property (nonatomic, readonly, copy) NSNumber *imageHeight;
@property (nonatomic, readonly, copy) NSNumber *imageWidth;
@property (nonatomic, readonly, copy) HMDVideoResolution *videoResolution;

+ (bool)supportsSecureCoding;
+ (bool)translateImageResolution:(id)arg1 imageWidth:(id*)arg2 imageHeight:(id*)arg3;

- (void).cxx_destruct;
- (bool)_parseFromTLVData;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)framerate;
- (id)imageHeight;
- (id)imageWidth;
- (id)initWithCoder:(id)arg1;
- (id)initWithResolution:(id)arg1 framerate:(id)arg2;
- (id)tlvData;
- (id)translateImageWidth:(id)arg1 imageHeight:(id)arg2;
- (id)videoResolution;

@end
