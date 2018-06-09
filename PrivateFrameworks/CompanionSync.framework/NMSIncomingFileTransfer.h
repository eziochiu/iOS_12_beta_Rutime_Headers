/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface NMSIncomingFileTransfer : NSObject <NMSDeviceSourced, NMSObfuscatableDescriptionProviding> {
    NSURL * _fileURL;
    IDSMessageContext * _idsContext;
    NSString * _idsIdentifier;
    NMSMessageCenter * _messageCenter;
    NSDictionary * _metadata;
    id  _pbHeaderInfo;
    unsigned long long  _priority;
    NSString * sourceDeviceID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSURL *fileURL;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) IDSMessageContext *idsContext;
@property (nonatomic, copy) NSString *idsIdentifier;
@property (nonatomic) NMSMessageCenter *messageCenter;
@property (nonatomic, copy) NSDictionary *metadata;
@property (nonatomic, retain) id pbHeaderInfo;
@property (nonatomic) unsigned long long priority;
@property (nonatomic, retain) NSString *sourceDeviceID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)CPObfuscatedDescriptionObject;
- (id)description;
- (id)fileURL;
- (id)idsContext;
- (id)idsIdentifier;
- (id)messageCenter;
- (id)metadata;
- (id)pbHeaderInfo;
- (unsigned long long)priority;
- (void)setFileURL:(id)arg1;
- (void)setIdsContext:(id)arg1;
- (void)setIdsIdentifier:(id)arg1;
- (void)setMessageCenter:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setPbHeaderInfo:(id)arg1;
- (void)setPriority:(unsigned long long)arg1;
- (void)setSourceDeviceID:(id)arg1;
- (id)sourceDeviceID;

@end
