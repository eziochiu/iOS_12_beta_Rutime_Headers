/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDownloadMonitorItem : NSObject <SSXPCCoding> {
    NSString * _clientIdentifier;
    long long  _itemState;
    NSString * _representativeTitle;
    NSString * _statusString;
    long long  _totalNumberOfItems;
    unsigned long long  _transferTypes;
}

@property (nonatomic, copy) NSString *clientIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long itemState;
@property (nonatomic, copy) NSString *representativeTitle;
@property (nonatomic, copy) NSString *statusString;
@property (readonly) Class superclass;
@property (nonatomic) long long totalNumberOfItems;
@property (nonatomic) unsigned long long transferTypes;

- (id)clientIdentifier;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)initWithXPCEncoding:(id)arg1;
- (long long)itemState;
- (id)representativeTitle;
- (void)setClientIdentifier:(id)arg1;
- (void)setItemState:(long long)arg1;
- (void)setRepresentativeTitle:(id)arg1;
- (void)setStatusString:(id)arg1;
- (void)setTotalNumberOfItems:(long long)arg1;
- (void)setTransferTypes:(unsigned long long)arg1;
- (id)statusString;
- (long long)totalNumberOfItems;
- (unsigned long long)transferTypes;

@end
