/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADParagraph : NSObject {
    OADCharacterProperties * mParagraphEndCharacterProperties;
    OADParagraphProperties * mProperties;
    NSMutableArray * mTextRuns;
}

- (id)addDateTimeFieldWithFormat:(int)arg1;
- (id)addFooterField;
- (id)addGenericTextFieldWithGuid:(id)arg1 type:(id)arg2;
- (id)addRegularTextRun;
- (id)addSlideNumberField;
- (id)addTextLineBreak;
- (void)applyProperties:(id)arg1;
- (id)bulletCharacterProperties;
- (void)changeParentParagraphPropertiesPreservingEffectiveValues:(id)arg1;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)arg1;
- (unsigned long long)characterCount;
- (void)dealloc;
- (id)description;
- (id)findFirstTextRunOfClass:(Class)arg1;
- (bool)hasBulletCharacterProperties;
- (id)init;
- (bool)isEmpty;
- (bool)isSimilarToParagraph:(id)arg1;
- (unsigned long long)lineBreakCount;
- (id)paragraphEndCharacterProperties;
- (id)plainText;
- (id)properties;
- (void)removeAllTextRuns;
- (void)removeUnnecessaryOverrides;
- (void)setParagraphEndCharacterProperties:(id)arg1;
- (void)setParentTextListStyle:(id)arg1;
- (id)textRunAtIndex:(unsigned long long)arg1;
- (unsigned long long)textRunCount;

@end
