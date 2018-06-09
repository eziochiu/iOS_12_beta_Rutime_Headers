/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface HMFHTTPResponse : HMFObject <NSCopying, NSMutableCopying> {
    HMFHTTPResponseInternal * _internal;
    HMFHTTPRequest * _request;
}

@property (nonatomic, readonly) NSData *body;
@property (nonatomic, readonly) NSDictionary *headerFields;
@property (nonatomic, readonly) HMFHTTPResponseInternal *internal;
@property (nonatomic, readonly) HMFHTTPRequest *request;
@property (nonatomic, readonly) long long statusCode;

+ (id)shortDescription;

- (void).cxx_destruct;
- (id)body;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1;
- (id)headerFields;
- (id)init;
- (id)initWithRequest:(id)arg1 internalResponse:(id)arg2;
- (id)internal;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)request;
- (id)shortDescription;
- (long long)statusCode;

@end
