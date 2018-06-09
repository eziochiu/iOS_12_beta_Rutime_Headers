/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKInfinityListing : NSObject <NSCopying, NTKAVListing> {
    NTKInfinityListingAttributes * _attributes;
    CLKDevice * _device;
    NSString * _filename;
    UIImage * _image;
    unsigned long long  _playback;
    unsigned long long  _type;
    CLKVideo * _video;
}

@property (nonatomic, retain) NTKInfinityListingAttributes *attributes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic) unsigned long long playback;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long type;
@property (nonatomic, readonly) CLKVideo *video;

+ (id)listingForDevice:(id)arg1 withFilename:(id)arg2;
+ (id)listingForDevice:(id)arg1 withFilename:(id)arg2 type:(unsigned long long)arg3 attributes:(id)arg4;

- (void).cxx_destruct;
- (id)attributes;
- (id)complicationColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)discardAssets;
- (id)image;
- (id)initForDevice:(id)arg1 withFilename:(id)arg2;
- (unsigned long long)playback;
- (void)setAttributes:(id)arg1;
- (void)setPlayback:(unsigned long long)arg1;
- (void)setType:(unsigned long long)arg1;
- (bool)snapshotDiffers:(id)arg1;
- (unsigned long long)type;
- (id)video;

@end
