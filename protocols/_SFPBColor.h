/* made by EzioChiu.
 */

@protocol _SFPBColor <NSObject>

@required

- (_SFPBGraphicalFloat *)alphaComponent;
- (_SFPBGraphicalFloat *)blueComponent;
- (_SFPBGraphicalFloat *)greenComponent;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (_SFPBGraphicalFloat *)redComponent;
- (void)setAlphaComponent:(_SFPBGraphicalFloat *)arg1;
- (void)setBlueComponent:(_SFPBGraphicalFloat *)arg1;
- (void)setGreenComponent:(_SFPBGraphicalFloat *)arg1;
- (void)setRedComponent:(_SFPBGraphicalFloat *)arg1;

@end
