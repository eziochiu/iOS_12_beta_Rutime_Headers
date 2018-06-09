/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFileCoordinatedTodayPrivateDataTransactionQueue : NSObject {
    FCFileCoordinatedDictionary * _fileCoordinatedDictionary;
}

@property (nonatomic, retain) FCFileCoordinatedDictionary *fileCoordinatedDictionary;

- (void).cxx_destruct;
- (void)dequeueTransactionsWithCompletion:(id /* block */)arg1;
- (void)enqueueTransaction:(id)arg1 withMaxTransactionCount:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (id)fileCoordinatedDictionary;
- (id)init;
- (id)initWithFileURL:(id)arg1;
- (void)peekAtTransactionsWithCompletion:(id /* block */)arg1;
- (void)setFileCoordinatedDictionary:(id)arg1;

@end