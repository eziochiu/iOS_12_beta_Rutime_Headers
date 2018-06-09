/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKComposedMessage : NSObject <NSSecureCoding> {
    NSString * _body;
    NSArray * _cc;
    NSString * _composedMessageId;
    bool  _includeAttachments;
    NSString * _referenceMessageId;
    unsigned long long  _sendingType;
    NSString * _subject;
    NSArray * _to;
}

@property (nonatomic, retain) NSString *body;
@property (nonatomic, retain) NSArray *cc;
@property (nonatomic, retain) NSString *composedMessageId;
@property (nonatomic) bool includeAttachments;
@property (nonatomic, retain) NSString *referenceMessageId;
@property (nonatomic) unsigned long long sendingType;
@property (nonatomic, retain) NSString *subject;
@property (nonatomic, retain) NSArray *to;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)body;
- (id)cc;
- (id)composedMessageId;
- (id)copyWithNewId;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)includeAttachments;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)referenceMessageId;
- (unsigned long long)sendingType;
- (void)setBody:(id)arg1;
- (void)setCc:(id)arg1;
- (void)setComposedMessageId:(id)arg1;
- (void)setIncludeAttachments:(bool)arg1;
- (void)setReferenceMessageId:(id)arg1;
- (void)setSendingType:(unsigned long long)arg1;
- (void)setSubject:(id)arg1;
- (void)setTo:(id)arg1;
- (id)subject;
- (id)to;

@end