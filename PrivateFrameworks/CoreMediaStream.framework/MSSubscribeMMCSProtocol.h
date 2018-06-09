/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSSubscribeMMCSProtocol : MSMMCSProtocol <MSSubscribeStorageProtocol> {
    char ** _authTokens;
    <MSSubscribeStorageProtocolDelegate> * _delegate;
    unsigned long long  _itemCount;
    NSMutableDictionary * _itemIDToAssetDict;
    unsigned long long * _itemIDs;
    const char ** _signatures;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MSSubscribeStorageProtocolDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_getItemDone:(unsigned long long)arg1 path:(id)arg2 error:(id)arg3;
- (void)_requestCompleted;
- (void)_tellDelegateProtocolDidFinishRetrievingAssetParams:(id)arg1;
- (void)deactivate;
- (void)dealloc;
- (id)delegate;
- (id)initWithPersonID:(id)arg1;
- (void)retrieveAssets:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
