/* made by EzioChiu.
 */

@protocol VCMomentTransportDelegate <NSObject>

@required

- (void)moments:(VCMoments *)arg1 shouldProcessRequest:(NSDictionary *)arg2;

@end
