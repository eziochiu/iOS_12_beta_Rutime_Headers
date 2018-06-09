/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface HMFHTTPRequestInternal : HMFObject {
    NSURL * _URL;
    NSData * _body;
    NSMutableDictionary * _headerFields;
    NSString * _method;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic, retain) NSData *body;
@property (nonatomic, retain) NSDictionary *headerFields;
@property (nonatomic, copy) NSString *method;

- (void).cxx_destruct;
- (id)URL;
- (id)body;
- (id)headerFields;
- (id)init;
- (id)method;
- (id)responseWithStatusCode:(long long)arg1;
- (void)setBody:(id)arg1;
- (void)setHeaderFields:(id)arg1;
- (void)setHeaderValue:(id)arg1 forHeaderKey:(id)arg2;
- (void)setMethod:(id)arg1;
- (void)setURL:(id)arg1;

@end
