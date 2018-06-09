/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSPersistentHistoryChangeRequestToken : NSObject <NSSecureCoding> {
    NSDate * _date;
    bool  _delete;
    unsigned long long  _fetchBatchSize;
    unsigned long long  _fetchLimit;
    long long  _resultType;
    NSDictionary * _token;
    bool  _transactionFromToken;
}

@property (nonatomic, readonly, retain) NSDate *date;
@property (nonatomic, readonly) bool delete;
@property (nonatomic, readonly) unsigned long long fetchBatchSize;
@property (nonatomic, readonly) unsigned long long fetchLimit;
@property (nonatomic, readonly) long long resultType;
@property (nonatomic, readonly, retain) NSDictionary *token;
@property (nonatomic, readonly) bool transactionFromToken;

+ (bool)supportsSecureCoding;

- (id)date;
- (void)dealloc;
- (bool)delete;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)fetchBatchSize;
- (unsigned long long)fetchLimit;
- (id)initForRequest:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)resultType;
- (id)token;
- (bool)transactionFromToken;

@end
