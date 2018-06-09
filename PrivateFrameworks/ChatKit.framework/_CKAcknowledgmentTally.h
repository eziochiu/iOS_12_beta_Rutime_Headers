/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface _CKAcknowledgmentTally : NSObject {
    NSArray * _contacts;
    NSArray * _senders;
    long long  _type;
}

@property (nonatomic, copy) NSArray *contacts;
@property (nonatomic, copy) NSArray *senders;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id)contacts;
- (id)description;
- (id)initWithType:(long long)arg1 senders:(id)arg2;
- (id)senders;
- (void)setContacts:(id)arg1;
- (void)setSenders:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
