/* made by EzioChiu.
 */

@protocol PHMediaRequestDelegate <NSObject>

@required

- (void)mediaRequest:(PHMediaRequest *)arg1 isRequestingLocalAvailabilityChangeForResource:(id <PLResourceIdentity>)arg2;

@end
