/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentWebServiceBackgroundContext : NSObject <NSSecureCoding> {
    NSMutableDictionary * _backgroundTaskRecordsByRecordName;
    NSMutableDictionary * _backgroundTaskRecordsByTaskIdentifier;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (retain) NSMutableDictionary *backgroundTaskRecordsByRecordName;
@property (retain) NSMutableDictionary *backgroundTaskRecordsByTaskIdentifier;

+ (id)contextWithArchive:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addBackgroundDownloadRecord:(id)arg1 forRecordName:(id)arg2;
- (void)addBackgroundDownloadRecord:(id)arg1 forTaskIdentifier:(unsigned long long)arg2;
- (void)archiveAtPath:(id)arg1;
- (id)backgroundDownloadRecordForRecordName:(id)arg1;
- (id)backgroundDownloadRecordForTaskIdentifier:(unsigned long long)arg1;
- (id)backgroundTaskRecordsByRecordName;
- (id)backgroundTaskRecordsByTaskIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)remainingTasks;
- (void)removeBackgroundDownloadRecordForRecordName:(id)arg1;
- (void)removeBackgroundDownloadRecordForTaskIdentifier:(unsigned long long)arg1;
- (void)setBackgroundTaskRecordsByRecordName:(id)arg1;
- (void)setBackgroundTaskRecordsByTaskIdentifier:(id)arg1;

@end