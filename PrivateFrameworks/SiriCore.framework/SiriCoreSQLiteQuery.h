/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

@interface SiriCoreSQLiteQuery : NSObject {
    unsigned long long  _options;
    NSArray * _parameters;
    SiriCoreSQLiteStatement * _statement;
    NSString * _string;
}

@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly, copy) NSArray *parameters;
@property (nonatomic, readonly) SiriCoreSQLiteStatement *statement;
@property (nonatomic, readonly, copy) NSString *string;

- (void).cxx_destruct;
- (id)description;
- (id)initWithString:(id)arg1 statement:(id)arg2 parameters:(id)arg3 options:(unsigned long long)arg4;
- (unsigned long long)options;
- (id)parameters;
- (id)statement;
- (id)string;

@end
