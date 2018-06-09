/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBWallpaperImage : UIImage {
    NSData * _data;
}

@property (nonatomic, readonly) NSData *data;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCGImage:(struct CGImage { }*)arg1 scale:(double)arg2 wallpaperData:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithFlatColor:(id)arg1;
- (id)initWithFlatColor:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3;
- (id)initWithImage:(id)arg1 wallpaperData:(id)arg2;
- (id)initWithWallpaperData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)preheatWallpaperData;

@end
