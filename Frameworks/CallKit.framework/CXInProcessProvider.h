/* made by EzioChiu
   Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXInProcessProvider : CXProvider {
    CXInProcessCallSource * _callSource;
    NSString * _identifier;
}

@property (nonatomic) CXInProcessCallSource *callSource;
@property (nonatomic, copy) NSString *identifier;

- (void).cxx_destruct;
- (id)callSource;
- (id)hostProtocolDelegate;
- (id)identifier;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithIdentifier:(id)arg1 callSource:(id)arg2 configuration:(id)arg3;
- (void)setCallSource:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setIdentifier:(id)arg1;

@end
