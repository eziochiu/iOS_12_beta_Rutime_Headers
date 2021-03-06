/* made by EzioChiu.
 */

@protocol SFColor <NSObject>

@required

- (double)alphaComponent;
- (double)blueComponent;
- (NSDictionary *)dictionaryRepresentation;
- (double)greenComponent;
- (NSData *)jsonData;
- (double)redComponent;
- (void)setAlphaComponent:(double)arg1;
- (void)setBlueComponent:(double)arg1;
- (void)setGreenComponent:(double)arg1;
- (void)setRedComponent:(double)arg1;

@end
