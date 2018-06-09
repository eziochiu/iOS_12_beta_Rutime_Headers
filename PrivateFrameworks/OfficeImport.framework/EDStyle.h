/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDStyle : NSObject <EDImmutableObject, NSCopying> {
    bool  mAlignmentInfoApplied;
    unsigned long long  mAlignmentInfoIndex;
    bool  mAlignmentInfoOverridden;
    bool  mBordersApplied;
    unsigned long long  mBordersIndex;
    bool  mBordersOverridden;
    bool  mContentFormatApplied;
    unsigned long long  mContentFormatId;
    bool  mContentFormatOverridden;
    bool  mDoNotModify;
    bool  mFillApplied;
    unsigned long long  mFillIndex;
    bool  mFillOverridden;
    bool  mFontApplied;
    unsigned long long  mFontIndex;
    bool  mFontOverridden;
    unsigned long long  mIndex;
    unsigned long long  mParentIndex;
    EDProtection * mProtection;
    bool  mProtectionApplied;
    bool  mProtectionOverridden;
    EDResources * mResources;
}

@property (retain) EDAlignmentInfo *alignmentInfo;
@property (getter=isAlignmentInfoApplied) bool alignmentInfoApplied;
@property (getter=isAlignmentInfoOverridden) bool alignmentInfoOverridden;
@property (retain) EDBorders *borders;
@property (getter=isBordersApplied) bool bordersApplied;
@property (getter=isBordersOverridden) bool bordersOverridden;
@property (retain) EDContentFormat *contentFormat;
@property (getter=isContentFormatApplied) bool contentFormatApplied;
@property (getter=isContentFormatOverridden) bool contentFormatOverridden;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) EDFill *fill;
@property (getter=isFillApplied) bool fillApplied;
@property (getter=isFillOverridden) bool fillOverridden;
@property (retain) EDFont *font;
@property (getter=isFontApplied) bool fontApplied;
@property (getter=isFontOverridden) bool fontOverridden;
@property (readonly) unsigned long long hash;
@property (retain) EDProtection *protection;
@property (getter=isProtectionApplied) bool protectionApplied;
@property (getter=isProtectionOverridden) bool protectionOverridden;
@property (readonly) Class superclass;

+ (id)styleWithResources:(id)arg1;

- (id)alignmentInfo;
- (unsigned long long)alignmentInfoIndex;
- (id)borders;
- (unsigned long long)bordersIndex;
- (id)contentFormat;
- (unsigned long long)contentFormatId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)fill;
- (unsigned long long)fillIndex;
- (id)font;
- (unsigned long long)fontIndex;
- (unsigned long long)hash;
- (unsigned long long)index;
- (id)initWithResources:(id)arg1;
- (bool)isAlignmentInfoApplied;
- (bool)isAlignmentInfoOverridden;
- (bool)isBordersApplied;
- (bool)isBordersOverridden;
- (bool)isCenterAcrossAligned;
- (bool)isContentFormatApplied;
- (bool)isContentFormatOverridden;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToStyle:(id)arg1;
- (bool)isEquivalentToStyle:(id)arg1;
- (bool)isFillApplied;
- (bool)isFillOverridden;
- (bool)isFontApplied;
- (bool)isFontOverridden;
- (bool)isProtectionApplied;
- (bool)isProtectionOverridden;
- (id)parent;
- (unsigned long long)parentIndex;
- (id)protection;
- (void)setAlignmentInfo:(id)arg1;
- (void)setAlignmentInfoApplied:(bool)arg1;
- (void)setAlignmentInfoIndex:(unsigned long long)arg1;
- (void)setAlignmentInfoOverridden:(bool)arg1;
- (void)setBorders:(id)arg1;
- (void)setBordersApplied:(bool)arg1;
- (void)setBordersIndex:(unsigned long long)arg1;
- (void)setBordersOverridden:(bool)arg1;
- (void)setContentFormat:(id)arg1;
- (void)setContentFormatApplied:(bool)arg1;
- (void)setContentFormatId:(unsigned long long)arg1;
- (void)setContentFormatOverridden:(bool)arg1;
- (void)setDoNotModify:(bool)arg1;
- (void)setFill:(id)arg1;
- (void)setFillApplied:(bool)arg1;
- (void)setFillIndex:(unsigned long long)arg1;
- (void)setFillOverridden:(bool)arg1;
- (void)setFont:(id)arg1;
- (void)setFontApplied:(bool)arg1;
- (void)setFontIndex:(unsigned long long)arg1;
- (void)setFontOverridden:(bool)arg1;
- (void)setIndex:(unsigned long long)arg1;
- (void)setParent:(id)arg1;
- (void)setParentIndex:(unsigned long long)arg1;
- (void)setProtection:(id)arg1;
- (void)setProtectionApplied:(bool)arg1;
- (void)setProtectionOverridden:(bool)arg1;

@end
