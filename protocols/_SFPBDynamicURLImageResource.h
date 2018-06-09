/* made by EzioChiu.
 */

@protocol _SFPBDynamicURLImageResource <NSObject>

@required

- (void)addImageOptions:(_SFPBImageOption *)arg1;
- (void)clearImageOptions;
- (NSString *)formatURL;
- (NSArray *)imageOptions;
- (_SFPBImageOption *)imageOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)imageOptionsCount;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (_SFPBGraphicalFloat *)pixelHeight;
- (_SFPBGraphicalFloat *)pixelWidth;
- (void)setFormatURL:(NSString *)arg1;
- (void)setImageOptions:(NSArray *)arg1;
- (void)setPixelHeight:(_SFPBGraphicalFloat *)arg1;
- (void)setPixelWidth:(_SFPBGraphicalFloat *)arg1;
- (void)setSupportsResizing:(bool)arg1;
- (bool)supportsResizing;

@end
