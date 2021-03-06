/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

@interface WLFileMigrationWebService : WLMigrationWebService

- (void)fetchAccountsAndSummariesWithStatistics:(id)arg1 completion:(id /* block */)arg2;
- (id)urlForRecordSummariesWithAccount:(id)arg1;
- (id)urlForRecordWithSummary:(id)arg1 account:(id)arg2 segmentByteRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3;

@end
