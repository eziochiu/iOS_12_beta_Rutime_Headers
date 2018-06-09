/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSReaderFont : NSObject {
    NSString * _displayName;
    NSString * _familyName;
    bool  _hasCalculatedLocalizedName;
    NSString * _localizedName;
    bool  _systemFont;
}

@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *familyName;
@property (getter=isInstalled, nonatomic, readonly) bool installed;
@property (getter=isSystemFont, nonatomic, readonly) bool systemFont;

+ (id)fontWithFamilyName:(id)arg1 displayName:(id)arg2;
+ (id)systemFont;

- (void).cxx_destruct;
- (struct RetainPtr<const __CTFontDescriptor *> { void *x1; })_fontDescriptorRefForFontFamilyName:(id)arg1 restrictToEnabled:(bool)arg2;
- (id)_initWithFamilyName:(id)arg1 displayName:(id)arg2 isSystemFont:(bool)arg3;
- (id)_localizedName;
- (id)description;
- (id)displayName;
- (id)familyName;
- (id)fontOfSize:(double)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isInstalled;
- (bool)isSystemFont;

@end
