/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSHTTPURLRequestParameters : NSObject {
    bool  _pad1;
    bool  _pad2;
    bool  _pad3;
    NSData * data;
    NSArray * extraCookies;
    NSMutableDictionary * fields;
    NSString * method;
    unsigned long long  pageNotFoundCacheLifetime;
    bool  shouldHandleCookies;
}

- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
