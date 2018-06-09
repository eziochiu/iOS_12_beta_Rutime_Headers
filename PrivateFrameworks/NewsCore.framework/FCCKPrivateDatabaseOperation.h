/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKPrivateDatabaseOperation : FCOperation {
    FCCKPrivateDatabase * _database;
    bool  _handleIdentityLoss;
    bool  _skipPreflight;
}

@property (nonatomic, retain) FCCKPrivateDatabase *database;
@property (nonatomic) bool handleIdentityLoss;
@property (nonatomic) bool skipPreflight;

- (void).cxx_destruct;
- (bool)canRetryWithError:(id)arg1 retryAfter:(id*)arg2;
- (id)database;
- (bool)handleIdentityLoss;
- (id)init;
- (unsigned long long)maxRetries;
- (void)runChildCKOperation:(id)arg1 destination:(long long)arg2;
- (void)setDatabase:(id)arg1;
- (void)setHandleIdentityLoss:(bool)arg1;
- (void)setSkipPreflight:(bool)arg1;
- (bool)skipPreflight;
- (bool)validateOperation;

@end
