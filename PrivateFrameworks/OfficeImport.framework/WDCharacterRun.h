/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDCharacterRun : WDRun {
    bool  mBinaryWriterContentFlag;
    WDCharacterProperties * mProperties;
    NSMutableString * mString;
}

- (void)appendString:(id)arg1;
- (bool)binaryWriterContentFlag;
- (void)clearProperties;
- (void)clearString;
- (void)copyPropertiesFrom:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithParagraph:(id)arg1;
- (id)initWithParagraph:(id)arg1 string:(id)arg2;
- (bool)isEmpty;
- (id)properties;
- (void)removeLastCharacter:(unsigned short)arg1;
- (int)runType;
- (void)setBinaryWriterContentFlag:(bool)arg1;
- (void)setPropertiesForDocument;
- (void)setString:(id)arg1;
- (id)string;

@end
