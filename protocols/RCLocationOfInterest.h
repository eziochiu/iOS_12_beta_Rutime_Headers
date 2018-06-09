/* made by EzioChiu.
 */

@protocol RCLocationOfInterest <NSObject>

@required

- (double)confidence;
- (<GEOMapItem> *)geoMapItem;
- (CLLocation *)location;
- (NSString *)preferredName;
- (double)uncertainty;

@end
