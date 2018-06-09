/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGSimpleMailMessage : SGMessage {
    NSArray * _bcc;
    NSArray * _cc;
    SGSimpleNamedEmailAddress * _from;
    NSArray * _headers;
    NSString * _htmlBody;
    bool  _isInhuman;
    bool  _isPartiallyDownloaded;
    SGSimpleNamedEmailAddress * _mailingList;
    NSString * _messageId;
    NSNumber * _received;
    SGSimpleNamedEmailAddress * _replyTo;
    NSArray * _to;
}

@property (nonatomic, copy) NSArray *bcc;
@property (nonatomic, copy) NSString *body;
@property (nonatomic, copy) NSArray *cc;
@property (nonatomic, copy) SGSimpleNamedEmailAddress *from;
@property (nonatomic, readonly) NSArray *headers;
@property (nonatomic, copy) NSString *htmlBody;
@property (nonatomic) bool isInhuman;
@property (nonatomic) bool isPartiallyDownloaded;
@property (nonatomic, copy) SGSimpleNamedEmailAddress *mailingList;
@property (nonatomic, copy) NSString *messageId;
@property (nonatomic, copy) NSNumber *received;
@property (nonatomic, copy) SGSimpleNamedEmailAddress *replyTo;
@property (nonatomic, copy) NSArray *to;

+ (id)fromMFMailMessage:(id)arg1;
+ (bool)headersContainInhumanOnes:(id)arg1 keys:(id)arg2;
+ (id)parseRfc822Headers:(id)arg1 htmlContent:(id)arg2;
+ (id)simpleMailMessageFromHeadersOfMessage:(id)arg1;
+ (id)subjectByCleaningPrefixesInSubject:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allRecipients;
- (id)asDictionary;
- (id)bcc;
- (id)body;
- (id)cc;
- (unsigned long long)contentLength;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)from;
- (unsigned long long)hash;
- (id)headers;
- (id)headersDictionary;
- (id)htmlBody;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSearchableItem:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSimpleMailMessage:(id)arg1;
- (bool)isInhuman;
- (bool)isPartiallyDownloaded;
- (id)mailingList;
- (id)messageId;
- (id)received;
- (id)replyTo;
- (id)rfc822Data;
- (id)searchableItem;
- (id)searchableItemWithSource:(id)arg1;
- (void)setBcc:(id)arg1;
- (void)setBody:(id)arg1;
- (void)setCc:(id)arg1;
- (void)setFrom:(id)arg1;
- (void)setHeaders:(id)arg1;
- (void)setHtmlBody:(id)arg1;
- (void)setIsInhuman:(bool)arg1;
- (void)setIsPartiallyDownloaded:(bool)arg1;
- (void)setMailingList:(id)arg1;
- (void)setMessageId:(id)arg1;
- (void)setReceived:(id)arg1;
- (void)setReplyTo:(id)arg1;
- (void)setTo:(id)arg1;
- (id)spotlightBundleIdentifier;
- (id)spotlightUniqueIdentifier;
- (id)textContent;
- (id)to;
- (id)uniqueIdentifier;

@end
