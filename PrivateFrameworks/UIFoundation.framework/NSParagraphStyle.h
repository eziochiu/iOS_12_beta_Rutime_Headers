/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSParagraphStyle : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    double  _defaultTabInterval;
    id  _extraData;
    double  _firstLineHeadIndent;
    struct { 
        unsigned int alignment : 4; 
        unsigned int lineBreakMode : 4; 
        unsigned int tabStopsIsMutable : 1; 
        unsigned int isNaturalDirection : 1; 
        unsigned int rightToLeftDirection : 1; 
        unsigned int fixedMultiple : 2; 
        unsigned int tightensForTruncation : 1; 
        unsigned int refCount : 18; 
    }  _flags;
    double  _headIndent;
    double  _lineSpacing;
    double  _maximumLineHeight;
    double  _minimumLineHeight;
    double  _paragraphSpacing;
    NSArray * _tabStops;
    double  _tailIndent;
}

@property (nonatomic, readonly) long long alignment;
@property (nonatomic, readonly) bool allowsDefaultTighteningForTruncation;
@property (nonatomic, readonly) long long baseWritingDirection;
@property (nonatomic, readonly) double defaultTabInterval;
@property (nonatomic, readonly) double firstLineHeadIndent;
@property (nonatomic, readonly) double headIndent;
@property (nonatomic, readonly) float hyphenationFactor;
@property (nonatomic, readonly) long long lineBreakMode;
@property (nonatomic, readonly) double lineHeightMultiple;
@property (nonatomic, readonly) double lineSpacing;
@property (nonatomic, readonly) double maximumLineHeight;
@property (nonatomic, readonly) double minimumLineHeight;
@property (nonatomic, readonly) double paragraphSpacing;
@property (nonatomic, readonly) double paragraphSpacingBefore;
@property (nonatomic, readonly, copy) NSArray *tabStops;
@property (nonatomic, readonly) double tailIndent;

// Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation

+ (long long)_defaultWritingDirection;
+ (id)defaultParagraphStyle;
+ (long long)defaultWritingDirectionForLanguage:(id)arg1;
+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void)_allocExtraData;
- (void)_deallocExtraData;
- (id)_initWithParagraphStyle:(id)arg1;
- (bool)_isSuitableForFastStringDrawingWithAlignment:(long long*)arg1 mirrorsTextAlignment:(bool)arg2 lineBreakMode:(long long*)arg3 tighteningFactorForTruncation:(double*)arg4;
- (unsigned long long)_lineBoundsOptions;
- (long long)alignment;
- (bool)allowsDefaultTighteningForTruncation;
- (bool)allowsHangingPunctuation;
- (long long)baseWritingDirection;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (double)defaultTabInterval;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)firstLineHeadIndent;
- (unsigned long long)hash;
- (double)headIndent;
- (long long)headerLevel;
- (float)hyphenationFactor;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)lineBreakMode;
- (unsigned long long)lineBreakStrategy;
- (double)lineHeightMultiple;
- (double)lineSpacing;
- (double)maximumLineHeight;
- (double)minimumLineHeight;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (double)paragraphSpacing;
- (double)paragraphSpacingBefore;
- (id)tabStops;
- (double)tailIndent;
- (id)textBlocks;
- (id)textLists;
- (float)tighteningFactorForTruncation;
- (bool)usesOpticalAlignment;

// Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera

+ (bool)dc_isRTL;
+ (id)dc_mutableDefaultParagraphStyle;

// Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout

+ (id)nfl_paragraphStyleWithLineHeight:(double)arg1 textAlignment:(long long)arg2;
+ (id)nfl_paragraphStyleWithLineHeight:(double)arg1 textAlignment:(long long)arg2 lineBreakMode:(long long)arg3;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

+ (bool)ic_isRTL;
+ (id)ic_mutableDefaultParagraphStyle;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (long long)_ui_resolvedTextAlignment;
- (long long)_ui_resolvedTextAlignmentForUserInterfaceLayoutDirection:(long long)arg1;
- (long long)_ui_resolvedWritingDirection;
- (long long)_ui_resolvedWritingDirectionForUserInterfaceLayoutDirection:(long long)arg1;

@end
