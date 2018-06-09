/* made by EzioChiu
   Image: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
 */

@interface BCMessage : NSObject {
    NSString * _accessibilityLabel;
    BCImageStore * _imageStore;
    NSString * _internalRootKey;
    bool  _isFromMe;
    BCMessageData * _messageData;
    NSString * _messageGUID;
    BCMessageInfo * _receivedMessage;
    BCMessageInfo * _replyMessage;
    NSString * _requestIdentifier;
    <BCDictionaryImageSerializable> * _rootObject;
    NSString * _subcaption;
    NSAttributedString * _subtitle;
    NSString * _summaryText;
    NSString * _title;
    NSString * _version;
}

@property (nonatomic, retain) NSString *accessibilityLabel;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSDictionary *dictionaryValue;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, retain) BCImageStore *imageStore;
@property (nonatomic, retain) NSString *internalRootKey;
@property (nonatomic) bool isFromMe;
@property (nonatomic, retain) BCMessageData *messageData;
@property (nonatomic, retain) NSString *messageGUID;
@property (nonatomic, retain) BCMessageInfo *receivedMessage;
@property (nonatomic, retain) BCMessageInfo *replyMessage;
@property (nonatomic, retain) NSString *requestIdentifier;
@property (nonatomic, readonly) NSString *rootKey;
@property (nonatomic, readonly) Class rootModelObject;
@property (nonatomic, retain) <BCDictionaryImageSerializable> *rootObject;
@property (nonatomic, readonly) long long style;
@property (nonatomic, retain) NSString *subcaption;
@property (nonatomic, retain) NSAttributedString *subtitle;
@property (nonatomic, retain) NSString *summaryText;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, retain) NSString *version;

+ (id)defaultBubbleTitleFor:(id)arg1;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)data;
- (id)dictionaryValue;
- (id)encodedStringForDictionary:(id)arg1;
- (id)image;
- (id)imageStore;
- (id)initFromOriginalMessage:(id)arg1 rootKey:(id)arg2 rootObject:(id)arg3 receivedMessage:(id)arg4 replyMessage:(id)arg5;
- (id)initWithData:(id)arg1 url:(id)arg2 isFromMe:(bool)arg3;
- (id)initWithData:(id)arg1 url:(id)arg2 messageGUID:(id)arg3 isFromMe:(bool)arg4;
- (id)internalRootKey;
- (bool)isFromMe;
- (id)messageData;
- (id)messageGUID;
- (id)receivedMessage;
- (id)replyMessage;
- (id)requestIdentifier;
- (id)rootKey;
- (Class)rootModelObject;
- (id)rootObject;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setImageStore:(id)arg1;
- (void)setInternalRootKey:(id)arg1;
- (void)setIsFromMe:(bool)arg1;
- (void)setMessageData:(id)arg1;
- (void)setMessageGUID:(id)arg1;
- (void)setReceivedMessage:(id)arg1;
- (void)setReplyMessage:(id)arg1;
- (void)setRequestIdentifier:(id)arg1;
- (void)setRootObject:(id)arg1;
- (void)setSubcaption:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSummaryText:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setVersion:(id)arg1;
- (long long)style;
- (id)subcaption;
- (id)subtitle;
- (id)summaryText;
- (id)title;
- (long long)type;
- (id)url;
- (id)version;

@end
