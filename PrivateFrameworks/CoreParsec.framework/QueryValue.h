/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface QueryValue : NSObject {
    unsigned long long  _queryId;
    NSString * _queryString;
}

@property unsigned long long queryId;
@property (retain) NSString *queryString;

- (void).cxx_destruct;
- (unsigned long long)queryId;
- (id)queryString;
- (void)setQueryId:(unsigned long long)arg1;
- (void)setQueryString:(id)arg1;

@end
