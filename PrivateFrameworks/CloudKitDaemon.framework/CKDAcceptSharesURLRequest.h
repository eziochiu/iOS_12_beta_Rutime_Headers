/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDAcceptSharesURLRequest : CKDURLRequest {
    id /* block */  _shareAcceptedBlock;
    NSMutableDictionary * _shareMetadataByRequestID;
    NSArray * _shareMetadatasToAccept;
}

@property (nonatomic, copy) id /* block */ shareAcceptedBlock;
@property (nonatomic, retain) NSMutableDictionary *shareMetadataByRequestID;
@property (nonatomic, retain) NSArray *shareMetadatasToAccept;

- (void).cxx_destruct;
- (id)generateRequestOperations;
- (id)initWithShareMetadatasToAccept:(id)arg1;
- (int)operationType;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (void)setShareAcceptedBlock:(id /* block */)arg1;
- (void)setShareMetadataByRequestID:(id)arg1;
- (void)setShareMetadatasToAccept:(id)arg1;
- (id /* block */)shareAcceptedBlock;
- (id)shareMetadataByRequestID;
- (id)shareMetadatasToAccept;

@end
