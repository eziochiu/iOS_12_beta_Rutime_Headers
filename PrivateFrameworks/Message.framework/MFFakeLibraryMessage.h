/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFFakeLibraryMessage : MFLibraryMessage {
    MailAccount * _account;
    MFMailMessageLibrary * _library;
    MFMailboxUid * _mailboxUid;
}

+ (id)messageWithRFC822Data:(id)arg1 mailboxUid:(id)arg2 library:(id)arg3;
+ (id)messageWithRFC822Data:(id)arg1 mailboxUid:(id)arg2 library:(id)arg3 account:(id)arg4;

- (void).cxx_destruct;
- (id)account;
- (id)initWithMailboxUid:(id)arg1 library:(id)arg2 account:(id)arg3;
- (id)library;
- (id)mailbox;

@end
