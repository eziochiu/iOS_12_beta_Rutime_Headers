/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
 */

@interface MSCMSContentInfo : NSObject <MSMessage> {
    NSData * _content;
    MSOID * _contentType;
    <MSCMSMessage> * _embeddedContent;
}

@property (retain) NSData *content;
@property (retain) MSOID *contentType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) <MSCMSMessage> *embeddedContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)decodeMessageSecurityObject:(id)arg1 options:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)content;
- (id)contentType;
- (id)embeddedContent;
- (id)encodeMessageSecurityObject:(id*)arg1;
- (id)initWithDataContent:(id)arg1;
- (id)initWithEmbeddedContent:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setContentType:(id)arg1;
- (void)setEmbeddedContent:(id)arg1;

@end
