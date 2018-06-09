/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFWallpaperSlice : NSObject <NSCopying> {
    NSString * _identifier;
    UIImage * _image;
    long long  _type;
    long long  _variant;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) long long variant;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)identifier;
- (id)image;
- (id)initWithType:(long long)arg1 variant:(long long)arg2 identifier:(id)arg3 image:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isSlicedFromWallpaper:(id)arg1;
- (long long)type;
- (long long)variant;

@end
