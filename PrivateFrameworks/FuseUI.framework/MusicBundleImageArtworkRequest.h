/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicBundleImageArtworkRequest : NSObject <MPArtworkDataSourceVisualIdenticality> {
    NSBundle * _bundle;
    NSString * _imageName;
    long long  _renderingMode;
    UIColor * _tintColor;
}

@property (nonatomic, readonly) NSBundle *bundle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *imageName;
@property (nonatomic) long long renderingMode;
@property (readonly) Class superclass;
@property (nonatomic, copy) UIColor *tintColor;

- (void).cxx_destruct;
- (id)bundle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)imageName;
- (id)initWithImageName:(id)arg1 inBundle:(id)arg2;
- (bool)isEqual:(id)arg1;
- (long long)renderingMode;
- (void)setRenderingMode:(long long)arg1;
- (void)setTintColor:(id)arg1;
- (id)stringRepresentation;
- (id)tintColor;

@end
