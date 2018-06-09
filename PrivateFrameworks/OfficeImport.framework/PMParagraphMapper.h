/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PMParagraphMapper : CMMapper {
    OADParagraph * mParagraph;
}

- (void).cxx_destruct;
- (void)addEndCharacterStyleToStyle:(id)arg1;
- (id)copyParagraphStyleWithState:(id)arg1 isFirstParagraph:(bool)arg2;
- (int)firstTextRunFontSize;
- (id)fontScheme;
- (id)initWithOadParagraph:(id)arg1 parent:(id)arg2;
- (void)mapAt:(id)arg1 withState:(id)arg2 isFirstParagraph:(bool)arg3;

@end
