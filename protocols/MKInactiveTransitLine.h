/* made by EzioChiu.
 */

@protocol MKInactiveTransitLine <NSObject>

@required

- (<GEOTransitLine> *)line;
- (NSString *)serviceResumesDescription;

@end
