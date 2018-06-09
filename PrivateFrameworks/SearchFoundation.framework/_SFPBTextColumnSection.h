/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBTextColumnSection : PBCodable <NSSecureCoding, _SFPBTextColumnSection> {
    NSArray * _textLines;
    bool  _textNoWrap;
    unsigned int  _textWeight;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *textLines;
@property (nonatomic) bool textNoWrap;
@property (nonatomic) unsigned int textWeight;

- (void).cxx_destruct;
- (void)addTextLines:(id)arg1;
- (void)clearTextLines;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setTextLines:(id)arg1;
- (void)setTextNoWrap:(bool)arg1;
- (void)setTextWeight:(unsigned int)arg1;
- (id)textLines;
- (id)textLinesAtIndex:(unsigned long long)arg1;
- (unsigned long long)textLinesCount;
- (bool)textNoWrap;
- (unsigned int)textWeight;
- (void)writeTo:(id)arg1;

@end
