/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSDataResetRequest : NSObject {
    long long  _mode;
    long long  _options;
    NSString * _reason;
}

@property (nonatomic) long long mode;
@property (nonatomic) long long options;
@property (nonatomic, copy) NSString *reason;

- (void).cxx_destruct;
- (id)initWithMode:(long long)arg1 options:(long long)arg2 reason:(id)arg3;
- (long long)mode;
- (long long)options;
- (id)reason;
- (void)setMode:(long long)arg1;
- (void)setOptions:(long long)arg1;
- (void)setReason:(id)arg1;

@end
