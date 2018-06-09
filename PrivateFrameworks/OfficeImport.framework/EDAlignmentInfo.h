/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDAlignmentInfo : NSObject <EDImmutableObject, NSCopying> {
    bool  mDoNotModify;
    bool  mHorizontalAlignOverridden;
    int  mHorizontalAlignment;
    int  mIndent;
    bool  mIndentOverridden;
    int  mTextRotation;
    bool  mTextWrapped;
    bool  mTextWrappedOveridden;
    bool  mVerticalAlignOverridden;
    int  mVerticalAlignment;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)alignmentInfo;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (int)horizontalAlignment;
- (int)indent;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAlignmentInfo:(id)arg1;
- (bool)isHorizontalAlignOverridden;
- (bool)isIndentOverridden;
- (bool)isTextWrapped;
- (bool)isTextWrappedOverridden;
- (bool)isVerticalAlignOverridden;
- (void)setDoNotModify:(bool)arg1;
- (void)setHorizontalAlignment:(int)arg1;
- (void)setIndent:(int)arg1;
- (void)setTextRotation:(int)arg1;
- (void)setTextWrapped:(bool)arg1;
- (void)setVerticalAlignment:(int)arg1;
- (int)textRotation;
- (int)verticalAlignment;

@end
