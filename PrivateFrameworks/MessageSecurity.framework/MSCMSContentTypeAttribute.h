/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
 */

@interface MSCMSContentTypeAttribute : NSObject <MSCMSAttributeCoder> {
    MSOID * _contentType;
}

@property (retain) MSOID *contentType;

+ (id)contentTypeAttributeWithOID:(id)arg1;

- (void).cxx_destruct;
- (id)contentType;
- (id)encodeAttributeWithError:(id*)arg1;
- (id)initWithAttribute:(id)arg1 error:(id*)arg2;
- (id)initWithOID:(id)arg1;
- (void)setContentType:(id)arg1;

@end
