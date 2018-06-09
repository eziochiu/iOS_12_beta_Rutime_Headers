/* made by EzioChiu
   Image: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
 */

@interface BCMessageData : NSObject {
    NSData * _data;
    NSDictionary * _jsonDictionary;
    NSDictionary * _receivedMessageDictionary;
    NSDictionary * _replyMessageDictionary;
    NSURL * _url;
}

@property (nonatomic, readonly) NSDictionary *combinedDictionary;
@property (nonatomic, retain) NSData *data;
@property (nonatomic, readonly) NSArray *imagesArray;
@property (nonatomic, retain) NSDictionary *jsonDictionary;
@property (nonatomic, retain) NSDictionary *receivedMessageDictionary;
@property (nonatomic, retain) NSDictionary *replyMessageDictionary;
@property (nonatomic, retain) NSURL *url;

- (void).cxx_destruct;
- (id)combinedDictionary;
- (id)data;
- (void)decodeData:(id)arg1 dictionaryKey:(id)arg2;
- (id)imagesArray;
- (id)initWithUrl:(id)arg1 data:(id)arg2;
- (id)jsonDictionary;
- (id)receivedMessageDictionary;
- (id)replyMessageDictionary;
- (void)setData:(id)arg1;
- (void)setJsonDictionary:(id)arg1;
- (void)setReceivedMessageDictionary:(id)arg1;
- (void)setReplyMessageDictionary:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
