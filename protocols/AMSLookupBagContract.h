/* made by EzioChiu.
 */

@protocol AMSLookupBagContract <AMSURLBagContract>

@optional

- (AMSBagValue *)personalizedLookupURL;
- (AMSBagValue *)unpersonalizedLookupURL;

@end
