/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicEntityViewTracklistItemContentDescriptor : MusicEntityViewContentDescriptor {
    NSArray * _detailTextDescriptors;
    bool  _indentDetailText;
    MusicEntityViewContentTextDescriptor * _leadingTextDescriptor;
    UIColor * _mediaTypeTintColor;
    MusicEntityViewContentArtworkDescriptor * _trailingAccessoryArtworkDescriptor;
    MusicEntityViewContentTextDescriptor * _trailingTextDescriptor;
    bool  _wantsMediaTypeImage;
}

@property (nonatomic, copy) NSArray *detailTextDescriptors;
@property (nonatomic) bool indentDetailText;
@property (nonatomic, retain) MusicEntityViewContentTextDescriptor *leadingTextDescriptor;
@property (nonatomic, retain) UIColor *mediaTypeTintColor;
@property (nonatomic, retain) MusicEntityViewContentArtworkDescriptor *trailingAccessoryArtworkDescriptor;
@property (nonatomic, retain) MusicEntityViewContentTextDescriptor *trailingTextDescriptor;
@property (nonatomic) bool wantsMediaTypeImage;

+ (Class)tableViewCellClass;
+ (id)tableViewCellReuseIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)detailTextDescriptors;
- (bool)indentDetailText;
- (id)leadingTextDescriptor;
- (id)mediaTypeTintColor;
- (void)setDetailTextDescriptors:(id)arg1;
- (void)setIndentDetailText:(bool)arg1;
- (void)setLeadingTextDescriptor:(id)arg1;
- (void)setMediaTypeTintColor:(id)arg1;
- (void)setTrailingAccessoryArtworkDescriptor:(id)arg1;
- (void)setTrailingTextDescriptor:(id)arg1;
- (void)setWantsMediaTypeImage:(bool)arg1;
- (id)textDescriptors;
- (id)trailingAccessoryArtworkDescriptor;
- (id)trailingTextDescriptor;
- (bool)wantsMediaTypeImage;

@end
