/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface NMSOutgoingFileTransfer : NSObject <NMSDeviceTargetable, NMSObfuscatableDescriptionProviding> {
    NSDictionary * _extraIDSOptions;
    NSURL * _fileURL;
    NSString * _idsIdentifier;
    NMSMessageCenter * _messageCenter;
    NSDictionary * _metadata;
    id  _pbHeaderInfo;
    NSDictionary * _persistentUserInfo;
    unsigned long long  _priority;
    double  _sendTimeout;
    NSSet * targetDeviceIDs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDictionary *extraIDSOptions;
@property (nonatomic, retain) NSURL *fileURL;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *idsIdentifier;
@property (nonatomic) NMSMessageCenter *messageCenter;
@property (nonatomic, retain) NSDictionary *metadata;
@property (nonatomic, retain) id pbHeaderInfo;
@property (nonatomic, retain) NSDictionary *persistentUserInfo;
@property (nonatomic) unsigned long long priority;
@property (nonatomic) double sendTimeout;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSSet *targetDeviceIDs;

- (void).cxx_destruct;
- (id)CPObfuscatedDescriptionObject;
- (id)description;
- (id)extraIDSOptions;
- (id)fileURL;
- (id)idsIdentifier;
- (id)messageCenter;
- (id)metadata;
- (id)pbHeaderInfo;
- (id)persistentUserInfo;
- (unsigned long long)priority;
- (double)sendTimeout;
- (void)setExtraIDSOptions:(id)arg1;
- (void)setFileURL:(id)arg1;
- (void)setIdsIdentifier:(id)arg1;
- (void)setMessageCenter:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setPbHeaderInfo:(id)arg1;
- (void)setPersistentUserInfo:(id)arg1;
- (void)setPriority:(unsigned long long)arg1;
- (void)setSendTimeout:(double)arg1;
- (void)setTargetDeviceIDs:(id)arg1;
- (id)targetDeviceIDs;

@end
