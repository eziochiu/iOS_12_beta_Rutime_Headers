/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPArtworkColorAnalysis : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    UIColor * _backgroundColor;
    bool  _backgroundColorLight;
    UIColor * _primaryTextColor;
    bool  _primaryTextColorLight;
    UIColor * _secondaryTextColor;
    bool  _secondaryTextColorLight;
}

@property (nonatomic, readonly) UIColor *backgroundColor;
@property (getter=isBackgroundColorLight, nonatomic, readonly) bool backgroundColorLight;
@property (nonatomic, readonly) UIColor *primaryTextColor;
@property (getter=isPrimaryTextColorLight, nonatomic, readonly) bool primaryTextColorLight;
@property (nonatomic, readonly) UIColor *secondaryTextColor;
@property (getter=isSecondaryTextColorLight, nonatomic, readonly) bool secondaryTextColorLight;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_copyWithClass:(Class)arg1;
- (id)backgroundColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isBackgroundColorLight;
- (bool)isPrimaryTextColorLight;
- (bool)isSecondaryTextColorLight;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)primaryTextColor;
- (id)secondaryTextColor;

@end
