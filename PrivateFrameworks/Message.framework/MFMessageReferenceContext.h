/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMessageReferenceContext : NSObject {
    NSString * _bcc;
    NSArray * _bccList;
    NSString * _cc;
    NSArray * _ccList;
    unsigned long long * _conversationFlagsRef;
    long long  _conversationIDHash;
    double  _dateSentInterval;
    unsigned int  _libraryID;
    int  _mailboxID;
    MFMailMessage * _message;
    long long  _messageIDHash;
    NSMutableDictionary * _messageIDsBySubject;
    MFSparseMutable64IndexSet * _references;
    NSString * _sender;
    NSArray * _senderList;
    NSString * _subject;
    NSString * _to;
    NSArray * _toList;
}

@property (nonatomic, copy) NSString *bcc;
@property (nonatomic, copy) NSArray *bccList;
@property (nonatomic, copy) NSString *cc;
@property (nonatomic, copy) NSArray *ccList;
@property (nonatomic) unsigned long long*conversationFlagsRef;
@property (nonatomic) long long conversationIDHash;
@property (nonatomic) double dateSentInterval;
@property (nonatomic) unsigned int libraryID;
@property (nonatomic) int mailboxID;
@property (nonatomic, retain) MFMailMessage *message;
@property (nonatomic) long long messageIDHash;
@property (nonatomic, retain) NSMutableDictionary *messageIDsBySubject;
@property (nonatomic, readonly) MFEmailSet *participants;
@property (nonatomic, retain) MFSparseMutable64IndexSet *references;
@property (nonatomic, copy) NSString *sender;
@property (nonatomic, copy) NSArray *senderList;
@property (nonatomic, copy) NSString *subject;
@property (nonatomic, readonly) unsigned long long subjectPrefixLength;
@property (nonatomic, readonly) NSString *subjectWithoutPrefix;
@property (nonatomic, copy) NSString *to;
@property (nonatomic, copy) NSArray *toList;

- (id)bcc;
- (id)bccList;
- (id)cc;
- (id)ccList;
- (unsigned long long*)conversationFlagsRef;
- (long long)conversationIDHash;
- (double)dateSentInterval;
- (void)dealloc;
- (unsigned int)libraryID;
- (int)mailboxID;
- (id)message;
- (long long)messageIDHash;
- (id)messageIDsBySubject;
- (id)participants;
- (id)references;
- (id)sender;
- (id)senderList;
- (void)setBcc:(id)arg1;
- (void)setBccList:(id)arg1;
- (void)setCc:(id)arg1;
- (void)setCcList:(id)arg1;
- (void)setConversationFlagsRef:(unsigned long long*)arg1;
- (void)setConversationIDHash:(long long)arg1;
- (void)setDateSentInterval:(double)arg1;
- (void)setLibraryID:(unsigned int)arg1;
- (void)setMailboxID:(int)arg1;
- (void)setMessage:(id)arg1;
- (void)setMessageIDHash:(long long)arg1;
- (void)setMessageIDsBySubject:(id)arg1;
- (void)setReferences:(id)arg1;
- (void)setSender:(id)arg1;
- (void)setSenderList:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setTo:(id)arg1;
- (void)setToList:(id)arg1;
- (id)subject;
- (unsigned long long)subjectPrefixLength;
- (id)subjectWithoutPrefix;
- (id)to;
- (id)toList;

@end