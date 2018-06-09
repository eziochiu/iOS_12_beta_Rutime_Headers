/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoHandlePaymentTransactionsRequest : PBRequest <NSCopying> {
    NSMutableArray * _passAppletStates;
    NSMutableArray * _transactionPassIDs;
    NSMutableArray * _transactionsBytes;
}

@property (nonatomic, retain) NSMutableArray *passAppletStates;
@property (nonatomic, retain) NSMutableArray *transactionPassIDs;
@property (nonatomic, retain) NSMutableArray *transactionsBytes;

+ (Class)passAppletStatesType;
+ (Class)transactionPassIDsType;
+ (Class)transactionsBytesType;

- (void).cxx_destruct;
- (void)addPassAppletStates:(id)arg1;
- (void)addTransactionPassIDs:(id)arg1;
- (void)addTransactionsBytes:(id)arg1;
- (void)clearPassAppletStates;
- (void)clearTransactionPassIDs;
- (void)clearTransactionsBytes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)passAppletStates;
- (id)passAppletStatesAtIndex:(unsigned long long)arg1;
- (unsigned long long)passAppletStatesCount;
- (bool)readFrom:(id)arg1;
- (void)setPassAppletStates:(id)arg1;
- (void)setTransactionPassIDs:(id)arg1;
- (void)setTransactionsBytes:(id)arg1;
- (id)transactionPassIDs;
- (id)transactionPassIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)transactionPassIDsCount;
- (id)transactionsBytes;
- (id)transactionsBytesAtIndex:(unsigned long long)arg1;
- (unsigned long long)transactionsBytesCount;
- (void)writeTo:(id)arg1;

@end
