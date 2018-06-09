/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface PARAsyncCard : SFCard <NSSecureCoding> {
    unsigned long long  _clientQueryId;
    double  _scale;
}

@property (nonatomic, readonly, copy) NSURL *cardURL;
@property (nonatomic, readonly) unsigned long long clientQueryId;
@property (nonatomic) double scale;

+ (id)cardWithTitle:(id)arg1 url:(id)arg2 session:(id)arg3 scale:(double)arg4 queryId:(unsigned long long)arg5;
+ (id)cardWithTitle:(id)arg1 url:(id)arg2 session:(id)arg3 scale:(double)arg4 queryId:(unsigned long long)arg5 clientQueryId:(unsigned long long)arg6;
+ (bool)supportsSecureCoding;

- (id)cardURL;
- (unsigned long long)clientQueryId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)scale;
- (void)setScale:(double)arg1;

@end
