/* made by EzioChiu.
 */

@protocol _SFPBTextColumnSection <NSObject>

@required

- (void)addTextLines:(NSString *)arg1;
- (void)clearTextLines;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setTextLines:(NSArray *)arg1;
- (void)setTextNoWrap:(bool)arg1;
- (void)setTextWeight:(unsigned int)arg1;
- (NSArray *)textLines;
- (NSString *)textLinesAtIndex:(unsigned long long)arg1;
- (unsigned long long)textLinesCount;
- (bool)textNoWrap;
- (unsigned int)textWeight;

@end
