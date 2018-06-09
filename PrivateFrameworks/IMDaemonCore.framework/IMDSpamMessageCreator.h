/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDSpamMessageCreator : NSObject

- (bool)hasDataDetectedInformalPayment:(id)arg1;
- (bool)isSurfPayment:(id)arg1;
- (id)metaDataForSurfURL:(id)arg1;
- (id)reportMessageDictionaryForMessages:(id)arg1 withLastAddressedHandle:(id)arg2 maxMessageLength:(unsigned long long)arg3 isAutoReport:(bool)arg4 withChat:(id)arg5 maxMessagesToReport:(unsigned long long)arg6 totalMessageCount:(unsigned long long*)arg7;
- (void)reportUnknownToIDS:(id)arg1 messageID:(id)arg2 messageServerTimestamp:(id)arg3 toURI:(id)arg4;
- (id)surfURLForIMMessageItem:(id)arg1;
- (id)transferForGuid:(id)arg1;

@end
