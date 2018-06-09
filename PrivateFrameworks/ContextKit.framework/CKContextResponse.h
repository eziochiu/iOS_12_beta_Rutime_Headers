/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContextKit.framework/ContextKit
 */

@interface CKContextResponse : NSObject <NSSecureCoding> {
    NSString * _debug;
    bool  _discarded;
    NSError * _error;
    NSArray * _level1Topics;
    NSArray * _level2Topics;
    unsigned long long  _requestType;
    NSArray * _results;
    bool  _resultsNeedFiltering;
    NSString * _uuid;
}

@property (nonatomic, retain) NSString *debug;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSArray *level1Topics;
@property (nonatomic, retain) NSArray *level2Topics;
@property (nonatomic) unsigned long long requestType;
@property (nonatomic, retain) NSArray *results;
@property (nonatomic) bool resultsNeedFiltering;
@property (nonatomic, retain) NSString *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addDebug:(id)arg1;
- (void)appendToDebug:(id)arg1;
- (id)completer;
- (void)dealloc;
- (id)debug;
- (void)discard;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (unsigned long long)hash;
- (id)initPlaceholderWithUUID:(id)arg1 requestType:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithError:(id)arg1 requestType:(unsigned long long)arg2;
- (id)initWithResults:(id)arg1 requestType:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isPlaceholder;
- (id)level1Topics;
- (id)level2Topics;
- (unsigned long long)requestType;
- (id)resultByQuery:(id)arg1;
- (id)results;
- (bool)resultsNeedFiltering;
- (void)setDebug:(id)arg1;
- (void)setError:(id)arg1;
- (void)setLevel1Topics:(id)arg1;
- (void)setLevel2Topics:(id)arg1;
- (void)setRequestType:(unsigned long long)arg1;
- (void)setResults:(id)arg1;
- (void)setResultsNeedFiltering:(bool)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;

@end
